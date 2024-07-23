// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.IYamlFormatterResolver
#include "VYaml/Serialization/IYamlFormatterResolver.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Forward declaring type: GeneratedResolver
  class GeneratedResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Serialization::GeneratedResolver);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Serialization::GeneratedResolver*, "VYaml.Serialization", "GeneratedResolver");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Serialization.GeneratedResolver
  // [TokenAttribute] Offset: FFFFFFFF
  class GeneratedResolver : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatterResolver*/ {
    public:
    // Nested type: ::VYaml::Serialization::GeneratedResolver::Check_1<T>
    template<typename T>
    class Check_1;
    // Nested type: ::VYaml::Serialization::GeneratedResolver::Cache_1<T>
    template<typename T>
    class Cache_1;
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatterResolver
    operator ::VYaml::Serialization::IYamlFormatterResolver() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatterResolver*>(this);
    }
    // Get static field: static public readonly VYaml.Serialization.GeneratedResolver Instance
    static ::VYaml::Serialization::GeneratedResolver* _get_Instance();
    // Set static field: static public readonly VYaml.Serialization.GeneratedResolver Instance
    static void _set_Instance(::VYaml::Serialization::GeneratedResolver* value);
    // static private System.Boolean TryInvokeRegisterYamlFormatter(System.Type type)
    // Offset: 0x57305D4
    static bool TryInvokeRegisterYamlFormatter(::System::Type* type);
    // static public System.Void Register(VYaml.Serialization.IYamlFormatter`1<T> formatter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Register(::VYaml::Serialization::IYamlFormatter_1<T>* formatter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::GeneratedResolver::Register");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("VYaml.Serialization", "GeneratedResolver", "Register", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(formatter)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, formatter);
    }
    // public VYaml.Serialization.IYamlFormatter`1<T> GetFormatter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::GeneratedResolver::GetFormatter");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::GeneratedResolver*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*, false>(this, ___generic__method);
    }
    // public System.Void .ctor()
    // Offset: 0x573068C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneratedResolver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::GeneratedResolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneratedResolver*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x5730694
    static void _cctor();
  }; // VYaml.Serialization.GeneratedResolver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Serialization::GeneratedResolver::TryInvokeRegisterYamlFormatter
// Il2CppName: TryInvokeRegisterYamlFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&VYaml::Serialization::GeneratedResolver::TryInvokeRegisterYamlFormatter)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::GeneratedResolver*), "TryInvokeRegisterYamlFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::GeneratedResolver::Register
// Il2CppName: Register
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: VYaml::Serialization::GeneratedResolver::GetFormatter
// Il2CppName: GetFormatter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: VYaml::Serialization::GeneratedResolver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VYaml::Serialization::GeneratedResolver::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VYaml::Serialization::GeneratedResolver::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::GeneratedResolver*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
