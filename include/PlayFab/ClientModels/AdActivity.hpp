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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: AdActivity
  struct AdActivity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::AdActivity, "PlayFab.ClientModels", "AdActivity");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.AdActivity
  // [TokenAttribute] Offset: FFFFFFFF
  struct AdActivity/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AdActivity
    constexpr AdActivity(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.ClientModels.AdActivity Opened
    static constexpr const int Opened = 0;
    // Get static field: static public PlayFab.ClientModels.AdActivity Opened
    static ::PlayFab::ClientModels::AdActivity _get_Opened();
    // Set static field: static public PlayFab.ClientModels.AdActivity Opened
    static void _set_Opened(::PlayFab::ClientModels::AdActivity value);
    // static field const value: static public PlayFab.ClientModels.AdActivity Closed
    static constexpr const int Closed = 1;
    // Get static field: static public PlayFab.ClientModels.AdActivity Closed
    static ::PlayFab::ClientModels::AdActivity _get_Closed();
    // Set static field: static public PlayFab.ClientModels.AdActivity Closed
    static void _set_Closed(::PlayFab::ClientModels::AdActivity value);
    // static field const value: static public PlayFab.ClientModels.AdActivity Start
    static constexpr const int Start = 2;
    // Get static field: static public PlayFab.ClientModels.AdActivity Start
    static ::PlayFab::ClientModels::AdActivity _get_Start();
    // Set static field: static public PlayFab.ClientModels.AdActivity Start
    static void _set_Start(::PlayFab::ClientModels::AdActivity value);
    // static field const value: static public PlayFab.ClientModels.AdActivity End
    static constexpr const int End = 3;
    // Get static field: static public PlayFab.ClientModels.AdActivity End
    static ::PlayFab::ClientModels::AdActivity _get_End();
    // Set static field: static public PlayFab.ClientModels.AdActivity End
    static void _set_End(::PlayFab::ClientModels::AdActivity value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.ClientModels.AdActivity
  #pragma pack(pop)
  static check_size<sizeof(AdActivity), 0 + sizeof(int)> __PlayFab_ClientModels_AdActivitySizeCheck;
  static_assert(sizeof(AdActivity) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
