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
  // Forward declaring type: DebugOverdrawMode
  struct DebugOverdrawMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugOverdrawMode, "UnityEngine.Rendering.Universal", "DebugOverdrawMode");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugOverdrawMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct DebugOverdrawMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DebugOverdrawMode
    constexpr DebugOverdrawMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DebugOverdrawMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugOverdrawMode None
    static ::UnityEngine::Rendering::Universal::DebugOverdrawMode _get_None();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugOverdrawMode None
    static void _set_None(::UnityEngine::Rendering::Universal::DebugOverdrawMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugOverdrawMode Opaque
    static constexpr const int Opaque = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugOverdrawMode Opaque
    static ::UnityEngine::Rendering::Universal::DebugOverdrawMode _get_Opaque();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugOverdrawMode Opaque
    static void _set_Opaque(::UnityEngine::Rendering::Universal::DebugOverdrawMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugOverdrawMode Transparent
    static constexpr const int Transparent = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugOverdrawMode Transparent
    static ::UnityEngine::Rendering::Universal::DebugOverdrawMode _get_Transparent();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugOverdrawMode Transparent
    static void _set_Transparent(::UnityEngine::Rendering::Universal::DebugOverdrawMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugOverdrawMode All
    static constexpr const int All = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugOverdrawMode All
    static ::UnityEngine::Rendering::Universal::DebugOverdrawMode _get_All();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugOverdrawMode All
    static void _set_All(::UnityEngine::Rendering::Universal::DebugOverdrawMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DebugOverdrawMode
  #pragma pack(pop)
  static check_size<sizeof(DebugOverdrawMode), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DebugOverdrawModeSizeCheck;
  static_assert(sizeof(DebugOverdrawMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
