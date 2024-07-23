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
  // Forward declaring type: DebugMaterialValidationMode
  struct DebugMaterialValidationMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode, "UnityEngine.Rendering.Universal", "DebugMaterialValidationMode");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugMaterialValidationMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [GenerateHLSL] Offset: FFFFFFFF
  struct DebugMaterialValidationMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DebugMaterialValidationMode
    constexpr DebugMaterialValidationMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode None
    static ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode _get_None();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode None
    static void _set_None(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode Albedo
    static constexpr const int Albedo = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode Albedo
    static ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode _get_Albedo();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode Albedo
    static void _set_Albedo(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode Metallic
    static constexpr const int Metallic = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode Metallic
    static ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode _get_Metallic();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugMaterialValidationMode Metallic
    static void _set_Metallic(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DebugMaterialValidationMode
  #pragma pack(pop)
  static check_size<sizeof(DebugMaterialValidationMode), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DebugMaterialValidationModeSizeCheck;
  static_assert(sizeof(DebugMaterialValidationMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"