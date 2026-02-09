// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NTPClient/Public/NTPClientBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNTPClientBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NTPCLIENT_API UClass* Z_Construct_UClass_UNTPClientBPLibrary();
	NTPCLIENT_API UClass* Z_Construct_UClass_UNTPClientBPLibrary_NoRegister();
	NTPCLIENT_API UFunction* Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NTPClient();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics
	{
		struct _Script_NTPClient_eventDelegate_Parms
		{
			int32 ntpTimeHrs;
			int32 ntpTimeMins;
			int32 ntpTimeSecs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ntpTimeHrs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ntpTimeMins;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ntpTimeSecs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_ntpTimeHrs = { "ntpTimeHrs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NTPClient_eventDelegate_Parms, ntpTimeHrs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_ntpTimeMins = { "ntpTimeMins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NTPClient_eventDelegate_Parms, ntpTimeMins), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_ntpTimeSecs = { "ntpTimeSecs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NTPClient_eventDelegate_Parms, ntpTimeSecs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_ntpTimeHrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_ntpTimeMins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_ntpTimeSecs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegate, int, startTime);\n" },
		{ "ModuleRelativePath", "Public/NTPClientBPLibrary.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegate, int, startTime);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NTPClient, nullptr, "Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::_Script_NTPClient_eventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::_Script_NTPClient_eventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDelegate_DelegateWrapper(const FScriptDelegate& Delegate, int32 ntpTimeHrs, int32 ntpTimeMins, int32 ntpTimeSecs)
{
	struct _Script_NTPClient_eventDelegate_Parms
	{
		int32 ntpTimeHrs;
		int32 ntpTimeMins;
		int32 ntpTimeSecs;
	};
	_Script_NTPClient_eventDelegate_Parms Parms;
	Parms.ntpTimeHrs=ntpTimeHrs;
	Parms.ntpTimeMins=ntpTimeMins;
	Parms.ntpTimeSecs=ntpTimeSecs;
	Delegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNTPClientBPLibrary::execGetMonotonicTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNTPClientBPLibrary::GetMonotonicTime(Z_Param_Out_t);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNTPClientBPLibrary::execGetGameUptime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_startTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_h);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_m);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_s);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNTPClientBPLibrary::GetGameUptime(Z_Param_startTime,Z_Param_Out_h,Z_Param_Out_m,Z_Param_Out_s);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNTPClientBPLibrary::execGetNTPTime)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNTPClientBPLibrary::GetNTPTime(FDelegate(Z_Param_delegate));
		P_NATIVE_END;
	}
	void UNTPClientBPLibrary::StaticRegisterNativesUNTPClientBPLibrary()
	{
		UClass* Class = UNTPClientBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameUptime", &UNTPClientBPLibrary::execGetGameUptime },
			{ "GetMonotonicTime", &UNTPClientBPLibrary::execGetMonotonicTime },
			{ "GetNTPTime", &UNTPClientBPLibrary::execGetNTPTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics
	{
		struct NTPClientBPLibrary_eventGetGameUptime_Parms
		{
			int32 startTime;
			int32 h;
			int32 m;
			int32 s;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_startTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_h;
		static const UECodeGen_Private::FIntPropertyParams NewProp_m;
		static const UECodeGen_Private::FIntPropertyParams NewProp_s;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NewProp_startTime = { "startTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventGetGameUptime_Parms, startTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NewProp_h = { "h", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventGetGameUptime_Parms, h), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NewProp_m = { "m", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventGetGameUptime_Parms, m), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventGetGameUptime_Parms, s), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NewProp_startTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NewProp_h,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NewProp_m,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NewProp_s,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Monotonic Time" },
		{ "Comment", "/**\n\x09* Get in hrs, minutes and seconds, the duration of time the game has been running synchronised to monotonic time\n\x09* \n\x09* @param h The number of hours since the game started running\n\x09* @param m The number of minutes since the game started running\n\x09* @param s The number of seconds since the game started running\n\x09*/" },
		{ "DisplayName", "Get Game Uptime" },
		{ "ModuleRelativePath", "Public/NTPClientBPLibrary.h" },
		{ "ToolTip", "Get in hrs, minutes and seconds, the duration of time the game has been running synchronised to monotonic time\n\n@param h The number of hours since the game started running\n@param m The number of minutes since the game started running\n@param s The number of seconds since the game started running" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNTPClientBPLibrary, nullptr, "GetGameUptime", nullptr, nullptr, Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NTPClientBPLibrary_eventGetGameUptime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::NTPClientBPLibrary_eventGetGameUptime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics
	{
		struct NTPClientBPLibrary_eventGetMonotonicTime_Parms
		{
			int32 t;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_t;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventGetMonotonicTime_Parms, t), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::NewProp_t,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Monotonic Time" },
		{ "DisplayName", "Get Monotonic Time" },
		{ "ModuleRelativePath", "Public/NTPClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNTPClientBPLibrary, nullptr, "GetMonotonicTime", nullptr, nullptr, Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::NTPClientBPLibrary_eventGetMonotonicTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::NTPClientBPLibrary_eventGetMonotonicTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics
	{
		struct NTPClientBPLibrary_eventGetNTPTime_Parms
		{
			FScriptDelegate delegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::NewProp_delegate = { "delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventGetNTPTime_Parms, delegate), Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 458946638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::NewProp_delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "NTP" },
		{ "DisplayName", "Get NTP time" },
		{ "ModuleRelativePath", "Public/NTPClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNTPClientBPLibrary, nullptr, "GetNTPTime", nullptr, nullptr, Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::NTPClientBPLibrary_eventGetNTPTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::NTPClientBPLibrary_eventGetNTPTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNTPClientBPLibrary);
	UClass* Z_Construct_UClass_UNTPClientBPLibrary_NoRegister()
	{
		return UNTPClientBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNTPClientBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNTPClientBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NTPClient,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNTPClientBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNTPClientBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNTPClientBPLibrary_GetGameUptime, "GetGameUptime" }, // 3541858250
		{ &Z_Construct_UFunction_UNTPClientBPLibrary_GetMonotonicTime, "GetMonotonicTime" }, // 2850665592
		{ &Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime, "GetNTPTime" }, // 909949559
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNTPClientBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNTPClientBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NTPClientBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NTPClientBPLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNTPClientBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNTPClientBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNTPClientBPLibrary_Statics::ClassParams = {
		&UNTPClientBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNTPClientBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNTPClientBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNTPClientBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UNTPClientBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNTPClientBPLibrary.OuterSingleton, Z_Construct_UClass_UNTPClientBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNTPClientBPLibrary.OuterSingleton;
	}
	template<> NTPCLIENT_API UClass* StaticClass<UNTPClientBPLibrary>()
	{
		return UNTPClientBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNTPClientBPLibrary);
	UNTPClientBPLibrary::~UNTPClientBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNTPClientBPLibrary, UNTPClientBPLibrary::StaticClass, TEXT("UNTPClientBPLibrary"), &Z_Registration_Info_UClass_UNTPClientBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNTPClientBPLibrary), 2976294296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_1525844299(TEXT("/Script/NTPClient"),
		Z_CompiledInDeferFile_FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
