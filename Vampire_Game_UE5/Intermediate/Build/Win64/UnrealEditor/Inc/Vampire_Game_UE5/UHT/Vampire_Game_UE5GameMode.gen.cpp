// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vampire_Game_UE5/Vampire_Game_UE5GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVampire_Game_UE5GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Vampire_Game_UE5();
VAMPIRE_GAME_UE5_API UClass* Z_Construct_UClass_AVampire_Game_UE5GameMode();
VAMPIRE_GAME_UE5_API UClass* Z_Construct_UClass_AVampire_Game_UE5GameMode_NoRegister();
// End Cross Module References

// Begin Class AVampire_Game_UE5GameMode
void AVampire_Game_UE5GameMode::StaticRegisterNativesAVampire_Game_UE5GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVampire_Game_UE5GameMode);
UClass* Z_Construct_UClass_AVampire_Game_UE5GameMode_NoRegister()
{
	return AVampire_Game_UE5GameMode::StaticClass();
}
struct Z_Construct_UClass_AVampire_Game_UE5GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Vampire_Game_UE5GameMode.h" },
		{ "ModuleRelativePath", "Vampire_Game_UE5GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVampire_Game_UE5GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVampire_Game_UE5GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Vampire_Game_UE5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVampire_Game_UE5GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVampire_Game_UE5GameMode_Statics::ClassParams = {
	&AVampire_Game_UE5GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVampire_Game_UE5GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AVampire_Game_UE5GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVampire_Game_UE5GameMode()
{
	if (!Z_Registration_Info_UClass_AVampire_Game_UE5GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVampire_Game_UE5GameMode.OuterSingleton, Z_Construct_UClass_AVampire_Game_UE5GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVampire_Game_UE5GameMode.OuterSingleton;
}
template<> VAMPIRE_GAME_UE5_API UClass* StaticClass<AVampire_Game_UE5GameMode>()
{
	return AVampire_Game_UE5GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVampire_Game_UE5GameMode);
AVampire_Game_UE5GameMode::~AVampire_Game_UE5GameMode() {}
// End Class AVampire_Game_UE5GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_Projects_Vampire_Game_UE5_Source_Vampire_Game_UE5_Vampire_Game_UE5GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVampire_Game_UE5GameMode, AVampire_Game_UE5GameMode::StaticClass, TEXT("AVampire_Game_UE5GameMode"), &Z_Registration_Info_UClass_AVampire_Game_UE5GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVampire_Game_UE5GameMode), 561736753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_Projects_Vampire_Game_UE5_Source_Vampire_Game_UE5_Vampire_Game_UE5GameMode_h_2143996851(TEXT("/Script/Vampire_Game_UE5"),
	Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_Projects_Vampire_Game_UE5_Source_Vampire_Game_UE5_Vampire_Game_UE5GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_Projects_Vampire_Game_UE5_Source_Vampire_Game_UE5_Vampire_Game_UE5GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
