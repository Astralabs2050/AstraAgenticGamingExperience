// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/FSR2MoviePipelineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSR2MoviePipelineSettings() {}
// Cross Module References
	FSR2MOVIERENDERPIPELINE_API UEnum* Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality();
	UPackage* Z_Construct_UPackage__Script_FSR2MovieRenderPipeline();
	FSR2MOVIERENDERPIPELINE_API UClass* Z_Construct_UClass_UFSR2MoviePipelineSettings_NoRegister();
	FSR2MOVIERENDERPIPELINE_API UClass* Z_Construct_UClass_UFSR2MoviePipelineSettings();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting();
// End Cross Module References
	static UEnum* EFSR2MoviePipelineQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality, Z_Construct_UPackage__Script_FSR2MovieRenderPipeline(), TEXT("EFSR2MoviePipelineQuality"));
		}
		return Singleton;
	}
	template<> FSR2MOVIERENDERPIPELINE_API UEnum* StaticEnum<EFSR2MoviePipelineQuality>()
	{
		return EFSR2MoviePipelineQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFSR2MoviePipelineQuality(EFSR2MoviePipelineQuality_StaticEnum, TEXT("/Script/FSR2MovieRenderPipeline"), TEXT("EFSR2MoviePipelineQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Hash() { return 482900172U; }
	UEnum* Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FSR2MovieRenderPipeline();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFSR2MoviePipelineQuality"), 0, Get_Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFSR2MoviePipelineQuality::Unused", (int64)EFSR2MoviePipelineQuality::Unused },
				{ "EFSR2MoviePipelineQuality::Quality", (int64)EFSR2MoviePipelineQuality::Quality },
				{ "EFSR2MoviePipelineQuality::Balanced", (int64)EFSR2MoviePipelineQuality::Balanced },
				{ "EFSR2MoviePipelineQuality::Performance", (int64)EFSR2MoviePipelineQuality::Performance },
				{ "EFSR2MoviePipelineQuality::UltraPerformance", (int64)EFSR2MoviePipelineQuality::UltraPerformance },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Balanced.DisplayName", "Balanced" },
				{ "Balanced.Name", "EFSR2MoviePipelineQuality::Balanced" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FSR2MoviePipelineSettings.h" },
				{ "Performance.DisplayName", "Performance" },
				{ "Performance.Name", "EFSR2MoviePipelineQuality::Performance" },
				{ "Quality.DisplayName", "Quality" },
				{ "Quality.Name", "EFSR2MoviePipelineQuality::Quality" },
				{ "UltraPerformance.DisplayName", "UltraPerformance" },
				{ "UltraPerformance.Name", "EFSR2MoviePipelineQuality::UltraPerformance" },
				{ "Unused.Hidden", "" },
				{ "Unused.Name", "EFSR2MoviePipelineQuality::Unused" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FSR2MovieRenderPipeline,
				nullptr,
				"EFSR2MoviePipelineQuality",
				"EFSR2MoviePipelineQuality",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFSR2MoviePipelineSettings::StaticRegisterNativesUFSR2MoviePipelineSettings()
	{
	}
	UClass* Z_Construct_UClass_UFSR2MoviePipelineSettings_NoRegister()
	{
		return UFSR2MoviePipelineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FSR2Quality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FSR2Quality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FSR2Quality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineViewFamilySetting,
		(UObject* (*)())Z_Construct_UPackage__Script_FSR2MovieRenderPipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "FidelityFX Super Resolution 2.2 Settings" },
		{ "IncludePath", "FSR2MoviePipelineSettings.h" },
		{ "ModuleRelativePath", "Public/FSR2MoviePipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Quality Mode" },
		{ "ModuleRelativePath", "Public/FSR2MoviePipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality = { "FSR2Quality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2MoviePipelineSettings, FSR2Quality), Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality, METADATA_PARAMS(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSR2MoviePipelineSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::ClassParams = {
		&UFSR2MoviePipelineSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSR2MoviePipelineSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSR2MoviePipelineSettings, 31340402);
	template<> FSR2MOVIERENDERPIPELINE_API UClass* StaticClass<UFSR2MoviePipelineSettings>()
	{
		return UFSR2MoviePipelineSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSR2MoviePipelineSettings(Z_Construct_UClass_UFSR2MoviePipelineSettings, &UFSR2MoviePipelineSettings::StaticClass, TEXT("/Script/FSR2MovieRenderPipeline"), TEXT("UFSR2MoviePipelineSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSR2MoviePipelineSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
