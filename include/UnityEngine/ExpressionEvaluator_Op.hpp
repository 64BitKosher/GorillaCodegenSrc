// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ExpressionEvaluator
#include "UnityEngine/ExpressionEvaluator.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator::Op, "UnityEngine", "ExpressionEvaluator/Op");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ExpressionEvaluator/Op
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExpressionEvaluator::Op/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Op
    constexpr Op(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Add
    static constexpr const int Add = 0;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Add
    static ::UnityEngine::ExpressionEvaluator::Op _get_Add();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Add
    static void _set_Add(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Sub
    static constexpr const int Sub = 1;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Sub
    static ::UnityEngine::ExpressionEvaluator::Op _get_Sub();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Sub
    static void _set_Sub(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Mul
    static constexpr const int Mul = 2;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Mul
    static ::UnityEngine::ExpressionEvaluator::Op _get_Mul();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Mul
    static void _set_Mul(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Div
    static constexpr const int Div = 3;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Div
    static ::UnityEngine::ExpressionEvaluator::Op _get_Div();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Div
    static void _set_Div(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Mod
    static constexpr const int Mod = 4;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Mod
    static ::UnityEngine::ExpressionEvaluator::Op _get_Mod();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Mod
    static void _set_Mod(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Neg
    static constexpr const int Neg = 5;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Neg
    static ::UnityEngine::ExpressionEvaluator::Op _get_Neg();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Neg
    static void _set_Neg(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Pow
    static constexpr const int Pow = 6;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Pow
    static ::UnityEngine::ExpressionEvaluator::Op _get_Pow();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Pow
    static void _set_Pow(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Sqrt
    static constexpr const int Sqrt = 7;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Sqrt
    static ::UnityEngine::ExpressionEvaluator::Op _get_Sqrt();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Sqrt
    static void _set_Sqrt(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Sin
    static constexpr const int Sin = 8;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Sin
    static ::UnityEngine::ExpressionEvaluator::Op _get_Sin();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Sin
    static void _set_Sin(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Cos
    static constexpr const int Cos = 9;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Cos
    static ::UnityEngine::ExpressionEvaluator::Op _get_Cos();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Cos
    static void _set_Cos(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Tan
    static constexpr const int Tan = 10;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Tan
    static ::UnityEngine::ExpressionEvaluator::Op _get_Tan();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Tan
    static void _set_Tan(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Floor
    static constexpr const int Floor = 11;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Floor
    static ::UnityEngine::ExpressionEvaluator::Op _get_Floor();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Floor
    static void _set_Floor(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Ceil
    static constexpr const int Ceil = 12;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Ceil
    static ::UnityEngine::ExpressionEvaluator::Op _get_Ceil();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Ceil
    static void _set_Ceil(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Round
    static constexpr const int Round = 13;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Round
    static ::UnityEngine::ExpressionEvaluator::Op _get_Round();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Round
    static void _set_Round(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Rand
    static constexpr const int Rand = 14;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Rand
    static ::UnityEngine::ExpressionEvaluator::Op _get_Rand();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Rand
    static void _set_Rand(::UnityEngine::ExpressionEvaluator::Op value);
    // static field const value: static public UnityEngine.ExpressionEvaluator/Op Linear
    static constexpr const int Linear = 15;
    // Get static field: static public UnityEngine.ExpressionEvaluator/Op Linear
    static ::UnityEngine::ExpressionEvaluator::Op _get_Linear();
    // Set static field: static public UnityEngine.ExpressionEvaluator/Op Linear
    static void _set_Linear(::UnityEngine::ExpressionEvaluator::Op value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ExpressionEvaluator/Op
  #pragma pack(pop)
  static check_size<sizeof(ExpressionEvaluator::Op), 0 + sizeof(int)> __UnityEngine_ExpressionEvaluator_OpSizeCheck;
  static_assert(sizeof(ExpressionEvaluator::Op) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"