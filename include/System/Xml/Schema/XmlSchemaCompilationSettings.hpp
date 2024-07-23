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
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaCompilationSettings
  class XmlSchemaCompilationSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaCompilationSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaCompilationSettings*, "System.Xml.Schema", "XmlSchemaCompilationSettings");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaCompilationSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaCompilationSettings : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean enableUpaCheck
    // Size: 0x1
    // Offset: 0x10
    bool enableUpaCheck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return enableUpaCheck;
    }
    // Get instance field reference: private System.Boolean enableUpaCheck
    [[deprecated("Use field access instead!")]] bool& dyn_enableUpaCheck();
    // public System.Void .ctor()
    // Offset: 0x4D90B74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaCompilationSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaCompilationSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaCompilationSettings*, creationType>()));
    }
    // public System.Boolean get_EnableUpaCheck()
    // Offset: 0x4D90B94
    bool get_EnableUpaCheck();
  }; // System.Xml.Schema.XmlSchemaCompilationSettings
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaCompilationSettings), 16 + sizeof(bool)> __System_Xml_Schema_XmlSchemaCompilationSettingsSizeCheck;
  static_assert(sizeof(XmlSchemaCompilationSettings) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaCompilationSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaCompilationSettings::get_EnableUpaCheck
// Il2CppName: get_EnableUpaCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaCompilationSettings::*)()>(&System::Xml::Schema::XmlSchemaCompilationSettings::get_EnableUpaCheck)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaCompilationSettings*), "get_EnableUpaCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
