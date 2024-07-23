// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaSurfaceOverride
  class GorillaSurfaceOverride;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaSurfaceOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaSurfaceOverride*, "", "GorillaSurfaceOverride");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: GorillaSurfaceOverride
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaSurfaceOverride : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Int32 overrideIndex
    // Size: 0x4
    // Offset: 0x20
    int overrideIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single extraVelMultiplier
    // Size: 0x4
    // Offset: 0x24
    float extraVelMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single extraVelMaxMultiplier
    // Size: 0x4
    // Offset: 0x28
    float extraVelMaxMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean sendOnTapEvent
    // Size: 0x1
    // Offset: 0x2C
    bool sendOnTapEvent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Int32 overrideIndex
    [[deprecated("Use field access instead!")]] int& dyn_overrideIndex();
    // Get instance field reference: public System.Single extraVelMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_extraVelMultiplier();
    // Get instance field reference: public System.Single extraVelMaxMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_extraVelMaxMultiplier();
    // Get instance field reference: public System.Boolean sendOnTapEvent
    [[deprecated("Use field access instead!")]] bool& dyn_sendOnTapEvent();
    // public System.Void .ctor()
    // Offset: 0x26DEE28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaSurfaceOverride* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaSurfaceOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaSurfaceOverride*, creationType>()));
    }
  }; // GorillaSurfaceOverride
  #pragma pack(pop)
  static check_size<sizeof(GorillaSurfaceOverride), 44 + sizeof(bool)> __GlobalNamespace_GorillaSurfaceOverrideSizeCheck;
  static_assert(sizeof(GorillaSurfaceOverride) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaSurfaceOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
