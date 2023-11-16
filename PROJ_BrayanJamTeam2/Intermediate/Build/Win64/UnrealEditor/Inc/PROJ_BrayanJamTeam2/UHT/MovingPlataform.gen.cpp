// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROJ_BrayanJamTeam2/movingplataform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemovingplataform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROJ_BRAYANJAMTEAM2_API UClass* Z_Construct_UClass_Amovingplataform();
	PROJ_BRAYANJAMTEAM2_API UClass* Z_Construct_UClass_Amovingplataform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2();
// End Cross Module References
	void Amovingplataform::StaticRegisterNativesAmovingplataform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Amovingplataform);
	UClass* Z_Construct_UClass_Amovingplataform_NoRegister()
	{
		return Amovingplataform::StaticClass();
	}
	struct Z_Construct_UClass_Amovingplataform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Amovingplataform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amovingplataform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "movingplataform.h" },
		{ "ModuleRelativePath", "movingplataform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Amovingplataform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amovingplataform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Amovingplataform_Statics::ClassParams = {
		&Amovingplataform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Amovingplataform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Amovingplataform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Amovingplataform()
	{
		if (!Z_Registration_Info_UClass_Amovingplataform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Amovingplataform.OuterSingleton, Z_Construct_UClass_Amovingplataform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Amovingplataform.OuterSingleton;
	}
	template<> PROJ_BRAYANJAMTEAM2_API UClass* StaticClass<Amovingplataform>()
	{
		return Amovingplataform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amovingplataform);
	Amovingplataform::~Amovingplataform() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_movingplataform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_movingplataform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Amovingplataform, Amovingplataform::StaticClass, TEXT("Amovingplataform"), &Z_Registration_Info_UClass_Amovingplataform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Amovingplataform), 1974778398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_movingplataform_h_3955717442(TEXT("/Script/PROJ_BrayanJamTeam2"),
		Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_movingplataform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_movingplataform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
