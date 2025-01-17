// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Xml.Schema.XmlSchemaForm
#include "System/Xml/Schema/XmlSchemaForm.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlArrayItemAttribute
  class XmlArrayItemAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlArrayItemAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlArrayItemAttribute*, "System.Xml.Serialization", "XmlArrayItemAttribute");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlArrayItemAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class XmlArrayItemAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String dataType
    // Size: 0x8
    // Offset: 0x10
    ::StringW dataType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String elementName
    // Size: 0x8
    // Offset: 0x18
    ::StringW elementName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaForm form
    // Size: 0x4
    // Offset: 0x20
    ::System::Xml::Schema::XmlSchemaForm form;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaForm) == 0x4);
    // Padding between fields: form and: ns
    char __padding2[0x4] = {};
    // private System.String ns
    // Size: 0x8
    // Offset: 0x28
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean isNullable
    // Size: 0x1
    // Offset: 0x30
    bool isNullable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isNullableSpecified
    // Size: 0x1
    // Offset: 0x31
    bool isNullableSpecified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isNullableSpecified and: nestingLevel
    char __padding5[0x2] = {};
    // private System.Int32 nestingLevel
    // Size: 0x4
    // Offset: 0x34
    int nestingLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Type type
    // Size: 0x8
    // Offset: 0x38
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.String dataType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_dataType();
    // Get instance field reference: private System.String elementName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_elementName();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaForm form
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaForm& dyn_form();
    // Get instance field reference: private System.String ns
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ns();
    // Get instance field reference: private System.Boolean isNullable
    [[deprecated("Use field access instead!")]] bool& dyn_isNullable();
    // Get instance field reference: private System.Boolean isNullableSpecified
    [[deprecated("Use field access instead!")]] bool& dyn_isNullableSpecified();
    // Get instance field reference: private System.Int32 nestingLevel
    [[deprecated("Use field access instead!")]] int& dyn_nestingLevel();
    // Get instance field reference: private System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.String get_DataType()
    // Offset: 0x4E493B4
    ::StringW get_DataType();
    // public System.String get_ElementName()
    // Offset: 0x4E49408
    ::StringW get_ElementName();
    // public System.Xml.Schema.XmlSchemaForm get_Form()
    // Offset: 0x4E4945C
    ::System::Xml::Schema::XmlSchemaForm get_Form();
    // public System.String get_Namespace()
    // Offset: 0x4E49464
    ::StringW get_Namespace();
    // public System.Boolean get_IsNullable()
    // Offset: 0x4E4946C
    bool get_IsNullable();
    // System.Boolean get_IsNullableSpecified()
    // Offset: 0x4E49474
    bool get_IsNullableSpecified();
    // public System.Type get_Type()
    // Offset: 0x4E4947C
    ::System::Type* get_Type();
    // public System.Int32 get_NestingLevel()
    // Offset: 0x4E49484
    int get_NestingLevel();
    // System.Void AddKeyHash(System.Text.StringBuilder sb)
    // Offset: 0x4E4948C
    void AddKeyHash(::System::Text::StringBuilder* sb);
  }; // System.Xml.Serialization.XmlArrayItemAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlArrayItemAttribute), 56 + sizeof(::System::Type*)> __System_Xml_Serialization_XmlArrayItemAttributeSizeCheck;
  static_assert(sizeof(XmlArrayItemAttribute) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::get_DataType
// Il2CppName: get_DataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlArrayItemAttribute::*)()>(&System::Xml::Serialization::XmlArrayItemAttribute::get_DataType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "get_DataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlArrayItemAttribute::*)()>(&System::Xml::Serialization::XmlArrayItemAttribute::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::get_Form
// Il2CppName: get_Form
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaForm (System::Xml::Serialization::XmlArrayItemAttribute::*)()>(&System::Xml::Serialization::XmlArrayItemAttribute::get_Form)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "get_Form", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlArrayItemAttribute::*)()>(&System::Xml::Serialization::XmlArrayItemAttribute::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::get_IsNullable
// Il2CppName: get_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlArrayItemAttribute::*)()>(&System::Xml::Serialization::XmlArrayItemAttribute::get_IsNullable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "get_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::get_IsNullableSpecified
// Il2CppName: get_IsNullableSpecified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlArrayItemAttribute::*)()>(&System::Xml::Serialization::XmlArrayItemAttribute::get_IsNullableSpecified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "get_IsNullableSpecified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Serialization::XmlArrayItemAttribute::*)()>(&System::Xml::Serialization::XmlArrayItemAttribute::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::get_NestingLevel
// Il2CppName: get_NestingLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlArrayItemAttribute::*)()>(&System::Xml::Serialization::XmlArrayItemAttribute::get_NestingLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "get_NestingLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttribute::AddKeyHash
// Il2CppName: AddKeyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlArrayItemAttribute::*)(::System::Text::StringBuilder*)>(&System::Xml::Serialization::XmlArrayItemAttribute::AddKeyHash)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttribute*), "AddKeyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
