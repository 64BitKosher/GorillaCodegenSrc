// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.PeerBase
#include "ExitGames/Client/Photon/PeerBase.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: StreamBuffer
  class StreamBuffer;
  // Forward declaring type: DeliveryMode
  struct DeliveryMode;
  // Forward declaring type: PhotonSocketError
  struct PhotonSocketError;
  // Forward declaring type: OperationResponse
  class OperationResponse;
  // Forward declaring type: SendOptions
  struct SendOptions;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: TPeer
  class TPeer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::TPeer);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::TPeer*, "ExitGames.Client.Photon", "TPeer");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x141
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.TPeer
  // [TokenAttribute] Offset: FFFFFFFF
  class TPeer : public ::ExitGames::Client::Photon::PeerBase {
    public:
    // Writing base type padding for base size: 0x11C to desired offset: 0x120
    char ___base_padding[0x4] = {};
    public:
    // private System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> incomingList
    // Size: 0x8
    // Offset: 0x120
    ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* incomingList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*) == 0x8);
    // System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer> outgoingStream
    // Size: 0x8
    // Offset: 0x128
    ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>* outgoingStream;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*) == 0x8);
    // private System.Int32 lastPingResult
    // Size: 0x4
    // Offset: 0x130
    int lastPingResult;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastPingResult and: pingRequest
    char __padding2[0x4] = {};
    // private System.Byte[] pingRequest
    // Size: 0x8
    // Offset: 0x138
    ::ArrayW<uint8_t> pingRequest;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected internal System.Boolean DoFraming
    // Size: 0x1
    // Offset: 0x140
    bool DoFraming;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static System.Int32 TCP_HEADER_BYTES
    static constexpr const int TCP_HEADER_BYTES = 7;
    // Get static field: static System.Int32 TCP_HEADER_BYTES
    static int _get_TCP_HEADER_BYTES();
    // Set static field: static System.Int32 TCP_HEADER_BYTES
    static void _set_TCP_HEADER_BYTES(int value);
    // static field const value: static System.Int32 MSG_HEADER_BYTES
    static constexpr const int MSG_HEADER_BYTES = 2;
    // Get static field: static System.Int32 MSG_HEADER_BYTES
    static int _get_MSG_HEADER_BYTES();
    // Set static field: static System.Int32 MSG_HEADER_BYTES
    static void _set_MSG_HEADER_BYTES(int value);
    // static field const value: static public System.Int32 ALL_HEADER_BYTES
    static constexpr const int ALL_HEADER_BYTES = 9;
    // Get static field: static public System.Int32 ALL_HEADER_BYTES
    static int _get_ALL_HEADER_BYTES();
    // Set static field: static public System.Int32 ALL_HEADER_BYTES
    static void _set_ALL_HEADER_BYTES(int value);
    // Get static field: static readonly System.Byte[] tcpFramedMessageHead
    static ::ArrayW<uint8_t> _get_tcpFramedMessageHead();
    // Set static field: static readonly System.Byte[] tcpFramedMessageHead
    static void _set_tcpFramedMessageHead(::ArrayW<uint8_t> value);
    // Get static field: static readonly System.Byte[] tcpMsgHead
    static ::ArrayW<uint8_t> _get_tcpMsgHead();
    // Set static field: static readonly System.Byte[] tcpMsgHead
    static void _set_tcpMsgHead(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> incomingList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*& dyn_incomingList();
    // Get instance field reference: System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer> outgoingStream
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*& dyn_outgoingStream();
    // Get instance field reference: private System.Int32 lastPingResult
    [[deprecated("Use field access instead!")]] int& dyn_lastPingResult();
    // Get instance field reference: private System.Byte[] pingRequest
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_pingRequest();
    // Get instance field reference: protected internal System.Boolean DoFraming
    [[deprecated("Use field access instead!")]] bool& dyn_DoFraming();
    // private System.Void EnqueueInit(System.Byte[] data)
    // Offset: 0x49FF32C
    void EnqueueInit(::ArrayW<uint8_t> data);
    // System.Boolean EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode deliveryMode, ExitGames.Client.Photon.StreamBuffer opMessage, System.Byte channelId)
    // Offset: 0x49FFAD8
    bool EnqueueMessageAsPayload(::ExitGames::Client::Photon::DeliveryMode deliveryMode, ::ExitGames::Client::Photon::StreamBuffer* opMessage, uint8_t channelId);
    // System.Void SendPing()
    // Offset: 0x49FF8B8
    void SendPing();
    // ExitGames.Client.Photon.PhotonSocketError SendData(System.Byte[] data, System.Int32 length)
    // Offset: 0x4A0045C
    ::ExitGames::Client::Photon::PhotonSocketError SendData(::ArrayW<uint8_t> data, int length);
    // private System.Void ReadPingResult(System.Byte[] inbuff)
    // Offset: 0x4A00B4C
    void ReadPingResult(::ArrayW<uint8_t> inbuff);
    // protected internal System.Void ReadPingResult(ExitGames.Client.Photon.OperationResponse operationResponse)
    // Offset: 0x4A00C44
    void ReadPingResult(::ExitGames::Client::Photon::OperationResponse* operationResponse);
    // override System.Int32 get_QueuedIncomingCommandsCount()
    // Offset: 0x49FEF4C
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Int32 PeerBase::get_QueuedIncomingCommandsCount()
    int get_QueuedIncomingCommandsCount();
    // override System.Int32 get_QueuedOutgoingCommandsCount()
    // Offset: 0x49FEF94
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Int32 PeerBase::get_QueuedOutgoingCommandsCount()
    int get_QueuedOutgoingCommandsCount();
    // System.Void .ctor()
    // Offset: 0x49FEF9C
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Void PeerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TPeer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::TPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TPeer*, creationType>()));
    }
    // override System.Boolean IsTransportEncrypted()
    // Offset: 0x49FF0A8
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Boolean PeerBase::IsTransportEncrypted()
    bool IsTransportEncrypted();
    // override System.Void Reset()
    // Offset: 0x49FF0B8
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Void PeerBase::Reset()
    void Reset();
    // override System.Boolean Connect(System.String serverAddress, System.String proxyServerAddress, System.String appID, System.Object photonToken)
    // Offset: 0x49FF184
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Boolean PeerBase::Connect(System.String serverAddress, System.String proxyServerAddress, System.String appID, System.Object photonToken)
    bool Connect(::StringW serverAddress, ::StringW proxyServerAddress, ::StringW appID, ::Il2CppObject* photonToken);
    // public override System.Void OnConnect()
    // Offset: 0x49FF2D8
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Void PeerBase::OnConnect()
    void OnConnect();
    // override System.Void Disconnect()
    // Offset: 0x49FF4A4
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Void PeerBase::Disconnect()
    void Disconnect();
    // override System.Void StopConnection()
    // Offset: 0x49FF5B4
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Void PeerBase::StopConnection()
    void StopConnection();
    // override System.Void FetchServerTimestamp()
    // Offset: 0x49FF6EC
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Void PeerBase::FetchServerTimestamp()
    void FetchServerTimestamp();
    // override System.Boolean DispatchIncomingCommands()
    // Offset: 0x49FFE68
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Boolean PeerBase::DispatchIncomingCommands()
    bool DispatchIncomingCommands();
    // override System.Boolean SendOutgoingCommands()
    // Offset: 0x4A001C4
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Boolean PeerBase::SendOutgoingCommands()
    bool SendOutgoingCommands();
    // override System.Boolean SendAcksOnly()
    // Offset: 0x4A006FC
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Boolean PeerBase::SendAcksOnly()
    bool SendAcksOnly();
    // override System.Boolean EnqueuePhotonMessage(ExitGames.Client.Photon.StreamBuffer opBytes, ExitGames.Client.Photon.SendOptions sendParams)
    // Offset: 0x4A0076C
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Boolean PeerBase::EnqueuePhotonMessage(ExitGames.Client.Photon.StreamBuffer opBytes, ExitGames.Client.Photon.SendOptions sendParams)
    bool EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer* opBytes, ::ExitGames::Client::Photon::SendOptions sendParams);
    // override System.Void ReceiveIncomingCommands(System.Byte[] inbuff, System.Int32 dataLength)
    // Offset: 0x4A00794
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Void PeerBase::ReceiveIncomingCommands(System.Byte[] inbuff, System.Int32 dataLength)
    void ReceiveIncomingCommands(::ArrayW<uint8_t> inbuff, int dataLength);
    // static private System.Void .cctor()
    // Offset: 0x4A00D60
    // Implemented from: ExitGames.Client.Photon.PeerBase
    // Base method: System.Void PeerBase::.cctor()
    static void _cctor();
  }; // ExitGames.Client.Photon.TPeer
  #pragma pack(pop)
  static check_size<sizeof(TPeer), 320 + sizeof(bool)> __ExitGames_Client_Photon_TPeerSizeCheck;
  static_assert(sizeof(TPeer) == 0x141);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::EnqueueInit
