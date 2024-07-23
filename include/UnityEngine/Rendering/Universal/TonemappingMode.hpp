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
  // Forward declaring type: TonemappingMode
  struct TonemappingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TonemappingMode, "UnityEngine.Rendering.Universal", "TonemappingMode");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.TonemappingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct TonemappingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TonemappingMode
    constexpr TonemappingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.TonemappingMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.TonemappingMode None
    static ::UnityEngine::Rendering::Universal::TonemappingMode _get_None();
    // Set static field: static public UnityEngine.Rendering.Universal.TonemappingMode None
    static void _set_None(::UnityEngine::Rendering::Universal::TonemappingMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.TonemappingMode Neutral
    static constexpr const int Neutral = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.TonemappingMode Neutral
    static ::UnityEngine::Rendering::Universal::TonemappingMode _get_Neutral();
    // Set static field: static public UnityEngine.Rendering.Universal.TonemappingMode Neutral
    static void _set_Neutral(::UnityEngine::Rendering::Universal::TonemappingMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.TonemappingMode ACES
    static constexpr const int ACES = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.TonemappingMode ACES
    static ::UnityEngine::Rendering::Universal::TonemappingMode _get_ACES();
    // Set static field: static public UnityEngine.Rendering.Universal.TonemappingMode ACES
    static void _set_ACES(::UnityEngine::Rendering::Universal::TonemappingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.TonemappingMode
  #pragma pack(pop)
  static check_size<sizeof(TonemappingMode), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_TonemappingModeSizeCheck;
  static_assert(sizeof(TonemappingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"