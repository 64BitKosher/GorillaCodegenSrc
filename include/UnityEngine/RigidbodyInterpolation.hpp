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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RigidbodyInterpolation
  struct RigidbodyInterpolation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RigidbodyInterpolation, "UnityEngine", "RigidbodyInterpolation");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RigidbodyInterpolation
  // [TokenAttribute] Offset: FFFFFFFF
  struct RigidbodyInterpolation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RigidbodyInterpolation
    constexpr RigidbodyInterpolation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RigidbodyInterpolation None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.RigidbodyInterpolation None
    static ::UnityEngine::RigidbodyInterpolation _get_None();
    // Set static field: static public UnityEngine.RigidbodyInterpolation None
    static void _set_None(::UnityEngine::RigidbodyInterpolation value);
    // static field const value: static public UnityEngine.RigidbodyInterpolation Interpolate
    static constexpr const int Interpolate = 1;
    // Get static field: static public UnityEngine.RigidbodyInterpolation Interpolate
    static ::UnityEngine::RigidbodyInterpolation _get_Interpolate();
    // Set static field: static public UnityEngine.RigidbodyInterpolation Interpolate
    static void _set_Interpolate(::UnityEngine::RigidbodyInterpolation value);
    // static field const value: static public UnityEngine.RigidbodyInterpolation Extrapolate
    static constexpr const int Extrapolate = 2;
    // Get static field: static public UnityEngine.RigidbodyInterpolation Extrapolate
    static ::UnityEngine::RigidbodyInterpolation _get_Extrapolate();
    // Set static field: static public UnityEngine.RigidbodyInterpolation Extrapolate
    static void _set_Extrapolate(::UnityEngine::RigidbodyInterpolation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.RigidbodyInterpolation
  #pragma pack(pop)
  static check_size<sizeof(RigidbodyInterpolation), 0 + sizeof(int)> __UnityEngine_RigidbodyInterpolationSizeCheck;
  static_assert(sizeof(RigidbodyInterpolation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
