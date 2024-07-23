// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VYaml::Annotations
namespace VYaml::Annotations {
  // Forward declaring type: NamingConvention
  struct NamingConvention;
}
// Completed forward declares
// Type namespace: VYaml.Internal
namespace VYaml::Internal {
  // Forward declaring type: KeyNameMutator
  class KeyNameMutator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Internal::KeyNameMutator);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Internal::KeyNameMutator*, "VYaml.Internal", "KeyNameMutator");
// Type namespace: VYaml.Internal
namespace VYaml::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Internal.KeyNameMutator
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  class KeyNameMutator : public ::Il2CppObject {
    public:
    // static public System.String Mutate(System.String s, VYaml.Annotations.NamingConvention namingConvention)
    // Offset: 0x5728E88
    static ::StringW Mutate(::StringW s, ::VYaml::Annotations::NamingConvention namingConvention);
    // static public System.String ToLowerCamelCase(System.String s)
    // Offset: 0x573F500
    static ::StringW ToLowerCamelCase(::StringW s);
    // static public System.String ToSnakeCase(System.String s, System.Char separator)
    // Offset: 0x573F738
    static ::StringW ToSnakeCase(::StringW s, ::Il2CppChar separator);
  }; // VYaml.Internal.KeyNameMutator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Internal::KeyNameMutator::Mutate
// Il2CppName: Mutate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::VYaml::Annotations::NamingConvention)>(&VYaml::Internal::KeyNameMutator::Mutate)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namingConvention = &::il2cpp_utils::GetClassFromName("VYaml.Annotations", "NamingConvention")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Internal::KeyNameMutator*), "Mutate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, namingConvention});
  }
};
// Writing MetadataGetter for method: VYaml::Internal::KeyNameMutator::ToLowerCamelCase
// Il2CppName: ToLowerCamelCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&VYaml::Internal::KeyNameMutator::ToLowerCamelCase)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Internal::KeyNameMutator*), "ToLowerCamelCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: VYaml::Internal::KeyNameMutator::ToSnakeCase
// Il2CppName: ToSnakeCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Il2CppChar)>(&VYaml::Internal::KeyNameMutator::ToSnakeCase)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* separator = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Internal::KeyNameMutator*), "ToSnakeCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, separator});
  }
};