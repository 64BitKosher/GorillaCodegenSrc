// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.ConnectionProtocol
#include "ExitGames/Client/Photon/ConnectionProtocol.hpp"
// Including type: ExitGames.Client.Photon.PhotonSocketState
#include "ExitGames/Client/Photon/PhotonSocketState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: PeerBase
  class PeerBase;
  // Forward declaring type: IPhotonPeerListener
  class IPhotonPeerListener;
  // Forward declaring type: PhotonSocketError
  struct PhotonSocketError;
  // Forward declaring type: DebugLevel
  struct DebugLevel;
  // Forward declaring type: StatusCode
  struct StatusCode;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: IPhotonSocket
  class IPhotonSocket;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::IPhotonSocket);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::IPhotonSocket*, "ExitGames.Client.Photon", "IPhotonSocket");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.IPhotonSocket
  // [TokenAttribute] Offset: FFFFFFFF
  class IPhotonSocket : public ::Il2CppObject {
    public:
    // Nested type: ::ExitGames::Client::Photon::IPhotonSocket::$$c
    class $$c;
    public:
    // protected internal ExitGames.Client.Photon.PeerBase peerBase
    // Size: 0x8
    // Offset: 0x10
    ::ExitGames::Client::Photon::PeerBase* peerBase;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::PeerBase*) == 0x8);
    // protected readonly ExitGames.Client.Photon.ConnectionProtocol Protocol
    // Size: 0x1
    // Offset: 0x18
    ::ExitGames::Client::Photon::ConnectionProtocol Protocol;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::ConnectionProtocol) == 0x1);
    // public System.Boolean PollReceive
    // Size: 0x1
    // Offset: 0x19
    bool PollReceive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PollReceive and: State
    char __padding2[0x2] = {};
    // private ExitGames.Client.Photon.PhotonSocketState <State>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    ::ExitGames::Client::Photon::PhotonSocketState State;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::PhotonSocketState) == 0x4);
    // public System.String ConnectAddress
    // Size: 0x8
    // Offset: 0x20
    ::StringW ConnectAddress;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <ServerAddress>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW ServerAddress;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <ProxyServerAddress>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW ProxyServerAddress;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <ServerPort>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int ServerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <AddressResolvedAsIpv6>k__BackingField
    // Size: 0x1
    // Offset: 0x3C
    bool AddressResolvedAsIpv6;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AddressResolvedAsIpv6 and: UrlProtocol
    char __padding8[0x3] = {};
    // private System.String <UrlProtocol>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::StringW UrlProtocol;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <UrlPath>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::StringW UrlPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.String <ServerIpAddress>k__BackingField
    static ::StringW _get_$ServerIpAddress$k__BackingField();
    // Set static field: static private System.String <ServerIpAddress>k__BackingField
    static void _set_$ServerIpAddress$k__BackingField(::StringW value);
    // Get instance field reference: protected internal ExitGames.Client.Photon.PeerBase peerBase
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::PeerBase*& dyn_peerBase();
    // Get instance field reference: protected readonly ExitGames.Client.Photon.ConnectionProtocol Protocol
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::ConnectionProtocol& dyn_Protocol();
    // Get instance field reference: public System.Boolean PollReceive
    [[deprecated("Use field access instead!")]] bool& dyn_PollReceive();
    // Get instance field reference: private ExitGames.Client.Photon.PhotonSocketState <State>k__BackingField
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::PhotonSocketState& dyn_$State$k__BackingField();
    // Get instance field reference: public System.String ConnectAddress
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ConnectAddress();
    // Get instance field reference: private System.String <ServerAddress>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ServerAddress$k__BackingField();
    // Get instance field reference: private System.String <ProxyServerAddress>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ProxyServerAddress$k__BackingField();
    // Get instance field reference: private System.Int32 <ServerPort>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ServerPort$k__BackingField();
    // Get instance field reference: private System.Boolean <AddressResolvedAsIpv6>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$AddressResolvedAsIpv6$k__BackingField();
    // Get instance field reference: private System.String <UrlProtocol>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$UrlProtocol$k__BackingField();
    // Get instance field reference: private System.String <UrlPath>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$UrlPath$k__BackingField();
    // protected ExitGames.Client.Photon.IPhotonPeerListener get_Listener()
    // Offset: 0x49D4498
    ::ExitGames::Client::Photon::IPhotonPeerListener* get_Listener();
    // protected internal System.Int32 get_MTU()
    // Offset: 0x49D44BC
    int get_MTU();
    // public ExitGames.Client.Photon.PhotonSocketState get_State()
    // Offset: 0x49D44E0
    ::ExitGames::Client::Photon::PhotonSocketState get_State();
    // protected System.Void set_State(ExitGames.Client.Photon.PhotonSocketState value)
    // Offset: 0x49D44E8
    void set_State(::ExitGames::Client::Photon::PhotonSocketState value);
    // public System.Boolean get_Connected()
    // Offset: 0x49CF7A4
    bool get_Connected();
    // public System.String get_ServerAddress()
    // Offset: 0x49D44F0
    ::StringW get_ServerAddress();
    // protected System.Void set_ServerAddress(System.String value)
    // Offset: 0x49D44F8
    void set_ServerAddress(::StringW value);
    // public System.String get_ProxyServerAddress()
    // Offset: 0x49D4500
    ::StringW get_ProxyServerAddress();
    // protected System.Void set_ProxyServerAddress(System.String value)
    // Offset: 0x49D4508
    void set_ProxyServerAddress(::StringW value);
    // static public System.String get_ServerIpAddress()
    // Offset: 0x49D4510
    static ::StringW get_ServerIpAddress();
    // static protected System.Void set_ServerIpAddress(System.String value)
    // Offset: 0x49D4558
    static void set_ServerIpAddress(::StringW value);
    // public System.Int32 get_ServerPort()
    // Offset: 0x49D45B0
    int get_ServerPort();
    // protected System.Void set_ServerPort(System.Int32 value)
    // Offset: 0x49D45B8
    void set_ServerPort(int value);
    // public System.Boolean get_AddressResolvedAsIpv6()
    // Offset: 0x49D45C0
    bool get_AddressResolvedAsIpv6();
    // protected internal System.Void set_AddressResolvedAsIpv6(System.Boolean value)
    // Offset: 0x49D45C8
    void set_AddressResolvedAsIpv6(bool value);
    // public System.String get_UrlProtocol()
    // Offset: 0x49D45D4
    ::StringW get_UrlProtocol();
    // protected System.Void set_UrlProtocol(System.String value)
    // Offset: 0x49D45DC
    void set_UrlProtocol(::StringW value);
    // public System.String get_UrlPath()
    // Offset: 0x49D45E4
    ::StringW get_UrlPath();
    // protected System.Void set_UrlPath(System.String value)
    // Offset: 0x49D45EC
    void set_UrlPath(::StringW value);
    // protected internal System.String get_SerializationProtocol()
    // Offset: 0x49D45F4
    ::StringW get_SerializationProtocol();
    // public System.Void .ctor(ExitGames.Client.Photon.PeerBase peerBase)
    // Offset: 0x49D4710
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPhotonSocket* New_ctor(::ExitGames::Client::Photon::PeerBase* peerBase) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::IPhotonSocket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPhotonSocket*, creationType>(peerBase)));
    }
    // public System.Boolean Connect()
    // Offset: 0x49D47B4
    bool Connect();
    // public System.Boolean Disconnect()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Disconnect();
    // public ExitGames.Client.Photon.PhotonSocketError Send(System.Byte[] data, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t> data, int length);
    // public ExitGames.Client.Photon.PhotonSocketError Receive(out System.Byte[] data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::PhotonSocketError Receive(ByRef<::ArrayW<uint8_t>> data);
    // public System.Void HandleReceivedDatagram(System.Byte[] inBuffer, System.Int32 length, System.Boolean willBeReused)
    // Offset: 0x49D4ED8
    void HandleReceivedDatagram(::ArrayW<uint8_t> inBuffer, int length, bool willBeReused);
    // public System.Boolean ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel levelOfMessage)
    // Offset: 0x49D5408
    bool ReportDebugOfLevel(::ExitGames::Client::Photon::DebugLevel levelOfMessage);
    // public System.Void EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel debugLevel, System.String message)
    // Offset: 0x49D5434
    void EnqueueDebugReturn(::ExitGames::Client::Photon::DebugLevel debugLevel, ::StringW message);
    // protected internal System.Void HandleException(ExitGames.Client.Photon.StatusCode statusCode)
    // Offset: 0x49D544C
    void HandleException(::ExitGames::Client::Photon::StatusCode statusCode);
    // protected internal System.Boolean TryParseAddress(System.String url, out System.String address, out System.UInt16 port, out System.String urlProtocol, out System.String urlPath)
    // Offset: 0x49D4C70
    bool TryParseAddress(::StringW url, ByRef<::StringW> address, ByRef<uint16_t> port, ByRef<::StringW> urlProtocol, ByRef<::StringW> urlPath);
    // private System.Boolean IpAddressTryParse(System.String strIP, out System.Net.IPAddress address)
    // Offset: 0x49D54F4
    bool IpAddressTryParse(::StringW strIP, ByRef<::System::Net::IPAddress*> address);
    // protected internal System.Net.IPAddress[] GetIpAddresses(System.String hostname)
    // Offset: 0x49D56AC
    ::ArrayW<::System::Net::IPAddress*> GetIpAddresses(::StringW hostname);
    // private System.Int32 AddressSortComparer(System.Net.IPAddress x, System.Net.IPAddress y)
    // Offset: 0x49D5D70
    int AddressSortComparer(::System::Net::IPAddress* x, ::System::Net::IPAddress* y);
    // static protected internal System.Net.IPAddress GetIpAddress(System.String address)
    // Offset: 0x49D5DDC
    static ::System::Net::IPAddress* GetIpAddress(::StringW address);
    // private System.Void <HandleException>b__52_0()
    // Offset: 0x49D5FE0
    void $HandleException$b__52_0();
  }; // ExitGames.Client.Photon.IPhotonSocket
  #pragma pack(pop)
  static check_size<sizeof(IPhotonSocket), 72 + sizeof(::StringW)> __ExitGames_Client_Photon_IPhotonSocketSizeCheck;
  static_assert(sizeof(IPhotonSocket) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_Listener
// Il2CppName: get_Listener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::IPhotonPeerListener* (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_Listener)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_Listener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_MTU
// Il2CppName: get_MTU
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_MTU)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_MTU", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketState (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::set_State
// Il2CppName: set_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::PhotonSocketState)>(&ExitGames::Client::Photon::IPhotonSocket::set_State)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "PhotonSocketState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "set_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_Connected
// Il2CppName: get_Connected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_Connected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_Connected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_ServerAddress
// Il2CppName: get_ServerAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_ServerAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_ServerAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::set_ServerAddress
// Il2CppName: set_ServerAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&ExitGames::Client::Photon::IPhotonSocket::set_ServerAddress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "set_ServerAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_ProxyServerAddress
// Il2CppName: get_ProxyServerAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_ProxyServerAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_ProxyServerAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::set_ProxyServerAddress
// Il2CppName: set_ProxyServerAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&ExitGames::Client::Photon::IPhotonSocket::set_ProxyServerAddress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "set_ProxyServerAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_ServerIpAddress
// Il2CppName: get_ServerIpAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_ServerIpAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_ServerIpAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::set_ServerIpAddress
// Il2CppName: set_ServerIpAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&ExitGames::Client::Photon::IPhotonSocket::set_ServerIpAddress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "set_ServerIpAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_ServerPort
// Il2CppName: get_ServerPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_ServerPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_ServerPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::set_ServerPort
// Il2CppName: set_ServerPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(int)>(&ExitGames::Client::Photon::IPhotonSocket::set_ServerPort)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "set_ServerPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_AddressResolvedAsIpv6
// Il2CppName: get_AddressResolvedAsIpv6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_AddressResolvedAsIpv6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_AddressResolvedAsIpv6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::set_AddressResolvedAsIpv6
// Il2CppName: set_AddressResolvedAsIpv6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(bool)>(&ExitGames::Client::Photon::IPhotonSocket::set_AddressResolvedAsIpv6)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "set_AddressResolvedAsIpv6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_UrlProtocol
// Il2CppName: get_UrlProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_UrlProtocol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_UrlProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::set_UrlProtocol
// Il2CppName: set_UrlProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&ExitGames::Client::Photon::IPhotonSocket::set_UrlProtocol)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "set_UrlProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_UrlPath
// Il2CppName: get_UrlPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_UrlPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_UrlPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::set_UrlPath
// Il2CppName: set_UrlPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&ExitGames::Client::Photon::IPhotonSocket::set_UrlPath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "set_UrlPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::get_SerializationProtocol
// Il2CppName: get_SerializationProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::get_SerializationProtocol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "get_SerializationProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::Connect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (ExitGames::Client::Photon::IPhotonSocket::*)(::ArrayW<uint8_t>, int)>(&ExitGames::Client::Photon::IPhotonSocket::Send)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, length});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::Receive
// Il2CppName: Receive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (ExitGames::Client::Photon::IPhotonSocket::*)(ByRef<::ArrayW<uint8_t>>)>(&ExitGames::Client::Photon::IPhotonSocket::Receive)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "Receive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::HandleReceivedDatagram
// Il2CppName: HandleReceivedDatagram
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(::ArrayW<uint8_t>, int, bool)>(&ExitGames::Client::Photon::IPhotonSocket::HandleReceivedDatagram)> {
  static const MethodInfo* get() {
    static auto* inBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* willBeReused = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "HandleReceivedDatagram", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBuffer, length, willBeReused});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::ReportDebugOfLevel
