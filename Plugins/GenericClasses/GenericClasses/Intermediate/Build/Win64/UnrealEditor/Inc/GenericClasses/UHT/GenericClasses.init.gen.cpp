// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericClasses_init() {}
	GENERICCLASSES_API UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature();
	GENERICCLASSES_API UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature();
	GENERICCLASSES_API UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GenericClasses;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GenericClasses()
	{
		if (!Z_Registration_Info_UPackage__Script_GenericClasses.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GenericClasses",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2AEF979B,
				0x1BEE57EB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GenericClasses.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GenericClasses.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GenericClasses(Z_Construct_UPackage__Script_GenericClasses, TEXT("/Script/GenericClasses"), Z_Registration_Info_UPackage__Script_GenericClasses, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2AEF979B, 0x1BEE57EB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
