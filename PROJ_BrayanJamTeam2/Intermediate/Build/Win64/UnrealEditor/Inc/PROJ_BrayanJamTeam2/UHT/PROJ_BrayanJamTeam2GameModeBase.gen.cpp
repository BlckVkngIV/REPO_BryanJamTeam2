// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROJ_BrayanJamTeam2/PROJ_BrayanJamTeam2GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePROJ_BrayanJamTeam2GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJ_BRAYANJAMTEAM2_API UClass* Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase();
	PROJ_BRAYANJAMTEAM2_API UClass* Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2();
// End Cross Module References
	void APROJ_BrayanJamTeam2GameModeBase::StaticRegisterNativesAPROJ_BrayanJamTeam2GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APROJ_BrayanJamTeam2GameModeBase);
	UClass* Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_NoRegister()
	{
		return APROJ_BrayanJamTeam2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PROJ_BrayanJamTeam2GameModeBase.h" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APROJ_BrayanJamTeam2GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_Statics::ClassParams = {
		&APROJ_BrayanJamTeam2GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase()
	{
		if (!Z_Registration_Info_UClass_APROJ_BrayanJamTeam2GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APROJ_BrayanJamTeam2GameModeBase.OuterSingleton, Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APROJ_BrayanJamTeam2GameModeBase.OuterSingleton;
	}
	template<> PROJ_BRAYANJAMTEAM2_API UClass* StaticClass<APROJ_BrayanJamTeam2GameModeBase>()
	{
		return APROJ_BrayanJamTeam2GameModeBase::StaticClass();
	}
	APROJ_BrayanJamTeam2GameModeBase::APROJ_BrayanJamTeam2GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APROJ_BrayanJamTeam2GameModeBase);
	APROJ_BrayanJamTeam2GameModeBase::~APROJ_BrayanJamTeam2GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APROJ_BrayanJamTeam2GameModeBase, APROJ_BrayanJamTeam2GameModeBase::StaticClass, TEXT("APROJ_BrayanJamTeam2GameModeBase"), &Z_Registration_Info_UClass_APROJ_BrayanJamTeam2GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APROJ_BrayanJamTeam2GameModeBase), 3100455502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2GameModeBase_h_3241214473(TEXT("/Script/PROJ_BrayanJamTeam2"),
		Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
