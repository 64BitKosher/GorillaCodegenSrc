// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkBehaviour
#include "Fusion/NetworkBehaviour.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
// Including type: Photon.Pun.IPunInstantiateMagicCallback
#include "Photon/Pun/IPunInstantiateMagicCallback.hpp"
// Including type: Fusion.Changed`1
#include "Fusion/Changed_1.hpp"
// Including type: PhotonMessageInfoWrapped
#include "GlobalNamespace/PhotonMessageInfoWrapped.hpp"
// Including type: Photon.Pun.PhotonMessageInfo
#include "Photon/Pun/PhotonMessageInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: INetworkStruct
  class INetworkStruct;
  // Forward declaring type: ChangedDelegate`1<T>
  template<typename T>
  class ChangedDelegate_1;
  // Forward declaring type: NetworkBehaviourCallbacks`1<T>
  template<typename T>
  class NetworkBehaviourCallbacks_1;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetworkComponent`1<T>
  template<typename T>
  class NetworkComponent_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkComponent_1, "", "NetworkComponent`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkComponent`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkBehaviourWeavedAttribute] Offset: FFFFFFFF
  template<typename T>
  class NetworkComponent_1 : public ::Fusion::NetworkBehaviour/*, public ::Photon::Pun::IPunObservable, public ::Photon::Pun::IPunInstantiateMagicCallback*/ {
    public:
    public:
    // private T <data>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T data;
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Pun::IPunInstantiateMagicCallback
    operator ::Photon::Pun::IPunInstantiateMagicCallback() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static Fusion.Changed`1<NetworkComponent`1> $IL2CPP_CHANGED
    static ::Fusion::Changed_1<::GlobalNamespace::NetworkComponent_1<T>*> _get_$IL2CPP_CHANGED() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::_get_$IL2CPP_CHANGED");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Fusion::Changed_1<::GlobalNamespace::NetworkComponent_1<T>*>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkComponent_1<T>*>::get(), "$IL2CPP_CHANGED"));
    }
    // Autogenerated static field setter
    // Set static field: static Fusion.Changed`1<NetworkComponent`1> $IL2CPP_CHANGED
    static void _set_$IL2CPP_CHANGED(::Fusion::Changed_1<::GlobalNamespace::NetworkComponent_1<T>*> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::_set_$IL2CPP_CHANGED");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkComponent_1<T>*>::get(), "$IL2CPP_CHANGED", value));
    }
    // Autogenerated static field getter
    // Get static field: static Fusion.ChangedDelegate`1<NetworkComponent`1> $IL2CPP_CHANGED_DELEGATE
    static ::Fusion::ChangedDelegate_1<::GlobalNamespace::NetworkComponent_1<T>*>* _get_$IL2CPP_CHANGED_DELEGATE() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::_get_$IL2CPP_CHANGED_DELEGATE");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Fusion::ChangedDelegate_1<::GlobalNamespace::NetworkComponent_1<T>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkComponent_1<T>*>::get(), "$IL2CPP_CHANGED_DELEGATE"));
    }
    // Autogenerated static field setter
    // Set static field: static Fusion.ChangedDelegate`1<NetworkComponent`1> $IL2CPP_CHANGED_DELEGATE
    static void _set_$IL2CPP_CHANGED_DELEGATE(::Fusion::ChangedDelegate_1<::GlobalNamespace::NetworkComponent_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::_set_$IL2CPP_CHANGED_DELEGATE");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkComponent_1<T>*>::get(), "$IL2CPP_CHANGED_DELEGATE", value));
    }
    // Autogenerated static field getter
    // Get static field: static Fusion.NetworkBehaviourCallbacks`1<NetworkComponent`1> $IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
    static ::Fusion::NetworkBehaviourCallbacks_1<::GlobalNamespace::NetworkComponent_1<T>*>* _get_$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::_get_$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Fusion::NetworkBehaviourCallbacks_1<::GlobalNamespace::NetworkComponent_1<T>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkComponent_1<T>*>::get(), "$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS"));
    }
    // Autogenerated static field setter
    // Set static field: static Fusion.NetworkBehaviourCallbacks`1<NetworkComponent`1> $IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
    static void _set_$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS(::Fusion::NetworkBehaviourCallbacks_1<::GlobalNamespace::NetworkComponent_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::_set_$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkComponent_1<T>*>::get(), "$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private T <data>k__BackingField
    [[deprecated("Use field access instead!")]] T& dyn_$data$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::dyn_$data$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<data>k__BackingField"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected T get_data()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_data() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::get_data");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // protected System.Void set_data(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_data(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::set_data");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // protected System.Void DataChangeCallback(PhotonMessageInfoWrapped info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DataChangeCallback(::GlobalNamespace::PhotonMessageInfoWrapped info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::DataChangeCallback");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, info);
    }
    // protected System.Void NetUpdate(System.Single deltaTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void NetUpdate(float deltaTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::NetUpdate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, deltaTime);
    }
    // protected System.Void ResimNetUpdate(System.Single deltaTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResimNetUpdate(float deltaTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::ResimNetUpdate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, deltaTime);
    }
    // public System.Void Update()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::Update");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::OnPhotonSerializeView");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, stream, info);
    }
    // public System.Void OnSpawned()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnSpawned() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::OnSpawned");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void OnPhotonInstantiate(Photon.Pun.PhotonMessageInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::OnPhotonInstantiate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, info);
    }
    // protected System.Void OnRender()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnRender() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::OnRender");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::NetworkComponent_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsLocallyOwned()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsLocallyOwned() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::get_IsLocallyOwned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsLocallyOwned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_ShouldWriteObjectData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_ShouldWriteObjectData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::get_ShouldWriteObjectData");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ShouldWriteObjectData", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_ShouldUpdateobject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_ShouldUpdateobject() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::get_ShouldUpdateobject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ShouldUpdateobject", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Int32 get_OwnerID()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_OwnerID() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::get_OwnerID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_OwnerID", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkComponent_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkComponent_1<T>*, creationType>()));
    }
    // public override System.Void Spawned()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::Spawned()
    void Spawned() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::Spawned");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::NetworkBehaviour*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public override System.Void Render()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Fusion.SimulationBehaviour
    // Base method: System.Void SimulationBehaviour::Render()
    void Render() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::Render");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SimulationBehaviour*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public override System.Void CopyBackingFieldsToState(System.Boolean )
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::CopyBackingFieldsToState(System.Boolean )
    void CopyBackingFieldsToState(bool param_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::CopyBackingFieldsToState");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::NetworkBehaviour*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, param_0);
    }
    // public override System.Void CopyStateToBackingFields()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::CopyStateToBackingFields()
    void CopyStateToBackingFields() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkComponent_1::CopyStateToBackingFields");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::NetworkBehaviour*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // NetworkComponent`1
  // Could not write size check! Type: NetworkComponent`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
