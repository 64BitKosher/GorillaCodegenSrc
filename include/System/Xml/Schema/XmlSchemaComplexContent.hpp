// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaContentModel
#include "System/Xml/Schema/XmlSchemaContentModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaContent
  class XmlSchemaContent;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaComplexContent
  class XmlSchemaComplexContent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexContent*, "System.Xml.Schema", "XmlSchemaComplexContent");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x5A
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaComplexContent
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaComplexContent : public ::System::Xml::Schema::XmlSchemaContentModel {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaContent content
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::Schema::XmlSchemaContent* content;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaContent*) == 0x8);
    // private System.Boolean isMixed
    // Size: 0x1
    // Offset: 0x58
    bool isMixed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasMixedAttribute
    // Size: 0x1
    // Offset: 0x59
    bool hasMixedAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Xml.Schema.XmlSchemaContent content
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaContent*& dyn_content();
    // Get instance field reference: private System.Boolean isMixed
    [[deprecated("Use field access instead!")]] bool& dyn_isMixed();
    // Get instance field reference: private System.Boolean hasMixedAttribute
    [[deprecated("Use field access instead!")]] bool& dyn_hasMixedAttribute();
    // public System.Boolean get_IsMixed()
    // Offset: 0x4D90B9C
    bool get_IsMixed();
    // public System.Void set_IsMixed(System.Boolean value)
    // Offset: 0x4D90BA4
    void set_IsMixed(bool value);
    // System.Boolean get_HasMixedAttribute()
    // Offset: 0x4D90BC8
    bool get_HasMixedAttribute();
    // public override System.Xml.Schema.XmlSchemaContent get_Content()
    // Offset: 0x4D90BB8
    // Implemented from: System.Xml.Schema.XmlSchemaContentModel
    // Base method: System.Xml.Schema.XmlSchemaContent XmlSchemaContentModel::get_Content()
    ::System::Xml::Schema::XmlSchemaContent* get_Content();
    // public override System.Void set_Content(System.Xml.Schema.XmlSchemaContent value)
    // Offset: 0x4D90BC0
    // Implemented from: System.Xml.Schema.XmlSchemaContentModel
    // Base method: System.Void XmlSchemaContentModel::set_Content(System.Xml.Schema.XmlSchemaContent value)
    void set_Content(::System::Xml::Schema::XmlSchemaContent* value);
    // public System.Void .ctor()
    // Offset: 0x4D90BD0
    // Implemented from: System.Xml.Schema.XmlSchemaContentModel
    // Base method: System.Void XmlSchemaContentModel::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaComplexContent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaComplexContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaComplexContent*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaComplexContent
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaComplexContent), 89 + sizeof(bool)> __System_Xml_Schema_XmlSchemaComplexContentSizeCheck;
  static_assert(sizeof(XmlSchemaComplexContent) == 0x5A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContent::get_IsMixed
// Il2CppName: get_IsMixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaComplexContent::*)()>(&System::Xml::Schema::XmlSchemaComplexContent::get_IsMixed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContent*), "get_IsMixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContent::set_IsMixed
// Il2CppName: set_IsMixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContent::*)(bool)>(&System::Xml::Schema::XmlSchemaComplexContent::set_IsMixed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContent*), "set_IsMixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContent::get_HasMixedAttribute
// Il2CppName: get_HasMixedAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaComplexContent::*)()>(&System::Xml::Schema::XmlSchemaComplexContent::get_HasMixedAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContent*), "get_HasMixedAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContent::get_Content
// Il2CppName: get_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContent* (System::Xml::Schema::XmlSchemaComplexContent::*)()>(&System::Xml::Schema::XmlSchemaComplexContent::get_Content)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContent*), "get_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContent::set_Content
// Il2CppName: set_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContent::*)(::System::Xml::Schema::XmlSchemaContent*)>(&System::Xml::Schema::XmlSchemaComplexContent::set_Content)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaContent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContent*), "set_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
