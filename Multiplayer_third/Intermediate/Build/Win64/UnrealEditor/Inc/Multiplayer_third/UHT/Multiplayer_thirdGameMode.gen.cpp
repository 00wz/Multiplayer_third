// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Multiplayer_third/Multiplayer_thirdGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayer_thirdGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MULTIPLAYER_THIRD_API UClass* Z_Construct_UClass_AMultiplayer_thirdGameMode();
	MULTIPLAYER_THIRD_API UClass* Z_Construct_UClass_AMultiplayer_thirdGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Multiplayer_third();
// End Cross Module References
	void AMultiplayer_thirdGameMode::StaticRegisterNativesAMultiplayer_thirdGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayer_thirdGameMode);
	UClass* Z_Construct_UClass_AMultiplayer_thirdGameMode_NoRegister()
	{
		return AMultiplayer_thirdGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Multiplayer_third,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Multiplayer_thirdGameMode.h" },
		{ "ModuleRelativePath", "Multiplayer_thirdGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayer_thirdGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics::ClassParams = {
		&AMultiplayer_thirdGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMultiplayer_thirdGameMode()
	{
		if (!Z_Registration_Info_UClass_AMultiplayer_thirdGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayer_thirdGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayer_thirdGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayer_thirdGameMode.OuterSingleton;
	}
	template<> MULTIPLAYER_THIRD_API UClass* StaticClass<AMultiplayer_thirdGameMode>()
	{
		return AMultiplayer_thirdGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayer_thirdGameMode);
	AMultiplayer_thirdGameMode::~AMultiplayer_thirdGameMode() {}
	struct Z_CompiledInDeferFile_FID_Multiplayer_third_Source_Multiplayer_third_Multiplayer_thirdGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Multiplayer_third_Source_Multiplayer_third_Multiplayer_thirdGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayer_thirdGameMode, AMultiplayer_thirdGameMode::StaticClass, TEXT("AMultiplayer_thirdGameMode"), &Z_Registration_Info_UClass_AMultiplayer_thirdGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayer_thirdGameMode), 2840680461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Multiplayer_third_Source_Multiplayer_third_Multiplayer_thirdGameMode_h_1904943446(TEXT("/Script/Multiplayer_third"),
		Z_CompiledInDeferFile_FID_Multiplayer_third_Source_Multiplayer_third_Multiplayer_thirdGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Multiplayer_third_Source_Multiplayer_third_Multiplayer_thirdGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
