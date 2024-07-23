// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.UpdateTracker
#include "Cinemachine/UpdateTracker.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::UpdateTracker::UpdateClock, "Cinemachine", "UpdateTracker/UpdateClock");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.UpdateTracker/UpdateClock
  // [TokenAttribute] Offset: FFFFFFFF
  struct UpdateTracker::UpdateClock/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UpdateClock
    constexpr UpdateClock(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Cinemachine.UpdateTracker/UpdateClock Fixed
    static constexpr const int Fixed = 0;
    // Get static field: static public Cinemachine.UpdateTracker/UpdateClock Fixed
    static ::Cinemachine::UpdateTracker::UpdateClock _get_Fixed();
    // Set static field: static public Cinemachine.UpdateTracker/UpdateClock Fixed
    static void _set_Fixed(::Cinemachine::UpdateTracker::UpdateClock value);
    // static field const value: static public Cinemachine.UpdateTracker/UpdateClock Late
    static constexpr const int Late = 1;
    // Get static field: static public Cinemachine.UpdateTracker/UpdateClock Late
    static ::Cinemachine::UpdateTracker::UpdateClock _get_Late();
    // Set static field: static public Cinemachine.UpdateTracker/UpdateClock Late
    static void _set_Late(::Cinemachine::UpdateTracker::UpdateClock value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Cinemachine.UpdateTracker/UpdateClock
  #pragma pack(pop)
  static check_size<sizeof(UpdateTracker::UpdateClock), 0 + sizeof(int)> __Cinemachine_UpdateTracker_UpdateClockSizeCheck;
  static_assert(sizeof(UpdateTracker::UpdateClock) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
