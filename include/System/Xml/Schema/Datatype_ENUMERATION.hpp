// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_NMTOKEN
#include "System/Xml/Schema/Datatype_NMTOKEN.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlTokenizedType
  struct XmlTokenizedType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_ENUMERATION
  class Datatype_ENUMERATION;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_ENUMERATION);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_ENUMERATION*, "System.Xml.Schema", "Datatype_ENUMERATION");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_ENUMERATION
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_ENUMERATION : public ::System::Xml::Schema::Datatype_NMTOKEN {
    public:
    // public override System.Xml.XmlTokenizedType get_TokenizedType()
    // Offset: 0x4E8E288
    // Implemented from: System.Xml.Schema.Datatype_NMTOKEN
    // Base method: System.Xml.XmlTokenizedType Datatype_NMTOKEN::get_TokenizedType()
    ::System::Xml::XmlTokenizedType get_TokenizedType();
    // public System.Void .ctor()
    // Offset: 0x4E82378
    // Implemented from: System.Xml.Schema.Datatype_NMTOKEN
    // Base method: System.Void Datatype_NMTOKEN::.ctor()
    // Base method: System.Void Datatype_token::.ctor()
    // Base method: System.Void Datatype_normalizedString::.ctor()
    // Base method: System.Void Datatype_string::.ctor()
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_ENUMERATION* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_ENUMERATION::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_ENUMERATION*, creationType>()));
    }
  }; // System.Xml.Schema.Datatype_ENUMERATION
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_ENUMERATION::get_TokenizedType
// Il2CppName: get_TokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTokenizedType (System::Xml::Schema::Datatype_ENUMERATION::*)()>(&System::Xml::Schema::Datatype_ENUMERATION::get_TokenizedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_ENUMERATION*), "get_TokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_ENUMERATION::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
