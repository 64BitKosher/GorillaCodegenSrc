// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Simulation
#include "Fusion/Simulation.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
// Including type: Fusion.SimulationInput
#include "Fusion/SimulationInput.hpp"
// Including type: Fusion.Timer
#include "Fusion/Timer.hpp"
// Including type: Fusion.SimulationPlayer/AOIQuery
#include "Fusion/SimulationPlayer.hpp"
// Including type: Fusion.SimulationSnapshot
#include "Fusion/SimulationSnapshot.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: Fusion.SimulationArgs
#include "Fusion/SimulationArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationStages
  struct SimulationStages;
  // Forward declaring type: SimulationPacketEnvelope
  struct SimulationPacketEnvelope;
  // Skipping declaration: Tick because it is already included!
}
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConnection
  struct NetConnection;
  // Skipping declaration: NetAddress because it is already included!
  // Forward declaring type: NetBitBuffer
  struct NetBitBuffer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Simulation::Client);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Simulation::Client*, "Fusion", "Simulation/Client");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.Simulation/Client
  // [TokenAttribute] Offset: FFFFFFFF
  class Simulation::Client : public ::Fusion::Simulation {
    public:
    // Nested type: ::Fusion::Simulation::Client::$get_ActivePlayers$d__27
    class $get_ActivePlayers$d__27;
    public:
    // private Fusion.PlayerRef _player
    // Size: 0x4
    // Offset: 0x360
    ::Fusion::PlayerRef player;
    // Field size check
    static_assert(sizeof(::Fusion::PlayerRef) == 0x4);
    // private Fusion.Sockets.NetConnection* _server
    // Size: 0x8
    // Offset: 0x368
    ::Fusion::Sockets::NetConnection* server;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnection*) == 0x8);
    // private System.Boolean _stateReceived
    // Size: 0x1
    // Offset: 0x370
    bool stateReceived;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _forceClientPredictionReset
    // Size: 0x1
    // Offset: 0x371
    bool forceClientPredictionReset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private Fusion.SimulationInput/Buffer _inputBuffer
    // Size: 0x8
    // Offset: 0x378
    ::Fusion::SimulationInput::Buffer* inputBuffer;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationInput::Buffer*) == 0x8);
    // private Fusion.SimulationInput[] _inputArray
    // Size: 0x8
    // Offset: 0x380
    ::ArrayW<::Fusion::SimulationInput*> inputArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::Fusion::SimulationInput*>) == 0x8);
    // private System.Double _inputOffsetTarget
    // Size: 0x8
    // Offset: 0x388
    double inputOffsetTarget;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double _inputLastAdjustment
    // Size: 0x8
    // Offset: 0x390
    double inputLastAdjustment;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private Fusion.Timer _inputAdjustClock
    // Size: 0x11
    // Offset: 0x398
    ::Fusion::Timer inputAdjustClock;
    // Field size check
    static_assert(sizeof(::Fusion::Timer) == 0x11);
    // private System.Collections.Generic.List`1<Fusion.SimulationPlayer/AOIQuery> _aoiQueries
    // Size: 0x8
    // Offset: 0x3B0
    ::System::Collections::Generic::List_1<::Fusion::SimulationPlayer::AOIQuery>* aoiQueries;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Fusion::SimulationPlayer::AOIQuery>*) == 0x8);
    // private Fusion.SimulationSnapshot/Interpolator _interpolator
    // Size: 0x8
    // Offset: 0x3B8
    ::Fusion::SimulationSnapshot::Interpolator* interpolator;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationSnapshot::Interpolator*) == 0x8);
    // private System.Collections.Generic.Queue`1<System.ValueTuple`2<Fusion.PlayerRef,System.Boolean>> _playerJoinedLeftMessages
    // Size: 0x8
    // Offset: 0x3C0
    ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef, bool>>* playerJoinedLeftMessages;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef, bool>>*) == 0x8);
    public:
    // Get instance field reference: private Fusion.PlayerRef _player
    [[deprecated("Use field access instead!")]] ::Fusion::PlayerRef& dyn__player();
    // Get instance field reference: private Fusion.Sockets.NetConnection* _server
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnection*& dyn__server();
    // Get instance field reference: private System.Boolean _stateReceived
    [[deprecated("Use field access instead!")]] bool& dyn__stateReceived();
    // Get instance field reference: private System.Boolean _forceClientPredictionReset
    [[deprecated("Use field access instead!")]] bool& dyn__forceClientPredictionReset();
    // Get instance field reference: private Fusion.SimulationInput/Buffer _inputBuffer
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationInput::Buffer*& dyn__inputBuffer();
    // Get instance field reference: private Fusion.SimulationInput[] _inputArray
    [[deprecated("Use field access instead!")]] ::ArrayW<::Fusion::SimulationInput*>& dyn__inputArray();
    // Get instance field reference: private System.Double _inputOffsetTarget
    [[deprecated("Use field access instead!")]] double& dyn__inputOffsetTarget();
    // Get instance field reference: private System.Double _inputLastAdjustment
    [[deprecated("Use field access instead!")]] double& dyn__inputLastAdjustment();
    // Get instance field reference: private Fusion.Timer _inputAdjustClock
    [[deprecated("Use field access instead!")]] ::Fusion::Timer& dyn__inputAdjustClock();
    // Get instance field reference: private System.Collections.Generic.List`1<Fusion.SimulationPlayer/AOIQuery> _aoiQueries
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Fusion::SimulationPlayer::AOIQuery>*& dyn__aoiQueries();
    // Get instance field reference: private Fusion.SimulationSnapshot/Interpolator _interpolator
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationSnapshot::Interpolator*& dyn__interpolator();
    // Get instance field reference: private System.Collections.Generic.Queue`1<System.ValueTuple`2<Fusion.PlayerRef,System.Boolean>> _playerJoinedLeftMessages
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Fusion::PlayerRef, bool>>*& dyn__playerJoinedLeftMessages();
    // Fusion.Sockets.NetConnection* get_ServerConnection()
    // Offset: 0x2B7680C
    ::Fusion::Sockets::NetConnection* get_ServerConnection();
    // public System.Double get_InterpolationTimeScale()
    // Offset: 0x2B76814
    double get_InterpolationTimeScale();
    // public System.Boolean get_IsConnectedToServer()
    // Offset: 0x2B76830
    bool get_IsConnectedToServer();
    // public Fusion.Sockets.NetAddress get_ServerAddress()
    // Offset: 0x2B76840
    ::Fusion::Sockets::NetAddress get_ServerAddress();
    // public System.Double get_RttToServer()
    // Offset: 0x2B76868
    double get_RttToServer();
    // public System.Void Connect(Fusion.Sockets.NetAddress address, System.Byte[] token, System.Byte[] uniqueId)
    // Offset: 0x2B76D20
    void Connect(::Fusion::Sockets::NetAddress address, ::ArrayW<uint8_t> token, ::ArrayW<uint8_t> uniqueId);
    // public System.Void Connect(System.String ip, System.UInt16 port, System.Byte[] token, System.Byte[] uniqueId)
    // Offset: 0x2B76D74
    void Connect(::StringW ip, uint16_t port, ::ArrayW<uint8_t> token, ::ArrayW<uint8_t> uniqueId);
    // private System.Void RunClientSidePredictionLoop(System.Int32 ticks, Fusion.SimulationStages stage)
    // Offset: 0x2B77570
    void RunClientSidePredictionLoop(int ticks, ::Fusion::SimulationStages stage);
    // private System.ValueTuple`2<Fusion.SimulationInput[],System.Int32> GetSortedInputs()
    // Offset: 0x2B77E40
    ::System::ValueTuple_2<::ArrayW<::Fusion::SimulationInput*>, int> GetSortedInputs();
    // private System.Void UpdateInterpolation()
    // Offset: 0x2B77500
    void UpdateInterpolation();
    // private System.Void ReadInputFeedback(Fusion.Sockets.NetBitBuffer* buffer)
    // Offset: 0x2B7801C
    void ReadInputFeedback(::Fusion::Sockets::NetBitBuffer* buffer);
    // static private System.String NullableToString(System.Nullable`1<T> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::StringW NullableToString(::System::Nullable_1<T> value) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Simulation::Client::NullableToString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Fusion", "Simulation/Client", "NullableToString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value);
    }
    // private System.Void ResetClientPredictionState(System.Nullable`1<System.Int32> ticksExtra, System.Nullable`1<System.Double> timeExtra)
    // Offset: 0x2B77240
    void ResetClientPredictionState(::System::Nullable_1<int> ticksExtra, ::System::Nullable_1<double> timeExtra);
    // private System.Void WriteInput(Fusion.Sockets.NetBitBuffer* buffer)
    // Offset: 0x2B787C8
    void WriteInput(::Fusion::Sockets::NetBitBuffer* buffer);
    // private System.Int32 <get_ActivePlayers>g__MaxPlayers|27_0()
    // Offset: 0x2B78C58
    int $get_ActivePlayers$g__MaxPlayers_27_0();
    // private System.Boolean <get_ActivePlayers>g__IsPlayerActive|27_1(System.Int32 index)
    // Offset: 0x2B78C80
    bool $get_ActivePlayers$g__IsPlayerActive_27_1(int index);
    // public override Fusion.PlayerRef get_LocalPlayer()
    // Offset: 0x2B76880
    // Implemented from: Fusion.Simulation
    // Base method: Fusion.PlayerRef Simulation::get_LocalPlayer()
    ::Fusion::PlayerRef get_LocalPlayer();
    // public override Fusion.SimulationSnapshot get_LatestServerState()
    // Offset: 0x2B76888
    // Implemented from: Fusion.Simulation
    // Base method: Fusion.SimulationSnapshot Simulation::get_LatestServerState()
    ::Fusion::SimulationSnapshot* get_LatestServerState();
    // public override System.Collections.Generic.IEnumerable`1<Fusion.PlayerRef> get_ActivePlayers()
    // Offset: 0x2B769D0
    // Implemented from: Fusion.Simulation
    // Base method: System.Collections.Generic.IEnumerable`1<Fusion.PlayerRef> Simulation::get_ActivePlayers()
    ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* get_ActivePlayers();
    // override System.Void OnNetworkShutdown()
    // Offset: 0x2B76A80
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::OnNetworkShutdown()
    void OnNetworkShutdown();
    // override System.Double GetPlayerRtt(Fusion.PlayerRef player)
    // Offset: 0x2B76AB0
    // Implemented from: Fusion.Simulation
    // Base method: System.Double Simulation::GetPlayerRtt(Fusion.PlayerRef player)
    double GetPlayerRtt(::Fusion::PlayerRef player);
    // System.Void .ctor(Fusion.SimulationArgs args)
    // Offset: 0x2B76B10
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::.ctor(Fusion.SimulationArgs args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Simulation::Client* New_ctor(::Fusion::SimulationArgs args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Simulation::Client::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Simulation::Client*, creationType>(args)));
    }
    // protected override System.Void BeforeTick()
    // Offset: 0x2B76D80
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::BeforeTick()
    void BeforeTick();
    // protected override System.Void OnPlayerJoinedLeftInternalMessage(Fusion.PlayerRef player, System.Boolean joined)
    // Offset: 0x2B76F28
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::OnPlayerJoinedLeftInternalMessage(Fusion.PlayerRef player, System.Boolean joined)
    void OnPlayerJoinedLeftInternalMessage(::Fusion::PlayerRef player, bool joined);
    // protected override System.Void NetworkConnected(Fusion.Sockets.NetConnection* connection)
    // Offset: 0x2B76FC8
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::NetworkConnected(Fusion.Sockets.NetConnection* connection)
    void NetworkConnected(::Fusion::Sockets::NetConnection* connection);
    // protected override System.Void NetworkDisconnected(Fusion.Sockets.NetConnection* connection)
    // Offset: 0x2B76FF0
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::NetworkDisconnected(Fusion.Sockets.NetConnection* connection)
    void NetworkDisconnected(::Fusion::Sockets::NetConnection* connection);
    // protected override System.Void NetworkReceiveDone()
    // Offset: 0x2B7714C
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::NetworkReceiveDone()
    void NetworkReceiveDone();
    // protected override System.Void NoSimulation()
    // Offset: 0x2B774FC
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::NoSimulation()
    void NoSimulation();
    // protected override System.Int32 BeforeSimulation()
    // Offset: 0x2B7770C
    // Implemented from: Fusion.Simulation
    // Base method: System.Int32 Simulation::BeforeSimulation()
    int BeforeSimulation();
    // override System.Void AreaOfInterestQueryAdded(Fusion.PlayerRef player, Fusion.SimulationPlayer/AOIQuery query)
    // Offset: 0x2B77EBC
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::AreaOfInterestQueryAdded(Fusion.PlayerRef player, Fusion.SimulationPlayer/AOIQuery query)
    void AreaOfInterestQueryAdded(::Fusion::PlayerRef player, ::Fusion::SimulationPlayer::AOIQuery query);
    // override System.Void RecvPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer)
    // Offset: 0x2B77FB8
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::RecvPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer)
    void RecvPacket(::Fusion::Sockets::NetConnection* connection, ::Fusion::Sockets::NetBitBuffer* buffer);
    // override System.Void SendPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer, Fusion.SimulationPacketEnvelope* envelope)
    // Offset: 0x2B78654
    // Implemented from: Fusion.Simulation
    // Base method: System.Void Simulation::SendPacket(Fusion.Sockets.NetConnection* connection, Fusion.Sockets.NetBitBuffer* buffer, Fusion.SimulationPacketEnvelope* envelope)
    void SendPacket(::Fusion::Sockets::NetConnection* connection, ::Fusion::Sockets::NetBitBuffer* buffer, ::Fusion::SimulationPacketEnvelope* envelope);
    // override Fusion.SimulationInput GetInput(Fusion.Tick tick, Fusion.PlayerRef player)
    // Offset: 0x2B78A64
    // Implemented from: Fusion.Simulation
    // Base method: Fusion.SimulationInput Simulation::GetInput(Fusion.Tick tick, Fusion.PlayerRef player)
    ::Fusion::SimulationInput* GetInput(::Fusion::Tick tick, ::Fusion::PlayerRef player);
  }; // Fusion.Simulation/Client
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Simulation::Client::get_ServerConnection
// Il2CppName: get_ServerConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetConnection* (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::get_ServerConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "get_ServerConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::get_InterpolationTimeScale
// Il2CppName: get_InterpolationTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::get_InterpolationTimeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "get_InterpolationTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::get_IsConnectedToServer
// Il2CppName: get_IsConnectedToServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::get_IsConnectedToServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "get_IsConnectedToServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::get_ServerAddress
// Il2CppName: get_ServerAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetAddress (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::get_ServerAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "get_ServerAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::get_RttToServer
// Il2CppName: get_RttToServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::get_RttToServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "get_RttToServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Fusion::Simulation::Client::Connect)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetAddress")->byval_arg;
    static auto* token = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* uniqueId = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, token, uniqueId});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::StringW, uint16_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Fusion::Simulation::Client::Connect)> {
  static const MethodInfo* get() {
    static auto* ip = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* token = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* uniqueId = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ip, port, token, uniqueId});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::RunClientSidePredictionLoop
