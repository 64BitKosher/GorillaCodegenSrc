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
  // Forward declaring type: CameraOverrideOption
  struct CameraOverrideOption;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CameraOverrideOption, "UnityEngine.Rendering.Universal", "CameraOverrideOption");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.CameraOverrideOption
  // [TokenAttribute] Offset: FFFFFFFF
  struct CameraOverrideOption/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CameraOverrideOption
    constexpr CameraOverrideOption(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.CameraOverrideOption Off
    static constexpr const int Off = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.CameraOverrideOption Off
    static ::UnityEngine::Rendering::Universal::CameraOverrideOption _get_Off();
    // Set static field: static public UnityEngine.Rendering.Universal.CameraOverrideOption Off
    static void _set_Off(::UnityEngine::Rendering::Universal::CameraOverrideOption value);
    // static field const value: static public UnityEngine.Rendering.Universal.CameraOverrideOption On
    static constexpr const int On = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.CameraOverrideOption On
    static ::UnityEngine::Rendering::Universal::CameraOverrideOption _get_On();
    // Set static field: static public UnityEngine.Rendering.Universal.CameraOverrideOption On
    static void _set_On(::UnityEngine::Rendering::Universal::CameraOverrideOption value);
    // static field const value: static public UnityEngine.Rendering.Universal.CameraOverrideOption UsePipelineSettings
    static constexpr const int UsePipelineSettings = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.CameraOverrideOption UsePipelineSettings
    static ::UnityEngine::Rendering::Universal::CameraOverrideOption _get_UsePipelineSettings();
    // Set static field: static public UnityEngine.Rendering.Universal.CameraOverrideOption UsePipelineSettings
    static void _set_UsePipelineSettings(::UnityEngine::Rendering::Universal::CameraOverrideOption value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.CameraOverrideOption
  #pragma pack(pop)
  static check_size<sizeof(CameraOverrideOption), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_CameraOverrideOptionSizeCheck;
  static_assert(sizeof(CameraOverrideOption) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