// Il2CppName: ReportDebugOfLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::DebugLevel)>(&ExitGames::Client::Photon::IPhotonSocket::ReportDebugOfLevel)> {
  static const MethodInfo* get() {
    static auto* levelOfMessage = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "DebugLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "ReportDebugOfLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelOfMessage});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::EnqueueDebugReturn
// Il2CppName: EnqueueDebugReturn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(&ExitGames::Client::Photon::IPhotonSocket::EnqueueDebugReturn)> {
  static const MethodInfo* get() {
    static auto* debugLevel = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "DebugLevel")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "EnqueueDebugReturn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{debugLevel, message});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::HandleException
// Il2CppName: HandleException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::StatusCode)>(&ExitGames::Client::Photon::IPhotonSocket::HandleException)> {
  static const MethodInfo* get() {
    static auto* statusCode = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StatusCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "HandleException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statusCode});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::TryParseAddress
// Il2CppName: TryParseAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::IPhotonSocket::*)(::StringW, ByRef<::StringW>, ByRef<uint16_t>, ByRef<::StringW>, ByRef<::StringW>)>(&ExitGames::Client::Photon::IPhotonSocket::TryParseAddress)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "UInt16")->this_arg;
    static auto* urlProtocol = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* urlPath = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "TryParseAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, address, port, urlProtocol, urlPath});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::IpAddressTryParse
// Il2CppName: IpAddressTryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::IPhotonSocket::*)(::StringW, ByRef<::System::Net::IPAddress*>)>(&ExitGames::Client::Photon::IPhotonSocket::IpAddressTryParse)> {
  static const MethodInfo* get() {
    static auto* strIP = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "IpAddressTryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strIP, address});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::GetIpAddresses
// Il2CppName: GetIpAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*> (ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&ExitGames::Client::Photon::IPhotonSocket::GetIpAddresses)> {
  static const MethodInfo* get() {
    static auto* hostname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "GetIpAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostname});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::AddressSortComparer
// Il2CppName: AddressSortComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::IPhotonSocket::*)(::System::Net::IPAddress*, ::System::Net::IPAddress*)>(&ExitGames::Client::Photon::IPhotonSocket::AddressSortComparer)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "AddressSortComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::GetIpAddress
// Il2CppName: GetIpAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (*)(::StringW)>(&ExitGames::Client::Photon::IPhotonSocket::GetIpAddress)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "GetIpAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IPhotonSocket::$HandleException$b__52_0
// Il2CppName: <HandleException>b__52_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IPhotonSocket::*)()>(&ExitGames::Client::Photon::IPhotonSocket::$HandleException$b__52_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IPhotonSocket*), "<HandleException>b__52_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
