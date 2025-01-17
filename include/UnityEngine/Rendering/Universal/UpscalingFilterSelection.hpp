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
  // Forward declaring type: UpscalingFilterSelection
  struct UpscalingFilterSelection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UpscalingFilterSelection, "UnityEngine.Rendering.Universal", "UpscalingFilterSelection");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.UpscalingFilterSelection
  // [TokenAttribute] Offset: FFFFFFFF
  struct UpscalingFilterSelection/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UpscalingFilterSelection
    constexpr UpscalingFilterSelection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Auto
    static constexpr const int Auto = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Auto
    static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection _get_Auto();
    // Set static field: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Auto
    static void _set_Auto(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value);
    // static field const value: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Linear
    static constexpr const int Linear = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Linear
    static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection _get_Linear();
    // Set static field: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Linear
    static void _set_Linear(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value);
    // static field const value: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Point
    static constexpr const int Point = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Point
    static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection _get_Point();
    // Set static field: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection Point
    static void _set_Point(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value);
    // static field const value: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection FSR
    static constexpr const int FSR = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection FSR
    static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection _get_FSR();
    // Set static field: static public UnityEngine.Rendering.Universal.UpscalingFilterSelection FSR
    static void _set_FSR(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.UpscalingFilterSelection
  #pragma pack(pop)
  static check_size<sizeof(UpscalingFilterSelection), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_UpscalingFilterSelectionSizeCheck;
  static_assert(sizeof(UpscalingFilterSelection) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
