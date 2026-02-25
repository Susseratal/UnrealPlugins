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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
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
			FDateTime ntpTime;
			int32 epochTimePoint;
			int32 dayOfWeek;
			int32 dayOfYear;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ntpTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_epochTimePoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_dayOfWeek;
		static const UECodeGen_Private::FIntPropertyParams NewProp_dayOfYear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_ntpTime = { "ntpTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NTPClient_eventDelegate_Parms, ntpTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_epochTimePoint = { "epochTimePoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NTPClient_eventDelegate_Parms, epochTimePoint), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_dayOfWeek = { "dayOfWeek", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NTPClient_eventDelegate_Parms, dayOfWeek), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_dayOfYear = { "dayOfYear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NTPClient_eventDelegate_Parms, dayOfYear), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_ntpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_epochTimePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_dayOfWeek,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::NewProp_dayOfYear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// total of 384 bits or 48 bytes\n" },
		{ "ModuleRelativePath", "Public/NTPClientBPLibrary.h" },
		{ "ToolTip", "total of 384 bits or 48 bytes" },
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
void FDelegate_DelegateWrapper(const FScriptDelegate& Delegate, FDateTime ntpTime, int32 epochTimePoint, int32 dayOfWeek, int32 dayOfYear)
{
	struct _Script_NTPClient_eventDelegate_Parms
	{
		FDateTime ntpTime;
		int32 epochTimePoint;
		int32 dayOfWeek;
		int32 dayOfYear;
	};
	_Script_NTPClient_eventDelegate_Parms Parms;
	Parms.ntpTime=ntpTime;
	Parms.epochTimePoint=epochTimePoint;
	Parms.dayOfWeek=dayOfWeek;
	Parms.dayOfYear=dayOfYear;
	Delegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNTPClientBPLibrary::execConvertSecondsToDateTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_s);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_dateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNTPClientBPLibrary::ConvertSecondsToDateTime(Z_Param_s,Z_Param_Out_dateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNTPClientBPLibrary::execGetCurrentTimeSinceEpoch)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_currentTimePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNTPClientBPLibrary::GetCurrentTimeSinceEpoch(Z_Param_Out_currentTimePoint);
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
			{ "ConvertSecondsToDateTime", &UNTPClientBPLibrary::execConvertSecondsToDateTime },
			{ "GetCurrentTimeSinceEpoch", &UNTPClientBPLibrary::execGetCurrentTimeSinceEpoch },
			{ "GetNTPTime", &UNTPClientBPLibrary::execGetNTPTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics
	{
		struct NTPClientBPLibrary_eventConvertSecondsToDateTime_Parms
		{
			int32 s;
			FDateTime dateTime;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_s;
		static const UECodeGen_Private::FStructPropertyParams NewProp_dateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventConvertSecondsToDateTime_Parms, s), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::NewProp_dateTime = { "dateTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventConvertSecondsToDateTime_Parms, dateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::NewProp_s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::NewProp_dateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Monotonic Time" },
		{ "Comment", "/*\n\x09* What would the date and time be \"s\" seconds after 1st Jan the year Jesus was born\n\x09*/" },
		{ "DisplayName", "Convert seconds to a date time" },
		{ "ModuleRelativePath", "Public/NTPClientBPLibrary.h" },
		{ "ToolTip", "* What would the date and time be \"s\" seconds after 1st Jan the year Jesus was born" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNTPClientBPLibrary, nullptr, "ConvertSecondsToDateTime", nullptr, nullptr, Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::NTPClientBPLibrary_eventConvertSecondsToDateTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::NTPClientBPLibrary_eventConvertSecondsToDateTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics
	{
		struct NTPClientBPLibrary_eventGetCurrentTimeSinceEpoch_Parms
		{
			int32 currentTimePoint;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentTimePoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::NewProp_currentTimePoint = { "currentTimePoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventGetCurrentTimeSinceEpoch_Parms, currentTimePoint), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::NewProp_currentTimePoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Monotonic Time" },
		{ "DisplayName", "Get Current time Since Epoch" },
		{ "ModuleRelativePath", "Public/NTPClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNTPClientBPLibrary, nullptr, "GetCurrentTimeSinceEpoch", nullptr, nullptr, Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::NTPClientBPLibrary_eventGetCurrentTimeSinceEpoch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::NTPClientBPLibrary_eventGetCurrentTimeSinceEpoch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch_Statics::FuncParams);
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
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime_Statics::NewProp_delegate = { "delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NTPClientBPLibrary_eventGetNTPTime_Parms, delegate), Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1060226326
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
		{ &Z_Construct_UFunction_UNTPClientBPLibrary_ConvertSecondsToDateTime, "ConvertSecondsToDateTime" }, // 480749315
		{ &Z_Construct_UFunction_UNTPClientBPLibrary_GetCurrentTimeSinceEpoch, "GetCurrentTimeSinceEpoch" }, // 2290924793
		{ &Z_Construct_UFunction_UNTPClientBPLibrary_GetNTPTime, "GetNTPTime" }, // 1580817803
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
		{ Z_Construct_UClass_UNTPClientBPLibrary, UNTPClientBPLibrary::StaticClass, TEXT("UNTPClientBPLibrary"), &Z_Registration_Info_UClass_UNTPClientBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNTPClientBPLibrary), 1762488812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_1027628226(TEXT("/Script/NTPClient"),
		Z_CompiledInDeferFile_FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Iain_Documents_UnrealPlugins_NTPClient_HostProject_Plugins_NTPClient_Source_NTPClient_Public_NTPClientBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
