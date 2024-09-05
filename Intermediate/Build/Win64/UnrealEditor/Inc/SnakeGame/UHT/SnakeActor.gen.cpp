// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeActor();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeActor_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_EMovementDirection();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Enum EMovementDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementDirection;
static UEnum* EMovementDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_EMovementDirection, (UObject*)Z_Construct_UPackage__Script_SnakeGame(), TEXT("EMovementDirection"));
	}
	return Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton;
}
template<> SNAKEGAME_API UEnum* StaticEnum<EMovementDirection>()
{
	return EMovementDirection_StaticEnum();
}
struct Z_Construct_UEnum_SnakeGame_EMovementDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DOWN.Name", "EMovementDirection::DOWN" },
		{ "LEFT.Name", "EMovementDirection::LEFT" },
		{ "ModuleRelativePath", "SnakeActor.h" },
		{ "RIGHT.Name", "EMovementDirection::RIGHT" },
		{ "UP.Name", "EMovementDirection::UP" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementDirection::UP", (int64)EMovementDirection::UP },
		{ "EMovementDirection::DOWN", (int64)EMovementDirection::DOWN },
		{ "EMovementDirection::LEFT", (int64)EMovementDirection::LEFT },
		{ "EMovementDirection::RIGHT", (int64)EMovementDirection::RIGHT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnakeGame_EMovementDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
	nullptr,
	"EMovementDirection",
	"EMovementDirection",
	Z_Construct_UEnum_SnakeGame_EMovementDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_EMovementDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_EMovementDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnakeGame_EMovementDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnakeGame_EMovementDirection()
{
	if (!Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton, Z_Construct_UEnum_SnakeGame_EMovementDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton;
}
// End Enum EMovementDirection

// Begin Class ASnakeActor
void ASnakeActor::StaticRegisterNativesASnakeActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeActor);
UClass* Z_Construct_UClass_ASnakeActor_NoRegister()
{
	return ASnakeActor::StaticClass();
}
struct Z_Construct_UClass_ASnakeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeActor.h" },
		{ "ModuleRelativePath", "SnakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "SnakeActor" },
		{ "ModuleRelativePath", "SnakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[] = {
		{ "Category", "SnakeActor" },
		{ "ModuleRelativePath", "SnakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "SnakeActor" },
		{ "ModuleRelativePath", "SnakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakeElements_MetaData[] = {
		{ "ModuleRelativePath", "SnakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "SnakeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElementSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnakeElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SnakeElements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastMoveDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastMoveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnakeActor_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeActor, SnakeElementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakeElementClass_MetaData), NewProp_SnakeElementClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeActor_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeActor, ElementSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementSize_MetaData), NewProp_ElementSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeActor_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeActor, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeActor_Statics::NewProp_SnakeElements_Inner = { "SnakeElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnakeActor_Statics::NewProp_SnakeElements = { "SnakeElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeActor, SnakeElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakeElements_MetaData), NewProp_SnakeElements_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASnakeActor_Statics::NewProp_LastMoveDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakeActor_Statics::NewProp_LastMoveDirection = { "LastMoveDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeActor, LastMoveDirection), Z_Construct_UEnum_SnakeGame_EMovementDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMoveDirection_MetaData), NewProp_LastMoveDirection_MetaData) }; // 2040979859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeActor_Statics::NewProp_SnakeElementClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeActor_Statics::NewProp_ElementSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeActor_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeActor_Statics::NewProp_SnakeElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeActor_Statics::NewProp_SnakeElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeActor_Statics::NewProp_LastMoveDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeActor_Statics::NewProp_LastMoveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeActor_Statics::ClassParams = {
	&ASnakeActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASnakeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakeActor()
{
	if (!Z_Registration_Info_UClass_ASnakeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeActor.OuterSingleton, Z_Construct_UClass_ASnakeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakeActor.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakeActor>()
{
	return ASnakeActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeActor);
ASnakeActor::~ASnakeActor() {}
// End Class ASnakeActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementDirection_StaticEnum, TEXT("EMovementDirection"), &Z_Registration_Info_UEnum_EMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2040979859U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeActor, ASnakeActor::StaticClass, TEXT("ASnakeActor"), &Z_Registration_Info_UClass_ASnakeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeActor), 2686317907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_28393923(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
