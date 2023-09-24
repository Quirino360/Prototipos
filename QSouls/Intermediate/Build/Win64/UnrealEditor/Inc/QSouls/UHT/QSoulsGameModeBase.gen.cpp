// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QSouls/QSoulsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQSoulsGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	QSOULS_API UClass* Z_Construct_UClass_AQSoulsGameModeBase();
	QSOULS_API UClass* Z_Construct_UClass_AQSoulsGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QSouls();
// End Cross Module References
	void AQSoulsGameModeBase::StaticRegisterNativesAQSoulsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQSoulsGameModeBase);
	UClass* Z_Construct_UClass_AQSoulsGameModeBase_NoRegister()
	{
		return AQSoulsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AQSoulsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQSoulsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_QSouls,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQSoulsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "QSoulsGameModeBase.h" },
		{ "ModuleRelativePath", "QSoulsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQSoulsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQSoulsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQSoulsGameModeBase_Statics::ClassParams = {
		&AQSoulsGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AQSoulsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQSoulsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQSoulsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AQSoulsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQSoulsGameModeBase.OuterSingleton, Z_Construct_UClass_AQSoulsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQSoulsGameModeBase.OuterSingleton;
	}
	template<> QSOULS_API UClass* StaticClass<AQSoulsGameModeBase>()
	{
		return AQSoulsGameModeBase::StaticClass();
	}
	AQSoulsGameModeBase::AQSoulsGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQSoulsGameModeBase);
	AQSoulsGameModeBase::~AQSoulsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_School_Unreal_Prototipos_QSouls_Source_QSouls_QSoulsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_School_Unreal_Prototipos_QSouls_Source_QSouls_QSoulsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQSoulsGameModeBase, AQSoulsGameModeBase::StaticClass, TEXT("AQSoulsGameModeBase"), &Z_Registration_Info_UClass_AQSoulsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQSoulsGameModeBase), 2673695340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_School_Unreal_Prototipos_QSouls_Source_QSouls_QSoulsGameModeBase_h_1464915404(TEXT("/Script/QSouls"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_School_Unreal_Prototipos_QSouls_Source_QSouls_QSoulsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_School_Unreal_Prototipos_QSouls_Source_QSouls_QSoulsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