// Il2CppName: EnqueueInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t>)>(&ExitGames::Client::Photon::TPeer::EnqueueInit)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "EnqueueInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::EnqueueMessageAsPayload
// Il2CppName: EnqueueMessageAsPayload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::TPeer::*)(::ExitGames::Client::Photon::DeliveryMode, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&ExitGames::Client::Photon::TPeer::EnqueueMessageAsPayload)> {
  static const MethodInfo* get() {
    static auto* deliveryMode = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "DeliveryMode")->byval_arg;
    static auto* opMessage = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "EnqueueMessageAsPayload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deliveryMode, opMessage, channelId});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::SendPing
// Il2CppName: SendPing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::SendPing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "SendPing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::SendData
// Il2CppName: SendData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t>, int)>(&ExitGames::Client::Photon::TPeer::SendData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "SendData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, length});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::ReadPingResult
// Il2CppName: ReadPingResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t>)>(&ExitGames::Client::Photon::TPeer::ReadPingResult)> {
  static const MethodInfo* get() {
    static auto* inbuff = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "ReadPingResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inbuff});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::ReadPingResult
// Il2CppName: ReadPingResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)(::ExitGames::Client::Photon::OperationResponse*)>(&ExitGames::Client::Photon::TPeer::ReadPingResult)> {
  static const MethodInfo* get() {
    static auto* operationResponse = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "OperationResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "ReadPingResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operationResponse});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::get_QueuedIncomingCommandsCount
