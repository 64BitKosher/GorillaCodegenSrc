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
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: ServerConnection
  struct ServerConnection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::ServerConnection, "Fusion.Photon.Realtime", "ServerConnection");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.ServerConnection
  // [TokenAttribute] Offset: FFFFFFFF
  struct ServerConnection/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ServerConnection
    constexpr ServerConnection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Photon.Realtime.ServerConnection MasterServer
    static constexpr const int MasterServer = 0;
    // Get static field: static public Fusion.Photon.Realtime.ServerConnection MasterServer
    static ::Fusion::Photon::Realtime::ServerConnection _get_MasterServer();
    // Set static field: static public Fusion.Photon.Realtime.ServerConnection MasterServer
    static void _set_MasterServer(::Fusion::Photon::Realtime::ServerConnection value);
    // static field const value: static public Fusion.Photon.Realtime.ServerConnection GameServer
    static constexpr const int GameServer = 1;
    // Get static field: static public Fusion.Photon.Realtime.ServerConnection GameServer
    static ::Fusion::Photon::Realtime::ServerConnection _get_GameServer();
    // Set static field: static public Fusion.Photon.Realtime.ServerConnection GameServer
    static void _set_GameServer(::Fusion::Photon::Realtime::ServerConnection value);
    // static field const value: static public Fusion.Photon.Realtime.ServerConnection NameServer
    static constexpr const int NameServer = 2;
    // Get static field: static public Fusion.Photon.Realtime.ServerConnection NameServer
    static ::Fusion::Photon::Realtime::ServerConnection _get_NameServer();
    // Set static field: static public Fusion.Photon.Realtime.ServerConnection NameServer
    static void _set_NameServer(::Fusion::Photon::Realtime::ServerConnection value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.Photon.Realtime.ServerConnection
  #pragma pack(pop)
  static check_size<sizeof(ServerConnection), 0 + sizeof(int)> __Fusion_Photon_Realtime_ServerConnectionSizeCheck;
  static_assert(sizeof(ServerConnection) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
