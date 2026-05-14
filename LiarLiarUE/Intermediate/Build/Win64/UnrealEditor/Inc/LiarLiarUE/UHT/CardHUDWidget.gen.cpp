// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardHUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCardHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
LIARLIARUE_API UClass* Z_Construct_UClass_UCardHUDWidget();
LIARLIARUE_API UClass* Z_Construct_UClass_UCardHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LiarLiarUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCardHUDWidget ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCardHUDWidget;
UClass* UCardHUDWidget::GetPrivateStaticClass()
{
	using TClass = UCardHUDWidget;
	if (!Z_Registration_Info_UClass_UCardHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CardHUDWidget"),
			Z_Registration_Info_UClass_UCardHUDWidget.InnerSingleton,
			StaticRegisterNativesUCardHUDWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCardHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCardHUDWidget_NoRegister()
{
	return UCardHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCardHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CardHUDWidget.h" },
		{ "ModuleRelativePath", "Public/CardHUDWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCardHUDWidget constinit property declarations ***************************
// ********** End Class UCardHUDWidget constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCardHUDWidget_Statics
UObject* (*const Z_Construct_UClass_UCardHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LiarLiarUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardHUDWidget_Statics::ClassParams = {
	&UCardHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardHUDWidget_Statics::Class_MetaDataParams)
};
void UCardHUDWidget::StaticRegisterNativesUCardHUDWidget()
{
}
UClass* Z_Construct_UClass_UCardHUDWidget()
{
	if (!Z_Registration_Info_UClass_UCardHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardHUDWidget.OuterSingleton, Z_Construct_UClass_UCardHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCardHUDWidget.OuterSingleton;
}
UCardHUDWidget::UCardHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCardHUDWidget);
UCardHUDWidget::~UCardHUDWidget() {}
// ********** End Class UCardHUDWidget *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_CardHUDWidget_h__Script_LiarLiarUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCardHUDWidget, UCardHUDWidget::StaticClass, TEXT("UCardHUDWidget"), &Z_Registration_Info_UClass_UCardHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardHUDWidget), 3912042477U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_CardHUDWidget_h__Script_LiarLiarUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_CardHUDWidget_h__Script_LiarLiarUE_1289048608{
	TEXT("/Script/LiarLiarUE"),
	Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_CardHUDWidget_h__Script_LiarLiarUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_CardHUDWidget_h__Script_LiarLiarUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
