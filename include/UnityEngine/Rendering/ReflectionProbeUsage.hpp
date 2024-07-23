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
  // Forward declaring type: ReflectionProbeUsage
  struct ReflectionProbeUsage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReflectionProbeUsage, "UnityEngine.Rendering", "ReflectionProbeUsage");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.ReflectionProbeUsage
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReflectionProbeUsage/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ReflectionProbeUsage
    constexpr ReflectionProbeUsage(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ReflectionProbeUsage Off
    static constexpr const int Off = 0;
    // Get static field: static public UnityEngine.Rendering.ReflectionProbeUsage Off
    static ::UnityEngine::Rendering::ReflectionProbeUsage _get_Off();
    // Set static field: static public UnityEngine.Rendering.ReflectionProbeUsage Off
    static void _set_Off(::UnityEngine::Rendering::ReflectionProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbes
    static constexpr const int BlendProbes = 1;
    // Get static field: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbes
    static ::UnityEngine::Rendering::ReflectionProbeUsage _get_BlendProbes();
    // Set static field: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbes
    static void _set_BlendProbes(::UnityEngine::Rendering::ReflectionProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbesAndSkybox
    static constexpr const int BlendProbesAndSkybox = 2;
    // Get static field: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbesAndSkybox
    static ::UnityEngine::Rendering::ReflectionProbeUsage _get_BlendProbesAndSkybox();
    // Set static field: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbesAndSkybox
    static void _set_BlendProbesAndSkybox(::UnityEngine::Rendering::ReflectionProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.ReflectionProbeUsage Simple
    static constexpr const int Simple = 3;
    // Get static field: static public UnityEngine.Rendering.ReflectionProbeUsage Simple
    static ::UnityEngine::Rendering::ReflectionProbeUsage _get_Simple();
    // Set static field: static public UnityEngine.Rendering.ReflectionProbeUsage Simple
    static void _set_Simple(::UnityEngine::Rendering::ReflectionProbeUsage value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.ReflectionProbeUsage
  #pragma pack(pop)
  static check_size<sizeof(ReflectionProbeUsage), 0 + sizeof(int)> __UnityEngine_Rendering_ReflectionProbeUsageSizeCheck;
  static_assert(sizeof(ReflectionProbeUsage) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
