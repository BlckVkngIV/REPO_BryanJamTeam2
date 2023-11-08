// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePROJ_BrayanJamTeam2_init() {}
	PROJ_BRAYANJAMTEAM2_API UFunction* Z_Construct_UDelegateFunction_PROJ_BrayanJamTeam2_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PROJ_BrayanJamTeam2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2()
	{
		if (!Z_Registration_Info_UPackage__Script_PROJ_BrayanJamTeam2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PROJ_BrayanJamTeam2_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PROJ_BrayanJamTeam2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x811C7323,
				0xAB36B5C9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PROJ_BrayanJamTeam2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PROJ_BrayanJamTeam2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PROJ_BrayanJamTeam2(Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2, TEXT("/Script/PROJ_BrayanJamTeam2"), Z_Registration_Info_UPackage__Script_PROJ_BrayanJamTeam2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x811C7323, 0xAB36B5C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
