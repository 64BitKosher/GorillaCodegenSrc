// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.BuiltinResolver
#include "VYaml/Serialization/BuiltinResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VYaml::Serialization
namespace VYaml::Serialization {
  // Forward declaring type: IYamlFormatter`1<T>
  template<typename T>
  class IYamlFormatter_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::VYaml::Serialization::BuiltinResolver::FormatterCache_1, "VYaml.Serialization", "BuiltinResolver/FormatterCache`1");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: VYaml.Serialization.BuiltinResolver/FormatterCache`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  template<typename T>
  class BuiltinResolver::FormatterCache_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly VYaml.Serialization.IYamlFormatter`1<T> Formatter
    static ::VYaml::Serialization::IYamlFormatter_1<T>* _get_Formatter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::BuiltinResolver::FormatterCache_1::_get_Formatter");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::VYaml::Serialization::IYamlFormatter_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BuiltinResolver::FormatterCache_1<T>*>::get(), "Formatter"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly VYaml.Serialization.IYamlFormatter`1<T> Formatter
    static void _set_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::BuiltinResolver::FormatterCache_1::_set_Formatter");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BuiltinResolver::FormatterCache_1<T>*>::get(), "Formatter", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::BuiltinResolver::FormatterCache_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BuiltinResolver::FormatterCache_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // VYaml.Serialization.BuiltinResolver/FormatterCache`1
  // Could not write size check! Type: VYaml.Serialization.BuiltinResolver/FormatterCache`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
