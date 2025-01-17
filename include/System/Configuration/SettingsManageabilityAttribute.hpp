// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Configuration.SettingsManageability
#include "System/Configuration/SettingsManageability.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: SettingsManageabilityAttribute
  class SettingsManageabilityAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::SettingsManageabilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::SettingsManageabilityAttribute*, "System.Configuration", "SettingsManageabilityAttribute");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.SettingsManageabilityAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class SettingsManageabilityAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor(System.Configuration.SettingsManageability manageability)
    // Offset: 0x4F5C94C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsManageabilityAttribute* New_ctor(::System::Configuration::SettingsManageability manageability) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsManageabilityAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsManageabilityAttribute*, creationType>(manageability)));
    }
    // public System.Configuration.SettingsManageability get_Manageability()
    // Offset: 0x4F5C950
    ::System::Configuration::SettingsManageability get_Manageability();
  }; // System.Configuration.SettingsManageabilityAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::SettingsManageabilityAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsManageabilityAttribute::get_Manageability
// Il2CppName: get_Manageability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::SettingsManageability (System::Configuration::SettingsManageabilityAttribute::*)()>(&System::Configuration::SettingsManageabilityAttribute::get_Manageability)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsManageabilityAttribute*), "get_Manageability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
