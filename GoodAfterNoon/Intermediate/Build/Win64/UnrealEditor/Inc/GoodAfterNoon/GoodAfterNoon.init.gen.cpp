// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoodAfterNoon_init() {}
	GOODAFTERNOON_API UFunction* Z_Construct_UDelegateFunction_GoodAfterNoon_OnPickUp__DelegateSignature();
	GOODAFTERNOON_API UFunction* Z_Construct_UDelegateFunction_GoodAfterNoon_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GoodAfterNoon;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GoodAfterNoon()
	{
		if (!Z_Registration_Info_UPackage__Script_GoodAfterNoon.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GoodAfterNoon_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GoodAfterNoon_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GoodAfterNoon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDA08D2A3,
				0x1B1AB5F7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GoodAfterNoon.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GoodAfterNoon.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GoodAfterNoon(Z_Construct_UPackage__Script_GoodAfterNoon, TEXT("/Script/GoodAfterNoon"), Z_Registration_Info_UPackage__Script_GoodAfterNoon, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDA08D2A3, 0x1B1AB5F7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
