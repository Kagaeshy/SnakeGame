// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/PlayerPawnBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawnBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_APlayerPawnBase();
SNAKEGAME_API UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class APlayerPawnBase Function HandlePlayerHorizontalInput
struct Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics
{
	struct PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "HandlePlayerHorizontalInput", nullptr, nullptr, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerPawnBase::execHandlePlayerHorizontalInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayerHorizontalInput(Z_Param_value);
	P_NATIVE_END;
}
// End Class APlayerPawnBase Function HandlePlayerHorizontalInput

// Begin Class APlayerPawnBase Function HandlePlayerVerticalInput
struct Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics
{
	struct PlayerPawnBase_eventHandlePlayerVerticalInput_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPawnBase_eventHandlePlayerVerticalInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "HandlePlayerVerticalInput", nullptr, nullptr, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PlayerPawnBase_eventHandlePlayerVerticalInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PlayerPawnBase_eventHandlePlayerVerticalInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerPawnBase::execHandlePlayerVerticalInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayerVerticalInput(Z_Param_value);
	P_NATIVE_END;
}
// End Class APlayerPawnBase Function HandlePlayerVerticalInput

// Begin Class APlayerPawnBase
void APlayerPawnBase::StaticRegisterNativesAPlayerPawnBase()
{
	UClass* Class = APlayerPawnBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandlePlayerHorizontalInput", &APlayerPawnBase::execHandlePlayerHorizontalInput },
		{ "HandlePlayerVerticalInput", &APlayerPawnBase::execHandlePlayerVerticalInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPawnBase);
UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister()
{
	return APlayerPawnBase::StaticClass();
}
struct Z_Construct_UClass_APlayerPawnBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawnBase.h" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnCamera_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakeActor_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakeActorClass_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnakeActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SnakeActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput, "HandlePlayerHorizontalInput" }, // 997908775
		{ &Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput, "HandlePlayerVerticalInput" }, // 3682909810
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawnBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera = { "PawnCamera", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawnBase, PawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnCamera_MetaData), NewProp_PawnCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor = { "SnakeActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActor), Z_Construct_UClass_ASnakeActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakeActor_MetaData), NewProp_SnakeActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass = { "SnakeActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASnakeActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakeActorClass_MetaData), NewProp_SnakeActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerPawnBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams = {
	&APlayerPawnBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerPawnBase()
{
	if (!Z_Registration_Info_UClass_APlayerPawnBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPawnBase.OuterSingleton, Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerPawnBase.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<APlayerPawnBase>()
{
	return APlayerPawnBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawnBase);
APlayerPawnBase::~APlayerPawnBase() {}
// End Class APlayerPawnBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPawnBase, APlayerPawnBase::StaticClass, TEXT("APlayerPawnBase"), &Z_Registration_Info_UClass_APlayerPawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPawnBase), 2449420161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_2026550209(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
