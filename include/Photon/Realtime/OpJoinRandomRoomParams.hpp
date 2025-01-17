// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Realtime.MatchmakingMode
#include "Photon/Realtime/MatchmakingMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: TypedLobby
  class TypedLobby;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: OpJoinRandomRoomParams
  class OpJoinRandomRoomParams;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::OpJoinRandomRoomParams);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::OpJoinRandomRoomParams*, "Photon.Realtime", "OpJoinRandomRoomParams");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.OpJoinRandomRoomParams
  // [TokenAttribute] Offset: FFFFFFFF
  class OpJoinRandomRoomParams : public ::Il2CppObject {
    public:
    public:
    // public ExitGames.Client.Photon.Hashtable ExpectedCustomRoomProperties
    // Size: 0x8
    // Offset: 0x10
    ::ExitGames::Client::Photon::Hashtable* ExpectedCustomRoomProperties;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::Hashtable*) == 0x8);
    // public System.Byte ExpectedMaxPlayers
    // Size: 0x1
    // Offset: 0x18
    uint8_t ExpectedMaxPlayers;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public Photon.Realtime.MatchmakingMode MatchingType
    // Size: 0x1
    // Offset: 0x19
    ::Photon::Realtime::MatchmakingMode MatchingType;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::MatchmakingMode) == 0x1);
    // Padding between fields: MatchingType and: TypedLobby
    char __padding2[0x6] = {};
    // public Photon.Realtime.TypedLobby TypedLobby
    // Size: 0x8
    // Offset: 0x20
    ::Photon::Realtime::TypedLobby* TypedLobby;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::TypedLobby*) == 0x8);
    // public System.String SqlLobbyFilter
    // Size: 0x8
    // Offset: 0x28
    ::StringW SqlLobbyFilter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String[] ExpectedUsers
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> ExpectedUsers;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: public ExitGames.Client.Photon.Hashtable ExpectedCustomRoomProperties
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::Hashtable*& dyn_ExpectedCustomRoomProperties();
    // Get instance field reference: public System.Byte ExpectedMaxPlayers
    [[deprecated("Use field access instead!")]] uint8_t& dyn_ExpectedMaxPlayers();
    // Get instance field reference: public Photon.Realtime.MatchmakingMode MatchingType
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::MatchmakingMode& dyn_MatchingType();
    // Get instance field reference: public Photon.Realtime.TypedLobby TypedLobby
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::TypedLobby*& dyn_TypedLobby();
    // Get instance field reference: public System.String SqlLobbyFilter
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SqlLobbyFilter();
    // Get instance field reference: public System.String[] ExpectedUsers
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_ExpectedUsers();
    // public System.Void .ctor()
    // Offset: 0x4A16AE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpJoinRandomRoomParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::OpJoinRandomRoomParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpJoinRandomRoomParams*, creationType>()));
    }
  }; // Photon.Realtime.OpJoinRandomRoomParams
  #pragma pack(pop)
  static check_size<sizeof(OpJoinRandomRoomParams), 48 + sizeof(::ArrayW<::StringW>)> __Photon_Realtime_OpJoinRandomRoomParamsSizeCheck;
  static_assert(sizeof(OpJoinRandomRoomParams) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::OpJoinRandomRoomParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
