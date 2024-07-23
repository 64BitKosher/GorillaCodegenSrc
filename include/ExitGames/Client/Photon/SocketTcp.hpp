// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.IPhotonSocket
#include "ExitGames/Client/Photon/IPhotonSocket.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: PeerBase
  class PeerBase;
  // Forward declaring type: PhotonSocketError
  struct PhotonSocketError;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: SocketTcp
  class SocketTcp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::SocketTcp);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SocketTcp*, "ExitGames.Client.Photon", "SocketTcp");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.SocketTcp
  // [TokenAttribute] Offset: FFFFFFFF
  class SocketTcp : public ::ExitGames::Client::Photon::IPhotonSocket/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Net.Sockets.Socket sock
    // Size: 0x8
    // Offset: 0x50
    ::System::Net::Sockets::Socket* sock;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // private readonly System.Object syncer
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppObject* syncer;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Net.Sockets.Socket sock
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket*& dyn_sock();
    // Get instance field reference: private readonly System.Object syncer
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_syncer();
    // public System.Void Dispose()
    // Offset: 0x49F27A4
    void Dispose();
    // System.Void DnsAndConnect()
    // Offset: 0x49F3130
    void DnsAndConnect();
    // public System.Void ReceiveLoop()
    // Offset: 0x49F38A4
    void ReceiveLoop();
    // public System.Void .ctor(ExitGames.Client.Photon.PeerBase npeer)
    // Offset: 0x49F25D4
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: System.Void IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase npeer)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketTcp* New_ctor(::ExitGames::Client::Photon::PeerBase* npeer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::SocketTcp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketTcp*, creationType>(npeer)));
    }
    // protected override System.Void Finalize()
    // Offset: 0x49F2710
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Boolean Connect()
    // Offset: 0x49F28C0
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: System.Boolean IPhotonSocket::Connect()
    bool Connect();
    // public override System.Boolean Disconnect()
    // Offset: 0x49F2A64
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: System.Boolean IPhotonSocket::Disconnect()
    bool Disconnect();
    // public override ExitGames.Client.Photon.PhotonSocketError Send(System.Byte[] data, System.Int32 length)
    // Offset: 0x49F2C9C
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: ExitGames.Client.Photon.PhotonSocketError IPhotonSocket::Send(System.Byte[] data, System.Int32 length)
    ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t> data, int length);
    // public override ExitGames.Client.Photon.PhotonSocketError Receive(out System.Byte[] data)
    // Offset: 0x49F3110
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: ExitGames.Client.Photon.PhotonSocketError IPhotonSocket::Receive(out System.Byte[] data)
    ::ExitGames::Client::Photon::PhotonSocketError Receive(ByRef<::ArrayW<uint8_t>> data);
  }; // ExitGames.Client.Photon.SocketTcp
  #pragma pack(pop)
  static check_size<sizeof(SocketTcp), 88 + sizeof(::Il2CppObject*)> __ExitGames_Client_Photon_SocketTcpSizeCheck;
  static_assert(sizeof(SocketTcp) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcp::*)()>(&ExitGames::Client::Photon::SocketTcp::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcp*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::DnsAndConnect
// Il2CppName: DnsAndConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcp::*)()>(&ExitGames::Client::Photon::SocketTcp::DnsAndConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcp*), "DnsAndConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::ReceiveLoop
// Il2CppName: ReceiveLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcp::*)()>(&ExitGames::Client::Photon::SocketTcp::ReceiveLoop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcp*), "ReceiveLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcp::*)()>(&ExitGames::Client::Photon::SocketTcp::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcp*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::SocketTcp::*)()>(&ExitGames::Client::Photon::SocketTcp::Connect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcp*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::SocketTcp::*)()>(&ExitGames::Client::Photon::SocketTcp::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcp*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (ExitGames::Client::Photon::SocketTcp::*)(::ArrayW<uint8_t>, int)>(&ExitGames::Client::Photon::SocketTcp::Send)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcp*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, length});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcp::Receive
// Il2CppName: Receive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (ExitGames::Client::Photon::SocketTcp::*)(ByRef<::ArrayW<uint8_t>>)>(&ExitGames::Client::Photon::SocketTcp::Receive)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcp*), "Receive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};