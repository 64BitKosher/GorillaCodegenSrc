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
  // Forward declaring type: VolumeFrameworkUpdateMode
  struct VolumeFrameworkUpdateMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode, "UnityEngine.Rendering.Universal", "VolumeFrameworkUpdateMode");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct VolumeFrameworkUpdateMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VolumeFrameworkUpdateMode
    constexpr VolumeFrameworkUpdateMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode EveryFrame
    static constexpr const int EveryFrame = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode EveryFrame
    static ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode _get_EveryFrame();
    // Set static field: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode EveryFrame
    static void _set_EveryFrame(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode ViaScripting
    static constexpr const int ViaScripting = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode ViaScripting
    static ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode _get_ViaScripting();
    // Set static field: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode ViaScripting
    static void _set_ViaScripting(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode UsePipelineSettings
    static constexpr const int UsePipelineSettings = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode UsePipelineSettings
    static ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode _get_UsePipelineSettings();
    // Set static field: static public UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode UsePipelineSettings
    static void _set_UsePipelineSettings(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode
  #pragma pack(pop)
  static check_size<sizeof(VolumeFrameworkUpdateMode), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_VolumeFrameworkUpdateModeSizeCheck;
  static_assert(sizeof(VolumeFrameworkUpdateMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"