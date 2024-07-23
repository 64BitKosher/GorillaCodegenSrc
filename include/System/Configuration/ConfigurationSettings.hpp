// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NameValueCollection
  class NameValueCollection;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationSettings
  class ConfigurationSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::ConfigurationSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationSettings*, "System.Configuration", "ConfigurationSettings");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.ConfigurationSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfigurationSettings : public ::Il2CppObject {
    public:
    // System.Void .ctor()
    // Offset: 0x4F5BDA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigurationSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::ConfigurationSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigurationSettings*, creationType>()));
    }
    // static public System.Collections.Specialized.NameValueCollection get_AppSettings()
    // Offset: 0x4F5BDD8
    static ::System::Collections::Specialized::NameValueCollection* get_AppSettings();
    // static public System.Object GetConfig(System.String sectionName)
    // Offset: 0x4F5BE10
    static ::Il2CppObject* GetConfig(::StringW sectionName);
  }; // System.Configuration.ConfigurationSettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::ConfigurationSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::ConfigurationSettings::get_AppSettings
// Il2CppName: get_AppSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::NameValueCollection* (*)()>(&System::Configuration::ConfigurationSettings::get_AppSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSettings*), "get_AppSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationSettings::GetConfig
// Il2CppName: GetConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::StringW)>(&System::Configuration::ConfigurationSettings::GetConfig)> {
  static const MethodInfo* get() {
    static auto* sectionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSettings*), "GetConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sectionName});
  }
};
