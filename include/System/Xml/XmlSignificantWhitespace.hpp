// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlCharacterData
#include "System/Xml/XmlCharacterData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlSignificantWhitespace
  class XmlSignificantWhitespace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlSignificantWhitespace);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlSignificantWhitespace*, "System.Xml", "XmlSignificantWhitespace");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlSignificantWhitespace
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSignificantWhitespace : public ::System::Xml::XmlCharacterData {
    public:
    // protected internal System.Void .ctor(System.String strData, System.Xml.XmlDocument doc)
    // Offset: 0x4E238E4
    // Implemented from: System.Xml.XmlCharacterData
    // Base method: System.Void XmlCharacterData::.ctor(System.String strData, System.Xml.XmlDocument doc)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSignificantWhitespace* New_ctor(::StringW strData, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlSignificantWhitespace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSignificantWhitespace*, creationType>(strData, doc)));
    }
    // public override System.String get_Name()
    // Offset: 0x4E23980
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x4E239A8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x4E239D0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Xml.XmlNode get_ParentNode()
    // Offset: 0x4E239D8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::get_ParentNode()
    ::System::Xml::XmlNode* get_ParentNode();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x4E23A60
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // public override System.String get_Value()
    // Offset: 0x4E23ABC
    // Implemented from: System.Xml.XmlCharacterData
    // Base method: System.String XmlCharacterData::get_Value()
    ::StringW get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x4E23ACC
    // Implemented from: System.Xml.XmlCharacterData
    // Base method: System.Void XmlCharacterData::set_Value(System.String value)
    void set_Value(::StringW value);
    // public override System.Void WriteTo(System.Xml.XmlWriter w)
    // Offset: 0x4E23B58
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteTo(System.Xml.XmlWriter w)
    void WriteTo(::System::Xml::XmlWriter* w);
    // public override System.Void WriteContentTo(System.Xml.XmlWriter w)
    // Offset: 0x4E23B98
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteContentTo(System.Xml.XmlWriter w)
    void WriteContentTo(::System::Xml::XmlWriter* w);
    // override System.Boolean get_IsText()
    // Offset: 0x4E23B9C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsText()
    bool get_IsText();
  }; // System.Xml.XmlSignificantWhitespace
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlSignificantWhitespace::*)()>(&System::Xml::XmlSignificantWhitespace::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlSignificantWhitespace::*)()>(&System::Xml::XmlSignificantWhitespace::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlSignificantWhitespace::*)()>(&System::Xml::XmlSignificantWhitespace::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlSignificantWhitespace::*)()>(&System::Xml::XmlSignificantWhitespace::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlSignificantWhitespace::*)(bool)>(&System::Xml::XmlSignificantWhitespace::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlSignificantWhitespace::*)()>(&System::Xml::XmlSignificantWhitespace::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlSignificantWhitespace::*)(::StringW)>(&System::Xml::XmlSignificantWhitespace::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlSignificantWhitespace::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlSignificantWhitespace::WriteTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::WriteContentTo
// Il2CppName: WriteContentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlSignificantWhitespace::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlSignificantWhitespace::WriteContentTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "WriteContentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlSignificantWhitespace::get_IsText
// Il2CppName: get_IsText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlSignificantWhitespace::*)()>(&System::Xml::XmlSignificantWhitespace::get_IsText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlSignificantWhitespace*), "get_IsText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
