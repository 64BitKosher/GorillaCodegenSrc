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
  // Forward declaring type: LightShadowResolution
  struct LightShadowResolution;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LightShadowResolution, "UnityEngine.Rendering", "LightShadowResolution");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.LightShadowResolution
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightShadowResolution/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LightShadowResolution
    constexpr LightShadowResolution(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.LightShadowResolution FromQualitySettings
    static constexpr const int FromQualitySettings = -1;
    // Get static field: static public UnityEngine.Rendering.LightShadowResolution FromQualitySettings
    static ::UnityEngine::Rendering::LightShadowResolution _get_FromQualitySettings();
    // Set static field: static public UnityEngine.Rendering.LightShadowResolution FromQualitySettings
    static void _set_FromQualitySettings(::UnityEngine::Rendering::LightShadowResolution value);
    // static field const value: static public UnityEngine.Rendering.LightShadowResolution Low
    static constexpr const int Low = 0;
    // Get static field: static public UnityEngine.Rendering.LightShadowResolution Low
    static ::UnityEngine::Rendering::LightShadowResolution _get_Low();
    // Set static field: static public UnityEngine.Rendering.LightShadowResolution Low
    static void _set_Low(::UnityEngine::Rendering::LightShadowResolution value);
    // static field const value: static public UnityEngine.Rendering.LightShadowResolution Medium
    static constexpr const int Medium = 1;
    // Get static field: static public UnityEngine.Rendering.LightShadowResolution Medium
    static ::UnityEngine::Rendering::LightShadowResolution _get_Medium();
    // Set static field: static public UnityEngine.Rendering.LightShadowResolution Medium
    static void _set_Medium(::UnityEngine::Rendering::LightShadowResolution value);
    // static field const value: static public UnityEngine.Rendering.LightShadowResolution High
    static constexpr const int High = 2;
    // Get static field: static public UnityEngine.Rendering.LightShadowResolution High
    static ::UnityEngine::Rendering::LightShadowResolution _get_High();
    // Set static field: static public UnityEngine.Rendering.LightShadowResolution High
    static void _set_High(::UnityEngine::Rendering::LightShadowResolution value);
    // static field const value: static public UnityEngine.Rendering.LightShadowResolution VeryHigh
    static constexpr const int VeryHigh = 3;
    // Get static field: static public UnityEngine.Rendering.LightShadowResolution VeryHigh
    static ::UnityEngine::Rendering::LightShadowResolution _get_VeryHigh();
    // Set static field: static public UnityEngine.Rendering.LightShadowResolution VeryHigh
    static void _set_VeryHigh(::UnityEngine::Rendering::LightShadowResolution value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.LightShadowResolution
  #pragma pack(pop)
  static check_size<sizeof(LightShadowResolution), 0 + sizeof(int)> __UnityEngine_Rendering_LightShadowResolutionSizeCheck;
  static_assert(sizeof(LightShadowResolution) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
