// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoodAfterNoon/GoodAfterNoonGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoodAfterNoonGameMode() {}
// Cross Module References
	GOODAFTERNOON_API UClass* Z_Construct_UClass_AGoodAfterNoonGameMode_NoRegister();
	GOODAFTERNOON_API UClass* Z_Construct_UClass_AGoodAfterNoonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GoodAfterNoon();
// End Cross Module References
	void AGoodAfterNoonGameMode::StaticRegisterNativesAGoodAfterNoonGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoodAfterNoonGameMode);
	UClass* Z_Construct_UClass_AGoodAfterNoonGameMode_NoRegister()
	{
		return AGoodAfterNoonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGoodAfterNoonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoodAfterNoonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoodAfterNoon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoodAfterNoonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GoodAfterNoonGameMode.h" },
		{ "ModuleRelativePath", "GoodAfterNoonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoodAfterNoonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoodAfterNoonGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoodAfterNoonGameMode_Statics::ClassParams = {
		&AGoodAfterNoonGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGoodAfterNoonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoodAfterNoonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoodAfterNoonGameMode()
	{
		if (!Z_Registration_Info_UClass_AGoodAfterNoonGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoodAfterNoonGameMode.OuterSingleton, Z_Construct_UClass_AGoodAfterNoonGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGoodAfterNoonGameMode.OuterSingleton;
	}
	template<> GOODAFTERNOON_API UClass* StaticClass<AGoodAfterNoonGameMode>()
	{
		return AGoodAfterNoonGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoodAfterNoonGameMode);
	struct Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_GoodAfterNoonGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_GoodAfterNoonGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGoodAfterNoonGameMode, AGoodAfterNoonGameMode::StaticClass, TEXT("AGoodAfterNoonGameMode"), &Z_Registration_Info_UClass_AGoodAfterNoonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoodAfterNoonGameMode), 4243564835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_GoodAfterNoonGameMode_h_3200813887(TEXT("/Script/GoodAfterNoon"),
		Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_GoodAfterNoonGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_GoodAfterNoonGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
