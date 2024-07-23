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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlArrayAttribute
  class XmlArrayAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlArrayAttribute*, "System.Xml.Serialization", "XmlArrayAttribute");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlArrayAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class XmlArrayAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String elementName
    // Size: 0x8
    // Offset: 0x10
    ::StringW elementName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaForm form
    // Size: 0x4
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchemaForm form;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaForm) == 0x4);
    // private System.Boolean isNullable
    // Size: 0x1
    // Offset: 0x1C
    bool isNullable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isNullable and: ns
    char __padding2[0x3] = {};
    // private System.String ns
    // Size: 0x8
    // Offset: 0x20
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 order
    // Size: 0x4
    // Offset: 0x28
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String elementName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_elementName();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaForm form
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaForm& dyn_form();
    // Get instance field reference: private System.Boolean isNullable
    [[deprecated("Use field access instead!")]] bool& dyn_isNullable();
    // Get instance field reference: private System.String ns
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ns();
    // Get instance field reference: private System.Int32 order
    [[deprecated("Use field access instead!")]] int& dyn_order();
    // public System.String get_ElementName()
    // Offset: 0x4E49220
    ::StringW get_ElementName();
    // public System.Xml.Schema.XmlSchemaForm get_Form()
    // Offset: 0x4E49274
    ::System::Xml::Schema::XmlSchemaForm get_Form();
    // public System.Boolean get_IsNullable()
    // Offset: 0x4E4927C
    bool get_IsNullable();
    // public System.String get_Namespace()
    // Offset: 0x4E49284
    ::StringW get_Namespace();
    // public System.Int32 get_Order()
    // Offset: 0x4E4928C
    int get_Order();
    // System.Void AddKeyHash(System.Text.StringBuilder sb)
    // Offset: 0x4E49294
    void AddKeyHash(::System::Text::StringBuilder* sb);
  }; // System.Xml.Serialization.XmlArrayAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlArrayAttribute), 40 + sizeof(int)> __System_Xml_Serialization_XmlArrayAttributeSizeCheck;
  static_assert(sizeof(XmlArrayAttribute) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayAttribute::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlArrayAttribute::*)()>(&System::Xml::Serialization::XmlArrayAttribute::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayAttribute*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayAttribute::get_Form
// Il2CppName: get_Form
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaForm (System::Xml::Serialization::XmlArrayAttribute::*)()>(&System::Xml::Serialization::XmlArrayAttribute::get_Form)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayAttribute*), "get_Form", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayAttribute::get_IsNullable
// Il2CppName: get_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlArrayAttribute::*)()>(&System::Xml::Serialization::XmlArrayAttribute::get_IsNullable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayAttribute*), "get_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayAttribute::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlArrayAttribute::*)()>(&System::Xml::Serialization::XmlArrayAttribute::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayAttribute*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayAttribute::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlArrayAttribute::*)()>(&System::Xml::Serialization::XmlArrayAttribute::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayAttribute*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayAttribute::AddKeyHash
// Il2CppName: AddKeyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlArrayAttribute::*)(::System::Text::StringBuilder*)>(&System::Xml::Serialization::XmlArrayAttribute::AddKeyHash)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayAttribute*), "AddKeyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
