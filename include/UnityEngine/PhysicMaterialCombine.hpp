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
  // Forward declaring type: PhysicMaterialCombine
  struct PhysicMaterialCombine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicMaterialCombine, "UnityEngine", "PhysicMaterialCombine");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PhysicMaterialCombine
  // [TokenAttribute] Offset: FFFFFFFF
  struct PhysicMaterialCombine/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PhysicMaterialCombine
    constexpr PhysicMaterialCombine(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.PhysicMaterialCombine Average
    static constexpr const int Average = 0;
    // Get static field: static public UnityEngine.PhysicMaterialCombine Average
    static ::UnityEngine::PhysicMaterialCombine _get_Average();
    // Set static field: static public UnityEngine.PhysicMaterialCombine Average
    static void _set_Average(::UnityEngine::PhysicMaterialCombine value);
    // static field const value: static public UnityEngine.PhysicMaterialCombine Minimum
    static constexpr const int Minimum = 2;
    // Get static field: static public UnityEngine.PhysicMaterialCombine Minimum
    static ::UnityEngine::PhysicMaterialCombine _get_Minimum();
    // Set static field: static public UnityEngine.PhysicMaterialCombine Minimum
    static void _set_Minimum(::UnityEngine::PhysicMaterialCombine value);
    // static field const value: static public UnityEngine.PhysicMaterialCombine Multiply
    static constexpr const int Multiply = 1;
    // Get static field: static public UnityEngine.PhysicMaterialCombine Multiply
    static ::UnityEngine::PhysicMaterialCombine _get_Multiply();
    // Set static field: static public UnityEngine.PhysicMaterialCombine Multiply
    static void _set_Multiply(::UnityEngine::PhysicMaterialCombine value);
    // static field const value: static public UnityEngine.PhysicMaterialCombine Maximum
    static constexpr const int Maximum = 3;
    // Get static field: static public UnityEngine.PhysicMaterialCombine Maximum
    static ::UnityEngine::PhysicMaterialCombine _get_Maximum();
    // Set static field: static public UnityEngine.PhysicMaterialCombine Maximum
    static void _set_Maximum(::UnityEngine::PhysicMaterialCombine value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.PhysicMaterialCombine
  #pragma pack(pop)
  static check_size<sizeof(PhysicMaterialCombine), 0 + sizeof(int)> __UnityEngine_PhysicMaterialCombineSizeCheck;
  static_assert(sizeof(PhysicMaterialCombine) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
