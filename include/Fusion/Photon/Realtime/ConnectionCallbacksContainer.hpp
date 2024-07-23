// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Fusion.Photon.Realtime.IConnectionCallbacks
#include "Fusion/Photon/Realtime/IConnectionCallbacks.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Photon::Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: LoadBalancingClient
  class LoadBalancingClient;
  // Forward declaring type: RegionHandler
  class RegionHandler;
  // Forward declaring type: DisconnectCause
  struct DisconnectCause;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: ConnectionCallbacksContainer
  class ConnectionCallbacksContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::ConnectionCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::ConnectionCallbacksContainer*, "Fusion.Photon.Realtime", "ConnectionCallbacksContainer");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.Photon.Realtime.ConnectionCallbacksContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectionCallbacksContainer : public ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::IConnectionCallbacks*>/*, public ::Fusion::Photon::Realtime::IConnectionCallbacks*/ {
    public:
    public:
    // private readonly Fusion.Photon.Realtime.LoadBalancingClient client
    // Size: 0x8
    // Offset: 0x28
    ::Fusion::Photon::Realtime::LoadBalancingClient* client;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingClient*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Fusion::Photon::Realtime::IConnectionCallbacks
    operator ::Fusion::Photon::Realtime::IConnectionCallbacks() noexcept {
      return *reinterpret_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(this);
    }
    // Creating conversion operator: operator ::Fusion::Photon::Realtime::LoadBalancingClient*
    constexpr operator ::Fusion::Photon::Realtime::LoadBalancingClient*() const noexcept {
      return client;
    }
    // Get instance field reference: private readonly Fusion.Photon.Realtime.LoadBalancingClient client
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::LoadBalancingClient*& dyn_client();
    // public System.Void .ctor(Fusion.Photon.Realtime.LoadBalancingClient client)
    // Offset: 0x2AE355C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionCallbacksContainer* New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient* client) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::ConnectionCallbacksContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionCallbacksContainer*, creationType>(client)));
    }
    // public System.Void OnConnected()
    // Offset: 0x2AEB72C
    void OnConnected();
    // public System.Void OnConnectedToMaster()
    // Offset: 0x2AEA0E0
    void OnConnectedToMaster();
    // public System.Void OnRegionListReceived(Fusion.Photon.Realtime.RegionHandler regionHandler)
    // Offset: 0x2AEA460
    void OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler* regionHandler);
    // public System.Void OnDisconnected(Fusion.Photon.Realtime.DisconnectCause cause)
    // Offset: 0x2AEBAA0
    void OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause cause);
    // public System.Void OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object> data)
    // Offset: 0x2AEA29C
    void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* data);
    // public System.Void OnCustomAuthenticationFailed(System.String debugMessage)
    // Offset: 0x2AE9B54
    void OnCustomAuthenticationFailed(::StringW debugMessage);
  }; // Fusion.Photon.Realtime.ConnectionCallbacksContainer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::ConnectionCallbacksContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnConnected
// Il2CppName: OnConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)()>(&Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::ConnectionCallbacksContainer*), "OnConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnConnectedToMaster
// Il2CppName: OnConnectedToMaster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)()>(&Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnConnectedToMaster)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::ConnectionCallbacksContainer*), "OnConnectedToMaster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnRegionListReceived
// Il2CppName: OnRegionListReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnRegionListReceived)> {
  static const MethodInfo* get() {
    static auto* regionHandler = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "RegionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::ConnectionCallbacksContainer*), "OnRegionListReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{regionHandler});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnDisconnected
// Il2CppName: OnDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnDisconnected)> {
  static const MethodInfo* get() {
    static auto* cause = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "DisconnectCause")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::ConnectionCallbacksContainer*), "OnDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cause});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationResponse
// Il2CppName: OnCustomAuthenticationResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*)>(&Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationResponse)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::ConnectionCallbacksContainer*), "OnCustomAuthenticationResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationFailed
// Il2CppName: OnCustomAuthenticationFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::StringW)>(&Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationFailed)> {
  static const MethodInfo* get() {
    static auto* debugMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::ConnectionCallbacksContainer*), "OnCustomAuthenticationFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{debugMessage});
  }
};