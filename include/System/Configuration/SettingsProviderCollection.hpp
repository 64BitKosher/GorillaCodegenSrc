// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.Provider.ProviderCollection
#include "System/Configuration/Provider/ProviderCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: SettingsProvider
  class SettingsProvider;
}
// Forward declaring namespace: System::Configuration::Provider
namespace System::Configuration::Provider {
  // Forward declaring type: ProviderBase
  class ProviderBase;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: SettingsProviderCollection
  class SettingsProviderCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::SettingsProviderCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::SettingsProviderCollection*, "System.Configuration", "SettingsProviderCollection");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.SettingsProviderCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class SettingsProviderCollection : public ::System::Configuration::Provider::ProviderCollection {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F56BC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsProviderCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsProviderCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsProviderCollection*, creationType>()));
    }
    // public System.Configuration.SettingsProvider get_Item(System.String name)
    // Offset: 0x4F56BFC
    ::System::Configuration::SettingsProvider* get_Item(::StringW name);
    // public override System.Void Add(System.Configuration.Provider.ProviderBase provider)
    // Offset: 0x4F56C34
    // Implemented from: System.Configuration.Provider.ProviderCollection
    // Base method: System.Void ProviderCollection::Add(System.Configuration.Provider.ProviderBase provider)
    void Add(::System::Configuration::Provider::ProviderBase* provider);
  }; // System.Configuration.SettingsProviderCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::SettingsProviderCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsProviderCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::SettingsProvider* (System::Configuration::SettingsProviderCollection::*)(::StringW)>(&System::Configuration::SettingsProviderCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsProviderCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingsProviderCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::SettingsProviderCollection::*)(::System::Configuration::Provider::ProviderBase*)>(&System::Configuration::SettingsProviderCollection::Add)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.Configuration.Provider", "ProviderBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsProviderCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};