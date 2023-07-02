// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericClasses_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GenericClasses;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GenericClasses()
	{
		if (!Z_Registration_Info_UPackage__Script_GenericClasses.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GenericClasses",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEB945B60,
				0x0F1CCEBB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GenericClasses.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GenericClasses.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GenericClasses(Z_Construct_UPackage__Script_GenericClasses, TEXT("/Script/GenericClasses"), Z_Registration_Info_UPackage__Script_GenericClasses, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEB945B60, 0x0F1CCEBB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
