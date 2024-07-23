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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ShadowCastingMode
  struct ShadowCastingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowCastingMode, "UnityEngine.Rendering", "ShadowCastingMode");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.ShadowCastingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShadowCastingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ShadowCastingMode
    constexpr ShadowCastingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ShadowCastingMode Off
    static constexpr const int Off = 0;
    // Get static field: static public UnityEngine.Rendering.ShadowCastingMode Off
    static ::UnityEngine::Rendering::ShadowCastingMode _get_Off();
    // Set static field: static public UnityEngine.Rendering.ShadowCastingMode Off
    static void _set_Off(::UnityEngine::Rendering::ShadowCastingMode value);
    // static field const value: static public UnityEngine.Rendering.ShadowCastingMode On
    static constexpr const int On = 1;
    // Get static field: static public UnityEngine.Rendering.ShadowCastingMode On
    static ::UnityEngine::Rendering::ShadowCastingMode _get_On();
    // Set static field: static public UnityEngine.Rendering.ShadowCastingMode On
    static void _set_On(::UnityEngine::Rendering::ShadowCastingMode value);
    // static field const value: static public UnityEngine.Rendering.ShadowCastingMode TwoSided
    static constexpr const int TwoSided = 2;
    // Get static field: static public UnityEngine.Rendering.ShadowCastingMode TwoSided
    static ::UnityEngine::Rendering::ShadowCastingMode _get_TwoSided();
    // Set static field: static public UnityEngine.Rendering.ShadowCastingMode TwoSided
    static void _set_TwoSided(::UnityEngine::Rendering::ShadowCastingMode value);
    // static field const value: static public UnityEngine.Rendering.ShadowCastingMode ShadowsOnly
    static constexpr const int ShadowsOnly = 3;
    // Get static field: static public UnityEngine.Rendering.ShadowCastingMode ShadowsOnly
    static ::UnityEngine::Rendering::ShadowCastingMode _get_ShadowsOnly();
    // Set static field: static public UnityEngine.Rendering.ShadowCastingMode ShadowsOnly
    static void _set_ShadowsOnly(::UnityEngine::Rendering::ShadowCastingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.ShadowCastingMode
  #pragma pack(pop)
  static check_size<sizeof(ShadowCastingMode), 0 + sizeof(int)> __UnityEngine_Rendering_ShadowCastingModeSizeCheck;
  static_assert(sizeof(ShadowCastingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
