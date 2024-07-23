// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ShadowmaskMode
  struct ShadowmaskMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ShadowmaskMode, "UnityEngine", "ShadowmaskMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ShadowmaskMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShadowmaskMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ShadowmaskMode
    constexpr ShadowmaskMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ShadowmaskMode Shadowmask
    static constexpr const int Shadowmask = 0;
    // Get static field: static public UnityEngine.ShadowmaskMode Shadowmask
    static ::UnityEngine::ShadowmaskMode _get_Shadowmask();
    // Set static field: static public UnityEngine.ShadowmaskMode Shadowmask
    static void _set_Shadowmask(::UnityEngine::ShadowmaskMode value);
    // static field const value: static public UnityEngine.ShadowmaskMode DistanceShadowmask
    static constexpr const int DistanceShadowmask = 1;
    // Get static field: static public UnityEngine.ShadowmaskMode DistanceShadowmask
    static ::UnityEngine::ShadowmaskMode _get_DistanceShadowmask();
    // Set static field: static public UnityEngine.ShadowmaskMode DistanceShadowmask
    static void _set_DistanceShadowmask(::UnityEngine::ShadowmaskMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ShadowmaskMode
  #pragma pack(pop)
  static check_size<sizeof(ShadowmaskMode), 0 + sizeof(int)> __UnityEngine_ShadowmaskModeSizeCheck;
  static_assert(sizeof(ShadowmaskMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