// Il2CppName: RunClientSidePredictionLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(int, ::Fusion::SimulationStages)>(&Fusion::Simulation::Client::RunClientSidePredictionLoop)> {
  static const MethodInfo* get() {
    static auto* ticks = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stage = &::il2cpp_utils::GetClassFromName("Fusion", "SimulationStages")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "RunClientSidePredictionLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticks, stage});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::GetSortedInputs
// Il2CppName: GetSortedInputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::ArrayW<::Fusion::SimulationInput*>, int> (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::GetSortedInputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "GetSortedInputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::UpdateInterpolation
// Il2CppName: UpdateInterpolation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::UpdateInterpolation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "UpdateInterpolation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::ReadInputFeedback
// Il2CppName: ReadInputFeedback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::Sockets::NetBitBuffer*)>(&Fusion::Simulation::Client::ReadInputFeedback)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "ReadInputFeedback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::NullableToString
// Il2CppName: NullableToString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::Simulation::Client::ResetClientPredictionState
// Il2CppName: ResetClientPredictionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::System::Nullable_1<int>, ::System::Nullable_1<double>)>(&Fusion::Simulation::Client::ResetClientPredictionState)> {
  static const MethodInfo* get() {
    static auto* ticksExtra = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* timeExtra = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Double")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "ResetClientPredictionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticksExtra, timeExtra});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::WriteInput
