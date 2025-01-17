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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializerNamespaces
  class XmlSerializerNamespaces;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
  // Forward declaring type: XmlSchemaAnnotation
  class XmlSchemaAnnotation;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlAttribute
  class XmlAttribute;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObject
  class XmlSchemaObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObject*, "System.Xml.Schema", "XmlSchemaObject");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaObject
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaObject : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 lineNum
    // Size: 0x4
    // Offset: 0x10
    int lineNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePos
    // Size: 0x4
    // Offset: 0x14
    int linePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String sourceUri
    // Size: 0x8
    // Offset: 0x18
    ::StringW sourceUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Serialization.XmlSerializerNamespaces namespaces
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Serialization::XmlSerializerNamespaces* namespaces;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlSerializerNamespaces*) == 0x8);
    // private System.Xml.Schema.XmlSchemaObject parent
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::XmlSchemaObject* parent;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObject*) == 0x8);
    // private System.Boolean isProcessing
    // Size: 0x1
    // Offset: 0x30
    bool isProcessing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 lineNum
    [[deprecated("Use field access instead!")]] int& dyn_lineNum();
    // Get instance field reference: private System.Int32 linePos
    [[deprecated("Use field access instead!")]] int& dyn_linePos();
    // Get instance field reference: private System.String sourceUri
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sourceUri();
    // Get instance field reference: private System.Xml.Serialization.XmlSerializerNamespaces namespaces
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlSerializerNamespaces*& dyn_namespaces();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObject parent
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaObject*& dyn_parent();
    // Get instance field reference: private System.Boolean isProcessing
    [[deprecated("Use field access instead!")]] bool& dyn_isProcessing();
    // public System.Int32 get_LineNumber()
    // Offset: 0x4D94C64
    int get_LineNumber();
    // public System.Void set_LineNumber(System.Int32 value)
    // Offset: 0x4D94C6C
    void set_LineNumber(int value);
    // public System.Int32 get_LinePosition()
    // Offset: 0x4D94C74
    int get_LinePosition();
    // public System.Void set_LinePosition(System.Int32 value)
    // Offset: 0x4D94C7C
    void set_LinePosition(int value);
    // public System.String get_SourceUri()
    // Offset: 0x4D94C84
    ::StringW get_SourceUri();
    // public System.Void set_SourceUri(System.String value)
    // Offset: 0x4D94C8C
    void set_SourceUri(::StringW value);
    // public System.Xml.Schema.XmlSchemaObject get_Parent()
    // Offset: 0x4D94C94
    ::System::Xml::Schema::XmlSchemaObject* get_Parent();
    // public System.Void set_Parent(System.Xml.Schema.XmlSchemaObject value)
    // Offset: 0x4D94C9C
    void set_Parent(::System::Xml::Schema::XmlSchemaObject* value);
    // public System.Xml.Serialization.XmlSerializerNamespaces get_Namespaces()
    // Offset: 0x4D8D544
    ::System::Xml::Serialization::XmlSerializerNamespaces* get_Namespaces();
    // public System.Void set_Namespaces(System.Xml.Serialization.XmlSerializerNamespaces value)
    // Offset: 0x4D94CA4
    void set_Namespaces(::System::Xml::Serialization::XmlSerializerNamespaces* value);
    // System.Void OnAdd(System.Xml.Schema.XmlSchemaObjectCollection container, System.Object item)
    // Offset: 0x4D94CAC
    void OnAdd(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::Il2CppObject* item);
    // System.Void OnRemove(System.Xml.Schema.XmlSchemaObjectCollection container, System.Object item)
    // Offset: 0x4D94CB0
    void OnRemove(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::Il2CppObject* item);
    // System.Void OnClear(System.Xml.Schema.XmlSchemaObjectCollection container)
    // Offset: 0x4D94CB4
    void OnClear(::System::Xml::Schema::XmlSchemaObjectCollection* container);
    // System.String get_IdAttribute()
    // Offset: 0x4D94CB8
    ::StringW get_IdAttribute();
    // System.Void set_IdAttribute(System.String value)
    // Offset: 0x4D94CC0
    void set_IdAttribute(::StringW value);
    // System.Void SetUnhandledAttributes(System.Xml.XmlAttribute[] moreAttributes)
    // Offset: 0x4D94CC4
    void SetUnhandledAttributes(::ArrayW<::System::Xml::XmlAttribute*> moreAttributes);
    // System.Void AddAnnotation(System.Xml.Schema.XmlSchemaAnnotation annotation)
    // Offset: 0x4D94CC8
    void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);
    // System.String get_NameAttribute()
    // Offset: 0x4D94CCC
    ::StringW get_NameAttribute();
    // System.Void set_NameAttribute(System.String value)
    // Offset: 0x4D94CD4
    void set_NameAttribute(::StringW value);
    // System.Boolean get_IsProcessing()
    // Offset: 0x4D94CD8
    bool get_IsProcessing();
    // System.Void set_IsProcessing(System.Boolean value)
    // Offset: 0x4D94CE0
    void set_IsProcessing(bool value);
    // System.Xml.Schema.XmlSchemaObject Clone()
    // Offset: 0x4D94CEC
    ::System::Xml::Schema::XmlSchemaObject* Clone();
    // protected System.Void .ctor()
    // Offset: 0x4D8CC68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaObject*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaObject
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaObject), 48 + sizeof(bool)> __System_Xml_Schema_XmlSchemaObjectSizeCheck;
  static_assert(sizeof(XmlSchemaObject) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::get_LineNumber
// Il2CppName: get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::set_LineNumber
// Il2CppName: set_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(int)>(&System::Xml::Schema::XmlSchemaObject::set_LineNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "set_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::get_LinePosition
// Il2CppName: get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::set_LinePosition
// Il2CppName: set_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(int)>(&System::Xml::Schema::XmlSchemaObject::set_LinePosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "set_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::get_SourceUri
// Il2CppName: get_SourceUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::get_SourceUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "get_SourceUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::set_SourceUri
// Il2CppName: set_SourceUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::StringW)>(&System::Xml::Schema::XmlSchemaObject::set_SourceUri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "set_SourceUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::get_Parent
// Il2CppName: get_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObject* (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::get_Parent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "get_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::set_Parent
// Il2CppName: set_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObject::set_Parent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "set_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::get_Namespaces
// Il2CppName: get_Namespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializerNamespaces* (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::get_Namespaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "get_Namespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::set_Namespaces
// Il2CppName: set_Namespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Serialization::XmlSerializerNamespaces*)>(&System::Xml::Schema::XmlSchemaObject::set_Namespaces)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlSerializerNamespaces")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "set_Namespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::OnAdd
// Il2CppName: OnAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::Il2CppObject*)>(&System::Xml::Schema::XmlSchemaObject::OnAdd)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "OnAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, item});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::OnRemove
// Il2CppName: OnRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::Il2CppObject*)>(&System::Xml::Schema::XmlSchemaObject::OnRemove)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "OnRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, item});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::OnClear
// Il2CppName: OnClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&System::Xml::Schema::XmlSchemaObject::OnClear)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "OnClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::get_IdAttribute
// Il2CppName: get_IdAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::get_IdAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "get_IdAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::set_IdAttribute
// Il2CppName: set_IdAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::StringW)>(&System::Xml::Schema::XmlSchemaObject::set_IdAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "set_IdAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::SetUnhandledAttributes
// Il2CppName: SetUnhandledAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::ArrayW<::System::Xml::XmlAttribute*>)>(&System::Xml::Schema::XmlSchemaObject::SetUnhandledAttributes)> {
  static const MethodInfo* get() {
    static auto* moreAttributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "SetUnhandledAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{moreAttributes});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::AddAnnotation
// Il2CppName: AddAnnotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Schema::XmlSchemaAnnotation*)>(&System::Xml::Schema::XmlSchemaObject::AddAnnotation)> {
  static const MethodInfo* get() {
    static auto* annotation = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnnotation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "AddAnnotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{annotation});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::get_NameAttribute
// Il2CppName: get_NameAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::get_NameAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "get_NameAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::set_NameAttribute
// Il2CppName: set_NameAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(::StringW)>(&System::Xml::Schema::XmlSchemaObject::set_NameAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "set_NameAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::get_IsProcessing
// Il2CppName: get_IsProcessing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::get_IsProcessing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "get_IsProcessing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::set_IsProcessing
// Il2CppName: set_IsProcessing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObject::*)(bool)>(&System::Xml::Schema::XmlSchemaObject::set_IsProcessing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "set_IsProcessing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObject* (System::Xml::Schema::XmlSchemaObject::*)()>(&System::Xml::Schema::XmlSchemaObject::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObject*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
