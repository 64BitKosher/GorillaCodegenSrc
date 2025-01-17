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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlTokenizedType
  struct XmlTokenizedType;
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDatatypeVariety
  struct XmlSchemaDatatypeVariety;
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
  // Forward declaring type: XmlValueConverter
  class XmlValueConverter;
  // Forward declaring type: RestrictionFacets
  class RestrictionFacets;
  // Forward declaring type: FacetsChecker
  class FacetsChecker;
  // Forward declaring type: XmlSchemaWhiteSpace
  struct XmlSchemaWhiteSpace;
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
  // Forward declaring type: XmlSchemaObjectTable
  class XmlSchemaObjectTable;
  // Forward declaring type: XmlSchemaObject
  class XmlSchemaObject;
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
  // Forward declaring type: SchemaNames
  class SchemaNames;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaDatatype);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDatatype*, "System.Xml.Schema", "XmlSchemaDatatype");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaDatatype
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaDatatype : public ::Il2CppObject {
    public:
    // public System.Type get_ValueType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_ValueType();
    // public System.Xml.XmlTokenizedType get_TokenizedType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::XmlTokenizedType get_TokenizedType();
    // public System.Object ParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);
    // public System.Xml.Schema.XmlSchemaDatatypeVariety get_Variety()
    // Offset: 0x4D92420
    ::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety();
    // public System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x4D92428
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // public System.Boolean IsDerivedFrom(System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x4D92430
    bool IsDerivedFrom(::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // System.Boolean get_HasLexicalFacets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_HasLexicalFacets();
    // System.Boolean get_HasValueFacets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_HasValueFacets();
    // System.Xml.Schema.XmlValueConverter get_ValueConverter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::XmlValueConverter* get_ValueConverter();
    // System.Xml.Schema.RestrictionFacets get_Restriction()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::RestrictionFacets* get_Restriction();
    // System.Int32 Compare(System.Object value1, System.Object value2)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Compare(::Il2CppObject* value1, ::Il2CppObject* value2);
    // System.Object ParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, System.Boolean createAtomicValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, bool createAtomicValue);
    // System.Exception TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::Il2CppObject*> typedValue);
    // System.Exception TryParseValue(System.Object value, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver namespaceResolver, out System.Object typedValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Exception* TryParseValue(::Il2CppObject* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* namespaceResolver, ByRef<::Il2CppObject*> typedValue);
    // System.Xml.Schema.FacetsChecker get_FacetsChecker()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
    // System.Xml.Schema.XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
    // System.Xml.Schema.XmlSchemaDatatype DeriveByRestriction(System.Xml.Schema.XmlSchemaObjectCollection facets, System.Xml.XmlNameTable nameTable, System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::XmlSchemaDatatype* DeriveByRestriction(::System::Xml::Schema::XmlSchemaObjectCollection* facets, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::XmlSchemaType* schemaType);
    // System.Xml.Schema.XmlSchemaDatatype DeriveByList(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Xml::Schema::XmlSchemaType* schemaType);
    // System.Void VerifySchemaValid(System.Xml.Schema.XmlSchemaObjectTable notations, System.Xml.Schema.XmlSchemaObject caller)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void VerifySchemaValid(::System::Xml::Schema::XmlSchemaObjectTable* notations, ::System::Xml::Schema::XmlSchemaObject* caller);
    // System.Boolean IsEqual(System.Object o1, System.Object o2)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsEqual(::Il2CppObject* o1, ::Il2CppObject* o2);
    // System.Boolean IsComparable(System.Xml.Schema.XmlSchemaDatatype dtype)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsComparable(::System::Xml::Schema::XmlSchemaDatatype* dtype);
    // System.String get_TypeCodeString()
    // Offset: 0x4D92438
    ::StringW get_TypeCodeString();
    // System.String TypeCodeToString(System.Xml.Schema.XmlTypeCode typeCode)
    // Offset: 0x4D92560
    ::StringW TypeCodeToString(::System::Xml::Schema::XmlTypeCode typeCode);
    // static System.String ConcatenatedToString(System.Object value)
    // Offset: 0x4D92A0C
    static ::StringW ConcatenatedToString(::Il2CppObject* value);
    // static System.Xml.Schema.XmlSchemaDatatype FromXmlTokenizedType(System.Xml.XmlTokenizedType token)
    // Offset: 0x4D85204
    static ::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedType(::System::Xml::XmlTokenizedType token);
    // static System.Xml.Schema.XmlSchemaDatatype FromXmlTokenizedTypeXsd(System.Xml.XmlTokenizedType token)
    // Offset: 0x4D930E0
    static ::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedTypeXsd(::System::Xml::XmlTokenizedType token);
    // static System.Xml.Schema.XmlSchemaDatatype FromXdrName(System.String name)
    // Offset: 0x4D83B04
    static ::System::Xml::Schema::XmlSchemaDatatype* FromXdrName(::StringW name);
    // static System.Xml.Schema.XmlSchemaDatatype DeriveByUnion(System.Xml.Schema.XmlSchemaSimpleType[] types, System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x4D93138
    static ::System::Xml::Schema::XmlSchemaDatatype* DeriveByUnion(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> types, ::System::Xml::Schema::XmlSchemaType* schemaType);
    // static System.String XdrCanonizeUri(System.String uri, System.Xml.XmlNameTable nameTable, System.Xml.Schema.SchemaNames schemaNames)
    // Offset: 0x4D815FC
    static ::StringW XdrCanonizeUri(::StringW uri, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames);
    // protected System.Void .ctor()
    // Offset: 0x4D931A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaDatatype* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaDatatype::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaDatatype*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaDatatype
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_TokenizedType
// Il2CppName: get_TokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTokenizedType (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_TokenizedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_TokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::ParseValue
// Il2CppName: ParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlSchemaDatatype::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlSchemaDatatype::ParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "ParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_Variety
// Il2CppName: get_Variety
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatypeVariety (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_Variety)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_Variety", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::IsDerivedFrom
// Il2CppName: IsDerivedFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::XmlSchemaDatatype::IsDerivedFrom)> {
  static const MethodInfo* get() {
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "IsDerivedFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_HasLexicalFacets
// Il2CppName: get_HasLexicalFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_HasLexicalFacets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_HasLexicalFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_HasValueFacets
// Il2CppName: get_HasValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_HasValueFacets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_HasValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_ValueConverter
// Il2CppName: get_ValueConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_ValueConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_ValueConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_Restriction
// Il2CppName: get_Restriction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::RestrictionFacets* (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_Restriction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_Restriction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlSchemaDatatype::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Schema::XmlSchemaDatatype::Compare)> {
  static const MethodInfo* get() {
    static auto* value1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value1, value2});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::ParseValue
// Il2CppName: ParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlSchemaDatatype::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, bool)>(&System::Xml::Schema::XmlSchemaDatatype::ParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* createAtomicValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "ParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr, createAtomicValue});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::TryParseValue
// Il2CppName: TryParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::XmlSchemaDatatype::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::Il2CppObject*>)>(&System::Xml::Schema::XmlSchemaDatatype::TryParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* typedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "TryParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr, typedValue});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::TryParseValue
// Il2CppName: TryParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::XmlSchemaDatatype::*)(::Il2CppObject*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::Il2CppObject*>)>(&System::Xml::Schema::XmlSchemaDatatype::TryParseValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* namespaceResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* typedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "TryParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, nameTable, namespaceResolver, typedValue});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_FacetsChecker
// Il2CppName: get_FacetsChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::FacetsChecker* (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_FacetsChecker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_FacetsChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_BuiltInWhitespaceFacet
// Il2CppName: get_BuiltInWhitespaceFacet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaWhiteSpace (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_BuiltInWhitespaceFacet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_BuiltInWhitespaceFacet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::DeriveByRestriction
// Il2CppName: DeriveByRestriction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlSchemaDatatype::DeriveByRestriction)> {
  static const MethodInfo* get() {
    static auto* facets = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "DeriveByRestriction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{facets, nameTable, schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::DeriveByList
// Il2CppName: DeriveByList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlSchemaDatatype::DeriveByList)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "DeriveByList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::VerifySchemaValid
// Il2CppName: VerifySchemaValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaDatatype::VerifySchemaValid)> {
  static const MethodInfo* get() {
    static auto* notations = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectTable")->byval_arg;
    static auto* caller = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "VerifySchemaValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notations, caller});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::IsEqual
// Il2CppName: IsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaDatatype::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Schema::XmlSchemaDatatype::IsEqual)> {
  static const MethodInfo* get() {
    static auto* o1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* o2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "IsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o1, o2});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::IsComparable
// Il2CppName: IsComparable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::XmlSchemaDatatype::IsComparable)> {
  static const MethodInfo* get() {
    static auto* dtype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "IsComparable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dtype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::get_TypeCodeString
// Il2CppName: get_TypeCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaDatatype::*)()>(&System::Xml::Schema::XmlSchemaDatatype::get_TypeCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "get_TypeCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::TypeCodeToString
// Il2CppName: TypeCodeToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlTypeCode)>(&System::Xml::Schema::XmlSchemaDatatype::TypeCodeToString)> {
  static const MethodInfo* get() {
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlTypeCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "TypeCodeToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeCode});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::ConcatenatedToString
// Il2CppName: ConcatenatedToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&System::Xml::Schema::XmlSchemaDatatype::ConcatenatedToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "ConcatenatedToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedType
// Il2CppName: FromXmlTokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (*)(::System::Xml::XmlTokenizedType)>(&System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedType)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlTokenizedType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "FromXmlTokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedTypeXsd
// Il2CppName: FromXmlTokenizedTypeXsd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (*)(::System::Xml::XmlTokenizedType)>(&System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedTypeXsd)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlTokenizedType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "FromXmlTokenizedTypeXsd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::FromXdrName
// Il2CppName: FromXdrName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (*)(::StringW)>(&System::Xml::Schema::XmlSchemaDatatype::FromXdrName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "FromXdrName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::DeriveByUnion
// Il2CppName: DeriveByUnion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (*)(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>, ::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlSchemaDatatype::DeriveByUnion)> {
  static const MethodInfo* get() {
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSimpleType"), 1)->byval_arg;
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "DeriveByUnion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types, schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::XdrCanonizeUri
// Il2CppName: XdrCanonizeUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*)>(&System::Xml::Schema::XmlSchemaDatatype::XdrCanonizeUri)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* schemaNames = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaNames")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDatatype*), "XdrCanonizeUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, nameTable, schemaNames});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDatatype::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
