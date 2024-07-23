// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Fusion.Photon.Realtime.ILobbyCallbacks
#include "Fusion/Photon/Realtime/ILobbyCallbacks.hpp"
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
  // Forward declaring type: RoomInfo
  class RoomInfo;
  // Forward declaring type: TypedLobbyInfo
  class TypedLobbyInfo;
}
// Completed forward declares
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: LobbyCallbacksContainer
  class LobbyCallbacksContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::LobbyCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::LobbyCallbacksContainer*, "Fusion.Photon.Realtime", "LobbyCallbacksContainer");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.Photon.Realtime.LobbyCallbacksContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class LobbyCallbacksContainer : public ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::ILobbyCallbacks*>/*, public ::Fusion::Photon::Realtime::ILobbyCallbacks*/ {
    public:
    public:
    // private readonly Fusion.Photon.Realtime.LoadBalancingClient client
    // Size: 0x8
    // Offset: 0x28
    ::Fusion::Photon::Realtime::LoadBalancingClient* client;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingClient*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Fusion::Photon::Realtime::ILobbyCallbacks
    operator ::Fusion::Photon::Realtime::ILobbyCallbacks() noexcept {
      return *reinterpret_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(this);
    }
    // Creating conversion operator: operator ::Fusion::Photon::Realtime::LoadBalancingClient*
    constexpr operator ::Fusion::Photon::Realtime::LoadBalancingClient*() const noexcept {
      return client;
    }
    // Get instance field reference: private readonly Fusion.Photon.Realtime.LoadBalancingClient client
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::LoadBalancingClient*& dyn_client();
    // public System.Void .ctor(Fusion.Photon.Realtime.LoadBalancingClient client)
    // Offset: 0x2AE36F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyCallbacksContainer* New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient* client) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::LobbyCallbacksContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyCallbacksContainer*, creationType>(client)));
    }
    // public System.Void OnJoinedLobby()
    // Offset: 0x2AEA7E8
    void OnJoinedLobby();
    // public System.Void OnLeftLobby()
    // Offset: 0x2AEA9A0
    void OnLeftLobby();
    // public System.Void OnRoomListUpdate(System.Collections.Generic.List`1<Fusion.Photon.Realtime.RoomInfo> roomList)
    // Offset: 0x2AEA624
    void OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>* roomList);
    // public System.Void OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Fusion.Photon.Realtime.TypedLobbyInfo> lobbyStatistics)
    // Offset: 0x2AECDF8
    void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics);
  }; // Fusion.Photon.Realtime.LobbyCallbacksContainer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::LobbyCallbacksContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Photon::Realtime::LobbyCallbacksContainer::OnJoinedLobby
// Il2CppName: OnJoinedLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::LobbyCallbacksContainer::*)()>(&Fusion::Photon::Realtime::LobbyCallbacksContainer::OnJoinedLobby)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::LobbyCallbacksContainer*), "OnJoinedLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::LobbyCallbacksContainer::OnLeftLobby
// Il2CppName: OnLeftLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::LobbyCallbacksContainer::*)()>(&Fusion::Photon::Realtime::LobbyCallbacksContainer::OnLeftLobby)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::LobbyCallbacksContainer*), "OnLeftLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::LobbyCallbacksContainer::OnRoomListUpdate
// Il2CppName: OnRoomListUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::LobbyCallbacksContainer::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*)>(&Fusion::Photon::Realtime::LobbyCallbacksContainer::OnRoomListUpdate)> {
  static const MethodInfo* get() {
    static auto* roomList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "RoomInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::LobbyCallbacksContainer*), "OnRoomListUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomList});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::LobbyCallbacksContainer::OnLobbyStatisticsUpdate
// Il2CppName: OnLobbyStatisticsUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::LobbyCallbacksContainer::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*)>(&Fusion::Photon::Realtime::LobbyCallbacksContainer::OnLobbyStatisticsUpdate)> {
  static const MethodInfo* get() {
    static auto* lobbyStatistics = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "TypedLobbyInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::LobbyCallbacksContainer*), "OnLobbyStatisticsUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyStatistics});
  }
};