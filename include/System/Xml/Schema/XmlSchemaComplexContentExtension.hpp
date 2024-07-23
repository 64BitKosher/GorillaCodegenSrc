// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaContent
#include "System/Xml/Schema/XmlSchemaContent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaParticle
  class XmlSchemaParticle;
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
  // Forward declaring type: XmlSchemaAnyAttribute
  class XmlSchemaAnyAttribute;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaComplexContentExtension
  class XmlSchemaComplexContentExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexContentExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexContentExtension*, "System.Xml.Schema", "XmlSchemaComplexContentExtension");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaComplexContentExtension
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaComplexContentExtension : public ::System::Xml::Schema::XmlSchemaContent {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaParticle particle
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::Schema::XmlSchemaParticle* particle;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaParticle*) == 0x8);
    // private System.Xml.Schema.XmlSchemaObjectCollection attributes
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Schema::XmlSchemaObjectCollection* attributes;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*) == 0x8);
    // private System.Xml.Schema.XmlSchemaAnyAttribute anyAttribute
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaAnyAttribute*) == 0x8);
    // private System.Xml.XmlQualifiedName baseTypeName
    // Size: 0x8
    // Offset: 0x68
    ::System::Xml::XmlQualifiedName* baseTypeName;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Schema.XmlSchemaParticle particle
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaParticle*& dyn_particle();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObjectCollection attributes
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaObjectCollection*& dyn_attributes();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaAnyAttribute anyAttribute
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaAnyAttribute*& dyn_anyAttribute();
    // Get instance field reference: private System.Xml.XmlQualifiedName baseTypeName
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn_baseTypeName();
    // public System.Xml.XmlQualifiedName get_BaseTypeName()
    // Offset: 0x4D90BE0
    ::System::Xml::XmlQualifiedName* get_BaseTypeName();
    // public System.Void set_BaseTypeName(System.Xml.XmlQualifiedName value)
    // Offset: 0x4D90BE8
    void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);
    // public System.Xml.Schema.XmlSchemaParticle get_Particle()
    // Offset: 0x4D90C88
    ::System::Xml::Schema::XmlSchemaParticle* get_Particle();
    // public System.Void set_Particle(System.Xml.Schema.XmlSchemaParticle value)
    // Offset: 0x4D90C90
    void set_Particle(::System::Xml::Schema::XmlSchemaParticle* value);
    // public System.Xml.Schema.XmlSchemaObjectCollection get_Attributes()
    // Offset: 0x4D90C98
    ::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();
    // public System.Xml.Schema.XmlSchemaAnyAttribute get_AnyAttribute()
    // Offset: 0x4D90CA0
    ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();
    // public System.Void set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute value)
    // Offset: 0x4D90CA8
    void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);
    // System.Void SetAttributes(System.Xml.Schema.XmlSchemaObjectCollection newAttributes)
    // Offset: 0x4D90CB0
    void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);
    // public System.Void .ctor()
    // Offset: 0x4D90CB8
    // Implemented from: System.Xml.Schema.XmlSchemaContent
    // Base method: System.Void XmlSchemaContent::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaComplexContentExtension* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaComplexContentExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaComplexContentExtension*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaComplexContentExtension
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaComplexContentExtension), 104 + sizeof(::System::Xml::XmlQualifiedName*)> __System_Xml_Schema_XmlSchemaComplexContentExtensionSizeCheck;
  static_assert(sizeof(XmlSchemaComplexContentExtension) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::get_BaseTypeName
// Il2CppName: get_BaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::XmlSchemaComplexContentExtension::*)()>(&System::Xml::Schema::XmlSchemaComplexContentExtension::get_BaseTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentExtension*), "get_BaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::set_BaseTypeName
// Il2CppName: set_BaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContentExtension::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaComplexContentExtension::set_BaseTypeName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentExtension*), "set_BaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::get_Particle
// Il2CppName: get_Particle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (System::Xml::Schema::XmlSchemaComplexContentExtension::*)()>(&System::Xml::Schema::XmlSchemaComplexContentExtension::get_Particle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentExtension*), "get_Particle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::set_Particle
// Il2CppName: set_Particle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContentExtension::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&System::Xml::Schema::XmlSchemaComplexContentExtension::set_Particle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaParticle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentExtension*), "set_Particle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaComplexContentExtension::*)()>(&System::Xml::Schema::XmlSchemaComplexContentExtension::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentExtension*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::get_AnyAttribute
// Il2CppName: get_AnyAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (System::Xml::Schema::XmlSchemaComplexContentExtension::*)()>(&System::Xml::Schema::XmlSchemaComplexContentExtension::get_AnyAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentExtension*), "get_AnyAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::set_AnyAttribute
// Il2CppName: set_AnyAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContentExtension::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&System::Xml::Schema::XmlSchemaComplexContentExtension::set_AnyAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentExtension*), "set_AnyAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::SetAttributes
// Il2CppName: SetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexContentExtension::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&System::Xml::Schema::XmlSchemaComplexContentExtension::SetAttributes)> {
  static const MethodInfo* get() {
    static auto* newAttributes = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexContentExtension*), "SetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newAttributes});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexContentExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
