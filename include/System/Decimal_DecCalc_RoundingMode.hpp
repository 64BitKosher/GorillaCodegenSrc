// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Decimal/DecCalc
#include "System/Decimal_DecCalc.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Decimal::DecCalc::RoundingMode, "System", "Decimal/DecCalc/RoundingMode");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Decimal/DecCalc/RoundingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct Decimal::DecCalc::RoundingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RoundingMode
    constexpr RoundingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Decimal/DecCalc/RoundingMode ToEven
    static constexpr const int ToEven = 0;
    // Get static field: static public System.Decimal/DecCalc/RoundingMode ToEven
    static ::System::Decimal::DecCalc::RoundingMode _get_ToEven();
    // Set static field: static public System.Decimal/DecCalc/RoundingMode ToEven
    static void _set_ToEven(::System::Decimal::DecCalc::RoundingMode value);
    // static field const value: static public System.Decimal/DecCalc/RoundingMode AwayFromZero
    static constexpr const int AwayFromZero = 1;
    // Get static field: static public System.Decimal/DecCalc/RoundingMode AwayFromZero
    static ::System::Decimal::DecCalc::RoundingMode _get_AwayFromZero();
    // Set static field: static public System.Decimal/DecCalc/RoundingMode AwayFromZero
    static void _set_AwayFromZero(::System::Decimal::DecCalc::RoundingMode value);
    // static field const value: static public System.Decimal/DecCalc/RoundingMode Truncate
    static constexpr const int Truncate = 2;
    // Get static field: static public System.Decimal/DecCalc/RoundingMode Truncate
    static ::System::Decimal::DecCalc::RoundingMode _get_Truncate();
    // Set static field: static public System.Decimal/DecCalc/RoundingMode Truncate
    static void _set_Truncate(::System::Decimal::DecCalc::RoundingMode value);
    // static field const value: static public System.Decimal/DecCalc/RoundingMode Floor
    static constexpr const int Floor = 3;
    // Get static field: static public System.Decimal/DecCalc/RoundingMode Floor
    static ::System::Decimal::DecCalc::RoundingMode _get_Floor();
    // Set static field: static public System.Decimal/DecCalc/RoundingMode Floor
    static void _set_Floor(::System::Decimal::DecCalc::RoundingMode value);
    // static field const value: static public System.Decimal/DecCalc/RoundingMode Ceiling
    static constexpr const int Ceiling = 4;
    // Get static field: static public System.Decimal/DecCalc/RoundingMode Ceiling
    static ::System::Decimal::DecCalc::RoundingMode _get_Ceiling();
    // Set static field: static public System.Decimal/DecCalc/RoundingMode Ceiling
    static void _set_Ceiling(::System::Decimal::DecCalc::RoundingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Decimal/DecCalc/RoundingMode
  #pragma pack(pop)
  static check_size<sizeof(Decimal::DecCalc::RoundingMode), 0 + sizeof(int)> __System_Decimal_DecCalc_RoundingModeSizeCheck;
  static_assert(sizeof(Decimal::DecCalc::RoundingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
