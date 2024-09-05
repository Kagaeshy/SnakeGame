// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_SnakeActor_generated_h
#error "SnakeActor.generated.h already included, missing '#pragma once' in SnakeActor.h"
#endif
#define SNAKEGAME_SnakeActor_generated_h

#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeActor(); \
	friend struct Z_Construct_UClass_ASnakeActor_Statics; \
public: \
	DECLARE_CLASS(ASnakeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeActor)


#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakeActor(ASnakeActor&&); \
	ASnakeActor(const ASnakeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeActor) \
	NO_API virtual ~ASnakeActor();


#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_20_PROLOG
#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_23_INCLASS_NO_PURE_DECLS \
	FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeActor_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::UP) \
	op(EMovementDirection::DOWN) \
	op(EMovementDirection::LEFT) \
	op(EMovementDirection::RIGHT) 

enum class EMovementDirection;
template<> struct TIsUEnumClass<EMovementDirection> { enum { Value = true }; };
template<> SNAKEGAME_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
