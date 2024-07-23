// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.IAttributeProvider
#include "Newtonsoft/Json/Serialization/IAttributeProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ReflectionAttributeProvider
  class ReflectionAttributeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*, "Newtonsoft.Json.Serialization", "ReflectionAttributeProvider");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.ReflectionAttributeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  class ReflectionAttributeProvider : public ::Il2CppObject/*, public ::Newtonsoft::Json::Serialization::IAttributeProvider*/ {
    public:
    public:
    // private readonly System.Object _attributeProvider
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* attributeProvider;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Serialization::IAttributeProvider
    operator ::Newtonsoft::Json::Serialization::IAttributeProvider() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Serialization::IAttributeProvider*>(this);
    }
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return attributeProvider;
    }
    // Get instance field reference: private readonly System.Object _attributeProvider
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__attributeProvider();
    // public System.Void .ctor(System.Object attributeProvider)
    // Offset: 0x473A764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionAttributeProvider* New_ctor(::Il2CppObject* attributeProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionAttributeProvider*, creationType>(attributeProvider)));
    }
  }; // Newtonsoft.Json.Serialization.ReflectionAttributeProvider
  #pragma pack(pop)
  static check_size<sizeof(ReflectionAttributeProvider), 16 + sizeof(::Il2CppObject*)> __Newtonsoft_Json_Serialization_ReflectionAttributeProviderSizeCheck;
  static_assert(sizeof(ReflectionAttributeProvider) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ReflectionAttributeProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
