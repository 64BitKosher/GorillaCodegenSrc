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
// Type namespace: System.Threading.Tasks.Sources
namespace System::Threading::Tasks::Sources {
  // Forward declaring type: ValueTaskSourceStatus
  struct ValueTaskSourceStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::ValueTaskSourceStatus, "System.Threading.Tasks.Sources", "ValueTaskSourceStatus");
// Type namespace: System.Threading.Tasks.Sources
namespace System::Threading::Tasks::Sources {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.Sources.ValueTaskSourceStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct ValueTaskSourceStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ValueTaskSourceStatus
    constexpr ValueTaskSourceStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Pending
    static constexpr const int Pending = 0;
    // Get static field: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Pending
    static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus _get_Pending();
    // Set static field: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Pending
    static void _set_Pending(::System::Threading::Tasks::Sources::ValueTaskSourceStatus value);
    // static field const value: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Succeeded
    static constexpr const int Succeeded = 1;
    // Get static field: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Succeeded
    static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus _get_Succeeded();
    // Set static field: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Succeeded
    static void _set_Succeeded(::System::Threading::Tasks::Sources::ValueTaskSourceStatus value);
    // static field const value: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Faulted
    static constexpr const int Faulted = 2;
    // Get static field: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Faulted
    static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus _get_Faulted();
    // Set static field: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Faulted
    static void _set_Faulted(::System::Threading::Tasks::Sources::ValueTaskSourceStatus value);
    // static field const value: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Canceled
    static constexpr const int Canceled = 3;
    // Get static field: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Canceled
    static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus _get_Canceled();
    // Set static field: static public System.Threading.Tasks.Sources.ValueTaskSourceStatus Canceled
    static void _set_Canceled(::System::Threading::Tasks::Sources::ValueTaskSourceStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Threading.Tasks.Sources.ValueTaskSourceStatus
  #pragma pack(pop)
  static check_size<sizeof(ValueTaskSourceStatus), 0 + sizeof(int)> __System_Threading_Tasks_Sources_ValueTaskSourceStatusSizeCheck;
  static_assert(sizeof(ValueTaskSourceStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