// Il2CppName: WriteInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::Sockets::NetBitBuffer*)>(&Fusion::Simulation::Client::WriteInput)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "WriteInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::$get_ActivePlayers$g__MaxPlayers_27_0
// Il2CppName: <get_ActivePlayers>g__MaxPlayers|27_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::$get_ActivePlayers$g__MaxPlayers_27_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "<get_ActivePlayers>g__MaxPlayers|27_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::$get_ActivePlayers$g__IsPlayerActive_27_1
// Il2CppName: <get_ActivePlayers>g__IsPlayerActive|27_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Simulation::Client::*)(int)>(&Fusion::Simulation::Client::$get_ActivePlayers$g__IsPlayerActive_27_1)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "<get_ActivePlayers>g__IsPlayerActive|27_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::get_LocalPlayer
// Il2CppName: get_LocalPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::PlayerRef (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::get_LocalPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "get_LocalPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::get_LatestServerState
// Il2CppName: get_LatestServerState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationSnapshot* (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::get_LatestServerState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "get_LatestServerState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::get_ActivePlayers
// Il2CppName: get_ActivePlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::get_ActivePlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "get_ActivePlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::OnNetworkShutdown
// Il2CppName: OnNetworkShutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::OnNetworkShutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "OnNetworkShutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::GetPlayerRtt
// Il2CppName: GetPlayerRtt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Fusion::Simulation::Client::*)(::Fusion::PlayerRef)>(&Fusion::Simulation::Client::GetPlayerRtt)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "GetPlayerRtt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Simulation::Client::BeforeTick
// Il2CppName: BeforeTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::BeforeTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "BeforeTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::OnPlayerJoinedLeftInternalMessage
// Il2CppName: OnPlayerJoinedLeftInternalMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::PlayerRef, bool)>(&Fusion::Simulation::Client::OnPlayerJoinedLeftInternalMessage)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    static auto* joined = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "OnPlayerJoinedLeftInternalMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, joined});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::NetworkConnected
// Il2CppName: NetworkConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::Sockets::NetConnection*)>(&Fusion::Simulation::Client::NetworkConnected)> {
  static const MethodInfo* get() {
    static auto* connection = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "NetworkConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::NetworkDisconnected
// Il2CppName: NetworkDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::Sockets::NetConnection*)>(&Fusion::Simulation::Client::NetworkDisconnected)> {
  static const MethodInfo* get() {
    static auto* connection = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "NetworkDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::NetworkReceiveDone
// Il2CppName: NetworkReceiveDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::NetworkReceiveDone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "NetworkReceiveDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::NoSimulation
// Il2CppName: NoSimulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::NoSimulation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "NoSimulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::BeforeSimulation
// Il2CppName: BeforeSimulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Simulation::Client::*)()>(&Fusion::Simulation::Client::BeforeSimulation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "BeforeSimulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::AreaOfInterestQueryAdded
// Il2CppName: AreaOfInterestQueryAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::PlayerRef, ::Fusion::SimulationPlayer::AOIQuery)>(&Fusion::Simulation::Client::AreaOfInterestQueryAdded)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion", "SimulationPlayer/AOIQuery")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "AreaOfInterestQueryAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, query});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::RecvPacket
// Il2CppName: RecvPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&Fusion::Simulation::Client::RecvPacket)> {
  static const MethodInfo* get() {
    static auto* connection = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "RecvPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection, buffer});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::SendPacket
// Il2CppName: SendPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::Client::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*, ::Fusion::SimulationPacketEnvelope*)>(&Fusion::Simulation::Client::SendPacket)> {
  static const MethodInfo* get() {
    static auto* connection = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    static auto* envelope = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationPacketEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "SendPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection, buffer, envelope});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Client::GetInput
// Il2CppName: GetInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationInput* (Fusion::Simulation::Client::*)(::Fusion::Tick, ::Fusion::PlayerRef)>(&Fusion::Simulation::Client::GetInput)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    static auto* player = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Client*), "GetInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick, player});
  }
};
