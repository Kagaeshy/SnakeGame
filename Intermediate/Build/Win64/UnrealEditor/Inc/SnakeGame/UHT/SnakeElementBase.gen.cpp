// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeElementBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeElementBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class ASnakeElementBase Function SetFirstElementType
static FName NAME_ASnakeElementBase_SetFirstElementType = FName(TEXT("SetFirstElementType"));
void ASnakeElementBase::SetFirstElementType()
{
	ProcessEvent(FindFunctionChecked(NAME_ASnakeElementBase_SetFirstElementType),NULL);
}
struct Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "SetFirstElementType", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakeElementBase::execSetFirstElementType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFirstElementType_Implementation();
	P_NATIVE_END;
}
// End Class ASnakeElementBase Function SetFirstElementType

// Begin Class ASnakeElementBase
void ASnakeElementBase::StaticRegisterNativesASnakeElementBase()
{
	UClass* Class = ASnakeElementBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFirstElementType", &ASnakeElementBase::execSetFirstElementType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeElementBase);
UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister()
{
	return ASnakeElementBase::StaticClass();
}
struct Z_Construct_UClass_ASnakeElementBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeElementBase.h" },
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "SnakeElementBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType, "SetFirstElementType" }, // 1159327260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeElementBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeElementBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams = {
	&ASnakeElementBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakeElementBase()
{
	if (!Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton, Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakeElementBase>()
{
	return ASnakeElementBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeElementBase);
ASnakeElementBase::~ASnakeElementBase() {}
// End Class ASnakeElementBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeElementBase, ASnakeElementBase::StaticClass, TEXT("ASnakeElementBase"), &Z_Registration_Info_UClass_ASnakeElementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeElementBase), 3235531466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_2031781855(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
