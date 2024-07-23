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
  // Forward declaring type: RTClearFlags
  struct RTClearFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTClearFlags, "UnityEngine.Rendering", "RTClearFlags");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RTClearFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RTClearFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RTClearFlags
    constexpr RTClearFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.RTClearFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.RTClearFlags None
    static ::UnityEngine::Rendering::RTClearFlags _get_None();
    // Set static field: static public UnityEngine.Rendering.RTClearFlags None
    static void _set_None(::UnityEngine::Rendering::RTClearFlags value);
    // static field const value: static public UnityEngine.Rendering.RTClearFlags Color
    static constexpr const int Color = 1;
    // Get static field: static public UnityEngine.Rendering.RTClearFlags Color
    static ::UnityEngine::Rendering::RTClearFlags _get_Color();
    // Set static field: static public UnityEngine.Rendering.RTClearFlags Color
    static void _set_Color(::UnityEngine::Rendering::RTClearFlags value);
    // static field const value: static public UnityEngine.Rendering.RTClearFlags Depth
    static constexpr const int Depth = 2;
    // Get static field: static public UnityEngine.Rendering.RTClearFlags Depth
    static ::UnityEngine::Rendering::RTClearFlags _get_Depth();
    // Set static field: static public UnityEngine.Rendering.RTClearFlags Depth
    static void _set_Depth(::UnityEngine::Rendering::RTClearFlags value);
    // static field const value: static public UnityEngine.Rendering.RTClearFlags Stencil
    static constexpr const int Stencil = 4;
    // Get static field: static public UnityEngine.Rendering.RTClearFlags Stencil
    static ::UnityEngine::Rendering::RTClearFlags _get_Stencil();
    // Set static field: static public UnityEngine.Rendering.RTClearFlags Stencil
    static void _set_Stencil(::UnityEngine::Rendering::RTClearFlags value);
    // static field const value: static public UnityEngine.Rendering.RTClearFlags All
    static constexpr const int All = 7;
    // Get static field: static public UnityEngine.Rendering.RTClearFlags All
    static ::UnityEngine::Rendering::RTClearFlags _get_All();
    // Set static field: static public UnityEngine.Rendering.RTClearFlags All
    static void _set_All(::UnityEngine::Rendering::RTClearFlags value);
    // static field const value: static public UnityEngine.Rendering.RTClearFlags DepthStencil
    static constexpr const int DepthStencil = 6;
    // Get static field: static public UnityEngine.Rendering.RTClearFlags DepthStencil
    static ::UnityEngine::Rendering::RTClearFlags _get_DepthStencil();
    // Set static field: static public UnityEngine.Rendering.RTClearFlags DepthStencil
    static void _set_DepthStencil(::UnityEngine::Rendering::RTClearFlags value);
    // static field const value: static public UnityEngine.Rendering.RTClearFlags ColorDepth
    static constexpr const int ColorDepth = 3;
    // Get static field: static public UnityEngine.Rendering.RTClearFlags ColorDepth
    static ::UnityEngine::Rendering::RTClearFlags _get_ColorDepth();
    // Set static field: static public UnityEngine.Rendering.RTClearFlags ColorDepth
    static void _set_ColorDepth(::UnityEngine::Rendering::RTClearFlags value);
    // static field const value: static public UnityEngine.Rendering.RTClearFlags ColorStencil
    static constexpr const int ColorStencil = 5;
    // Get static field: static public UnityEngine.Rendering.RTClearFlags ColorStencil
    static ::UnityEngine::Rendering::RTClearFlags _get_ColorStencil();
    // Set static field: static public UnityEngine.Rendering.RTClearFlags ColorStencil
    static void _set_ColorStencil(::UnityEngine::Rendering::RTClearFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.RTClearFlags
  #pragma pack(pop)
  static check_size<sizeof(RTClearFlags), 0 + sizeof(int)> __UnityEngine_Rendering_RTClearFlagsSizeCheck;
  static_assert(sizeof(RTClearFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
