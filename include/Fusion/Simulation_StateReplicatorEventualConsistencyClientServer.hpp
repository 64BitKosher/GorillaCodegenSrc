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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: Allocator
  struct Allocator;
  // Forward declaring type: NetworkObjectHeader
  struct NetworkObjectHeader;
  // Forward declaring type: SimulationConnection
  class SimulationConnection;
  // Forward declaring type: PlayerRef
  struct PlayerRef;
  // Skipping declaration: NetworkId because it is already included!
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
NEED_NO_BOX(::Fusion::Simulation::StateReplicatorEventualConsistencyClientServer);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Simulation::StateReplicatorEventualConsistencyClientServer*, "Fusion", "Simulation/StateReplicatorEventualConsistencyClientServer");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Simulation/StateReplicatorEventualConsistencyClientServer
  // [TokenAttribute] Offset: FFFFFFFF
  class Simulation::StateReplicatorEventualConsistencyClientServer : public ::Fusion::Simulation::StateReplicatorEventualConsistencyBase {
    public:
    public:
    // private Fusion.Allocator* _clientInterestGroupsAllocator
    // Size: 0x8
    // Offset: 0x60
    ::Fusion::Allocator* clientInterestGroupsAllocator;
    // Field size check
    static_assert(sizeof(::Fusion::Allocator*) == 0x8);
    public:
    // Creating conversion operator: operator ::Fusion::Allocator*
    constexpr operator ::Fusion::Allocator*() const noexcept {
      return clientInterestGroupsAllocator;
    }
    // Get instance field reference: private Fusion.Allocator* _clientInterestGroupsAllocator
    [[deprecated("Use field access instead!")]] ::Fusion::Allocator*& dyn__clientInterestGroupsAllocator();
    // public System.Void .ctor(Fusion.Simulation simulation)
    // Offset: 0x2B7EA50
    // Implemented from: Fusion.Simulation/StateReplicatorEventualConsistencyBase
    // Base method: System.Void StateReplicatorEventualConsistencyBase::.ctor(Fusion.Simulation simulation)
    // Base method: System.Void StateReplicator::.ctor(Fusion.Simulation simulation)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Simulation::StateReplicatorEventualConsistencyClientServer* New_ctor(::Fusion::Simulation* simulation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Simulation::StateReplicatorEventualConsistencyClientServer*, creationType>(simulation)));
    }
    // public override System.Void Dispose()
    // Offset: 0x2B7EAC8
    // Implemented from: Fusion.Simulation/StateReplicatorEventualConsistencyBase
    // Base method: System.Void StateReplicatorEventualConsistencyBase::Dispose()
    void Dispose();
    // protected override System.Int32* InitDefaultInterestGroups(Fusion.NetworkObjectHeader* header, Fusion.SimulationConnection sc)
    // Offset: 0x2B7EAEC
    // Implemented from: Fusion.Simulation/StateReplicatorEventualConsistencyBase
    // Base method: System.Int32* StateReplicatorEventualConsistencyBase::InitDefaultInterestGroups(Fusion.NetworkObjectHeader* header, Fusion.SimulationConnection sc)
    int* InitDefaultInterestGroups(::Fusion::NetworkObjectHeader* header, ::Fusion::SimulationConnection* sc);
    // public override System.Void OnObjectInterestGroupChange(Fusion.PlayerRef player, Fusion.NetworkId id, System.String group, System.Boolean enabled)
    // Offset: 0x2B7EDAC
    // Implemented from: Fusion.Simulation/StateReplicator
    // Base method: System.Void StateReplicator::OnObjectInterestGroupChange(Fusion.PlayerRef player, Fusion.NetworkId id, System.String group, System.Boolean enabled)
    void OnObjectInterestGroupChange(::Fusion::PlayerRef player, ::Fusion::NetworkId id, ::StringW group, bool enabled);
    // public override System.Void SendPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer, Fusion.SimulationPacketEnvelope* envelope)
    // Offset: 0x2B7EF74
    // Implemented from: Fusion.Simulation/StateReplicator
    // Base method: System.Void StateReplicator::SendPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer, Fusion.SimulationPacketEnvelope* envelope)
    void SendPacket(::Fusion::Sockets::NetConnection* connection, ::Fusion::Sockets::NetBitBuffer* buffer, ::Fusion::SimulationPacketEnvelope* envelope);
    // public override System.Void RecvPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer)
    // Offset: 0x2B7F068
    // Implemented from: Fusion.Simulation/StateReplicator
    // Base method: System.Void StateReplicator::RecvPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer)
    void RecvPacket(::Fusion::Sockets::NetConnection* connection, ::Fusion::Sockets::NetBitBuffer* buffer);
  }; // Fusion.Simulation/StateReplicatorEventualConsistencyClientServer
  #pragma pack(pop)
  static check_size<sizeof(Simulation::StateReplicatorEventualConsistencyClientServer), 96 + sizeof(::Fusion::Allocator*)> __Fusion_Simulation_StateReplicatorEventualConsistencyClientServerSizeCheck;
  static_assert(sizeof(Simulation::StateReplicatorEventualConsistencyClientServer) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::*)()>(&Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyClientServer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::InitDefaultInterestGroups
// Il2CppName: InitDefaultInterestGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int* (Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::*)(::Fusion::NetworkObjectHeader*, ::Fusion::SimulationConnection*)>(&Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::InitDefaultInterestGroups)> {
  static const MethodInfo* get() {
    static auto* header = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "NetworkObjectHeader"))->byval_arg;
    static auto* sc = &::il2cpp_utils::GetClassFromName("Fusion", "SimulationConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyClientServer*), "InitDefaultInterestGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{header, sc});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::OnObjectInterestGroupChange
// Il2CppName: OnObjectInterestGroupChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::*)(::Fusion::PlayerRef, ::Fusion::NetworkId, ::StringW, bool)>(&Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::OnObjectInterestGroupChange)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyClientServer*), "OnObjectInterestGroupChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, id, group, enabled});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::SendPacket
// Il2CppName: SendPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*, ::Fusion::SimulationPacketEnvelope*)>(&Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::SendPacket)> {
  static const MethodInfo* get() {
    static auto* connection = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    static auto* envelope = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationPacketEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyClientServer*), "SendPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection, buffer, envelope});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::RecvPacket
// Il2CppName: RecvPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&Fusion::Simulation::StateReplicatorEventualConsistencyClientServer::RecvPacket)> {
  static const MethodInfo* get() {
    static auto* connection = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::StateReplicatorEventualConsistencyClientServer*), "RecvPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection, buffer});
  }
};
