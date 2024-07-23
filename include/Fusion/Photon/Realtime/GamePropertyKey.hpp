// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: GamePropertyKey
  class GamePropertyKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::GamePropertyKey);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::GamePropertyKey*, "Fusion.Photon.Realtime", "GamePropertyKey");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.GamePropertyKey
  // [TokenAttribute] Offset: FFFFFFFF
  class GamePropertyKey : public ::Il2CppObject {
    public:
    // static field const value: static public System.Byte MaxPlayers
    static constexpr const uint8_t MaxPlayers = 255u;
    // Get static field: static public System.Byte MaxPlayers
    static uint8_t _get_MaxPlayers();
    // Set static field: static public System.Byte MaxPlayers
    static void _set_MaxPlayers(uint8_t value);
    // static field const value: static public System.Byte IsVisible
    static constexpr const uint8_t IsVisible = 254u;
    // Get static field: static public System.Byte IsVisible
    static uint8_t _get_IsVisible();
    // Set static field: static public System.Byte IsVisible
    static void _set_IsVisible(uint8_t value);
    // static field const value: static public System.Byte IsOpen
    static constexpr const uint8_t IsOpen = 253u;
    // Get static field: static public System.Byte IsOpen
    static uint8_t _get_IsOpen();
    // Set static field: static public System.Byte IsOpen
    static void _set_IsOpen(uint8_t value);
    // static field const value: static public System.Byte PlayerCount
    static constexpr const uint8_t PlayerCount = 252u;
    // Get static field: static public System.Byte PlayerCount
    static uint8_t _get_PlayerCount();
    // Set static field: static public System.Byte PlayerCount
    static void _set_PlayerCount(uint8_t value);
    // static field const value: static public System.Byte Removed
    static constexpr const uint8_t Removed = 251u;
    // Get static field: static public System.Byte Removed
    static uint8_t _get_Removed();
    // Set static field: static public System.Byte Removed
    static void _set_Removed(uint8_t value);
    // static field const value: static public System.Byte PropsListedInLobby
    static constexpr const uint8_t PropsListedInLobby = 250u;
    // Get static field: static public System.Byte PropsListedInLobby
    static uint8_t _get_PropsListedInLobby();
    // Set static field: static public System.Byte PropsListedInLobby
    static void _set_PropsListedInLobby(uint8_t value);
    // static field const value: static public System.Byte CleanupCacheOnLeave
    static constexpr const uint8_t CleanupCacheOnLeave = 249u;
    // Get static field: static public System.Byte CleanupCacheOnLeave
    static uint8_t _get_CleanupCacheOnLeave();
    // Set static field: static public System.Byte CleanupCacheOnLeave
    static void _set_CleanupCacheOnLeave(uint8_t value);
    // static field const value: static public System.Byte MasterClientId
    static constexpr const uint8_t MasterClientId = 248u;
    // Get static field: static public System.Byte MasterClientId
    static uint8_t _get_MasterClientId();
    // Set static field: static public System.Byte MasterClientId
    static void _set_MasterClientId(uint8_t value);
    // static field const value: static public System.Byte ExpectedUsers
    static constexpr const uint8_t ExpectedUsers = 247u;
    // Get static field: static public System.Byte ExpectedUsers
    static uint8_t _get_ExpectedUsers();
    // Set static field: static public System.Byte ExpectedUsers
    static void _set_ExpectedUsers(uint8_t value);
    // static field const value: static public System.Byte PlayerTtl
    static constexpr const uint8_t PlayerTtl = 246u;
    // Get static field: static public System.Byte PlayerTtl
    static uint8_t _get_PlayerTtl();
    // Set static field: static public System.Byte PlayerTtl
    static void _set_PlayerTtl(uint8_t value);
    // static field const value: static public System.Byte EmptyRoomTtl
    static constexpr const uint8_t EmptyRoomTtl = 245u;
    // Get static field: static public System.Byte EmptyRoomTtl
    static uint8_t _get_EmptyRoomTtl();
    // Set static field: static public System.Byte EmptyRoomTtl
    static void _set_EmptyRoomTtl(uint8_t value);
    // public System.Void .ctor()
    // Offset: 0x2AF1034
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GamePropertyKey* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::GamePropertyKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GamePropertyKey*, creationType>()));
    }
  }; // Fusion.Photon.Realtime.GamePropertyKey
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::GamePropertyKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
