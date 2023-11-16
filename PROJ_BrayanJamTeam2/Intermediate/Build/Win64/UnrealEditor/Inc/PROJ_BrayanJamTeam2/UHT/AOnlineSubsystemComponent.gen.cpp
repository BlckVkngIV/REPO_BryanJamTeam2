// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROJ_BrayanJamTeam2/AOnlineSubsystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOnlineSubsystemComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJ_BRAYANJAMTEAM2_API UClass* Z_Construct_UClass_UAOnlineSubsystemComponent();
	PROJ_BRAYANJAMTEAM2_API UClass* Z_Construct_UClass_UAOnlineSubsystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2();
// End Cross Module References
	DEFINE_FUNCTION(UAOnlineSubsystemComponent::execJoinGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinGameSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAOnlineSubsystemComponent::execCreateGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSession();
		P_NATIVE_END;
	}
	void UAOnlineSubsystemComponent::StaticRegisterNativesUAOnlineSubsystemComponent()
	{
		UClass* Class = UAOnlineSubsystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSession", &UAOnlineSubsystemComponent::execCreateGameSession },
			{ "JoinGameSession", &UAOnlineSubsystemComponent::execJoinGameSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAOnlineSubsystemComponent_CreateGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAOnlineSubsystemComponent_CreateGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AOnlineSubsystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAOnlineSubsystemComponent_CreateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAOnlineSubsystemComponent, nullptr, "CreateGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAOnlineSubsystemComponent_CreateGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAOnlineSubsystemComponent_CreateGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAOnlineSubsystemComponent_CreateGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAOnlineSubsystemComponent_CreateGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAOnlineSubsystemComponent_JoinGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAOnlineSubsystemComponent_JoinGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AOnlineSubsystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAOnlineSubsystemComponent_JoinGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAOnlineSubsystemComponent, nullptr, "JoinGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAOnlineSubsystemComponent_JoinGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAOnlineSubsystemComponent_JoinGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAOnlineSubsystemComponent_JoinGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAOnlineSubsystemComponent_JoinGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAOnlineSubsystemComponent);
	UClass* Z_Construct_UClass_UAOnlineSubsystemComponent_NoRegister()
	{
		return UAOnlineSubsystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAOnlineSubsystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAOnlineSubsystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAOnlineSubsystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAOnlineSubsystemComponent_CreateGameSession, "CreateGameSession" }, // 650197078
		{ &Z_Construct_UFunction_UAOnlineSubsystemComponent_JoinGameSession, "JoinGameSession" }, // 3829332591
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAOnlineSubsystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AOnlineSubsystemComponent.h" },
		{ "ModuleRelativePath", "AOnlineSubsystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAOnlineSubsystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOnlineSubsystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAOnlineSubsystemComponent_Statics::ClassParams = {
		&UAOnlineSubsystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAOnlineSubsystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAOnlineSubsystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAOnlineSubsystemComponent()
	{
		if (!Z_Registration_Info_UClass_UAOnlineSubsystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAOnlineSubsystemComponent.OuterSingleton, Z_Construct_UClass_UAOnlineSubsystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAOnlineSubsystemComponent.OuterSingleton;
	}
	template<> PROJ_BRAYANJAMTEAM2_API UClass* StaticClass<UAOnlineSubsystemComponent>()
	{
		return UAOnlineSubsystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAOnlineSubsystemComponent);
	UAOnlineSubsystemComponent::~UAOnlineSubsystemComponent() {}
	struct Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_AOnlineSubsystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_AOnlineSubsystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAOnlineSubsystemComponent, UAOnlineSubsystemComponent::StaticClass, TEXT("UAOnlineSubsystemComponent"), &Z_Registration_Info_UClass_UAOnlineSubsystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAOnlineSubsystemComponent), 1762908893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_AOnlineSubsystemComponent_h_1109827788(TEXT("/Script/PROJ_BrayanJamTeam2"),
		Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_AOnlineSubsystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_AOnlineSubsystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
