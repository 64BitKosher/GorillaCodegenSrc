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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaRedefine
  class XmlSchemaRedefine;
  // Forward declaring type: XmlSchema
  class XmlSchema;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: RedefineEntry
  class RedefineEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::RedefineEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RedefineEntry*, "System.Xml.Schema", "RedefineEntry");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.RedefineEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class RedefineEntry : public ::Il2CppObject {
    public:
    public:
    // System.Xml.Schema.XmlSchemaRedefine redefine
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::XmlSchemaRedefine* redefine;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaRedefine*) == 0x8);
    // System.Xml.Schema.XmlSchema schemaToUpdate
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchema* schemaToUpdate;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchema*) == 0x8);
    public:
    // Get instance field reference: System.Xml.Schema.XmlSchemaRedefine redefine
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaRedefine*& dyn_redefine();
    // Get instance field reference: System.Xml.Schema.XmlSchema schemaToUpdate
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchema*& dyn_schemaToUpdate();
    // public System.Void .ctor(System.Xml.Schema.XmlSchemaRedefine external, System.Xml.Schema.XmlSchema schema)
    // Offset: 0x4D411DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RedefineEntry* New_ctor(::System::Xml::Schema::XmlSchemaRedefine* external, ::System::Xml::Schema::XmlSchema* schema) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::RedefineEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RedefineEntry*, creationType>(external, schema)));
    }
  }; // System.Xml.Schema.RedefineEntry
  #pragma pack(pop)
  static check_size<sizeof(RedefineEntry), 24 + sizeof(::System::Xml::Schema::XmlSchema*)> __System_Xml_Schema_RedefineEntrySizeCheck;
  static_assert(sizeof(RedefineEntry) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::RedefineEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
