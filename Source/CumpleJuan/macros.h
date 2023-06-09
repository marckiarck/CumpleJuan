//Compas macros
#define BLACK_NOTE_ROW TEXT("Black")

//GAS macros
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

//Debug macro

#define FSTRING_VARIABLE(VARIABLE_NAME) \
	FString VARIABLE_NAME;

#define ARCHIVE_ASSIGN(VARIABLE_NAME) \
	Ar << VARIABLE_NAME;

#define CREATE_FABILITYSYS_STRUCT(ATTRIBUTES_MACRO) \
    struct FAbilitySys \
	{ \
	FString actorName; \
	ATTRIBUTES_MACRO(FSTRING_VARIABLE); \
\
	void Serialize(FArchive& Ar) \
	{ \
		Ar << actorName; \
		ATTRIBUTES_MACRO(ARCHIVE_ASSIGN); \
	}; \
	} DataPack; 

#define COLLECT_DATA_MACRO(ATTRIBUTE, ATTRIBUTE_SET_CLASS) \
	UAbilitySystemDataComponent* abilitySystemData = DebugActor->GetComponentOfClass<UAbilitySystemDataComponent>(); \
	const ATTRIBUTE_SET_CLASS* attributeSet = Cast<ATTRIBUTE_SET_CLASS>(abilitySystemData->GetAttributes<abilitySystemData>()); \
    DataPack.ATTRIBUTE = FString::SanitizeFloat(attributeSet->Get##ATTRIBUTE());

#define DRAW_DATA_MACRO(ATTRIBUTE) \
	CanvasContext.Printf(TEXT("{cyan}[%s]{white} == {white}(%s)"), TEXT(#ATTRIBUTE), *DataPack.##ATTRIBUTE);

/*
* Inheritance macros
*/
#define MACRO_INHERITANCE(FATHER, MACRO_NAME) \
    FATHER(MACRO_NAME);

//Multiparameter Macros

#define EXPAND(X) X
#define  GET_MACRO(Param1, Param2, Param3, Param4, Param5, Param6, Param7, Param8, Param9, Param10, Param11, Param12, Param13, NAME, ...) NAME

#define FE_1(MACRO_NAME, X) EXPAND(MACRO_NAME(X))
#define FE_2(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_1(MACRO_NAME, __VA_ARGS__))
#define FE_3(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_2(MACRO_NAME, __VA_ARGS__))
#define FE_4(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_3(MACRO_NAME, __VA_ARGS__))
#define FE_5(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_4(MACRO_NAME, __VA_ARGS__))
#define FE_6(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_5(MACRO_NAME, __VA_ARGS__))
#define FE_7(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_6(MACRO_NAME, __VA_ARGS__))
#define FE_8(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_7(MACRO_NAME, __VA_ARGS__))
#define FE_9(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_8(MACRO_NAME, __VA_ARGS__))
#define FE_10(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_9(MACRO_NAME, __VA_ARGS__))
#define FE_11(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_10(MACRO_NAME, __VA_ARGS__))
#define FE_12(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_11(MACRO_NAME, __VA_ARGS__))
#define FE_13(MACRO_NAME, X, ...) EXPAND(MACRO_NAME(X) FE_12(MACRO_NAME, __VA_ARGS__))

#define MACRO_FOR_EACH_ARGUMENT(action, ...) \
	EXPAND(GETMACRO(__VA_ARGS__, FE_13, FE_12, FE_11, FE_10, FE_9, FE_8, FE_7, FE_6, FE_5, FE_4, FE_3, FE_2, FE_1)(action, __VA_ARGS__))