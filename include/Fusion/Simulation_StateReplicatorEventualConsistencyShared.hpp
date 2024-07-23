// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Simulation
#include "Fusion/Simulation.hpp"
// Including type: Fusion.Simulation/StateReplicatorEventualConsistencyBase
#include "Fusion/Simulation_StateReplicatorEventualConsistencyBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectDestroyFlags
  struct NetworkObjectDestroyFlags;
  // Forward declaring type: SimulationPacketEnvelope
  struct SimulationPacketEnvelope;
}
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConnection
  struct NetConnection;
  // Forward declaring type: NetBitBuffer
  struct NetBitBuffer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Simulation::StateReplicatorEventualConsistencyShared);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Simulation::StateReplicatorEventualConsistencyShared*, "Fusion", "Simulation/StateReplicatorEventualConsistencyShared");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Simulation/StateReplicatorEventualConsistencyShared
  // [TokenAttribute] Offset: FFFFFFFF
  class Simulation::StateReplicatorEventualConsistencyShared : public ::Fusion::Simulation::StateReplicatorEventualConsistencyBase {
    public:
    public:
    // private System.Collections.Generic.HashSet`1<Fusion.NetworkId> _stateAuthSet
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* stateAuthSet;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*
    constexpr operator ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*() const noexcept {
      return stateAuthSet;
    }
    // Get instance field reference: private System.Collections.Generic.HashSet`1<Fusion.NetworkId> _stateAuthSet
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& dyn__stateAuthSet();
    // private System.Void StateAuthAdd(Fusion.NetworkId id)
    // Offset: 0x2B7F3DC
    void StateAuthAdd(::Fusion::NetworkId id);
    // private System.Boolean StateAuthRemove(Fusion.NetworkId id)
    // Offset: 0x2B7F4CC
    bool StateAuthRemove(::Fusion::NetworkId id);
    // public override System.Boolean get_ClientToServer()
    // Offset: 0x2B7F314
    // Implemented from: Fusion.Simulation/StateReplicator
    // Base method: System.Boolean StateReplicator::get_ClientToServer()
    bool get_ClientToServer();
    // public System.Void .ctor(Fusion.Simulation simulation)
    // Offset: 0x2B7F31C
    // Implemented from: Fusion.Simulation/StateReplicatorEventualConsistencyBase
    // Base method: System.Void StateReplicatorEventualConsistencyBase::.ctor(Fusion.Simulation simulation)
    // Base method: System.Void StateReplicator::.ctor(Fusion.Simulation simulation)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Simulation::StateReplicatorEventualConsistencyShared* New_ctor(::Fusion::Simulation* simulation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Simulation::StateReplicatorEventualConsistencyShared::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Simulation::StateReplicatorEventualConsistencyShared*, creationType>(simulation)));
    }
    // public override System.Void OnObjectDestroyed(Fusion.NetworkId id, Fusion.NetworkObjectDestroyFlags flags)
    // Offset: 0x2B7F5BC
    // Implemented from: Fusion.Simulation/StateReplicatorEventualConsistencyBase
    // Base method: System.Void StateReplicatorEventualConsistencyBase::OnObjectDestroyed(Fusion.NetworkId id, Fusion.NetworkObjectDestroyFlags flags)
    void OnObjectDestroyed(::Fusion::NetworkId id, ::Fusion::NetworkObjectDestroyFlags flags);
    // public override System.Void OnObjectSpawnedLocal(Fusion.NetworkId id)
    // Offset: 0x2B7F5E8
    // Implemented from: Fusion.Simulation/StateReplicator
    // Base method: System.Void StateReplicator::OnObjectSpawnedLocal(Fusion.NetworkId id)
    void OnObjectSpawnedLocal(::Fusion::NetworkId id);
    // protected override System.Boolean IsLocalDestroyWaitingForConfirmation(Fusion.NetworkId id)
    // Offset: 0x2B7F5F0
    // Implemented from: Fusion.Simulation/StateReplicatorEventualConsistencyBase
    // Base method: System.Boolean StateReplicatorEventualConsistencyBase::IsLocalDestroyWaitingForConfirmation(Fusion.NetworkId id)
    bool IsLocalDestroyWaitingForConfirmation(::Fusion::NetworkId id);
    // public override System.Void SendPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer, Fusion.SimulationPacketEnvelope* envelope)
    // Offset: 0x2B7F74C
    // Implemented from: Fusion.Simulation/StateReplicator
    // Base method: System.Void StateReplicator::SendPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer, Fusion.SimulationPacketEnvelope* envelope)
    void SendPacket(::Fusion::Sockets::NetConnection* connection, ::Fusion::Sockets::NetBitBuffer* buffer, ::Fusion::SimulationPacketEnvelope* envelope);
    // public override System.Void RecvPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer)
    // Offset: 0x2B7F96C
    // Implemented from: Fusion.Simulation/StateReplicator
    // Base method: System.Void StateReplicator::RecvPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer)
    void RecvPacket(::Fusion::Sockets::NetConnection* connection, ::Fusion::Sockets::NetBitBuffer* buffer);
  }; // Fusion.Simulation/StateReplicatorEventualConsistencyShared
  #pragma pack(pop)
  static check_size<sizeof(Simulation::StateReplicatorEventualConsistencyShared), 96 + sizeof(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*)> __Fusion_Simulation_StateReplicatorEventualConsistencySharedSizeCheck;
  static_assert(sizeof(Simulation::StateReplicatorEventualConsistencyShared) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::StateAuthAdd
// Il2CppName: StateAuthAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyShared::*)(::Fusion::NetworkId)>(&Fusion::Simulation::StateReplicatorEventualConsistencyShared::StateAuthAdd)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyShared*), "StateAuthAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::StateAuthRemove
// Il2CppName: StateAuthRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Simulation::StateReplicatorEventualConsistencyShared::*)(::Fusion::NetworkId)>(&Fusion::Simulation::StateReplicatorEventualConsistencyShared::StateAuthRemove)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyShared*), "StateAuthRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::get_ClientToServer
// Il2CppName: get_ClientToServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Simulation::StateReplicatorEventualConsistencyShared::*)()>(&Fusion::Simulation::StateReplicatorEventualConsistencyShared::get_ClientToServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyShared*), "get_ClientToServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::OnObjectDestroyed
// Il2CppName: OnObjectDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyShared::*)(::Fusion::NetworkId, ::Fusion::NetworkObjectDestroyFlags)>(&Fusion::Simulation::StateReplicatorEventualConsistencyShared::OnObjectDestroyed)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObjectDestroyFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyShared*), "OnObjectDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, flags});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::OnObjectSpawnedLocal
// Il2CppName: OnObjectSpawnedLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyShared::*)(::Fusion::NetworkId)>(&Fusion::Simulation::StateReplicatorEventualConsistencyShared::OnObjectSpawnedLocal)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyShared*), "OnObjectSpawnedLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::IsLocalDestroyWaitingForConfirmation
// Il2CppName: IsLocalDestroyWaitingForConfirmation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Simulation::StateReplicatorEventualConsistencyShared::*)(::Fusion::NetworkId)>(&Fusion::Simulation::StateReplicatorEventualConsistencyShared::IsLocalDestroyWaitingForConfirmation)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyShared*), "IsLocalDestroyWaitingForConfirmation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::SendPacket
// Il2CppName: SendPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyShared::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*, ::Fusion::SimulationPacketEnvelope*)>(&Fusion::Simulation::StateReplicatorEventualConsistencyShared::SendPacket)> {
  static const MethodInfo* get() {
    static auto* connection = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    static auto* envelope = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationPacketEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyShared*), "SendPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection, buffer, envelope});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyShared::RecvPacket
// Il2CppName: RecvPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyShared::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&Fusion::Simulation::StateReplicatorEventualConsistencyShared::RecvPacket)> {
  static const MethodInfo* get() {
    static auto* connection = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyShared*), "RecvPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection, buffer});
  }
};