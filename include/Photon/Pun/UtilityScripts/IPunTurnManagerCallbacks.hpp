// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: IPunTurnManagerCallbacks
  class IPunTurnManagerCallbacks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*, "Photon.Pun.UtilityScripts", "IPunTurnManagerCallbacks");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks
  // [TokenAttribute] Offset: FFFFFFFF
  class IPunTurnManagerCallbacks {
    public:
    // public System.Void OnTurnBegins(System.Int32 turn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnTurnBegins(int turn);
    // public System.Void OnTurnCompleted(System.Int32 turn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnTurnCompleted(int turn);
    // public System.Void OnPlayerMove(Photon.Realtime.Player player, System.Int32 turn, System.Object move)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPlayerMove(::Photon::Realtime::Player* player, int turn, ::Il2CppObject* move);
    // public System.Void OnPlayerFinished(Photon.Realtime.Player player, System.Int32 turn, System.Object move)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPlayerFinished(::Photon::Realtime::Player* player, int turn, ::Il2CppObject* move);
    // public System.Void OnTurnTimeEnds(System.Int32 turn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnTurnTimeEnds(int turn);
  }; // Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnBegins
// Il2CppName: OnTurnBegins
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(int)>(&Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnBegins)> {
  static const MethodInfo* get() {
    static auto* turn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*), "OnTurnBegins", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turn});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnCompleted
// Il2CppName: OnTurnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(int)>(&Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnCompleted)> {
  static const MethodInfo* get() {
    static auto* turn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*), "OnTurnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turn});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnPlayerMove
// Il2CppName: OnPlayerMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(::Photon::Realtime::Player*, int, ::Il2CppObject*)>(&Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnPlayerMove)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* turn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* move = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*), "OnPlayerMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, turn, move});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnPlayerFinished
// Il2CppName: OnPlayerFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(::Photon::Realtime::Player*, int, ::Il2CppObject*)>(&Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnPlayerFinished)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* turn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* move = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*), "OnPlayerFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, turn, move});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnTimeEnds
// Il2CppName: OnTurnTimeEnds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(int)>(&Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnTimeEnds)> {
  static const MethodInfo* get() {
    static auto* turn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*), "OnTurnTimeEnds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turn});
  }
};
