// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNTPClient_init() {}
	NTPCLIENT_API UFunction* Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NTPClient;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NTPClient()
	{
		if (!Z_Registration_Info_UPackage__Script_NTPClient.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NTPClient_Delegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NTPClient",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x27A32EFF,
				0x0E37376A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NTPClient.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NTPClient.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NTPClient(Z_Construct_UPackage__Script_NTPClient, TEXT("/Script/NTPClient"), Z_Registration_Info_UPackage__Script_NTPClient, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x27A32EFF, 0x0E37376A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
