// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROJ_BrayanJamTeam2/PROJ_BrayanJamTeam2Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePROJ_BrayanJamTeam2Character() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PROJ_BRAYANJAMTEAM2_API UClass* Z_Construct_UClass_APROJ_BrayanJamTeam2Character();
	PROJ_BRAYANJAMTEAM2_API UClass* Z_Construct_UClass_APROJ_BrayanJamTeam2Character_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2();
// End Cross Module References
	DEFINE_FUNCTION(APROJ_BrayanJamTeam2Character::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APROJ_BrayanJamTeam2Character::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void APROJ_BrayanJamTeam2Character::StaticRegisterNativesAPROJ_BrayanJamTeam2Character()
	{
		UClass* Class = APROJ_BrayanJamTeam2Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &APROJ_BrayanJamTeam2Character::execGetHasRifle },
			{ "SetHasRifle", &APROJ_BrayanJamTeam2Character::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics
	{
		struct PROJ_BrayanJamTeam2Character_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PROJ_BrayanJamTeam2Character_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PROJ_BrayanJamTeam2Character_eventGetHasRifle_Parms), &Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Getter for the bool */" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "Getter for the bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APROJ_BrayanJamTeam2Character, nullptr, "GetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::PROJ_BrayanJamTeam2Character_eventGetHasRifle_Parms), Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics
	{
		struct PROJ_BrayanJamTeam2Character_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((PROJ_BrayanJamTeam2Character_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PROJ_BrayanJamTeam2Character_eventSetHasRifle_Parms), &Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Setter to set the bool */" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "Setter to set the bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APROJ_BrayanJamTeam2Character, nullptr, "SetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::PROJ_BrayanJamTeam2Character_eventSetHasRifle_Parms), Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APROJ_BrayanJamTeam2Character);
	UClass* Z_Construct_UClass_APROJ_BrayanJamTeam2Character_NoRegister()
	{
		return APROJ_BrayanJamTeam2Character::StaticClass();
	}
	struct Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PROJ_BrayanJamTeam2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_GetHasRifle, "GetHasRifle" }, // 1531634532
		{ &Z_Construct_UFunction_APROJ_BrayanJamTeam2Character_SetHasRifle, "SetHasRifle" }, // 3640963827
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APROJ_BrayanJamTeam2Character, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APROJ_BrayanJamTeam2Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APROJ_BrayanJamTeam2Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APROJ_BrayanJamTeam2Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APROJ_BrayanJamTeam2Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APROJ_BrayanJamTeam2Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
		{ "ModuleRelativePath", "PROJ_BrayanJamTeam2Character.h" },
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
	};
#endif
	void Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((APROJ_BrayanJamTeam2Character*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APROJ_BrayanJamTeam2Character), &Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_bHasRifle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_bHasRifle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::NewProp_bHasRifle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APROJ_BrayanJamTeam2Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::ClassParams = {
		&APROJ_BrayanJamTeam2Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APROJ_BrayanJamTeam2Character()
	{
		if (!Z_Registration_Info_UClass_APROJ_BrayanJamTeam2Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APROJ_BrayanJamTeam2Character.OuterSingleton, Z_Construct_UClass_APROJ_BrayanJamTeam2Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APROJ_BrayanJamTeam2Character.OuterSingleton;
	}
	template<> PROJ_BRAYANJAMTEAM2_API UClass* StaticClass<APROJ_BrayanJamTeam2Character>()
	{
		return APROJ_BrayanJamTeam2Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APROJ_BrayanJamTeam2Character);
	APROJ_BrayanJamTeam2Character::~APROJ_BrayanJamTeam2Character() {}
	struct Z_CompiledInDeferFile_FID_Users_Raulf_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Raulf_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APROJ_BrayanJamTeam2Character, APROJ_BrayanJamTeam2Character::StaticClass, TEXT("APROJ_BrayanJamTeam2Character"), &Z_Registration_Info_UClass_APROJ_BrayanJamTeam2Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APROJ_BrayanJamTeam2Character), 1541511238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Raulf_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2Character_h_4161766093(TEXT("/Script/PROJ_BrayanJamTeam2"),
		Z_CompiledInDeferFile_FID_Users_Raulf_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Raulf_Documents_Unreal_Projects_REPO_BryanJamTeam2_PROJ_BrayanJamTeam2_Source_PROJ_BrayanJamTeam2_PROJ_BrayanJamTeam2Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