// Il2CppName: get_QueuedIncomingCommandsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::get_QueuedIncomingCommandsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "get_QueuedIncomingCommandsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::get_QueuedOutgoingCommandsCount
// Il2CppName: get_QueuedOutgoingCommandsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::get_QueuedOutgoingCommandsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "get_QueuedOutgoingCommandsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::IsTransportEncrypted
// Il2CppName: IsTransportEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::IsTransportEncrypted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "IsTransportEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::TPeer::*)(::StringW, ::StringW, ::StringW, ::Il2CppObject*)>(&ExitGames::Client::Photon::TPeer::Connect)> {
  static const MethodInfo* get() {
    static auto* serverAddress = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* proxyServerAddress = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* appID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* photonToken = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverAddress, proxyServerAddress, appID, photonToken});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::OnConnect
// Il2CppName: OnConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::OnConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "OnConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::StopConnection
// Il2CppName: StopConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::StopConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "StopConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::FetchServerTimestamp
// Il2CppName: FetchServerTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::FetchServerTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "FetchServerTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::DispatchIncomingCommands
// Il2CppName: DispatchIncomingCommands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::DispatchIncomingCommands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "DispatchIncomingCommands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::SendOutgoingCommands
// Il2CppName: SendOutgoingCommands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::SendOutgoingCommands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "SendOutgoingCommands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::SendAcksOnly
// Il2CppName: SendAcksOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::TPeer::*)()>(&ExitGames::Client::Photon::TPeer::SendAcksOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "SendAcksOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::EnqueuePhotonMessage
// Il2CppName: EnqueuePhotonMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::TPeer::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::SendOptions)>(&ExitGames::Client::Photon::TPeer::EnqueuePhotonMessage)> {
  static const MethodInfo* get() {
    static auto* opBytes = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* sendParams = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "SendOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "EnqueuePhotonMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opBytes, sendParams});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::ReceiveIncomingCommands
// Il2CppName: ReceiveIncomingCommands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t>, int)>(&ExitGames::Client::Photon::TPeer::ReceiveIncomingCommands)> {
  static const MethodInfo* get() {
    static auto* inbuff = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), "ReceiveIncomingCommands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inbuff, dataLength});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TPeer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ExitGames::Client::Photon::TPeer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TPeer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};