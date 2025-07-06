// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Day05/Day05GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDay05GameMode() {}

// Begin Cross Module References
DAY05_API UClass* Z_Construct_UClass_ADay05GameMode();
DAY05_API UClass* Z_Construct_UClass_ADay05GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Day05();
// End Cross Module References

// Begin Class ADay05GameMode
void ADay05GameMode::StaticRegisterNativesADay05GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADay05GameMode);
UClass* Z_Construct_UClass_ADay05GameMode_NoRegister()
{
	return ADay05GameMode::StaticClass();
}
struct Z_Construct_UClass_ADay05GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Day05GameMode.h" },
		{ "ModuleRelativePath", "Day05GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADay05GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADay05GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Day05,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADay05GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADay05GameMode_Statics::ClassParams = {
	&ADay05GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADay05GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADay05GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADay05GameMode()
{
	if (!Z_Registration_Info_UClass_ADay05GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADay05GameMode.OuterSingleton, Z_Construct_UClass_ADay05GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADay05GameMode.OuterSingleton;
}
template<> DAY05_API UClass* StaticClass<ADay05GameMode>()
{
	return ADay05GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADay05GameMode);
ADay05GameMode::~ADay05GameMode() {}
// End Class ADay05GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qndjd_Desktop_coding_study_Unreal_Day05_Source_Day05_Day05GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADay05GameMode, ADay05GameMode::StaticClass, TEXT("ADay05GameMode"), &Z_Registration_Info_UClass_ADay05GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADay05GameMode), 3871146028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qndjd_Desktop_coding_study_Unreal_Day05_Source_Day05_Day05GameMode_h_2711143282(TEXT("/Script/Day05"),
	Z_CompiledInDeferFile_FID_Users_qndjd_Desktop_coding_study_Unreal_Day05_Source_Day05_Day05GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qndjd_Desktop_coding_study_Unreal_Day05_Source_Day05_Day05GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
