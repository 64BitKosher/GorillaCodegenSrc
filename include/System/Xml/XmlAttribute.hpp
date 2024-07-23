// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlNode
#include "System/Xml/XmlNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlName
  class XmlName;
  // Forward declaring type: XmlLinkedNode
  class XmlLinkedNode;
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlElement
  class XmlElement;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlWriter
  class XmlWriter;
  // Forward declaring type: XmlSpace
  struct XmlSpace;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: IXmlSchemaInfo
  class IXmlSchemaInfo;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlAttribute
  class XmlAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAttribute*, "System.Xml", "XmlAttribute");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlAttribute : public ::System::Xml::XmlNode {
    public:
    public:
    // private System.Xml.XmlName name
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlName*) == 0x8);
    // private System.Xml.XmlLinkedNode lastChild
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlLinkedNode* lastChild;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlLinkedNode*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Xml::XmlNode*
    constexpr operator ::System::Xml::XmlNode*() const noexcept = delete;
    // Get instance field reference: private System.Xml.XmlName name
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlName*& dyn_name();
    // Get instance field reference: private System.Xml.XmlLinkedNode lastChild
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlLinkedNode*& dyn_lastChild();
    // System.Void .ctor(System.Xml.XmlName name, System.Xml.XmlDocument doc)
    // Offset: 0x4E0BB5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAttribute* New_ctor(::System::Xml::XmlName* name, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAttribute*, creationType>(name, doc)));
    }
    // System.Int32 get_LocalNameHash()
    // Offset: 0x4E0BD4C
    int get_LocalNameHash();
    // protected internal System.Void .ctor(System.String prefix, System.String localName, System.String namespaceURI, System.Xml.XmlDocument doc)
    // Offset: 0x4E0BD68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAttribute* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAttribute*, creationType>(prefix, localName, namespaceURI, doc)));
    }
    // System.Xml.XmlName get_XmlName()
    // Offset: 0x4E0BEB8
    ::System::Xml::XmlName* get_XmlName();
    // System.Void set_XmlName(System.Xml.XmlName value)
    // Offset: 0x4E0BEC0
    void set_XmlName(::System::Xml::XmlName* value);
    // System.Boolean PrepareOwnerElementInElementIdAttrMap()
    // Offset: 0x4E0C160
    bool PrepareOwnerElementInElementIdAttrMap();
    // System.Void ResetOwnerElementInElementIdAttrMap(System.String oldInnerText)
    // Offset: 0x4E0C210
    void ResetOwnerElementInElementIdAttrMap(::StringW oldInnerText);
    // public System.Boolean get_Specified()
    // Offset: 0x4E0C6D0
    bool get_Specified();
    // public System.Xml.XmlElement get_OwnerElement()
    // Offset: 0x4E0C960
    ::System::Xml::XmlElement* get_OwnerElement();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x4E0BEC8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // public override System.Xml.XmlNode get_ParentNode()
    // Offset: 0x4E0BF90
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::get_ParentNode()
    ::System::Xml::XmlNode* get_ParentNode();
    // public override System.String get_Name()
    // Offset: 0x4E0BF98
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x4E0BFB4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_NamespaceURI()
    // Offset: 0x4E0BFD0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_NamespaceURI()
    ::StringW get_NamespaceURI();
    // public override System.String get_Prefix()
    // Offset: 0x4E0BFEC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Prefix()
    ::StringW get_Prefix();
    // public override System.Void set_Prefix(System.String value)
    // Offset: 0x4E0C008
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_Prefix(System.String value)
    void set_Prefix(::StringW value);
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x4E0C0B0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Xml.XmlDocument get_OwnerDocument()
    // Offset: 0x4E0C0B8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlDocument XmlNode::get_OwnerDocument()
    ::System::Xml::XmlDocument* get_OwnerDocument();
    // public override System.String get_Value()
    // Offset: 0x4E0C0D4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Value()
    ::StringW get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x4E0C0E4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_Value(System.String value)
    void set_Value(::StringW value);
    // public override System.Xml.Schema.IXmlSchemaInfo get_SchemaInfo()
    // Offset: 0x4E0C0F4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.Schema.IXmlSchemaInfo XmlNode::get_SchemaInfo()
    ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();
    // public override System.Void set_InnerText(System.String value)
    // Offset: 0x4E0C0FC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerText(System.String value)
    void set_InnerText(::StringW value);
    // override System.Boolean get_IsContainer()
    // Offset: 0x4E0C440
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsContainer()
    bool get_IsContainer();
    // override System.Xml.XmlNode AppendChildForLoad(System.Xml.XmlNode newChild, System.Xml.XmlDocument doc)
    // Offset: 0x4E0C448
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::AppendChildForLoad(System.Xml.XmlNode newChild, System.Xml.XmlDocument doc)
    ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);
    // override System.Xml.XmlLinkedNode get_LastNode()
    // Offset: 0x4E0C6A8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlLinkedNode XmlNode::get_LastNode()
    ::System::Xml::XmlLinkedNode* get_LastNode();
    // override System.Void set_LastNode(System.Xml.XmlLinkedNode value)
    // Offset: 0x4E0C6B0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_LastNode(System.Xml.XmlLinkedNode value)
    void set_LastNode(::System::Xml::XmlLinkedNode* value);
    // override System.Boolean IsValidChildType(System.Xml.XmlNodeType type)
    // Offset: 0x4E0C6B8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::IsValidChildType(System.Xml.XmlNodeType type)
    bool IsValidChildType(::System::Xml::XmlNodeType type);
    // public override System.Xml.XmlNode InsertBefore(System.Xml.XmlNode newChild, System.Xml.XmlNode refChild)
    // Offset: 0x4E0C6D8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::InsertBefore(System.Xml.XmlNode newChild, System.Xml.XmlNode refChild)
    ::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);
    // public override System.Xml.XmlNode InsertAfter(System.Xml.XmlNode newChild, System.Xml.XmlNode refChild)
    // Offset: 0x4E0C768
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::InsertAfter(System.Xml.XmlNode newChild, System.Xml.XmlNode refChild)
    ::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);
    // public override System.Xml.XmlNode RemoveChild(System.Xml.XmlNode oldChild)
    // Offset: 0x4E0C7F8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::RemoveChild(System.Xml.XmlNode oldChild)
    ::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild);
    // public override System.Xml.XmlNode PrependChild(System.Xml.XmlNode newChild)
    // Offset: 0x4E0C870
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::PrependChild(System.Xml.XmlNode newChild)
    ::System::Xml::XmlNode* PrependChild(::System::Xml::XmlNode* newChild);
    // public override System.Xml.XmlNode AppendChild(System.Xml.XmlNode newChild)
    // Offset: 0x4E0C8E8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::AppendChild(System.Xml.XmlNode newChild)
    ::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild);
    // public override System.Void set_InnerXml(System.String value)
    // Offset: 0x4E0C9DC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerXml(System.String value)
    void set_InnerXml(::StringW value);
    // public override System.Void WriteTo(System.Xml.XmlWriter w)
    // Offset: 0x4E0CA78
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteTo(System.Xml.XmlWriter w)
    void WriteTo(::System::Xml::XmlWriter* w);
    // public override System.Void WriteContentTo(System.Xml.XmlWriter w)
    // Offset: 0x4E0CB2C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteContentTo(System.Xml.XmlWriter w)
    void WriteContentTo(::System::Xml::XmlWriter* w);
    // public override System.String get_BaseURI()
    // Offset: 0x4E0CB94
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_BaseURI()
    ::StringW get_BaseURI();
    // override System.Void SetParent(System.Xml.XmlNode node)
    // Offset: 0x4E0CC2C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::SetParent(System.Xml.XmlNode node)
    void SetParent(::System::Xml::XmlNode* node);
    // override System.Xml.XmlSpace get_XmlSpace()
    // Offset: 0x4E0CC34
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlSpace XmlNode::get_XmlSpace()
    ::System::Xml::XmlSpace get_XmlSpace();
    // override System.String get_XmlLang()
    // Offset: 0x4E0CC88
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_XmlLang()
    ::StringW get_XmlLang();
  }; // System.Xml.XmlAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlAttribute), 32 + sizeof(::System::Xml::XmlLinkedNode*)> __System_Xml_XmlAttributeSizeCheck;
  static_assert(sizeof(XmlAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_LocalNameHash
// Il2CppName: get_LocalNameHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_LocalNameHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_LocalNameHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_XmlName
// Il2CppName: get_XmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName* (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_XmlName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_XmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::set_XmlName
// Il2CppName: set_XmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::System::Xml::XmlName*)>(&System::Xml::XmlAttribute::set_XmlName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "set_XmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::PrepareOwnerElementInElementIdAttrMap
// Il2CppName: PrepareOwnerElementInElementIdAttrMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::PrepareOwnerElementInElementIdAttrMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "PrepareOwnerElementInElementIdAttrMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::ResetOwnerElementInElementIdAttrMap
// Il2CppName: ResetOwnerElementInElementIdAttrMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::StringW)>(&System::Xml::XmlAttribute::ResetOwnerElementInElementIdAttrMap)> {
  static const MethodInfo* get() {
    static auto* oldInnerText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "ResetOwnerElementInElementIdAttrMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldInnerText});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_Specified
// Il2CppName: get_Specified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_Specified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_Specified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_OwnerElement
// Il2CppName: get_OwnerElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_OwnerElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_OwnerElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttribute::*)(bool)>(&System::Xml::XmlAttribute::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_NamespaceURI
// Il2CppName: get_NamespaceURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_NamespaceURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_NamespaceURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::set_Prefix
// Il2CppName: set_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::StringW)>(&System::Xml::XmlAttribute::set_Prefix)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "set_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_OwnerDocument
// Il2CppName: get_OwnerDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_OwnerDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_OwnerDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::StringW)>(&System::Xml::XmlAttribute::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_SchemaInfo
// Il2CppName: get_SchemaInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_SchemaInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_SchemaInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::set_InnerText
// Il2CppName: set_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::StringW)>(&System::Xml::XmlAttribute::set_InnerText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "set_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::AppendChildForLoad
// Il2CppName: AppendChildForLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*)>(&System::Xml::XmlAttribute::AppendChildForLoad)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    static auto* doc = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "AppendChildForLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild, doc});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_LastNode
// Il2CppName: get_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlLinkedNode* (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_LastNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::set_LastNode
// Il2CppName: set_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::System::Xml::XmlLinkedNode*)>(&System::Xml::XmlAttribute::set_LastNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlLinkedNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "set_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::IsValidChildType
// Il2CppName: IsValidChildType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlAttribute::*)(::System::Xml::XmlNodeType)>(&System::Xml::XmlAttribute::IsValidChildType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "IsValidChildType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::InsertBefore
// Il2CppName: InsertBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&System::Xml::XmlAttribute::InsertBefore)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    static auto* refChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "InsertBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild, refChild});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::InsertAfter
// Il2CppName: InsertAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&System::Xml::XmlAttribute::InsertAfter)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    static auto* refChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "InsertAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild, refChild});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::RemoveChild
// Il2CppName: RemoveChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlAttribute::RemoveChild)> {
  static const MethodInfo* get() {
    static auto* oldChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "RemoveChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldChild});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::PrependChild
// Il2CppName: PrependChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlAttribute::PrependChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "PrependChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::AppendChild
// Il2CppName: AppendChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlAttribute::AppendChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "AppendChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::set_InnerXml
// Il2CppName: set_InnerXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::StringW)>(&System::Xml::XmlAttribute::set_InnerXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "set_InnerXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlAttribute::WriteTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::WriteContentTo
// Il2CppName: WriteContentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlAttribute::WriteContentTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "WriteContentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_BaseURI
// Il2CppName: get_BaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_BaseURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_BaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::SetParent
// Il2CppName: SetParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlAttribute::SetParent)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "SetParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_XmlSpace
// Il2CppName: get_XmlSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_XmlSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_XmlSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttribute::get_XmlLang
// Il2CppName: get_XmlLang
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlAttribute::*)()>(&System::Xml::XmlAttribute::get_XmlLang)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttribute*), "get_XmlLang", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};