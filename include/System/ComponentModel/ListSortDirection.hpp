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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ListSortDirection
  struct ListSortDirection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListSortDirection, "System.ComponentModel", "ListSortDirection");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ListSortDirection
  // [TokenAttribute] Offset: FFFFFFFF
  struct ListSortDirection/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ListSortDirection
    constexpr ListSortDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ComponentModel.ListSortDirection Ascending
    static constexpr const int Ascending = 0;
    // Get static field: static public System.ComponentModel.ListSortDirection Ascending
    static ::System::ComponentModel::ListSortDirection _get_Ascending();
    // Set static field: static public System.ComponentModel.ListSortDirection Ascending
    static void _set_Ascending(::System::ComponentModel::ListSortDirection value);
    // static field const value: static public System.ComponentModel.ListSortDirection Descending
    static constexpr const int Descending = 1;
    // Get static field: static public System.ComponentModel.ListSortDirection Descending
    static ::System::ComponentModel::ListSortDirection _get_Descending();
    // Set static field: static public System.ComponentModel.ListSortDirection Descending
    static void _set_Descending(::System::ComponentModel::ListSortDirection value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.ComponentModel.ListSortDirection
  #pragma pack(pop)
  static check_size<sizeof(ListSortDirection), 0 + sizeof(int)> __System_ComponentModel_ListSortDirectionSizeCheck;
  static_assert(sizeof(ListSortDirection) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
