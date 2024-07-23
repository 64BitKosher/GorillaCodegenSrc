// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Fusion.Photon.Realtime.IInRoomCallbacks
#include "Fusion/Photon/Realtime/IInRoomCallbacks.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Photon::Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: LoadBalancingClient
  class LoadBalancingClient;
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: InRoomCallbacksContainer
  class InRoomCallbacksContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::InRoomCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::InRoomCallbacksContainer*, "Fusion.Photon.Realtime", "InRoomCallbacksContainer");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.Photon.Realtime.InRoomCallbacksContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class InRoomCallbacksContainer : public ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::IInRoomCallbacks*>/*, public ::Fusion::Photon::Realtime::IInRoomCallbacks*/ {
    public:
    public:
    // private readonly Fusion.Photon.Realtime.LoadBalancingClient client
    // Size: 0x8
    // Offset: 0x28
    ::Fusion::Photon::Realtime::LoadBalancingClient* client;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingClient*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Fusion::Photon::Realtime::IInRoomCallbacks
    operator ::Fusion::Photon::Realtime::IInRoomCallbacks() noexcept {
      return *reinterpret_cast<::Fusion::Photon::Realtime::IInRoomCallbacks*>(this);
    }
    // Creating conversion operator: operator ::Fusion::Photon::Realtime::LoadBalancingClient*
    constexpr operator ::Fusion::Photon::Realtime::LoadBalancingClient*() const noexcept {
      return client;
    }
    // Get instance field reference: private readonly Fusion.Photon.Realtime.LoadBalancingClient client
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::LoadBalancingClient*& dyn_client();
    // public System.Void .ctor(Fusion.Photon.Realtime.LoadBalancingClient client)
    // Offset: 0x2AE366C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InRoomCallbacksContainer* New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient* client) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::InRoomCallbacksContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InRoomCallbacksContainer*, creationType>(client)));
    }
    // public System.Void OnPlayerEnteredRoom(Fusion.Photon.Realtime.Player newPlayer)
    // Offset: 0x2AEC8B0
    void OnPlayerEnteredRoom(::Fusion::Photon::Realtime::Player* newPlayer);
    // public System.Void OnPlayerLeftRoom(Fusion.Photon.Realtime.Player otherPlayer)
    // Offset: 0x2AECC34
    void OnPlayerLeftRoom(::Fusion::Photon::Realtime::Player* otherPlayer);
    // public System.Void OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable propertiesThatChanged)
    // Offset: 0x2AE6DC4
    void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);
    // public System.Void OnPlayerPropertiesUpdate(Fusion.Photon.Realtime.Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProp)
    // Offset: 0x2AE6598
    void OnPlayerPropertiesUpdate(::Fusion::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProp);
    // public System.Void OnMasterClientSwitched(Fusion.Photon.Realtime.Player newMasterClient)
    // Offset: 0x2AECA70
    void OnMasterClientSwitched(::Fusion::Photon::Realtime::Player* newMasterClient);
  }; // Fusion.Photon.Realtime.InRoomCallbacksContainer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::InRoomCallbacksContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Photon::Realtime::InRoomCallbacksContainer::OnPlayerEnteredRoom
// Il2CppName: OnPlayerEnteredRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::InRoomCallbacksContainer::*)(::Fusion::Photon::Realtime::Player*)>(&Fusion::Photon::Realtime::InRoomCallbacksContainer::OnPlayerEnteredRoom)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::InRoomCallbacksContainer*), "OnPlayerEnteredRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::InRoomCallbacksContainer::OnPlayerLeftRoom
// Il2CppName: OnPlayerLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::InRoomCallbacksContainer::*)(::Fusion::Photon::Realtime::Player*)>(&Fusion::Photon::Realtime::InRoomCallbacksContainer::OnPlayerLeftRoom)> {
  static const MethodInfo* get() {
    static auto* otherPlayer = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::InRoomCallbacksContainer*), "OnPlayerLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayer});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::InRoomCallbacksContainer::OnRoomPropertiesUpdate
// Il2CppName: OnRoomPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::InRoomCallbacksContainer::*)(::ExitGames::Client::Photon::Hashtable*)>(&Fusion::Photon::Realtime::InRoomCallbacksContainer::OnRoomPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* propertiesThatChanged = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::InRoomCallbacksContainer*), "OnRoomPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertiesThatChanged});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::InRoomCallbacksContainer::OnPlayerPropertiesUpdate
// Il2CppName: OnPlayerPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::InRoomCallbacksContainer::*)(::Fusion::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&Fusion::Photon::Realtime::InRoomCallbacksContainer::OnPlayerPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* targetPlayer = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "Player")->byval_arg;
    static auto* changedProp = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::InRoomCallbacksContainer*), "OnPlayerPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPlayer, changedProp});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::InRoomCallbacksContainer::OnMasterClientSwitched
// Il2CppName: OnMasterClientSwitched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::InRoomCallbacksContainer::*)(::Fusion::Photon::Realtime::Player*)>(&Fusion::Photon::Realtime::InRoomCallbacksContainer::OnMasterClientSwitched)> {
  static const MethodInfo* get() {
    static auto* newMasterClient = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::InRoomCallbacksContainer*), "OnMasterClientSwitched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newMasterClient});
  }
};
