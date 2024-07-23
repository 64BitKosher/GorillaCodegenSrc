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
  // Forward declaring type: DataRowState
  struct DataRowState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowState, "System.Data", "DataRowState");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataRowState
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct DataRowState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DataRowState
    constexpr DataRowState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.DataRowState Detached
    static constexpr const int Detached = 1;
    // Get static field: static public System.Data.DataRowState Detached
    static ::System::Data::DataRowState _get_Detached();
    // Set static field: static public System.Data.DataRowState Detached
    static void _set_Detached(::System::Data::DataRowState value);
    // static field const value: static public System.Data.DataRowState Unchanged
    static constexpr const int Unchanged = 2;
    // Get static field: static public System.Data.DataRowState Unchanged
    static ::System::Data::DataRowState _get_Unchanged();
    // Set static field: static public System.Data.DataRowState Unchanged
    static void _set_Unchanged(::System::Data::DataRowState value);
    // static field const value: static public System.Data.DataRowState Added
    static constexpr const int Added = 4;
    // Get static field: static public System.Data.DataRowState Added
    static ::System::Data::DataRowState _get_Added();
    // Set static field: static public System.Data.DataRowState Added
    static void _set_Added(::System::Data::DataRowState value);
    // static field const value: static public System.Data.DataRowState Deleted
    static constexpr const int Deleted = 8;
    // Get static field: static public System.Data.DataRowState Deleted
    static ::System::Data::DataRowState _get_Deleted();
    // Set static field: static public System.Data.DataRowState Deleted
    static void _set_Deleted(::System::Data::DataRowState value);
    // static field const value: static public System.Data.DataRowState Modified
    static constexpr const int Modified = 16;
    // Get static field: static public System.Data.DataRowState Modified
    static ::System::Data::DataRowState _get_Modified();
    // Set static field: static public System.Data.DataRowState Modified
    static void _set_Modified(::System::Data::DataRowState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.DataRowState
  #pragma pack(pop)
  static check_size<sizeof(DataRowState), 0 + sizeof(int)> __System_Data_DataRowStateSizeCheck;
  static_assert(sizeof(DataRowState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
