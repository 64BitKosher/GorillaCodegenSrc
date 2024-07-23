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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IRequestableOwnershipGuardCallbacks
  class IRequestableOwnershipGuardCallbacks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IRequestableOwnershipGuardCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*, "", "IRequestableOwnershipGuardCallbacks");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IRequestableOwnershipGuardCallbacks
  // [TokenAttribute] Offset: FFFFFFFF
  class IRequestableOwnershipGuardCallbacks {
    public:
    // public System.Void OnOwnershipTransferred(Photon.Realtime.Player toPlayer, Photon.Realtime.Player fromPlayer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnOwnershipTransferred(::Photon::Realtime::Player* toPlayer, ::Photon::Realtime::Player* fromPlayer);
    // public System.Boolean OnOwnershipRequest(Photon.Realtime.Player fromPlayer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool OnOwnershipRequest(::Photon::Realtime::Player* fromPlayer);
    // public System.Void OnMyOwnerLeft()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnMyOwnerLeft();
    // public System.Boolean OnMasterClientAssistedTakeoverRequest(Photon.Realtime.Player fromPlayer, Photon.Realtime.Player toPlayer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool OnMasterClientAssistedTakeoverRequest(::Photon::Realtime::Player* fromPlayer, ::Photon::Realtime::Player* toPlayer);
    // public System.Void OnMyCreatorLeft()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnMyCreatorLeft();
  }; // IRequestableOwnershipGuardCallbacks
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnOwnershipTransferred
// Il2CppName: OnOwnershipTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IRequestableOwnershipGuardCallbacks::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnOwnershipTransferred)> {
  static const MethodInfo* get() {
    static auto* toPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* fromPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRequestableOwnershipGuardCallbacks*), "OnOwnershipTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toPlayer, fromPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnOwnershipRequest
// Il2CppName: OnOwnershipRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IRequestableOwnershipGuardCallbacks::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnOwnershipRequest)> {
  static const MethodInfo* get() {
    static auto* fromPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRequestableOwnershipGuardCallbacks*), "OnOwnershipRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnMyOwnerLeft
// Il2CppName: OnMyOwnerLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IRequestableOwnershipGuardCallbacks::*)()>(&GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnMyOwnerLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRequestableOwnershipGuardCallbacks*), "OnMyOwnerLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnMasterClientAssistedTakeoverRequest
// Il2CppName: OnMasterClientAssistedTakeoverRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IRequestableOwnershipGuardCallbacks::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnMasterClientAssistedTakeoverRequest)> {
  static const MethodInfo* get() {
    static auto* fromPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* toPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRequestableOwnershipGuardCallbacks*), "OnMasterClientAssistedTakeoverRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromPlayer, toPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnMyCreatorLeft
// Il2CppName: OnMyCreatorLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IRequestableOwnershipGuardCallbacks::*)()>(&GlobalNamespace::IRequestableOwnershipGuardCallbacks::OnMyCreatorLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRequestableOwnershipGuardCallbacks*), "OnMyCreatorLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
