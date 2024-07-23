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
// Completed forward declares
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Forward declaring type: PrimitiveObjectResolver
  class PrimitiveObjectResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Serialization::PrimitiveObjectResolver);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Serialization::PrimitiveObjectResolver*, "VYaml.Serialization", "PrimitiveObjectResolver");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Serialization.PrimitiveObjectResolver
  // [TokenAttribute] Offset: FFFFFFFF
  class PrimitiveObjectResolver : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatterResolver*/ {
    public:
    // Nested type: ::VYaml::Serialization::PrimitiveObjectResolver::FormatterCache_1<T>
    template<typename T>
    class FormatterCache_1;
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatterResolver
    operator ::VYaml::Serialization::IYamlFormatterResolver() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatterResolver*>(this);
    }
    // Get static field: static public readonly VYaml.Serialization.PrimitiveObjectResolver Instance
    static ::VYaml::Serialization::PrimitiveObjectResolver* _get_Instance();
    // Set static field: static public readonly VYaml.Serialization.PrimitiveObjectResolver Instance
    static void _set_Instance(::VYaml::Serialization::PrimitiveObjectResolver* value);
    // public VYaml.Serialization.IYamlFormatter`1<T> GetFormatter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::PrimitiveObjectResolver::GetFormatter");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::PrimitiveObjectResolver*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*, false>(this, ___generic__method);
    }
    // public System.Void .ctor()
    // Offset: 0x57306FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrimitiveObjectResolver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::PrimitiveObjectResolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrimitiveObjectResolver*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x5730704
    static void _cctor();
  }; // VYaml.Serialization.PrimitiveObjectResolver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Serialization::PrimitiveObjectResolver::GetFormatter
// Il2CppName: GetFormatter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: VYaml::Serialization::PrimitiveObjectResolver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VYaml::Serialization::PrimitiveObjectResolver::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VYaml::Serialization::PrimitiveObjectResolver::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::PrimitiveObjectResolver*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
