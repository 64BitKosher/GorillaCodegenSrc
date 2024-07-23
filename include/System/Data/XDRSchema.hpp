// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.XMLSchema
#include "System/Data/XMLSchema.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataSet
  class DataSet;
  // Forward declaring type: DataTable
  class DataTable;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlElement
  class XmlElement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: XDRSchema
  class XDRSchema;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::XDRSchema);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XDRSchema*, "System.Data", "XDRSchema");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.XDRSchema
  // [TokenAttribute] Offset: FFFFFFFF
  class XDRSchema : public ::System::Data::XMLSchema {
    public:
    // Nested type: ::System::Data::XDRSchema::NameType
    class NameType;
    public:
    // System.String _schemaName
    // Size: 0x8
    // Offset: 0x10
    ::StringW schemaName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String _schemaUri
    // Size: 0x8
    // Offset: 0x18
    ::StringW schemaUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Xml.XmlElement _schemaRoot
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlElement* schemaRoot;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlElement*) == 0x8);
    // System.Data.DataSet _ds
    // Size: 0x8
    // Offset: 0x28
    ::System::Data::DataSet* ds;
    // Field size check
    static_assert(sizeof(::System::Data::DataSet*) == 0x8);
    public:
    // Get static field: static private readonly System.Char[] s_colonArray
    static ::ArrayW<::Il2CppChar> _get_s_colonArray();
    // Set static field: static private readonly System.Char[] s_colonArray
    static void _set_s_colonArray(::ArrayW<::Il2CppChar> value);
    // Get static field: static private System.Data.XDRSchema/NameType[] s_mapNameTypeXdr
    static ::ArrayW<::System::Data::XDRSchema::NameType*> _get_s_mapNameTypeXdr();
    // Set static field: static private System.Data.XDRSchema/NameType[] s_mapNameTypeXdr
    static void _set_s_mapNameTypeXdr(::ArrayW<::System::Data::XDRSchema::NameType*> value);
    // Get static field: static private System.Data.XDRSchema/NameType s_enumerationNameType
    static ::System::Data::XDRSchema::NameType* _get_s_enumerationNameType();
    // Set static field: static private System.Data.XDRSchema/NameType s_enumerationNameType
    static void _set_s_enumerationNameType(::System::Data::XDRSchema::NameType* value);
    // Get instance field reference: System.String _schemaName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__schemaName();
    // Get instance field reference: System.String _schemaUri
    [[deprecated("Use field access instead!")]] ::StringW& dyn__schemaUri();
    // Get instance field reference: System.Xml.XmlElement _schemaRoot
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlElement*& dyn__schemaRoot();
    // Get instance field reference: System.Data.DataSet _ds
    [[deprecated("Use field access instead!")]] ::System::Data::DataSet*& dyn__ds();
    // System.Void .ctor(System.Data.DataSet ds, System.Boolean fInline)
    // Offset: 0x4C78308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XDRSchema* New_ctor(::System::Data::DataSet* ds, bool fInline) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::XDRSchema::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XDRSchema*, creationType>(ds, fInline)));
    }
    // System.Void LoadSchema(System.Xml.XmlElement schemaRoot, System.Data.DataSet ds)
    // Offset: 0x4C783AC
    void LoadSchema(::System::Xml::XmlElement* schemaRoot, ::System::Data::DataSet* ds);
    // System.Xml.XmlElement FindTypeNode(System.Xml.XmlElement node)
    // Offset: 0x4C787DC
    ::System::Xml::XmlElement* FindTypeNode(::System::Xml::XmlElement* node);
    // System.Boolean IsTextOnlyContent(System.Xml.XmlElement node)
    // Offset: 0x4C78B24
    bool IsTextOnlyContent(::System::Xml::XmlElement* node);
    // System.Boolean IsXDRField(System.Xml.XmlElement node, System.Xml.XmlElement typeNode)
    // Offset: 0x4C78CF4
    bool IsXDRField(::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode);
    // System.Data.DataTable HandleTable(System.Xml.XmlElement node)
    // Offset: 0x4C7861C
    ::System::Data::DataTable* HandleTable(::System::Xml::XmlElement* node);
    // static private System.Data.XDRSchema/NameType FindNameType(System.String name)
    // Offset: 0x4C79764
    static ::System::Data::XDRSchema::NameType* FindNameType(::StringW name);
    // private System.Type ParseDataType(System.String dt, System.String dtValues)
    // Offset: 0x4C79838
    ::System::Type* ParseDataType(::StringW dt, ::StringW dtValues);
    // System.String GetInstanceName(System.Xml.XmlElement node)
    // Offset: 0x4C79974
    ::StringW GetInstanceName(::System::Xml::XmlElement* node);
    // System.Void HandleColumn(System.Xml.XmlElement node, System.Data.DataTable table)
    // Offset: 0x4C79AF4
    void HandleColumn(::System::Xml::XmlElement* node, ::System::Data::DataTable* table);
    // System.Void GetMinMax(System.Xml.XmlElement elNode, ref System.Int32 minOccurs, ref System.Int32 maxOccurs)
    // Offset: 0x4C78E54
    void GetMinMax(::System::Xml::XmlElement* elNode, ByRef<int> minOccurs, ByRef<int> maxOccurs);
    // System.Void GetMinMax(System.Xml.XmlElement elNode, System.Boolean isAttribute, ref System.Int32 minOccurs, ref System.Int32 maxOccurs)
    // Offset: 0x4C7A3A4
    void GetMinMax(::System::Xml::XmlElement* elNode, bool isAttribute, ByRef<int> minOccurs, ByRef<int> maxOccurs);
    // System.Void HandleTypeNode(System.Xml.XmlElement typeNode, System.Data.DataTable table, System.Collections.ArrayList tableChildren)
    // Offset: 0x4C7A6DC
    void HandleTypeNode(::System::Xml::XmlElement* typeNode, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren);
    // System.Data.DataTable InstantiateTable(System.Data.DataSet dataSet, System.Xml.XmlElement node, System.Xml.XmlElement typeNode)
    // Offset: 0x4C79090
    ::System::Data::DataTable* InstantiateTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode);
    // System.Data.DataTable InstantiateSimpleTable(System.Data.DataSet dataSet, System.Xml.XmlElement node)
    // Offset: 0x4C78E64
    ::System::Data::DataTable* InstantiateSimpleTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node);
    // static private System.Void .cctor()
    // Offset: 0x4C7A8D0
    static void _cctor();
  }; // System.Data.XDRSchema
  #pragma pack(pop)
  static check_size<sizeof(XDRSchema), 40 + sizeof(::System::Data::DataSet*)> __System_Data_XDRSchemaSizeCheck;
  static_assert(sizeof(XDRSchema) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::XDRSchema::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::XDRSchema::LoadSchema
// Il2CppName: LoadSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataSet*)>(&System::Data::XDRSchema::LoadSchema)> {
  static const MethodInfo* get() {
    static auto* schemaRoot = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* ds = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "LoadSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaRoot, ds});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::FindTypeNode
// Il2CppName: FindTypeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&System::Data::XDRSchema::FindTypeNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "FindTypeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::IsTextOnlyContent
// Il2CppName: IsTextOnlyContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&System::Data::XDRSchema::IsTextOnlyContent)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "IsTextOnlyContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::IsXDRField
// Il2CppName: IsXDRField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Xml::XmlElement*)>(&System::Data::XDRSchema::IsXDRField)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* typeNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "IsXDRField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, typeNode});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::HandleTable
// Il2CppName: HandleTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&System::Data::XDRSchema::HandleTable)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "HandleTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::FindNameType
// Il2CppName: FindNameType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::XDRSchema::NameType* (*)(::StringW)>(&System::Data::XDRSchema::FindNameType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "FindNameType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::ParseDataType
// Il2CppName: ParseDataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Data::XDRSchema::*)(::StringW, ::StringW)>(&System::Data::XDRSchema::ParseDataType)> {
  static const MethodInfo* get() {
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dtValues = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "ParseDataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dt, dtValues});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::GetInstanceName
// Il2CppName: GetInstanceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&System::Data::XDRSchema::GetInstanceName)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "GetInstanceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::HandleColumn
// Il2CppName: HandleColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataTable*)>(&System::Data::XDRSchema::HandleColumn)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "HandleColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, table});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::GetMinMax
// Il2CppName: GetMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ByRef<int>, ByRef<int>)>(&System::Data::XDRSchema::GetMinMax)> {
  static const MethodInfo* get() {
    static auto* elNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* minOccurs = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* maxOccurs = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "GetMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elNode, minOccurs, maxOccurs});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::GetMinMax
// Il2CppName: GetMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XDRSchema::*)(::System::Xml::XmlElement*, bool, ByRef<int>, ByRef<int>)>(&System::Data::XDRSchema::GetMinMax)> {
  static const MethodInfo* get() {
    static auto* elNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* isAttribute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* minOccurs = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* maxOccurs = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "GetMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elNode, isAttribute, minOccurs, maxOccurs});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::HandleTypeNode
// Il2CppName: HandleTypeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataTable*, ::System::Collections::ArrayList*)>(&System::Data::XDRSchema::HandleTypeNode)> {
  static const MethodInfo* get() {
    static auto* typeNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* tableChildren = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "HandleTypeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeNode, table, tableChildren});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::InstantiateTable
// Il2CppName: InstantiateTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::XDRSchema::*)(::System::Data::DataSet*, ::System::Xml::XmlElement*, ::System::Xml::XmlElement*)>(&System::Data::XDRSchema::InstantiateTable)> {
  static const MethodInfo* get() {
    static auto* dataSet = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* typeNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "InstantiateTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataSet, node, typeNode});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::InstantiateSimpleTable
// Il2CppName: InstantiateSimpleTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::XDRSchema::*)(::System::Data::DataSet*, ::System::Xml::XmlElement*)>(&System::Data::XDRSchema::InstantiateSimpleTable)> {
  static const MethodInfo* get() {
    static auto* dataSet = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), "InstantiateSimpleTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataSet, node});
  }
};
// Writing MetadataGetter for method: System::Data::XDRSchema::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::XDRSchema::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::XDRSchema*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
