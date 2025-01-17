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
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlCompareOptions
  struct SqlCompareOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlCompareOptions, "System.Data.SqlTypes", "SqlCompareOptions");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.SqlTypes.SqlCompareOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct SqlCompareOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SqlCompareOptions
    constexpr SqlCompareOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.SqlTypes.SqlCompareOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Data.SqlTypes.SqlCompareOptions None
    static ::System::Data::SqlTypes::SqlCompareOptions _get_None();
    // Set static field: static public System.Data.SqlTypes.SqlCompareOptions None
    static void _set_None(::System::Data::SqlTypes::SqlCompareOptions value);
    // static field const value: static public System.Data.SqlTypes.SqlCompareOptions IgnoreCase
    static constexpr const int IgnoreCase = 1;
    // Get static field: static public System.Data.SqlTypes.SqlCompareOptions IgnoreCase
    static ::System::Data::SqlTypes::SqlCompareOptions _get_IgnoreCase();
    // Set static field: static public System.Data.SqlTypes.SqlCompareOptions IgnoreCase
    static void _set_IgnoreCase(::System::Data::SqlTypes::SqlCompareOptions value);
    // static field const value: static public System.Data.SqlTypes.SqlCompareOptions IgnoreNonSpace
    static constexpr const int IgnoreNonSpace = 2;
    // Get static field: static public System.Data.SqlTypes.SqlCompareOptions IgnoreNonSpace
    static ::System::Data::SqlTypes::SqlCompareOptions _get_IgnoreNonSpace();
    // Set static field: static public System.Data.SqlTypes.SqlCompareOptions IgnoreNonSpace
    static void _set_IgnoreNonSpace(::System::Data::SqlTypes::SqlCompareOptions value);
    // static field const value: static public System.Data.SqlTypes.SqlCompareOptions IgnoreKanaType
    static constexpr const int IgnoreKanaType = 8;
    // Get static field: static public System.Data.SqlTypes.SqlCompareOptions IgnoreKanaType
    static ::System::Data::SqlTypes::SqlCompareOptions _get_IgnoreKanaType();
    // Set static field: static public System.Data.SqlTypes.SqlCompareOptions IgnoreKanaType
    static void _set_IgnoreKanaType(::System::Data::SqlTypes::SqlCompareOptions value);
    // static field const value: static public System.Data.SqlTypes.SqlCompareOptions IgnoreWidth
    static constexpr const int IgnoreWidth = 16;
    // Get static field: static public System.Data.SqlTypes.SqlCompareOptions IgnoreWidth
    static ::System::Data::SqlTypes::SqlCompareOptions _get_IgnoreWidth();
    // Set static field: static public System.Data.SqlTypes.SqlCompareOptions IgnoreWidth
    static void _set_IgnoreWidth(::System::Data::SqlTypes::SqlCompareOptions value);
    // static field const value: static public System.Data.SqlTypes.SqlCompareOptions BinarySort
    static constexpr const int BinarySort = 32768;
    // Get static field: static public System.Data.SqlTypes.SqlCompareOptions BinarySort
    static ::System::Data::SqlTypes::SqlCompareOptions _get_BinarySort();
    // Set static field: static public System.Data.SqlTypes.SqlCompareOptions BinarySort
    static void _set_BinarySort(::System::Data::SqlTypes::SqlCompareOptions value);
    // static field const value: static public System.Data.SqlTypes.SqlCompareOptions BinarySort2
    static constexpr const int BinarySort2 = 16384;
    // Get static field: static public System.Data.SqlTypes.SqlCompareOptions BinarySort2
    static ::System::Data::SqlTypes::SqlCompareOptions _get_BinarySort2();
    // Set static field: static public System.Data.SqlTypes.SqlCompareOptions BinarySort2
    static void _set_BinarySort2(::System::Data::SqlTypes::SqlCompareOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.SqlTypes.SqlCompareOptions
  #pragma pack(pop)
  static check_size<sizeof(SqlCompareOptions), 0 + sizeof(int)> __System_Data_SqlTypes_SqlCompareOptionsSizeCheck;
  static_assert(sizeof(SqlCompareOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
