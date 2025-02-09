// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstraAIAgent/Public/AIAgentRequestComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIAgentRequestComponent() {}
// Cross Module References
	ASTRAAIAGENT_API UClass* Z_Construct_UClass_UAIAgentRequestComponent_NoRegister();
	ASTRAAIAGENT_API UClass* Z_Construct_UClass_UAIAgentRequestComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AstraAIAgent();
// End Cross Module References
	DEFINE_FUNCTION(UAIAgentRequestComponent::execCheckAIAgentStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckAIAgentStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIAgentRequestComponent::execSpeak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Speak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIAgentRequestComponent::execStartAIAgent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAIAgent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIAgentRequestComponent::execSendRequestToFlaskServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendRequestToFlaskServer();
		P_NATIVE_END;
	}
	void UAIAgentRequestComponent::StaticRegisterNativesUAIAgentRequestComponent()
	{
		UClass* Class = UAIAgentRequestComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAIAgentStatus", &UAIAgentRequestComponent::execCheckAIAgentStatus },
			{ "SendRequestToFlaskServer", &UAIAgentRequestComponent::execSendRequestToFlaskServer },
			{ "Speak", &UAIAgentRequestComponent::execSpeak },
			{ "StartAIAgent", &UAIAgentRequestComponent::execStartAIAgent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIAgentRequestComponent_CheckAIAgentStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAgentRequestComponent_CheckAIAgentStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI Agent" },
		{ "Comment", "// Check on ai agent current status. Mainly for checking if it has started speaking or not\n" },
		{ "ModuleRelativePath", "Public/AIAgentRequestComponent.h" },
		{ "ToolTip", "Check on ai agent current status. Mainly for checking if it has started speaking or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAgentRequestComponent_CheckAIAgentStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAgentRequestComponent, nullptr, "CheckAIAgentStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAgentRequestComponent_CheckAIAgentStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAgentRequestComponent_CheckAIAgentStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAgentRequestComponent_CheckAIAgentStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIAgentRequestComponent_CheckAIAgentStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIAgentRequestComponent_SendRequestToFlaskServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAgentRequestComponent_SendRequestToFlaskServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI Agent" },
		{ "Comment", "// Handle request\n" },
		{ "ModuleRelativePath", "Public/AIAgentRequestComponent.h" },
		{ "ToolTip", "Handle request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAgentRequestComponent_SendRequestToFlaskServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAgentRequestComponent, nullptr, "SendRequestToFlaskServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAgentRequestComponent_SendRequestToFlaskServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAgentRequestComponent_SendRequestToFlaskServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAgentRequestComponent_SendRequestToFlaskServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIAgentRequestComponent_SendRequestToFlaskServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIAgentRequestComponent_Speak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAgentRequestComponent_Speak_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI Agent" },
		{ "Comment", "// Handle user speaking with the ai agent \n" },
		{ "ModuleRelativePath", "Public/AIAgentRequestComponent.h" },
		{ "ToolTip", "Handle user speaking with the ai agent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAgentRequestComponent_Speak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAgentRequestComponent, nullptr, "Speak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAgentRequestComponent_Speak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAgentRequestComponent_Speak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAgentRequestComponent_Speak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIAgentRequestComponent_Speak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIAgentRequestComponent_StartAIAgent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAgentRequestComponent_StartAIAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI Agent" },
		{ "Comment", "// Handle ai agent introduction\n" },
		{ "ModuleRelativePath", "Public/AIAgentRequestComponent.h" },
		{ "ToolTip", "Handle ai agent introduction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAgentRequestComponent_StartAIAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAgentRequestComponent, nullptr, "StartAIAgent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAgentRequestComponent_StartAIAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAgentRequestComponent_StartAIAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAgentRequestComponent_StartAIAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIAgentRequestComponent_StartAIAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIAgentRequestComponent_NoRegister()
	{
		return UAIAgentRequestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAIAgentRequestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIAgentRequestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AstraAIAgent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIAgentRequestComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIAgentRequestComponent_CheckAIAgentStatus, "CheckAIAgentStatus" }, // 1362976473
		{ &Z_Construct_UFunction_UAIAgentRequestComponent_SendRequestToFlaskServer, "SendRequestToFlaskServer" }, // 2906200331
		{ &Z_Construct_UFunction_UAIAgentRequestComponent_Speak, "Speak" }, // 1668653800
		{ &Z_Construct_UFunction_UAIAgentRequestComponent_StartAIAgent, "StartAIAgent" }, // 737111388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIAgentRequestComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AIAgentRequestComponent.h" },
		{ "ModuleRelativePath", "Public/AIAgentRequestComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIAgentRequestComponent_Statics::NewProp_RequestStatus_MetaData[] = {
		{ "Category", "AI Agent" },
		{ "Comment", "// Current status\n" },
		{ "ModuleRelativePath", "Public/AIAgentRequestComponent.h" },
		{ "ToolTip", "Current status" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAIAgentRequestComponent_Statics::NewProp_RequestStatus = { "RequestStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIAgentRequestComponent, RequestStatus), METADATA_PARAMS(Z_Construct_UClass_UAIAgentRequestComponent_Statics::NewProp_RequestStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIAgentRequestComponent_Statics::NewProp_RequestStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIAgentRequestComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAgentRequestComponent_Statics::NewProp_RequestStatus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIAgentRequestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIAgentRequestComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIAgentRequestComponent_Statics::ClassParams = {
		&UAIAgentRequestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIAgentRequestComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIAgentRequestComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIAgentRequestComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIAgentRequestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIAgentRequestComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIAgentRequestComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIAgentRequestComponent, 3102391365);
	template<> ASTRAAIAGENT_API UClass* StaticClass<UAIAgentRequestComponent>()
	{
		return UAIAgentRequestComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIAgentRequestComponent(Z_Construct_UClass_UAIAgentRequestComponent, &UAIAgentRequestComponent::StaticClass, TEXT("/Script/AstraAIAgent"), TEXT("UAIAgentRequestComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIAgentRequestComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
