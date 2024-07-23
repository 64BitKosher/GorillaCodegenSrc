// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaExternal
#include "System/Xml/Schema/XmlSchemaExternal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaAnnotation
  class XmlSchemaAnnotation;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaImport
  class XmlSchemaImport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaImport);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaImport*, "System.Xml.Schema", "XmlSchemaImport");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaImport
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaImport : public ::System::Xml::Schema::XmlSchemaExternal {
    public:
    // Writing base type padding for base size: 0x64 to desired offset: 0x68
    char ___base_padding[0x4] = {};
    public:
    // private System.String ns
    // Size: 0x8
    // Offset: 0x68
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaAnnotation annotation
    // Size: 0x8
    // Offset: 0x70
    ::System::Xml::Schema::XmlSchemaAnnotation* annotation;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaAnnotation*) == 0x8);
    public:
    // Get instance field reference: private System.String ns
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ns();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaAnnotation annotation
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaAnnotation*& dyn_annotation();
    // public System.String get_Namespace()
    // Offset: 0x4D9490C
    ::StringW get_Namespace();
    // public System.Void set_Namespace(System.String value)
    // Offset: 0x4D94914
    void set_Namespace(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x4D948EC
    // Implemented from: System.Xml.Schema.XmlSchemaExternal
    // Base method: System.Void XmlSchemaExternal::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaImport* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaImport::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaImport*, creationType>()));
    }
    // override System.Void AddAnnotation(System.Xml.Schema.XmlSchemaAnnotation annotation)
    // Offset: 0x4D9491C
    // Implemented from: System.Xml.Schema.XmlSchemaObject
    // Base method: System.Void XmlSchemaObject::AddAnnotation(System.Xml.Schema.XmlSchemaAnnotation annotation)
    void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);
  }; // System.Xml.Schema.XmlSchemaImport
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaImport), 112 + sizeof(::System::Xml::Schema::XmlSchemaAnnotation*)> __System_Xml_Schema_XmlSchemaImportSizeCheck;
  static_assert(sizeof(XmlSchemaImport) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaImport::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaImport::*)()>(&System::Xml::Schema::XmlSchemaImport::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaImport*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaImport::set_Namespace
// Il2CppName: set_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaImport::*)(::StringW)>(&System::Xml::Schema::XmlSchemaImport::set_Namespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaImport*), "set_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaImport::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaImport::AddAnnotation
// Il2CppName: AddAnnotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaImport::*)(::System::Xml::Schema::XmlSchemaAnnotation*)>(&System::Xml::Schema::XmlSchemaImport::AddAnnotation)> {
  static const MethodInfo* get() {
    static auto* annotation = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnnotation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaImport*), "AddAnnotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{annotation});
  }
};
