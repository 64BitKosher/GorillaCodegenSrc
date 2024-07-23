// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpaceAttribute
  class SpaceAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SpaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpaceAttribute*, "UnityEngine", "SpaceAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SpaceAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class SpaceAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public readonly System.Single height
    // Size: 0x4
    // Offset: 0x14
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public readonly System.Single height
    [[deprecated("Use field access instead!")]] float& dyn_height();
    // public System.Void .ctor(System.Single height)
    // Offset: 0x54BFF20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpaceAttribute* New_ctor(float height) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SpaceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpaceAttribute*, creationType>(height)));
    }
    // public System.Void .ctor()
    // Offset: 0x54BFF00
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpaceAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SpaceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpaceAttribute*, creationType>()));
    }
  }; // UnityEngine.SpaceAttribute
  #pragma pack(pop)
  static check_size<sizeof(SpaceAttribute), 20 + sizeof(float)> __UnityEngine_SpaceAttributeSizeCheck;
  static_assert(sizeof(SpaceAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SpaceAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::SpaceAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
