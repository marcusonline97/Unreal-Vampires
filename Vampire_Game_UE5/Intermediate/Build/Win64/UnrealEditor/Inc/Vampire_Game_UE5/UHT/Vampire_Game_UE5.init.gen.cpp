// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVampire_Game_UE5_init() {}
	VAMPIRE_GAME_UE5_API UFunction* Z_Construct_UDelegateFunction_Vampire_Game_UE5_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Vampire_Game_UE5;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Vampire_Game_UE5()
	{
		if (!Z_Registration_Info_UPackage__Script_Vampire_Game_UE5.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Vampire_Game_UE5_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Vampire_Game_UE5",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB675B891,
				0x55D5F810,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Vampire_Game_UE5.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Vampire_Game_UE5.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Vampire_Game_UE5(Z_Construct_UPackage__Script_Vampire_Game_UE5, TEXT("/Script/Vampire_Game_UE5"), Z_Registration_Info_UPackage__Script_Vampire_Game_UE5, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB675B891, 0x55D5F810));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
