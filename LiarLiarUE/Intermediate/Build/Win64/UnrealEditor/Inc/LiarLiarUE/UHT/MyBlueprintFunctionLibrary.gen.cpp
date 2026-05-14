// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LIARLIARUE_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
LIARLIARUE_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiarLiarUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyBlueprintFunctionLibrary **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary;
UClass* UMyBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UMyBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUMyBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
{
	return UMyBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyBlueprintFunctionLibrary constinit property declarations **************
// ********** End Class UMyBlueprintFunctionLibrary constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LiarLiarUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
	&UMyBlueprintFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
{
}
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton;
}
UMyBlueprintFunctionLibrary::UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyBlueprintFunctionLibrary);
UMyBlueprintFunctionLibrary::~UMyBlueprintFunctionLibrary() {}
// ********** End Class UMyBlueprintFunctionLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_MyBlueprintFunctionLibrary_h__Script_LiarLiarUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBlueprintFunctionLibrary, UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBlueprintFunctionLibrary), 2493820342U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_MyBlueprintFunctionLibrary_h__Script_LiarLiarUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_MyBlueprintFunctionLibrary_h__Script_LiarLiarUE_3101602880{
	TEXT("/Script/LiarLiarUE"),
	Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_MyBlueprintFunctionLibrary_h__Script_LiarLiarUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_stlyn_OneDrive_Desktop_2026_Projects_source_LiarLiarUE_Source_LiarLiarUE_Public_MyBlueprintFunctionLibrary_h__Script_LiarLiarUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
