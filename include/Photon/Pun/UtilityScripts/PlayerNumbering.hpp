// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPunCallbacks
#include "Photon/Pun/MonoBehaviourPunCallbacks.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Pun::UtilityScripts
namespace Photon::Pun::UtilityScripts {
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: PlayerNumbering
  class PlayerNumbering;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PlayerNumbering);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PlayerNumbering*, "Photon.Pun.UtilityScripts", "PlayerNumbering");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.PlayerNumbering
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerNumbering : public ::Photon::Pun::MonoBehaviourPunCallbacks {
    public:
    // Nested type: ::Photon::Pun::UtilityScripts::PlayerNumbering::PlayerNumberingChanged
    class PlayerNumberingChanged;
    // Nested type: ::Photon::Pun::UtilityScripts::PlayerNumbering::$$c
    class $$c;
    public:
    // public System.Boolean dontDestroyOnLoad
    // Size: 0x1
    // Offset: 0x28
    bool dontDestroyOnLoad;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static public Photon.Pun.UtilityScripts.PlayerNumbering instance
    static ::Photon::Pun::UtilityScripts::PlayerNumbering* _get_instance();
    // Set static field: static public Photon.Pun.UtilityScripts.PlayerNumbering instance
    static void _set_instance(::Photon::Pun::UtilityScripts::PlayerNumbering* value);
    // Get static field: static public Photon.Realtime.Player[] SortedPlayers
    static ::ArrayW<::Photon::Realtime::Player*> _get_SortedPlayers();
    // Set static field: static public Photon.Realtime.Player[] SortedPlayers
    static void _set_SortedPlayers(::ArrayW<::Photon::Realtime::Player*> value);
    // Get static field: static private Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged OnPlayerNumberingChanged
    static ::Photon::Pun::UtilityScripts::PlayerNumbering::PlayerNumberingChanged* _get_OnPlayerNumberingChanged();
    // Set static field: static private Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged OnPlayerNumberingChanged
    static void _set_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering::PlayerNumberingChanged* value);
    // static field const value: static public System.String RoomPlayerIndexedProp
    static constexpr const char* RoomPlayerIndexedProp = "pNr";
    // Get static field: static public System.String RoomPlayerIndexedProp
    static ::StringW _get_RoomPlayerIndexedProp();
    // Set static field: static public System.String RoomPlayerIndexedProp
    static void _set_RoomPlayerIndexedProp(::StringW value);
    // Get instance field reference: public System.Boolean dontDestroyOnLoad
    [[deprecated("Use field access instead!")]] bool& dyn_dontDestroyOnLoad();
    // static public System.Void add_OnPlayerNumberingChanged(Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged value)
    // Offset: 0x4A51110
    static void add_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering::PlayerNumberingChanged* value);
    // static public System.Void remove_OnPlayerNumberingChanged(Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged value)
    // Offset: 0x4A511CC
    static void remove_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering::PlayerNumberingChanged* value);
    // public System.Void Awake()
    // Offset: 0x4A51288
    void Awake();
    // public System.Void RefreshData()
    // Offset: 0x4A5141C
    void RefreshData();
    // public System.Void .ctor()
    // Offset: 0x4A52080
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerNumbering* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::PlayerNumbering::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerNumbering*, creationType>()));
    }
    // public override System.Void OnJoinedRoom()
    // Offset: 0x4A51ADC
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnJoinedRoom()
    void OnJoinedRoom();
    // public override System.Void OnLeftRoom()
    // Offset: 0x4A51AE0
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnLeftRoom()
    void OnLeftRoom();
    // public override System.Void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    // Offset: 0x4A51B74
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);
    // public override System.Void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    // Offset: 0x4A51B78
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);
    // public override System.Void OnPlayerPropertiesUpdate(Photon.Realtime.Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    // Offset: 0x4A51B7C
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnPlayerPropertiesUpdate(Photon.Realtime.Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);
  }; // Photon.Pun.UtilityScripts.PlayerNumbering
  #pragma pack(pop)
  static check_size<sizeof(PlayerNumbering), 40 + sizeof(bool)> __Photon_Pun_UtilityScripts_PlayerNumberingSizeCheck;
  static_assert(sizeof(PlayerNumbering) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::add_OnPlayerNumberingChanged
// Il2CppName: add_OnPlayerNumberingChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::UtilityScripts::PlayerNumbering::PlayerNumberingChanged*)>(&Photon::Pun::UtilityScripts::PlayerNumbering::add_OnPlayerNumberingChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Pun.UtilityScripts", "PlayerNumbering/PlayerNumberingChanged")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "add_OnPlayerNumberingChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::remove_OnPlayerNumberingChanged
// Il2CppName: remove_OnPlayerNumberingChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::UtilityScripts::PlayerNumbering::PlayerNumberingChanged*)>(&Photon::Pun::UtilityScripts::PlayerNumbering::remove_OnPlayerNumberingChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Pun.UtilityScripts", "PlayerNumbering/PlayerNumberingChanged")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "remove_OnPlayerNumberingChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&Photon::Pun::UtilityScripts::PlayerNumbering::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::RefreshData
// Il2CppName: RefreshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&Photon::Pun::UtilityScripts::PlayerNumbering::RefreshData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "RefreshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::OnJoinedRoom
// Il2CppName: OnJoinedRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&Photon::Pun::UtilityScripts::PlayerNumbering::OnJoinedRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "OnJoinedRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::OnLeftRoom
// Il2CppName: OnLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&Photon::Pun::UtilityScripts::PlayerNumbering::OnLeftRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "OnLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerEnteredRoom
// Il2CppName: OnPlayerEnteredRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::PlayerNumbering::*)(::Photon::Realtime::Player*)>(&Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerEnteredRoom)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "OnPlayerEnteredRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerLeftRoom
// Il2CppName: OnPlayerLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::PlayerNumbering::*)(::Photon::Realtime::Player*)>(&Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerLeftRoom)> {
  static const MethodInfo* get() {
    static auto* otherPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "OnPlayerLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayer});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerPropertiesUpdate
// Il2CppName: OnPlayerPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::PlayerNumbering::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* targetPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* changedProps = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumbering*), "OnPlayerPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPlayer, changedProps});
  }
};