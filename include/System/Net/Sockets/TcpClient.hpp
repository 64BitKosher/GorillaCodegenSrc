// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.Sockets.AddressFamily
#include "System/Net/Sockets/AddressFamily.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: NetworkStream
  class NetworkStream;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: TcpClient
  class TcpClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::TcpClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::TcpClient*, "System.Net.Sockets", "TcpClient");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.TcpClient
  // [TokenAttribute] Offset: FFFFFFFF
  class TcpClient : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Net.Sockets.Socket m_ClientSocket
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Sockets::Socket* m_ClientSocket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // private System.Boolean m_Active
    // Size: 0x1
    // Offset: 0x18
    bool m_Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Active and: m_DataStream
    char __padding1[0x7] = {};
    // private System.Net.Sockets.NetworkStream m_DataStream
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::Sockets::NetworkStream* m_DataStream;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::NetworkStream*) == 0x8);
    // private System.Net.Sockets.AddressFamily m_Family
    // Size: 0x4
    // Offset: 0x28
    ::System::Net::Sockets::AddressFamily m_Family;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::AddressFamily) == 0x4);
    // private System.Boolean m_CleanedUp
    // Size: 0x1
    // Offset: 0x2C
    bool m_CleanedUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Net.Sockets.Socket m_ClientSocket
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket*& dyn_m_ClientSocket();
    // Get instance field reference: private System.Boolean m_Active
    [[deprecated("Use field access instead!")]] bool& dyn_m_Active();
    // Get instance field reference: private System.Net.Sockets.NetworkStream m_DataStream
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::NetworkStream*& dyn_m_DataStream();
    // Get instance field reference: private System.Net.Sockets.AddressFamily m_Family
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::AddressFamily& dyn_m_Family();
    // Get instance field reference: private System.Boolean m_CleanedUp
    [[deprecated("Use field access instead!")]] bool& dyn_m_CleanedUp();
    // public System.Void .ctor()
    // Offset: 0x4EDCB2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TcpClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::TcpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TcpClient*, creationType>()));
    }
    // public System.Void .ctor(System.Net.Sockets.AddressFamily family)
    // Offset: 0x4EDCB4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TcpClient* New_ctor(::System::Net::Sockets::AddressFamily family) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::TcpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TcpClient*, creationType>(family)));
    }
    // System.Void .ctor(System.Net.Sockets.Socket acceptedSocket)
    // Offset: 0x4EDCCD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TcpClient* New_ctor(::System::Net::Sockets::Socket* acceptedSocket) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::TcpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TcpClient*, creationType>(acceptedSocket)));
    }
    // public System.Net.Sockets.Socket get_Client()
    // Offset: 0x4EDCD20
    ::System::Net::Sockets::Socket* get_Client();
    // public System.Void set_Client(System.Net.Sockets.Socket value)
    // Offset: 0x4EDCD28
    void set_Client(::System::Net::Sockets::Socket* value);
    // public System.Boolean get_Connected()
    // Offset: 0x4EDCD30
    bool get_Connected();
    // public System.Void Connect(System.String hostname, System.Int32 port)
    // Offset: 0x4EDCD4C
    void Connect(::StringW hostname, int port);
    // public System.Void Connect(System.Net.IPEndPoint remoteEP)
    // Offset: 0x4EDD418
    void Connect(::System::Net::IPEndPoint* remoteEP);
    // public System.IAsyncResult BeginConnect(System.String host, System.Int32 port, System.AsyncCallback requestCallback, System.Object state)
    // Offset: 0x4EDD518
    ::System::IAsyncResult* BeginConnect(::StringW host, int port, ::System::AsyncCallback* requestCallback, ::Il2CppObject* state);
    // public System.Void EndConnect(System.IAsyncResult asyncResult)
    // Offset: 0x4EDD584
    void EndConnect(::System::IAsyncResult* asyncResult);
    // public System.Threading.Tasks.Task ConnectAsync(System.String host, System.Int32 port)
    // Offset: 0x4EDD5CC
    ::System::Threading::Tasks::Task* ConnectAsync(::StringW host, int port);
    // public System.Net.Sockets.NetworkStream GetStream()
    // Offset: 0x4EDD738
    ::System::Net::Sockets::NetworkStream* GetStream();
    // public System.Void Close()
    // Offset: 0x4EDD87C
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x4EDD920
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x4EDDAE8
    void Dispose();
    // private System.Void initialize()
    // Offset: 0x4EDCC58
    void initialize();
    // protected override System.Void Finalize()
    // Offset: 0x4EDDAF8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Net.Sockets.TcpClient
  #pragma pack(pop)
  static check_size<sizeof(TcpClient), 44 + sizeof(bool)> __System_Net_Sockets_TcpClientSizeCheck;
  static_assert(sizeof(TcpClient) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::get_Client
// Il2CppName: get_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::get_Client)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "get_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::set_Client
// Il2CppName: set_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(::System::Net::Sockets::Socket*)>(&System::Net::Sockets::TcpClient::set_Client)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "set_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::get_Connected
// Il2CppName: get_Connected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::get_Connected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "get_Connected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(::StringW, int)>(&System::Net::Sockets::TcpClient::Connect)> {
  static const MethodInfo* get() {
    static auto* hostname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostname, port});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(::System::Net::IPEndPoint*)>(&System::Net::Sockets::TcpClient::Connect)> {
  static const MethodInfo* get() {
    static auto* remoteEP = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEP});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::BeginConnect
// Il2CppName: BeginConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::Sockets::TcpClient::*)(::StringW, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Sockets::TcpClient::BeginConnect)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* requestCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "BeginConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, port, requestCallback, state});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::EndConnect
// Il2CppName: EndConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(::System::IAsyncResult*)>(&System::Net::Sockets::TcpClient::EndConnect)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "EndConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::ConnectAsync
// Il2CppName: ConnectAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Sockets::TcpClient::*)(::StringW, int)>(&System::Net::Sockets::TcpClient::ConnectAsync)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "ConnectAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, port});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::GetStream
// Il2CppName: GetStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::NetworkStream* (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::GetStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "GetStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(bool)>(&System::Net::Sockets::TcpClient::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::initialize
// Il2CppName: initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpClient::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpClient*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
