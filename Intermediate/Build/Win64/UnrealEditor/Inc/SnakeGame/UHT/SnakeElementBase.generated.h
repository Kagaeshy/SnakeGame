// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeElementBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_SnakeElementBase_generated_h
#error "SnakeElementBase.generated.h already included, missing '#pragma once' in SnakeElementBase.h"
#endif
#define SNAKEGAME_SnakeElementBase_generated_h

#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFirstElementType);


#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_CALLBACK_WRAPPERS
#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeElementBase(); \
	friend struct Z_Construct_UClass_ASnakeElementBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeElementBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeElementBase)


#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakeElementBase(ASnakeElementBase&&); \
	ASnakeElementBase(const ASnakeElementBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeElementBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeElementBase) \
	NO_API virtual ~ASnakeElementBase();


#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_11_PROLOG
#define FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_CALLBACK_WRAPPERS \
	FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeElementBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repository_Unreal_git_SnakeGame_Source_SnakeGame_SnakeElementBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
