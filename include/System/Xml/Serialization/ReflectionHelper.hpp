// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.ParameterModifier
#include "System/Reflection/ParameterModifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeMapping
  class XmlTypeMapping;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: ReflectionHelper
  class ReflectionHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::ReflectionHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::ReflectionHelper*, "System.Xml.Serialization", "ReflectionHelper");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.ReflectionHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectionHelper : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Hashtable _clrTypes
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* clrTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Hashtable _schemaTypes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Hashtable* schemaTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Get static field: static private readonly System.Reflection.ParameterModifier[] empty_modifiers
    static ::ArrayW<::System::Reflection::ParameterModifier> _get_empty_modifiers();
    // Set static field: static private readonly System.Reflection.ParameterModifier[] empty_modifiers
    static void _set_empty_modifiers(::ArrayW<::System::Reflection::ParameterModifier> value);
    // Get instance field reference: private System.Collections.Hashtable _clrTypes
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__clrTypes();
    // Get instance field reference: private System.Collections.Hashtable _schemaTypes
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__schemaTypes();
    // public System.Void RegisterSchemaType(System.Xml.Serialization.XmlTypeMapping map, System.String xmlType, System.String ns)
    // Offset: 0x4E4256C
    void RegisterSchemaType(::System::Xml::Serialization::XmlTypeMapping* map, ::StringW xmlType, ::StringW ns);
    // public System.Xml.Serialization.XmlTypeMapping GetRegisteredSchemaType(System.String xmlType, System.String ns)
    // Offset: 0x4E42638
    ::System::Xml::Serialization::XmlTypeMapping* GetRegisteredSchemaType(::StringW xmlType, ::StringW ns);
    // public System.Void RegisterClrType(System.Xml.Serialization.XmlTypeMapping map, System.Type type, System.String ns)
    // Offset: 0x4E4270C
    void RegisterClrType(::System::Xml::Serialization::XmlTypeMapping* map, ::System::Type* type, ::StringW ns);
    // public System.Xml.Serialization.XmlTypeMapping GetRegisteredClrType(System.Type type, System.String ns)
    // Offset: 0x4E42864
    ::System::Xml::Serialization::XmlTypeMapping* GetRegisteredClrType(::System::Type* type, ::StringW ns);
    // static public System.Void CheckSerializableType(System.Type type, System.Boolean allowPrivateConstructors)
    // Offset: 0x4E429CC
    static void CheckSerializableType(::System::Type* type, bool allowPrivateConstructors);
    // public System.Void .ctor()
    // Offset: 0x4E42D14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::ReflectionHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionHelper*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4E42DA4
    static void _cctor();
  }; // System.Xml.Serialization.ReflectionHelper
  #pragma pack(pop)
  static check_size<sizeof(ReflectionHelper), 24 + sizeof(::System::Collections::Hashtable*)> __System_Xml_Serialization_ReflectionHelperSizeCheck;
  static_assert(sizeof(ReflectionHelper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::ReflectionHelper::RegisterSchemaType
// Il2CppName: RegisterSchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::ReflectionHelper::*)(::System::Xml::Serialization::XmlTypeMapping*, ::StringW, ::StringW)>(&System::Xml::Serialization::ReflectionHelper::RegisterSchemaType)> {
  static const MethodInfo* get() {
    static auto* map = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlTypeMapping")->byval_arg;
    static auto* xmlType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ReflectionHelper*), "RegisterSchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{map, xmlType, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ReflectionHelper::GetRegisteredSchemaType
// Il2CppName: GetRegisteredSchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (System::Xml::Serialization::ReflectionHelper::*)(::StringW, ::StringW)>(&System::Xml::Serialization::ReflectionHelper::GetRegisteredSchemaType)> {
  static const MethodInfo* get() {
    static auto* xmlType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ReflectionHelper*), "GetRegisteredSchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlType, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ReflectionHelper::RegisterClrType
// Il2CppName: RegisterClrType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::ReflectionHelper::*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Type*, ::StringW)>(&System::Xml::Serialization::ReflectionHelper::RegisterClrType)> {
  static const MethodInfo* get() {
    static auto* map = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlTypeMapping")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ReflectionHelper*), "RegisterClrType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{map, type, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ReflectionHelper::GetRegisteredClrType
// Il2CppName: GetRegisteredClrType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (System::Xml::Serialization::ReflectionHelper::*)(::System::Type*, ::StringW)>(&System::Xml::Serialization::ReflectionHelper::GetRegisteredClrType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ReflectionHelper*), "GetRegisteredClrType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ReflectionHelper::CheckSerializableType
// Il2CppName: CheckSerializableType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, bool)>(&System::Xml::Serialization::ReflectionHelper::CheckSerializableType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* allowPrivateConstructors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ReflectionHelper*), "CheckSerializableType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, allowPrivateConstructors});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ReflectionHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::ReflectionHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Serialization::ReflectionHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ReflectionHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
