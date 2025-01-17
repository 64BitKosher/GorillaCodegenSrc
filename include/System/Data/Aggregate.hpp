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
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: Aggregate
  struct Aggregate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Aggregate, "System.Data", "Aggregate");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Aggregate
  // [TokenAttribute] Offset: FFFFFFFF
  struct Aggregate/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Aggregate
    constexpr Aggregate(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.Aggregate None
    static constexpr const int None = -1;
    // Get static field: static public System.Data.Aggregate None
    static ::System::Data::Aggregate _get_None();
    // Set static field: static public System.Data.Aggregate None
    static void _set_None(::System::Data::Aggregate value);
    // static field const value: static public System.Data.Aggregate Sum
    static constexpr const int Sum = 30;
    // Get static field: static public System.Data.Aggregate Sum
    static ::System::Data::Aggregate _get_Sum();
    // Set static field: static public System.Data.Aggregate Sum
    static void _set_Sum(::System::Data::Aggregate value);
    // static field const value: static public System.Data.Aggregate Avg
    static constexpr const int Avg = 31;
    // Get static field: static public System.Data.Aggregate Avg
    static ::System::Data::Aggregate _get_Avg();
    // Set static field: static public System.Data.Aggregate Avg
    static void _set_Avg(::System::Data::Aggregate value);
    // static field const value: static public System.Data.Aggregate Min
    static constexpr const int Min = 32;
    // Get static field: static public System.Data.Aggregate Min
    static ::System::Data::Aggregate _get_Min();
    // Set static field: static public System.Data.Aggregate Min
    static void _set_Min(::System::Data::Aggregate value);
    // static field const value: static public System.Data.Aggregate Max
    static constexpr const int Max = 33;
    // Get static field: static public System.Data.Aggregate Max
    static ::System::Data::Aggregate _get_Max();
    // Set static field: static public System.Data.Aggregate Max
    static void _set_Max(::System::Data::Aggregate value);
    // static field const value: static public System.Data.Aggregate Count
    static constexpr const int Count = 34;
    // Get static field: static public System.Data.Aggregate Count
    static ::System::Data::Aggregate _get_Count();
    // Set static field: static public System.Data.Aggregate Count
    static void _set_Count(::System::Data::Aggregate value);
    // static field const value: static public System.Data.Aggregate StDev
    static constexpr const int StDev = 35;
    // Get static field: static public System.Data.Aggregate StDev
    static ::System::Data::Aggregate _get_StDev();
    // Set static field: static public System.Data.Aggregate StDev
    static void _set_StDev(::System::Data::Aggregate value);
    // static field const value: static public System.Data.Aggregate Var
    static constexpr const int Var = 37;
    // Get static field: static public System.Data.Aggregate Var
    static ::System::Data::Aggregate _get_Var();
    // Set static field: static public System.Data.Aggregate Var
    static void _set_Var(::System::Data::Aggregate value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.Aggregate
  #pragma pack(pop)
  static check_size<sizeof(Aggregate), 0 + sizeof(int)> __System_Data_AggregateSizeCheck;
  static_assert(sizeof(Aggregate) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
