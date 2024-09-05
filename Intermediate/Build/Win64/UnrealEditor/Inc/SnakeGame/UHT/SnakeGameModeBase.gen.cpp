// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameModeBase();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class ASnakeGameModeBase
void ASnakeGameModeBase::StaticRegisterNativesASnakeGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeGameModeBase);
UClass* Z_Construct_UClass_ASnakeGameModeBase_NoRegister()
{
	return ASnakeGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ASnakeGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SnakeGameModeBase.h" },
		{ "ModuleRelativePath", "SnakeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASnakeGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeGameModeBase_Statics::ClassParams = {
	&ASnakeGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakeGameModeBase()
{
	if (!Z_Registration_Info_UClass_ASnakeGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeGameModeBase.OuterSingleton, Z_Construct_UClass_ASnakeGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakeGameModeBase.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakeGameModeBase>()
{
	return ASnakeGameModeBase::StaticClass();
}
ASnakeGameModeBase::ASnakeGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeGameModeBase);
ASnakeGameModeBase::~ASnakeGameModeBase() {}
// End Class ASnakeGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeGameModeBase, ASnakeGameModeBase::StaticClass, TEXT("ASnakeGameModeBase"), &Z_Registration_Info_UClass_ASnakeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeGameModeBase), 2284400851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeGameModeBase_h_930205947(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
