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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CloseExState
  struct CloseExState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CloseExState, "System.Net", "CloseExState");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CloseExState
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct CloseExState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CloseExState
    constexpr CloseExState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.CloseExState Normal
    static constexpr const int Normal = 0;
    // Get static field: static public System.Net.CloseExState Normal
    static ::System::Net::CloseExState _get_Normal();
    // Set static field: static public System.Net.CloseExState Normal
    static void _set_Normal(::System::Net::CloseExState value);
    // static field const value: static public System.Net.CloseExState Abort
    static constexpr const int Abort = 1;
    // Get static field: static public System.Net.CloseExState Abort
    static ::System::Net::CloseExState _get_Abort();
    // Set static field: static public System.Net.CloseExState Abort
    static void _set_Abort(::System::Net::CloseExState value);
    // static field const value: static public System.Net.CloseExState Silent
    static constexpr const int Silent = 2;
    // Get static field: static public System.Net.CloseExState Silent
    static ::System::Net::CloseExState _get_Silent();
    // Set static field: static public System.Net.CloseExState Silent
    static void _set_Silent(::System::Net::CloseExState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.CloseExState
  #pragma pack(pop)
  static check_size<sizeof(CloseExState), 0 + sizeof(int)> __System_Net_CloseExStateSizeCheck;
  static_assert(sizeof(CloseExState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
