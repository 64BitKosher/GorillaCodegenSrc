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
  // Forward declaring type: ShadowSamplingMode
  struct ShadowSamplingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowSamplingMode, "UnityEngine.Rendering", "ShadowSamplingMode");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.ShadowSamplingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShadowSamplingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ShadowSamplingMode
    constexpr ShadowSamplingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ShadowSamplingMode CompareDepths
    static constexpr const int CompareDepths = 0;
    // Get static field: static public UnityEngine.Rendering.ShadowSamplingMode CompareDepths
    static ::UnityEngine::Rendering::ShadowSamplingMode _get_CompareDepths();
    // Set static field: static public UnityEngine.Rendering.ShadowSamplingMode CompareDepths
    static void _set_CompareDepths(::UnityEngine::Rendering::ShadowSamplingMode value);
    // static field const value: static public UnityEngine.Rendering.ShadowSamplingMode RawDepth
    static constexpr const int RawDepth = 1;
    // Get static field: static public UnityEngine.Rendering.ShadowSamplingMode RawDepth
    static ::UnityEngine::Rendering::ShadowSamplingMode _get_RawDepth();
    // Set static field: static public UnityEngine.Rendering.ShadowSamplingMode RawDepth
    static void _set_RawDepth(::UnityEngine::Rendering::ShadowSamplingMode value);
    // static field const value: static public UnityEngine.Rendering.ShadowSamplingMode None
    static constexpr const int None = 2;
    // Get static field: static public UnityEngine.Rendering.ShadowSamplingMode None
    static ::UnityEngine::Rendering::ShadowSamplingMode _get_None();
    // Set static field: static public UnityEngine.Rendering.ShadowSamplingMode None
    static void _set_None(::UnityEngine::Rendering::ShadowSamplingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.ShadowSamplingMode
  #pragma pack(pop)
  static check_size<sizeof(ShadowSamplingMode), 0 + sizeof(int)> __UnityEngine_Rendering_ShadowSamplingModeSizeCheck;
  static_assert(sizeof(ShadowSamplingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
