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
  // Forward declaring type: SourceType
  struct SourceType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::SourceType, "PlayFab.ClientModels", "SourceType");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.SourceType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SourceType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SourceType
    constexpr SourceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.ClientModels.SourceType Admin
    static constexpr const int Admin = 0;
    // Get static field: static public PlayFab.ClientModels.SourceType Admin
    static ::PlayFab::ClientModels::SourceType _get_Admin();
    // Set static field: static public PlayFab.ClientModels.SourceType Admin
    static void _set_Admin(::PlayFab::ClientModels::SourceType value);
    // static field const value: static public PlayFab.ClientModels.SourceType BackEnd
    static constexpr const int BackEnd = 1;
    // Get static field: static public PlayFab.ClientModels.SourceType BackEnd
    static ::PlayFab::ClientModels::SourceType _get_BackEnd();
    // Set static field: static public PlayFab.ClientModels.SourceType BackEnd
    static void _set_BackEnd(::PlayFab::ClientModels::SourceType value);
    // static field const value: static public PlayFab.ClientModels.SourceType GameClient
    static constexpr const int GameClient = 2;
    // Get static field: static public PlayFab.ClientModels.SourceType GameClient
    static ::PlayFab::ClientModels::SourceType _get_GameClient();
    // Set static field: static public PlayFab.ClientModels.SourceType GameClient
    static void _set_GameClient(::PlayFab::ClientModels::SourceType value);
    // static field const value: static public PlayFab.ClientModels.SourceType GameServer
    static constexpr const int GameServer = 3;
    // Get static field: static public PlayFab.ClientModels.SourceType GameServer
    static ::PlayFab::ClientModels::SourceType _get_GameServer();
    // Set static field: static public PlayFab.ClientModels.SourceType GameServer
    static void _set_GameServer(::PlayFab::ClientModels::SourceType value);
    // static field const value: static public PlayFab.ClientModels.SourceType Partner
    static constexpr const int Partner = 4;
    // Get static field: static public PlayFab.ClientModels.SourceType Partner
    static ::PlayFab::ClientModels::SourceType _get_Partner();
    // Set static field: static public PlayFab.ClientModels.SourceType Partner
    static void _set_Partner(::PlayFab::ClientModels::SourceType value);
    // static field const value: static public PlayFab.ClientModels.SourceType Custom
    static constexpr const int Custom = 5;
    // Get static field: static public PlayFab.ClientModels.SourceType Custom
    static ::PlayFab::ClientModels::SourceType _get_Custom();
    // Set static field: static public PlayFab.ClientModels.SourceType Custom
    static void _set_Custom(::PlayFab::ClientModels::SourceType value);
    // static field const value: static public PlayFab.ClientModels.SourceType API
    static constexpr const int API = 6;
    // Get static field: static public PlayFab.ClientModels.SourceType API
    static ::PlayFab::ClientModels::SourceType _get_API();
    // Set static field: static public PlayFab.ClientModels.SourceType API
    static void _set_API(::PlayFab::ClientModels::SourceType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.ClientModels.SourceType
  #pragma pack(pop)
  static check_size<sizeof(SourceType), 0 + sizeof(int)> __PlayFab_ClientModels_SourceTypeSizeCheck;
  static_assert(sizeof(SourceType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
