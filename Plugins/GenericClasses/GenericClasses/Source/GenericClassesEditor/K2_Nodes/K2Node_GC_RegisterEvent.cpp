// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClassesEditor/K2_Nodes/K2Node_GC_RegisterEvent.h"
#include "Internationalization/Internationalization.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "EdGraphSchema_K2.h"
#include "EventSystem/GC_EventBlueprintFunctionLibrary.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler/Public/KismetCompiler.h"
#include "K2Node_CustomEvent.h"

FText UK2Node_GC_RegisterEvent::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(TEXT("RegisterEvent"));
}

FText UK2Node_GC_RegisterEvent::GetTooltipText() const
{
	return FText::FromString(TEXT("Register a event of the received event type"));
}

FText UK2Node_GC_RegisterEvent::GetMenuCategory() const
{
	return FText::FromString(TEXT("EventRegister"));
}

void UK2Node_GC_RegisterEvent::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	Super::GetMenuActions(ActionRegistrar);
	UClass* Action = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(Action))
	{
		UBlueprintNodeSpawner* Spawner = UBlueprintNodeSpawner::Create(GetClass());
		check(Spawner != nullptr);
		ActionRegistrar.AddBlueprintAction(Action, Spawner);
	}
}

void UK2Node_GC_RegisterEvent::AllocateDefaultPins()
{
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();

	// Execution pins
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);

	//EventClass
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Class, UGC_Event::StaticClass(), TEXT("Event"));
	//DatatableRowHandler
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, FDataTableRowHandle::StaticStruct(), TEXT("RowHandler"));
	//LaunchDelayPin
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Real, TEXT("LaunchDelay"));
	//OnFinishPin
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, TEXT("OnEventFinish"));
}

void UK2Node_GC_RegisterEvent::ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();

	//Find UFUNCTION
	UClass* eventLibraryClass = UGC_EventBlueprintFunctionLibrary::StaticClass();
	UFunction* registerEventFunction = eventLibraryClass->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UGC_EventBlueprintFunctionLibrary, RegisterEvent));
	if (!registerEventFunction)
	{
		CompilerContext.MessageLog.Error(TEXT("The function has not been found."), this);
		return;
	}

	//Part that add the call to a function in the node
	UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	CallFunction->SetFromFunction(registerEventFunction);
	CallFunction->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

	//Assign the pins of the node to the function parameters (except of OnEventFinish delegates)
	CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("Event")), *CallFunction->FindPinChecked(TEXT("eventClass")));
	CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("RowHandler")), *CallFunction->FindPinChecked(TEXT("eventSpawnHandle")));
	CompilerContext.MovePinLinksToIntermediate(*FindPin(TEXT("LaunchDelay")), *CallFunction->FindPinChecked(TEXT("launchDelay")));

	//Assign the onEventFinish to the function parameter
	UK2Node_CustomEvent* onDelegateEventNode = CompilerContext.SpawnIntermediateEventNode<UK2Node_CustomEvent>(this, CallFunction->FindPin(TEXT("onEventFinish")), SourceGraph);
	onDelegateEventNode->CustomFunctionName = TEXT("onEventFinish");
	onDelegateEventNode->AllocateDefaultPins();

	//Create pins for the onEventFinish delegate parameters ¿?
	FDelegateProperty* onDelegateProperty = registerEventFunction ? FindFProperty<FDelegateProperty>(registerEventFunction, TEXT("onEventFinish")) : nullptr;
	UFunction* onDelegateSignature = onDelegateProperty ? onDelegateProperty->SignatureFunction : nullptr;
	for (TFieldIterator<FProperty> propIt(onDelegateSignature); propIt && (propIt->PropertyFlags & CPF_Parm); ++propIt)
	{
		const FProperty* param = *propIt;
		if (!param->HasAnyPropertyFlags(CPF_OutParm) || param->HasAnyPropertyFlags(CPF_ReferenceParm))
		{
			const FString& message = "Generating delegate parameter pins ";

			FEdGraphPinType pinType;
			const bool canConvertPinToType = K2Schema->ConvertPropertyToPinType(param, /*out*/ pinType);
			const bool canCreateUserDefinedPin = (nullptr != onDelegateEventNode->CreateUserDefinedPin(param->GetFName(), pinType, EGPD_Output));
		}
	}

	//Assign onEventFinish pin to event node
	UEdGraphPin* callFunctionDelegatePin = CallFunction->FindPin(TEXT("onEventFinish"));
	UEdGraphPin* eventDelegatePin = onDelegateEventNode->FindPin(UK2Node_CustomEvent::DelegateOutputName);
	const bool isDelegateCallbackToParameterConnected = K2Schema->TryCreateConnection(callFunctionDelegatePin, eventDelegatePin);

	// Connect delegate node to OnEventFinish pin
	UEdGraphPin* outputCompletedPin = FindPin(TEXT("onEventFinish"));
	UEdGraphPin* assignOutputExePin = onDelegateEventNode->FindPin(UEdGraphSchema_K2::PN_Then);
	const bool isDelegateThenToOutputConnected = CompilerContext.MovePinLinksToIntermediate(*outputCompletedPin, *assignOutputExePin).CanSafeConnect();

	//Exec pins
	UEdGraphPin* NodeExec = GetExecPin();
	UEdGraphPin* NodeThen = FindPin(UEdGraphSchema_K2::PN_Then);
	UEdGraphPin* InternalExec = CallFunction->GetExecPin();
	CompilerContext.MovePinLinksToIntermediate(*NodeExec, *InternalExec);
	UEdGraphPin* InternalThen = CallFunction->GetThenPin();
	CompilerContext.MovePinLinksToIntermediate(*NodeThen, *InternalThen);

	//After we are done we break all links to this node (not the internally created one)
	BreakAllNodeLinks();
}

UFunction* UK2Node_GC_RegisterEvent::GetNodeMainFuntion()
{
	UClass* eventLibraryClass = UGC_EventBlueprintFunctionLibrary::StaticClass();
	return eventLibraryClass->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UGC_EventBlueprintFunctionLibrary, RegisterEvent));
}

