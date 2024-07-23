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
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: CancellationReason
  struct CancellationReason;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::CancellationReason, "PlayFab.MultiplayerModels", "CancellationReason");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.CancellationReason
  // [TokenAttribute] Offset: FFFFFFFF
  struct CancellationReason/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CancellationReason
    constexpr CancellationReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.MultiplayerModels.CancellationReason Requested
    static constexpr const int Requested = 0;
    // Get static field: static public PlayFab.MultiplayerModels.CancellationReason Requested
    static ::PlayFab::MultiplayerModels::CancellationReason _get_Requested();
    // Set static field: static public PlayFab.MultiplayerModels.CancellationReason Requested
    static void _set_Requested(::PlayFab::MultiplayerModels::CancellationReason value);
    // static field const value: static public PlayFab.MultiplayerModels.CancellationReason Internal
    static constexpr const int Internal = 1;
    // Get static field: static public PlayFab.MultiplayerModels.CancellationReason Internal
    static ::PlayFab::MultiplayerModels::CancellationReason _get_Internal();
    // Set static field: static public PlayFab.MultiplayerModels.CancellationReason Internal
    static void _set_Internal(::PlayFab::MultiplayerModels::CancellationReason value);
    // static field const value: static public PlayFab.MultiplayerModels.CancellationReason Timeout
    static constexpr const int Timeout = 2;
    // Get static field: static public PlayFab.MultiplayerModels.CancellationReason Timeout
    static ::PlayFab::MultiplayerModels::CancellationReason _get_Timeout();
    // Set static field: static public PlayFab.MultiplayerModels.CancellationReason Timeout
    static void _set_Timeout(::PlayFab::MultiplayerModels::CancellationReason value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.MultiplayerModels.CancellationReason
  #pragma pack(pop)
  static check_size<sizeof(CancellationReason), 0 + sizeof(int)> __PlayFab_MultiplayerModels_CancellationReasonSizeCheck;
  static_assert(sizeof(CancellationReason) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
