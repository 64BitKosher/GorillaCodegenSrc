// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XdrBuilder
#include "System/Xml/Schema/XdrBuilder.hpp"
// Including type: System.Xml.Schema.SchemaNames/Token
#include "System/Xml/Schema/SchemaNames_Token.hpp"
// Including type: System.Xml.XmlTokenizedType
#include "System/Xml/XmlTokenizedType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder::XdrAttributeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder::XdrAttributeEntry*, "System.Xml.Schema", "XdrBuilder/XdrAttributeEntry");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XdrBuilder/XdrAttributeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class XdrBuilder::XdrAttributeEntry : public ::Il2CppObject {
    public:
    public:
    // System.Xml.Schema.SchemaNames/Token _Attribute
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::Schema::SchemaNames::Token Attribute;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaNames::Token) == 0x4);
    // System.Int32 _SchemaFlags
    // Size: 0x4
    // Offset: 0x14
    int SchemaFlags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Xml.Schema.XmlSchemaDatatype _Datatype
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchemaDatatype* Datatype;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDatatype*) == 0x8);
    // System.Xml.Schema.XdrBuilder/XdrBuildFunction _BuildFunc
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::XdrBuilder::XdrBuildFunction* BuildFunc;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XdrBuilder::XdrBuildFunction*) == 0x8);
    public:
    // Get instance field reference: System.Xml.Schema.SchemaNames/Token _Attribute
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaNames::Token& dyn__Attribute();
    // Get instance field reference: System.Int32 _SchemaFlags
    [[deprecated("Use field access instead!")]] int& dyn__SchemaFlags();
    // Get instance field reference: System.Xml.Schema.XmlSchemaDatatype _Datatype
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaDatatype*& dyn__Datatype();
    // Get instance field reference: System.Xml.Schema.XdrBuilder/XdrBuildFunction _BuildFunc
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XdrBuilder::XdrBuildFunction*& dyn__BuildFunc();
    // System.Void .ctor(System.Xml.Schema.SchemaNames/Token a, System.Xml.XmlTokenizedType ttype, System.Xml.Schema.XdrBuilder/XdrBuildFunction build)
    // Offset: 0x4D8862C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XdrBuilder::XdrAttributeEntry* New_ctor(::System::Xml::Schema::SchemaNames::Token a, ::System::Xml::XmlTokenizedType ttype, ::System::Xml::Schema::XdrBuilder::XdrBuildFunction* build) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XdrBuilder::XdrAttributeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XdrBuilder::XdrAttributeEntry*, creationType>(a, ttype, build)));
    }
    // System.Void .ctor(System.Xml.Schema.SchemaNames/Token a, System.Xml.XmlTokenizedType ttype, System.Int32 schemaFlags, System.Xml.Schema.XdrBuilder/XdrBuildFunction build)
    // Offset: 0x4D8868C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XdrBuilder::XdrAttributeEntry* New_ctor(::System::Xml::Schema::SchemaNames::Token a, ::System::Xml::XmlTokenizedType ttype, int schemaFlags, ::System::Xml::Schema::XdrBuilder::XdrBuildFunction* build) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XdrBuilder::XdrAttributeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XdrBuilder::XdrAttributeEntry*, creationType>(a, ttype, schemaFlags, build)));
    }
  }; // System.Xml.Schema.XdrBuilder/XdrAttributeEntry
  #pragma pack(pop)
  static check_size<sizeof(XdrBuilder::XdrAttributeEntry), 32 + sizeof(::System::Xml::Schema::XdrBuilder::XdrBuildFunction*)> __System_Xml_Schema_XdrBuilder_XdrAttributeEntrySizeCheck;
  static_assert(sizeof(XdrBuilder::XdrAttributeEntry) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XdrBuilder::XdrAttributeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XdrBuilder::XdrAttributeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!