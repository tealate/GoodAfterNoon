// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoodAfterNoon/Public/DebugActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugActor() {}
// Cross Module References
	GOODAFTERNOON_API UClass* Z_Construct_UClass_ADebugActor_NoRegister();
	GOODAFTERNOON_API UClass* Z_Construct_UClass_ADebugActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GoodAfterNoon();
	GOODAFTERNOON_API UScriptStruct* Z_Construct_UScriptStruct_FCalcurateFirstFractal();
// End Cross Module References
	DEFINE_FUNCTION(ADebugActor::execDrawTown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawTown();
		P_NATIVE_END;
	}
	void ADebugActor::StaticRegisterNativesADebugActor()
	{
		UClass* Class = ADebugActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawTown", &ADebugActor::execDrawTown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADebugActor_DrawTown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugActor_DrawTown_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CalcurateFirstFractal" },
		{ "ModuleRelativePath", "Public/DebugActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugActor_DrawTown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugActor, nullptr, "DrawTown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugActor_DrawTown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugActor_DrawTown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugActor_DrawTown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADebugActor_DrawTown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADebugActor);
	UClass* Z_Construct_UClass_ADebugActor_NoRegister()
	{
		return ADebugActor::StaticClass();
	}
	struct Z_Construct_UClass_ADebugActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TownSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TownSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shrink_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Shrink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawStep_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_drawStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalcFractal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalcFractal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GoodAfterNoon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADebugActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADebugActor_DrawTown, "DrawTown" }, // 1246419957
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DebugActor.h" },
		{ "ModuleRelativePath", "Public/DebugActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugActor_Statics::NewProp_TownSize_MetaData[] = {
		{ "Category", "CalcurateFirstFractal" },
		{ "ModuleRelativePath", "Public/DebugActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugActor_Statics::NewProp_TownSize = { "TownSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugActor, TownSize), METADATA_PARAMS(Z_Construct_UClass_ADebugActor_Statics::NewProp_TownSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugActor_Statics::NewProp_TownSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugActor_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "CalcurateFirstFractal" },
		{ "ModuleRelativePath", "Public/DebugActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugActor_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugActor, Seed), METADATA_PARAMS(Z_Construct_UClass_ADebugActor_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugActor_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugActor_Statics::NewProp_Shrink_MetaData[] = {
		{ "Category", "CalcurateFirstFractal" },
		{ "ModuleRelativePath", "Public/DebugActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugActor_Statics::NewProp_Shrink = { "Shrink", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugActor, Shrink), METADATA_PARAMS(Z_Construct_UClass_ADebugActor_Statics::NewProp_Shrink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugActor_Statics::NewProp_Shrink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugActor_Statics::NewProp_drawStep_MetaData[] = {
		{ "Category", "CalcurateFirstFractal" },
		{ "ModuleRelativePath", "Public/DebugActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADebugActor_Statics::NewProp_drawStep = { "drawStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugActor, drawStep), METADATA_PARAMS(Z_Construct_UClass_ADebugActor_Statics::NewProp_drawStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugActor_Statics::NewProp_drawStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugActor_Statics::NewProp_CalcFractal_MetaData[] = {
		{ "Category", "CalcurateFirstFractal" },
		{ "ModuleRelativePath", "Public/DebugActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADebugActor_Statics::NewProp_CalcFractal = { "CalcFractal", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugActor, CalcFractal), Z_Construct_UScriptStruct_FCalcurateFirstFractal, METADATA_PARAMS(Z_Construct_UClass_ADebugActor_Statics::NewProp_CalcFractal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugActor_Statics::NewProp_CalcFractal_MetaData)) }; // 2931577680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADebugActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugActor_Statics::NewProp_TownSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugActor_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugActor_Statics::NewProp_Shrink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugActor_Statics::NewProp_drawStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugActor_Statics::NewProp_CalcFractal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADebugActor_Statics::ClassParams = {
		&ADebugActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADebugActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADebugActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADebugActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugActor()
	{
		if (!Z_Registration_Info_UClass_ADebugActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADebugActor.OuterSingleton, Z_Construct_UClass_ADebugActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADebugActor.OuterSingleton;
	}
	template<> GOODAFTERNOON_API UClass* StaticClass<ADebugActor>()
	{
		return ADebugActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugActor);
	struct Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_DebugActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_DebugActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADebugActor, ADebugActor::StaticClass, TEXT("ADebugActor"), &Z_Registration_Info_UClass_ADebugActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADebugActor), 3042268772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_DebugActor_h_1325319311(TEXT("/Script/GoodAfterNoon"),
		Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_DebugActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_DebugActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
