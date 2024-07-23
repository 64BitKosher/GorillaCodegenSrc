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
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataSet
  class DataSet;
  // Forward declaring type: XmlToDatasetMap
  class XmlToDatasetMap;
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: DataRow
  class DataRow;
  // Forward declaring type: DataColumn
  class DataColumn;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: Stack
  class Stack;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlElement
  class XmlElement;
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlNode
  class XmlNode;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlDocument
  class XmlDocument;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: XmlDataLoader
  class XmlDataLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::XmlDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlDataLoader*, "System.Data", "XmlDataLoader");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.XmlDataLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlDataLoader : public ::Il2CppObject {
    public:
    public:
    // private System.Data.DataSet _dataSet
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataSet* dataSet;
    // Field size check
    static_assert(sizeof(::System::Data::DataSet*) == 0x8);
    // private System.Data.XmlToDatasetMap _nodeToSchemaMap
    // Size: 0x8
    // Offset: 0x18
    ::System::Data::XmlToDatasetMap* nodeToSchemaMap;
    // Field size check
    static_assert(sizeof(::System::Data::XmlToDatasetMap*) == 0x8);
    // private System.Collections.Hashtable _nodeToRowMap
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Hashtable* nodeToRowMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Stack _childRowsStack
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Stack* childRowsStack;
    // Field size check
    static_assert(sizeof(::System::Collections::Stack*) == 0x8);
    // private System.Collections.Hashtable _htableExcludedNS
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Hashtable* htableExcludedNS;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Boolean _fIsXdr
    // Size: 0x1
    // Offset: 0x38
    bool fIsXdr;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _isDiffgram
    // Size: 0x1
    // Offset: 0x39
    bool isDiffgram;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDiffgram and: topMostNode
    char __padding6[0x6] = {};
    // private System.Xml.XmlElement _topMostNode
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::XmlElement* topMostNode;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlElement*) == 0x8);
    // private System.Boolean _ignoreSchema
    // Size: 0x1
    // Offset: 0x48
    bool ignoreSchema;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignoreSchema and: dataTable
    char __padding8[0x7] = {};
    // private System.Data.DataTable _dataTable
    // Size: 0x8
    // Offset: 0x50
    ::System::Data::DataTable* dataTable;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    // private System.Boolean _isTableLevel
    // Size: 0x1
    // Offset: 0x58
    bool isTableLevel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _fromInference
    // Size: 0x1
    // Offset: 0x59
    bool fromInference;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fromInference and: dataReader
    char __padding11[0x6] = {};
    // private System.Xml.XmlReader _dataReader
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::XmlReader* dataReader;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlReader*) == 0x8);
    // private System.Object _XSD_XMLNS_NS
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppObject* XSD_XMLNS_NS;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _XDR_SCHEMA
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppObject* XDR_SCHEMA;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _XDRNS
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* XDRNS;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _SQL_SYNC
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppObject* SQL_SYNC;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _UPDGNS
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppObject* UPDGNS;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _XSD_SCHEMA
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* XSD_SCHEMA;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _XSDNS
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppObject* XSDNS;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _DFFNS
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppObject* DFFNS;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _MSDNS
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppObject* MSDNS;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _DIFFID
    // Size: 0x8
    // Offset: 0xB0
    ::Il2CppObject* DIFFID;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _HASCHANGES
    // Size: 0x8
    // Offset: 0xB8
    ::Il2CppObject* HASCHANGES;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _ROWORDER
    // Size: 0x8
    // Offset: 0xC0
    ::Il2CppObject* ROWORDER;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Data.DataSet _dataSet
    [[deprecated("Use field access instead!")]] ::System::Data::DataSet*& dyn__dataSet();
    // Get instance field reference: private System.Data.XmlToDatasetMap _nodeToSchemaMap
    [[deprecated("Use field access instead!")]] ::System::Data::XmlToDatasetMap*& dyn__nodeToSchemaMap();
    // Get instance field reference: private System.Collections.Hashtable _nodeToRowMap
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__nodeToRowMap();
    // Get instance field reference: private System.Collections.Stack _childRowsStack
    [[deprecated("Use field access instead!")]] ::System::Collections::Stack*& dyn__childRowsStack();
    // Get instance field reference: private System.Collections.Hashtable _htableExcludedNS
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__htableExcludedNS();
    // Get instance field reference: private System.Boolean _fIsXdr
    [[deprecated("Use field access instead!")]] bool& dyn__fIsXdr();
    // Get instance field reference: System.Boolean _isDiffgram
    [[deprecated("Use field access instead!")]] bool& dyn__isDiffgram();
    // Get instance field reference: private System.Xml.XmlElement _topMostNode
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlElement*& dyn__topMostNode();
    // Get instance field reference: private System.Boolean _ignoreSchema
    [[deprecated("Use field access instead!")]] bool& dyn__ignoreSchema();
    // Get instance field reference: private System.Data.DataTable _dataTable
    [[deprecated("Use field access instead!")]] ::System::Data::DataTable*& dyn__dataTable();
    // Get instance field reference: private System.Boolean _isTableLevel
    [[deprecated("Use field access instead!")]] bool& dyn__isTableLevel();
    // Get instance field reference: private System.Boolean _fromInference
    [[deprecated("Use field access instead!")]] bool& dyn__fromInference();
    // Get instance field reference: private System.Xml.XmlReader _dataReader
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlReader*& dyn__dataReader();
    // Get instance field reference: private System.Object _XSD_XMLNS_NS
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__XSD_XMLNS_NS();
    // Get instance field reference: private System.Object _XDR_SCHEMA
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__XDR_SCHEMA();
    // Get instance field reference: private System.Object _XDRNS
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__XDRNS();
    // Get instance field reference: private System.Object _SQL_SYNC
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__SQL_SYNC();
    // Get instance field reference: private System.Object _UPDGNS
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__UPDGNS();
    // Get instance field reference: private System.Object _XSD_SCHEMA
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__XSD_SCHEMA();
    // Get instance field reference: private System.Object _XSDNS
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__XSDNS();
    // Get instance field reference: private System.Object _DFFNS
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__DFFNS();
    // Get instance field reference: private System.Object _MSDNS
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__MSDNS();
    // Get instance field reference: private System.Object _DIFFID
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__DIFFID();
    // Get instance field reference: private System.Object _HASCHANGES
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__HASCHANGES();
    // Get instance field reference: private System.Object _ROWORDER
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__ROWORDER();
    // System.Void .ctor(System.Data.DataSet dataset, System.Boolean IsXdr, System.Boolean ignoreSchema)
    // Offset: 0x4C8F194
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDataLoader* New_ctor(::System::Data::DataSet* dataset, bool IsXdr, bool ignoreSchema) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::XmlDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDataLoader*, creationType>(dataset, IsXdr, ignoreSchema)));
    }
    // System.Void .ctor(System.Data.DataSet dataset, System.Boolean IsXdr, System.Xml.XmlElement topNode, System.Boolean ignoreSchema)
    // Offset: 0x4C8F240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDataLoader* New_ctor(::System::Data::DataSet* dataset, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::XmlDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDataLoader*, creationType>(dataset, IsXdr, topNode, ignoreSchema)));
    }
    // System.Void .ctor(System.Data.DataTable datatable, System.Boolean IsXdr, System.Boolean ignoreSchema)
    // Offset: 0x4C8F344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDataLoader* New_ctor(::System::Data::DataTable* datatable, bool IsXdr, bool ignoreSchema) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::XmlDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDataLoader*, creationType>(datatable, IsXdr, ignoreSchema)));
    }
    // System.Void .ctor(System.Data.DataTable datatable, System.Boolean IsXdr, System.Xml.XmlElement topNode, System.Boolean ignoreSchema)
    // Offset: 0x4C8F408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDataLoader* New_ctor(::System::Data::DataTable* datatable, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::XmlDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDataLoader*, creationType>(datatable, IsXdr, topNode, ignoreSchema)));
    }
    // System.Boolean get_FromInference()
    // Offset: 0x4C8F524
    bool get_FromInference();
    // System.Void set_FromInference(System.Boolean value)
    // Offset: 0x4C8F52C
    void set_FromInference(bool value);
    // private System.Void AttachRows(System.Data.DataRow parentRow, System.Xml.XmlNode parentElement)
    // Offset: 0x4C8F538
    void AttachRows(::System::Data::DataRow* parentRow, ::System::Xml::XmlNode* parentElement);
    // private System.Int32 CountNonNSAttributes(System.Xml.XmlNode node)
    // Offset: 0x4C8F72C
    int CountNonNSAttributes(::System::Xml::XmlNode* node);
    // private System.String GetValueForTextOnlyColums(System.Xml.XmlNode n)
    // Offset: 0x4C8F8AC
    ::StringW GetValueForTextOnlyColums(::System::Xml::XmlNode* n);
    // private System.String GetInitialTextFromNodes(ref System.Xml.XmlNode n)
    // Offset: 0x4C8FAD0
    ::StringW GetInitialTextFromNodes(ByRef<::System::Xml::XmlNode*> n);
    // private System.Data.DataColumn GetTextOnlyColumn(System.Data.DataRow row)
    // Offset: 0x4C8FCD8
    ::System::Data::DataColumn* GetTextOnlyColumn(::System::Data::DataRow* row);
    // System.Data.DataRow GetRowFromElement(System.Xml.XmlElement e)
    // Offset: 0x4C8F694
    ::System::Data::DataRow* GetRowFromElement(::System::Xml::XmlElement* e);
    // System.Boolean FColumnElement(System.Xml.XmlElement e)
    // Offset: 0x4C8FDA4
    bool FColumnElement(::System::Xml::XmlElement* e);
    // private System.Boolean FExcludedNamespace(System.String ns)
    // Offset: 0x4C8F820
    bool FExcludedNamespace(::StringW ns);
    // private System.Boolean FIgnoreNamespace(System.Xml.XmlNode node)
    // Offset: 0x4C8FE8C
    bool FIgnoreNamespace(::System::Xml::XmlNode* node);
    // private System.Boolean FIgnoreNamespace(System.Xml.XmlReader node)
    // Offset: 0x4C90150
    bool FIgnoreNamespace(::System::Xml::XmlReader* node);
    // System.Boolean IsTextLikeNode(System.Xml.XmlNodeType n)
    // Offset: 0x4C8FA7C
    bool IsTextLikeNode(::System::Xml::XmlNodeType n);
    // System.Boolean IsTextOnly(System.Data.DataColumn c)
    // Offset: 0x4C8FD70
    bool IsTextOnly(::System::Data::DataColumn* c);
    // System.Void LoadData(System.Xml.XmlDocument xdoc)
    // Offset: 0x4C901D8
    void LoadData(::System::Xml::XmlDocument* xdoc);
    // private System.Void LoadRowData(System.Data.DataRow row, System.Xml.XmlElement rowElement)
    // Offset: 0x4C9062C
    void LoadRowData(::System::Data::DataRow* row, ::System::Xml::XmlElement* rowElement);
    // private System.Void LoadRows(System.Data.DataRow parentRow, System.Xml.XmlNode parentElement)
    // Offset: 0x4C912C0
    void LoadRows(::System::Data::DataRow* parentRow, ::System::Xml::XmlNode* parentElement);
    // private System.Void SetRowValueFromXmlText(System.Data.DataRow row, System.Data.DataColumn col, System.String xmlText)
    // Offset: 0x4C91600
    void SetRowValueFromXmlText(::System::Data::DataRow* row, ::System::Data::DataColumn* col, ::StringW xmlText);
    // private System.Void InitNameTable()
    // Offset: 0x4C91674
    void InitNameTable();
    // System.Void LoadData(System.Xml.XmlReader reader)
    // Offset: 0x4C9197C
    void LoadData(::System::Xml::XmlReader* reader);
    // private System.Void LoadTopMostTable(System.Data.DataTable table)
    // Offset: 0x4C91D3C
    void LoadTopMostTable(::System::Data::DataTable* table);
    // private System.Void LoadTable(System.Data.DataTable table, System.Boolean isNested)
    // Offset: 0x4C929AC
    void LoadTable(::System::Data::DataTable* table, bool isNested);
    // private System.Void LoadColumn(System.Data.DataColumn column, System.Object[] foundColumns)
    // Offset: 0x4C93808
    void LoadColumn(::System::Data::DataColumn* column, ::ArrayW<::Il2CppObject*> foundColumns);
    // private System.Boolean ProcessXsdSchema()
    // Offset: 0x4C9278C
    bool ProcessXsdSchema();
  }; // System.Data.XmlDataLoader
  #pragma pack(pop)
  static check_size<sizeof(XmlDataLoader), 192 + sizeof(::Il2CppObject*)> __System_Data_XmlDataLoaderSizeCheck;
  static_assert(sizeof(XmlDataLoader) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::XmlDataLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::XmlDataLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::XmlDataLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::XmlDataLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::XmlDataLoader::get_FromInference
// Il2CppName: get_FromInference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlDataLoader::*)()>(&System::Data::XmlDataLoader::get_FromInference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "get_FromInference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::set_FromInference
// Il2CppName: set_FromInference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(bool)>(&System::Data::XmlDataLoader::set_FromInference)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "set_FromInference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::AttachRows
// Il2CppName: AttachRows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Data::DataRow*, ::System::Xml::XmlNode*)>(&System::Data::XmlDataLoader::AttachRows)> {
  static const MethodInfo* get() {
    static auto* parentRow = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* parentElement = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "AttachRows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentRow, parentElement});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::CountNonNSAttributes
// Il2CppName: CountNonNSAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::XmlDataLoader::*)(::System::Xml::XmlNode*)>(&System::Data::XmlDataLoader::CountNonNSAttributes)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "CountNonNSAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::GetValueForTextOnlyColums
// Il2CppName: GetValueForTextOnlyColums
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::XmlDataLoader::*)(::System::Xml::XmlNode*)>(&System::Data::XmlDataLoader::GetValueForTextOnlyColums)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "GetValueForTextOnlyColums", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::GetInitialTextFromNodes
// Il2CppName: GetInitialTextFromNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::XmlDataLoader::*)(ByRef<::System::Xml::XmlNode*>)>(&System::Data::XmlDataLoader::GetInitialTextFromNodes)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "GetInitialTextFromNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::GetTextOnlyColumn
// Il2CppName: GetTextOnlyColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (System::Data::XmlDataLoader::*)(::System::Data::DataRow*)>(&System::Data::XmlDataLoader::GetTextOnlyColumn)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "GetTextOnlyColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::GetRowFromElement
// Il2CppName: GetRowFromElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (System::Data::XmlDataLoader::*)(::System::Xml::XmlElement*)>(&System::Data::XmlDataLoader::GetRowFromElement)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "GetRowFromElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::FColumnElement
// Il2CppName: FColumnElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlDataLoader::*)(::System::Xml::XmlElement*)>(&System::Data::XmlDataLoader::FColumnElement)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "FColumnElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::FExcludedNamespace
// Il2CppName: FExcludedNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlDataLoader::*)(::StringW)>(&System::Data::XmlDataLoader::FExcludedNamespace)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "FExcludedNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::FIgnoreNamespace
// Il2CppName: FIgnoreNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlDataLoader::*)(::System::Xml::XmlNode*)>(&System::Data::XmlDataLoader::FIgnoreNamespace)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "FIgnoreNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::FIgnoreNamespace
// Il2CppName: FIgnoreNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlDataLoader::*)(::System::Xml::XmlReader*)>(&System::Data::XmlDataLoader::FIgnoreNamespace)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "FIgnoreNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::IsTextLikeNode
// Il2CppName: IsTextLikeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlDataLoader::*)(::System::Xml::XmlNodeType)>(&System::Data::XmlDataLoader::IsTextLikeNode)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "IsTextLikeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::IsTextOnly
// Il2CppName: IsTextOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlDataLoader::*)(::System::Data::DataColumn*)>(&System::Data::XmlDataLoader::IsTextOnly)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "IsTextOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::LoadData
// Il2CppName: LoadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Xml::XmlDocument*)>(&System::Data::XmlDataLoader::LoadData)> {
  static const MethodInfo* get() {
    static auto* xdoc = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "LoadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xdoc});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::LoadRowData
// Il2CppName: LoadRowData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Data::DataRow*, ::System::Xml::XmlElement*)>(&System::Data::XmlDataLoader::LoadRowData)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* rowElement = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "LoadRowData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, rowElement});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::LoadRows
// Il2CppName: LoadRows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Data::DataRow*, ::System::Xml::XmlNode*)>(&System::Data::XmlDataLoader::LoadRows)> {
  static const MethodInfo* get() {
    static auto* parentRow = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* parentElement = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "LoadRows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentRow, parentElement});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::SetRowValueFromXmlText
// Il2CppName: SetRowValueFromXmlText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Data::DataRow*, ::System::Data::DataColumn*, ::StringW)>(&System::Data::XmlDataLoader::SetRowValueFromXmlText)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* col = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    static auto* xmlText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "SetRowValueFromXmlText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, col, xmlText});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::InitNameTable
// Il2CppName: InitNameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)()>(&System::Data::XmlDataLoader::InitNameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "InitNameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::LoadData
// Il2CppName: LoadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Xml::XmlReader*)>(&System::Data::XmlDataLoader::LoadData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "LoadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::LoadTopMostTable
// Il2CppName: LoadTopMostTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Data::DataTable*)>(&System::Data::XmlDataLoader::LoadTopMostTable)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "LoadTopMostTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::LoadTable
// Il2CppName: LoadTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Data::DataTable*, bool)>(&System::Data::XmlDataLoader::LoadTable)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* isNested = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "LoadTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, isNested});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::LoadColumn
// Il2CppName: LoadColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::XmlDataLoader::*)(::System::Data::DataColumn*, ::ArrayW<::Il2CppObject*>)>(&System::Data::XmlDataLoader::LoadColumn)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    static auto* foundColumns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "LoadColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column, foundColumns});
  }
};
// Writing MetadataGetter for method: System::Data::XmlDataLoader::ProcessXsdSchema
// Il2CppName: ProcessXsdSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlDataLoader::*)()>(&System::Data::XmlDataLoader::ProcessXsdSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlDataLoader*), "ProcessXsdSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
