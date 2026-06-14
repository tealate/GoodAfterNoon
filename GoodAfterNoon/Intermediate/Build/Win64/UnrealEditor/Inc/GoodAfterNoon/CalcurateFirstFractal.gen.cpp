// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoodAfterNoon/Public/CalcurateFirstFractal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalcurateFirstFractal() {}
// Cross Module References
	GOODAFTERNOON_API UScriptStruct* Z_Construct_UScriptStruct_FFractalNode();
	UPackage* Z_Construct_UPackage__Script_GoodAfterNoon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	GOODAFTERNOON_API UScriptStruct* Z_Construct_UScriptStruct_FFractalStep();
	GOODAFTERNOON_API UScriptStruct* Z_Construct_UScriptStruct_FirstFractalParam();
	GOODAFTERNOON_API UScriptStruct* Z_Construct_UScriptStruct_FCalcurateFirstFractal();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FractalNode;
class UScriptStruct* FFractalNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FractalNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FractalNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFractalNode, Z_Construct_UPackage__Script_GoodAfterNoon(), TEXT("FractalNode"));
	}
	return Z_Registration_Info_UScriptStruct_FractalNode.OuterSingleton;
}
template<> GOODAFTERNOON_API UScriptStruct* StaticStruct<FFractalNode>()
{
	return FFractalNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFractalNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_anchor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_anchor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractalNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFractalNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFractalNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_anchor_MetaData[] = {
		{ "Category", "FractalNode" },
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_anchor = { "anchor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFractalNode, anchor), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_anchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_anchor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_size_MetaData[] = {
		{ "Category", "FractalNode" },
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFractalNode, size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_color_MetaData[] = {
		{ "Category", "FractalNode" },
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFractalNode, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFractalNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_anchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractalNode_Statics::NewProp_color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFractalNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoodAfterNoon,
		nullptr,
		&NewStructOps,
		"FractalNode",
		sizeof(FFractalNode),
		alignof(FFractalNode),
		Z_Construct_UScriptStruct_FFractalNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractalNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFractalNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractalNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFractalNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FractalNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FractalNode.InnerSingleton, Z_Construct_UScriptStruct_FFractalNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FractalNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FractalStep;
class UScriptStruct* FFractalStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FractalStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FractalStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFractalStep, Z_Construct_UPackage__Script_GoodAfterNoon(), TEXT("FractalStep"));
	}
	return Z_Registration_Info_UScriptStruct_FractalStep.OuterSingleton;
}
template<> GOODAFTERNOON_API UScriptStruct* StaticStruct<FFractalStep>()
{
	return FFractalStep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFractalStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_nodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractalStep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFractalStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFractalStep>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractalStep_Statics::NewProp_nodes_Inner = { "nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFractalNode, METADATA_PARAMS(nullptr, 0) }; // 2219286532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractalStep_Statics::NewProp_nodes_MetaData[] = {
		{ "Category", "FractalStep" },
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFractalStep_Statics::NewProp_nodes = { "nodes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFractalStep, nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractalStep_Statics::NewProp_nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractalStep_Statics::NewProp_nodes_MetaData)) }; // 2219286532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFractalStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractalStep_Statics::NewProp_nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractalStep_Statics::NewProp_nodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFractalStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoodAfterNoon,
		nullptr,
		&NewStructOps,
		"FractalStep",
		sizeof(FFractalStep),
		alignof(FFractalStep),
		Z_Construct_UScriptStruct_FFractalStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractalStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFractalStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractalStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFractalStep()
	{
		if (!Z_Registration_Info_UScriptStruct_FractalStep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FractalStep.InnerSingleton, Z_Construct_UScriptStruct_FFractalStep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FractalStep.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_irstFractalParam;
class UScriptStruct* FirstFractalParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_irstFractalParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_irstFractalParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FirstFractalParam, Z_Construct_UPackage__Script_GoodAfterNoon(), TEXT("irstFractalParam"));
	}
	return Z_Registration_Info_UScriptStruct_irstFractalParam.OuterSingleton;
}
template<> GOODAFTERNOON_API UScriptStruct* StaticStruct<FirstFractalParam>()
{
	return FirstFractalParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FirstFractalParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FirstFractalParam_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FirstFractalParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_StepCount_MetaData[] = {
		{ "Category", "irstFractalParam" },
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_StepCount = { "StepCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstFractalParam, StepCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_StepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_StepCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "irstFractalParam" },
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstFractalParam, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_Seed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FirstFractalParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_StepCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewProp_Seed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FirstFractalParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoodAfterNoon,
		nullptr,
		&NewStructOps,
		"irstFractalParam",
		sizeof(FirstFractalParam),
		alignof(FirstFractalParam),
		Z_Construct_UScriptStruct_FirstFractalParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FirstFractalParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FirstFractalParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FirstFractalParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FirstFractalParam()
	{
		if (!Z_Registration_Info_UScriptStruct_irstFractalParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_irstFractalParam.InnerSingleton, Z_Construct_UScriptStruct_FirstFractalParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_irstFractalParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CalcurateFirstFractal;
class UScriptStruct* FCalcurateFirstFractal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CalcurateFirstFractal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CalcurateFirstFractal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCalcurateFirstFractal, Z_Construct_UPackage__Script_GoodAfterNoon(), TEXT("CalcurateFirstFractal"));
	}
	return Z_Registration_Info_UScriptStruct_CalcurateFirstFractal.OuterSingleton;
}
template<> GOODAFTERNOON_API UScriptStruct* StaticStruct<FCalcurateFirstFractal>()
{
	return FCalcurateFirstFractal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FractalAllSteps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractalAllSteps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FractalAllSteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCalcurateFirstFractal>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewProp_FractalAllSteps_Inner = { "FractalAllSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFractalStep, METADATA_PARAMS(nullptr, 0) }; // 109673514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewProp_FractalAllSteps_MetaData[] = {
		{ "Category", "CalcurateFirstFractal" },
		{ "ModuleRelativePath", "Public/CalcurateFirstFractal.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewProp_FractalAllSteps = { "FractalAllSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCalcurateFirstFractal, FractalAllSteps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewProp_FractalAllSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewProp_FractalAllSteps_MetaData)) }; // 109673514
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewProp_FractalAllSteps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewProp_FractalAllSteps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoodAfterNoon,
		nullptr,
		&NewStructOps,
		"CalcurateFirstFractal",
		sizeof(FCalcurateFirstFractal),
		alignof(FCalcurateFirstFractal),
		Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCalcurateFirstFractal()
	{
		if (!Z_Registration_Info_UScriptStruct_CalcurateFirstFractal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CalcurateFirstFractal.InnerSingleton, Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CalcurateFirstFractal.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_CalcurateFirstFractal_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_CalcurateFirstFractal_h_Statics::ScriptStructInfo[] = {
		{ FFractalNode::StaticStruct, Z_Construct_UScriptStruct_FFractalNode_Statics::NewStructOps, TEXT("FractalNode"), &Z_Registration_Info_UScriptStruct_FractalNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFractalNode), 2219286532U) },
		{ FFractalStep::StaticStruct, Z_Construct_UScriptStruct_FFractalStep_Statics::NewStructOps, TEXT("FractalStep"), &Z_Registration_Info_UScriptStruct_FractalStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFractalStep), 109673514U) },
		{ FirstFractalParam::StaticStruct, Z_Construct_UScriptStruct_FirstFractalParam_Statics::NewStructOps, TEXT("irstFractalParam"), &Z_Registration_Info_UScriptStruct_irstFractalParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FirstFractalParam), 2964499771U) },
		{ FCalcurateFirstFractal::StaticStruct, Z_Construct_UScriptStruct_FCalcurateFirstFractal_Statics::NewStructOps, TEXT("CalcurateFirstFractal"), &Z_Registration_Info_UScriptStruct_CalcurateFirstFractal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCalcurateFirstFractal), 2931577680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_CalcurateFirstFractal_h_3655378615(TEXT("/Script/GoodAfterNoon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_CalcurateFirstFractal_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GoodAfterNoon_Source_GoodAfterNoon_Public_CalcurateFirstFractal_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
