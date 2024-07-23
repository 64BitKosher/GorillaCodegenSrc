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
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: CausalityRelation
  struct CausalityRelation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CausalityRelation, "System.Threading.Tasks", "CausalityRelation");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.CausalityRelation
  // [TokenAttribute] Offset: FFFFFFFF
  struct CausalityRelation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CausalityRelation
    constexpr CausalityRelation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.Tasks.CausalityRelation AssignDelegate
    static constexpr const int AssignDelegate = 0;
    // Get static field: static public System.Threading.Tasks.CausalityRelation AssignDelegate
    static ::System::Threading::Tasks::CausalityRelation _get_AssignDelegate();
    // Set static field: static public System.Threading.Tasks.CausalityRelation AssignDelegate
    static void _set_AssignDelegate(::System::Threading::Tasks::CausalityRelation value);
    // static field const value: static public System.Threading.Tasks.CausalityRelation Join
    static constexpr const int Join = 1;
    // Get static field: static public System.Threading.Tasks.CausalityRelation Join
    static ::System::Threading::Tasks::CausalityRelation _get_Join();
    // Set static field: static public System.Threading.Tasks.CausalityRelation Join
    static void _set_Join(::System::Threading::Tasks::CausalityRelation value);
    // static field const value: static public System.Threading.Tasks.CausalityRelation Choice
    static constexpr const int Choice = 2;
    // Get static field: static public System.Threading.Tasks.CausalityRelation Choice
    static ::System::Threading::Tasks::CausalityRelation _get_Choice();
    // Set static field: static public System.Threading.Tasks.CausalityRelation Choice
    static void _set_Choice(::System::Threading::Tasks::CausalityRelation value);
    // static field const value: static public System.Threading.Tasks.CausalityRelation Cancel
    static constexpr const int Cancel = 3;
    // Get static field: static public System.Threading.Tasks.CausalityRelation Cancel
    static ::System::Threading::Tasks::CausalityRelation _get_Cancel();
    // Set static field: static public System.Threading.Tasks.CausalityRelation Cancel
    static void _set_Cancel(::System::Threading::Tasks::CausalityRelation value);
    // static field const value: static public System.Threading.Tasks.CausalityRelation Error
    static constexpr const int Error = 4;
    // Get static field: static public System.Threading.Tasks.CausalityRelation Error
    static ::System::Threading::Tasks::CausalityRelation _get_Error();
    // Set static field: static public System.Threading.Tasks.CausalityRelation Error
    static void _set_Error(::System::Threading::Tasks::CausalityRelation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Threading.Tasks.CausalityRelation
  #pragma pack(pop)
  static check_size<sizeof(CausalityRelation), 0 + sizeof(int)> __System_Threading_Tasks_CausalityRelationSizeCheck;
  static_assert(sizeof(CausalityRelation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
