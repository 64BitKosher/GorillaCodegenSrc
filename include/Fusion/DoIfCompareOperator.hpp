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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: DoIfCompareOperator
  struct DoIfCompareOperator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::DoIfCompareOperator, "Fusion", "DoIfCompareOperator");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.DoIfCompareOperator
  // [TokenAttribute] Offset: FFFFFFFF
  struct DoIfCompareOperator/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DoIfCompareOperator
    constexpr DoIfCompareOperator(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.DoIfCompareOperator Equal
    static constexpr const int Equal = 0;
    // Get static field: static public Fusion.DoIfCompareOperator Equal
    static ::Fusion::DoIfCompareOperator _get_Equal();
    // Set static field: static public Fusion.DoIfCompareOperator Equal
    static void _set_Equal(::Fusion::DoIfCompareOperator value);
    // static field const value: static public Fusion.DoIfCompareOperator NotEqual
    static constexpr const int NotEqual = 1;
    // Get static field: static public Fusion.DoIfCompareOperator NotEqual
    static ::Fusion::DoIfCompareOperator _get_NotEqual();
    // Set static field: static public Fusion.DoIfCompareOperator NotEqual
    static void _set_NotEqual(::Fusion::DoIfCompareOperator value);
    // static field const value: static public Fusion.DoIfCompareOperator Less
    static constexpr const int Less = 2;
    // Get static field: static public Fusion.DoIfCompareOperator Less
    static ::Fusion::DoIfCompareOperator _get_Less();
    // Set static field: static public Fusion.DoIfCompareOperator Less
    static void _set_Less(::Fusion::DoIfCompareOperator value);
    // static field const value: static public Fusion.DoIfCompareOperator LessOrEqual
    static constexpr const int LessOrEqual = 3;
    // Get static field: static public Fusion.DoIfCompareOperator LessOrEqual
    static ::Fusion::DoIfCompareOperator _get_LessOrEqual();
    // Set static field: static public Fusion.DoIfCompareOperator LessOrEqual
    static void _set_LessOrEqual(::Fusion::DoIfCompareOperator value);
    // static field const value: static public Fusion.DoIfCompareOperator GreaterOrEqual
    static constexpr const int GreaterOrEqual = 4;
    // Get static field: static public Fusion.DoIfCompareOperator GreaterOrEqual
    static ::Fusion::DoIfCompareOperator _get_GreaterOrEqual();
    // Set static field: static public Fusion.DoIfCompareOperator GreaterOrEqual
    static void _set_GreaterOrEqual(::Fusion::DoIfCompareOperator value);
    // static field const value: static public Fusion.DoIfCompareOperator Greater
    static constexpr const int Greater = 5;
    // Get static field: static public Fusion.DoIfCompareOperator Greater
    static ::Fusion::DoIfCompareOperator _get_Greater();
    // Set static field: static public Fusion.DoIfCompareOperator Greater
    static void _set_Greater(::Fusion::DoIfCompareOperator value);
    // static field const value: static public Fusion.DoIfCompareOperator NotZero
    static constexpr const int NotZero = 6;
    // Get static field: static public Fusion.DoIfCompareOperator NotZero
    static ::Fusion::DoIfCompareOperator _get_NotZero();
    // Set static field: static public Fusion.DoIfCompareOperator NotZero
    static void _set_NotZero(::Fusion::DoIfCompareOperator value);
    // static field const value: static public Fusion.DoIfCompareOperator IsZero
    static constexpr const int IsZero = 7;
    // Get static field: static public Fusion.DoIfCompareOperator IsZero
    static ::Fusion::DoIfCompareOperator _get_IsZero();
    // Set static field: static public Fusion.DoIfCompareOperator IsZero
    static void _set_IsZero(::Fusion::DoIfCompareOperator value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.DoIfCompareOperator
  #pragma pack(pop)
  static check_size<sizeof(DoIfCompareOperator), 0 + sizeof(int)> __Fusion_DoIfCompareOperatorSizeCheck;
  static_assert(sizeof(DoIfCompareOperator) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
