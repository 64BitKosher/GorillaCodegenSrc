// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera::GateFitMode, "UnityEngine", "Camera/GateFitMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Camera/GateFitMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct Camera::GateFitMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GateFitMode
    constexpr GateFitMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Camera/GateFitMode Vertical
    static constexpr const int Vertical = 1;
    // Get static field: static public UnityEngine.Camera/GateFitMode Vertical
    static ::UnityEngine::Camera::GateFitMode _get_Vertical();
    // Set static field: static public UnityEngine.Camera/GateFitMode Vertical
    static void _set_Vertical(::UnityEngine::Camera::GateFitMode value);
    // static field const value: static public UnityEngine.Camera/GateFitMode Horizontal
    static constexpr const int Horizontal = 2;
    // Get static field: static public UnityEngine.Camera/GateFitMode Horizontal
    static ::UnityEngine::Camera::GateFitMode _get_Horizontal();
    // Set static field: static public UnityEngine.Camera/GateFitMode Horizontal
    static void _set_Horizontal(::UnityEngine::Camera::GateFitMode value);
    // static field const value: static public UnityEngine.Camera/GateFitMode Fill
    static constexpr const int Fill = 3;
    // Get static field: static public UnityEngine.Camera/GateFitMode Fill
    static ::UnityEngine::Camera::GateFitMode _get_Fill();
    // Set static field: static public UnityEngine.Camera/GateFitMode Fill
    static void _set_Fill(::UnityEngine::Camera::GateFitMode value);
    // static field const value: static public UnityEngine.Camera/GateFitMode Overscan
    static constexpr const int Overscan = 4;
    // Get static field: static public UnityEngine.Camera/GateFitMode Overscan
    static ::UnityEngine::Camera::GateFitMode _get_Overscan();
    // Set static field: static public UnityEngine.Camera/GateFitMode Overscan
    static void _set_Overscan(::UnityEngine::Camera::GateFitMode value);
    // static field const value: static public UnityEngine.Camera/GateFitMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Camera/GateFitMode None
    static ::UnityEngine::Camera::GateFitMode _get_None();
    // Set static field: static public UnityEngine.Camera/GateFitMode None
    static void _set_None(::UnityEngine::Camera::GateFitMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Camera/GateFitMode
  #pragma pack(pop)
  static check_size<sizeof(Camera::GateFitMode), 0 + sizeof(int)> __UnityEngine_Camera_GateFitModeSizeCheck;
  static_assert(sizeof(Camera::GateFitMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
