// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: SettingsProviderAttribute
  class SettingsProviderAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::SettingsProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::SettingsProviderAttribute*, "System.Configuration", "SettingsProviderAttribute");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.SettingsProviderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class SettingsProviderAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor(System.String providerTypeName)
    // Offset: 0x4F5CC28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsProviderAttribute* New_ctor(::StringW providerTypeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsProviderAttribute*, creationType>(providerTypeName)));
    }
    // public System.Void .ctor(System.Type providerType)
    // Offset: 0x4F5CC2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsProviderAttribute* New_ctor(::System::Type* providerType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsProviderAttribute*, creationType>(providerType)));
    }
    // public System.String get_ProviderTypeName()
    // Offset: 0x4F5CC30
    ::StringW get_ProviderTypeName();
  }; // System.Configuration.SettingsProviderAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::SettingsProviderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsProviderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsProviderAttribute::get_ProviderTypeName
// Il2CppName: get_ProviderTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Configuration::SettingsProviderAttribute::*)()>(&System::Configuration::SettingsProviderAttribute::get_ProviderTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsProviderAttribute*), "get_ProviderTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
