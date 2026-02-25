// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NTPClientBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
#ifdef NTPCLIENT_NTPClientBPLibrary_generated_h
#error "NTPClientBPLibrary.generated.h already included, missing '#pragma once' in NTPClientBPLibrary.h"
#endif
#define NTPCLIENT_NTPClientBPLibrary_generated_h

#define FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_52_DELEGATE \
NTPCLIENT_API void FDelegate_DelegateWrapper(const FScriptDelegate& Delegate, FDateTime ntpTime, int32 epochTimePoint, int32 dayOfWeek, int32 dayOfYear);


#define FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertSecondsToDateTime); \
	DECLARE_FUNCTION(execGetCurrentTimeSinceEpoch); \
	DECLARE_FUNCTION(execGetNTPTime);


#define FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNTPClientBPLibrary(); \
	friend struct Z_Construct_UClass_UNTPClientBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UNTPClientBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NTPClient"), NO_API) \
	DECLARE_SERIALIZER(UNTPClientBPLibrary)


#define FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNTPClientBPLibrary(UNTPClientBPLibrary&&); \
	UNTPClientBPLibrary(const UNTPClientBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNTPClientBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNTPClientBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNTPClientBPLibrary) \
	NO_API virtual ~UNTPClientBPLibrary();


#define FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_54_PROLOG
#define FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_57_INCLASS_NO_PURE_DECLS \
	FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NTPCLIENT_API UClass* StaticClass<class UNTPClientBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
