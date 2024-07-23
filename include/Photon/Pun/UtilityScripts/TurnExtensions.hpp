// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Room
  class Room;
  // Forward declaring type: RoomInfo
  class RoomInfo;
  // Forward declaring type: Player
  class Player;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: TurnExtensions
  class TurnExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TurnExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TurnExtensions*, "Photon.Pun.UtilityScripts", "TurnExtensions");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.TurnExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TurnExtensions : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String TurnPropKey
    static ::StringW _get_TurnPropKey();
    // Set static field: static public readonly System.String TurnPropKey
    static void _set_TurnPropKey(::StringW value);
    // Get static field: static public readonly System.String TurnStartPropKey
    static ::StringW _get_TurnStartPropKey();
    // Set static field: static public readonly System.String TurnStartPropKey
    static void _set_TurnStartPropKey(::StringW value);
    // Get static field: static public readonly System.String FinishedTurnPropKey
    static ::StringW _get_FinishedTurnPropKey();
    // Set static field: static public readonly System.String FinishedTurnPropKey
    static void _set_FinishedTurnPropKey(::StringW value);
    // static public System.Void SetTurn(Photon.Realtime.Room room, System.Int32 turn, System.Boolean setStartTime)
    // Offset: 0x4A565E8
    static void SetTurn(::Photon::Realtime::Room* room, int turn, bool setStartTime);
    // static public System.Int32 GetTurn(Photon.Realtime.RoomInfo room)
    // Offset: 0x4A56444
    static int GetTurn(::Photon::Realtime::RoomInfo* room);
    // static public System.Int32 GetTurnStart(Photon.Realtime.RoomInfo room)
    // Offset: 0x4A56814
    static int GetTurnStart(::Photon::Realtime::RoomInfo* room);
    // static public System.Int32 GetFinishedTurn(Photon.Realtime.Player player)
    // Offset: 0x4A57638
    static int GetFinishedTurn(::Photon::Realtime::Player* player);
    // static public System.Void SetFinishedTurn(Photon.Realtime.Player player, System.Int32 turn)
    // Offset: 0x4A56E78
    static void SetFinishedTurn(::Photon::Realtime::Player* player, int turn);
    // static private System.Void .cctor()
    // Offset: 0x4A577A0
    static void _cctor();
  }; // Photon.Pun.UtilityScripts.TurnExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TurnExtensions::SetTurn
// Il2CppName: SetTurn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Room*, int, bool)>(&Photon::Pun::UtilityScripts::TurnExtensions::SetTurn)> {
  static const MethodInfo* get() {
    static auto* room = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Room")->byval_arg;
    static auto* turn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* setStartTime = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TurnExtensions*), "SetTurn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{room, turn, setStartTime});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TurnExtensions::GetTurn
// Il2CppName: GetTurn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Photon::Realtime::RoomInfo*)>(&Photon::Pun::UtilityScripts::TurnExtensions::GetTurn)> {
  static const MethodInfo* get() {
    static auto* room = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "RoomInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TurnExtensions*), "GetTurn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{room});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TurnExtensions::GetTurnStart
// Il2CppName: GetTurnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Photon::Realtime::RoomInfo*)>(&Photon::Pun::UtilityScripts::TurnExtensions::GetTurnStart)> {
  static const MethodInfo* get() {
    static auto* room = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "RoomInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TurnExtensions*), "GetTurnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{room});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TurnExtensions::GetFinishedTurn
// Il2CppName: GetFinishedTurn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Photon::Realtime::Player*)>(&Photon::Pun::UtilityScripts::TurnExtensions::GetFinishedTurn)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TurnExtensions*), "GetFinishedTurn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TurnExtensions::SetFinishedTurn
// Il2CppName: SetFinishedTurn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, int)>(&Photon::Pun::UtilityScripts::TurnExtensions::SetFinishedTurn)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* turn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TurnExtensions*), "SetFinishedTurn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, turn});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TurnExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Pun::UtilityScripts::TurnExtensions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TurnExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
