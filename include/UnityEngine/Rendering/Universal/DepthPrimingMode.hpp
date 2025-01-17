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
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DepthPrimingMode
  struct DepthPrimingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DepthPrimingMode, "UnityEngine.Rendering.Universal", "DepthPrimingMode");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DepthPrimingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct DepthPrimingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DepthPrimingMode
    constexpr DepthPrimingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DepthPrimingMode Disabled
    static constexpr const int Disabled = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DepthPrimingMode Disabled
    static ::UnityEngine::Rendering::Universal::DepthPrimingMode _get_Disabled();
    // Set static field: static public UnityEngine.Rendering.Universal.DepthPrimingMode Disabled
    static void _set_Disabled(::UnityEngine::Rendering::Universal::DepthPrimingMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DepthPrimingMode Auto
    static constexpr const int Auto = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DepthPrimingMode Auto
    static ::UnityEngine::Rendering::Universal::DepthPrimingMode _get_Auto();
    // Set static field: static public UnityEngine.Rendering.Universal.DepthPrimingMode Auto
    static void _set_Auto(::UnityEngine::Rendering::Universal::DepthPrimingMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DepthPrimingMode Forced
    static constexpr const int Forced = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DepthPrimingMode Forced
    static ::UnityEngine::Rendering::Universal::DepthPrimingMode _get_Forced();
    // Set static field: static public UnityEngine.Rendering.Universal.DepthPrimingMode Forced
    static void _set_Forced(::UnityEngine::Rendering::Universal::DepthPrimingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DepthPrimingMode
  #pragma pack(pop)
  static check_size<sizeof(DepthPrimingMode), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DepthPrimingModeSizeCheck;
  static_assert(sizeof(DepthPrimingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
