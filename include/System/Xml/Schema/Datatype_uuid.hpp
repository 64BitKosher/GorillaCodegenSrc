// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_anySimpleType
#include "System/Xml/Schema/Datatype_anySimpleType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: RestrictionFlags
  struct RestrictionFlags;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_uuid
  class Datatype_uuid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_uuid);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_uuid*, "System.Xml.Schema", "Datatype_uuid");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_uuid
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_uuid : public ::System::Xml::Schema::Datatype_anySimpleType {
    public:
    // Get static field: static private readonly System.Type atomicValueType
    static ::System::Type* _get_atomicValueType();
    // Set static field: static private readonly System.Type atomicValueType
    static void _set_atomicValueType(::System::Type* value);
    // Get static field: static private readonly System.Type listValueType
    static ::System::Type* _get_listValueType();
    // Set static field: static private readonly System.Type listValueType
    static void _set_listValueType(::System::Type* value);
    // public override System.Type get_ValueType()
    // Offset: 0x4E8EDC8
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Type Datatype_anySimpleType::get_ValueType()
    ::System::Type* get_ValueType();
    // override System.Type get_ListValueType()
    // Offset: 0x4E8EE20
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Type Datatype_anySimpleType::get_ListValueType()
    ::System::Type* get_ListValueType();
    // override System.Xml.Schema.RestrictionFlags get_ValidRestrictionFlags()
    // Offset: 0x4E8EE78
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.RestrictionFlags Datatype_anySimpleType::get_ValidRestrictionFlags()
    ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();
    // override System.Int32 Compare(System.Object value1, System.Object value2)
    // Offset: 0x4E8EE80
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Int32 Datatype_anySimpleType::Compare(System.Object value1, System.Object value2)
    int Compare(::Il2CppObject* value1, ::Il2CppObject* value2);
    // public override System.Object ParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr)
    // Offset: 0x4E8EF1C
    // Implemented from: System.Xml.Schema.DatatypeImplementation
    // Base method: System.Object DatatypeImplementation::ParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr)
    ::Il2CppObject* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);
    // override System.Exception TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    // Offset: 0x4E8F0EC
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Exception Datatype_anySimpleType::TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::Il2CppObject*> typedValue);
    // public System.Void .ctor()
    // Offset: 0x4E82AF4
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_uuid* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_uuid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_uuid*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4E8F1B8
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Void Datatype_anySimpleType::.cctor()
    // Base method: System.Void DatatypeImplementation::.cctor()
    static void _cctor();
  }; // System.Xml.Schema.Datatype_uuid
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_uuid::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::Datatype_uuid::*)()>(&System::Xml::Schema::Datatype_uuid::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_uuid*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_uuid::get_ListValueType
// Il2CppName: get_ListValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::Datatype_uuid::*)()>(&System::Xml::Schema::Datatype_uuid::get_ListValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_uuid*), "get_ListValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_uuid::get_ValidRestrictionFlags
// Il2CppName: get_ValidRestrictionFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::RestrictionFlags (System::Xml::Schema::Datatype_uuid::*)()>(&System::Xml::Schema::Datatype_uuid::get_ValidRestrictionFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_uuid*), "get_ValidRestrictionFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_uuid::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::Datatype_uuid::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Schema::Datatype_uuid::Compare)> {
  static const MethodInfo* get() {
    static auto* value1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_uuid*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value1, value2});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_uuid::ParseValue
// Il2CppName: ParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::Datatype_uuid::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::Datatype_uuid::ParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_uuid*), "ParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_uuid::TryParseValue
// Il2CppName: TryParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Datatype_uuid::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::Il2CppObject*>)>(&System::Xml::Schema::Datatype_uuid::TryParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* typedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_uuid*), "TryParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr, typedValue});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_uuid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_uuid::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::Datatype_uuid::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_uuid*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
