// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: TcpClient
  class TcpClient;
  // Forward declaring type: NetworkStream
  class NetworkStream;
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
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
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: NetworkStreamWrapper
  class NetworkStreamWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkStreamWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkStreamWrapper*, "System.Net", "NetworkStreamWrapper");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkStreamWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkStreamWrapper : public ::System::IO::Stream {
    public:
    public:
    // private System.Net.Sockets.TcpClient _client
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::Sockets::TcpClient* client;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::TcpClient*) == 0x8);
    // private System.Net.Sockets.NetworkStream _networkStream
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::Sockets::NetworkStream* networkStream;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::NetworkStream*) == 0x8);
    public:
    // Get instance field reference: private System.Net.Sockets.TcpClient _client
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::TcpClient*& dyn__client();
    // Get instance field reference: private System.Net.Sockets.NetworkStream _networkStream
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::NetworkStream*& dyn__networkStream();
    // System.Void .ctor(System.Net.Sockets.TcpClient client)
    // Offset: 0x4FBF420
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkStreamWrapper* New_ctor(::System::Net::Sockets::TcpClient* client) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkStreamWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkStreamWrapper*, creationType>(client)));
    }
    // protected System.Boolean get_UsingSecureStream()
    // Offset: 0x4FBF4B8
    bool get_UsingSecureStream();
    // System.Net.IPAddress get_ServerAddress()
    // Offset: 0x4FBF534
    ::System::Net::IPAddress* get_ServerAddress();
    // System.Net.Sockets.Socket get_Socket()
    // Offset: 0x4FBF5C8
    ::System::Net::Sockets::Socket* get_Socket();
    // System.Net.Sockets.NetworkStream get_NetworkStream()
    // Offset: 0x4FBF5E4
    ::System::Net::Sockets::NetworkStream* get_NetworkStream();
    // System.Void set_NetworkStream(System.Net.Sockets.NetworkStream value)
    // Offset: 0x4FBF5EC
    void set_NetworkStream(::System::Net::Sockets::NetworkStream* value);
    // System.Void CloseSocket()
    // Offset: 0x4FB6764
    void CloseSocket();
    // public System.Void Close(System.Int32 timeout)
    // Offset: 0x4FBF880
    void Close(int timeout);
    // System.Void SetSocketTimeoutOption(System.Int32 timeout)
    // Offset: 0x4FBC550
    void SetSocketTimeoutOption(int timeout);
    // public override System.Boolean get_CanRead()
    // Offset: 0x4FBF5F4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x4FBF614
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x4FBF634
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Boolean get_CanTimeout()
    // Offset: 0x4FBF654
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanTimeout()
    bool get_CanTimeout();
    // public override System.Int32 get_ReadTimeout()
    // Offset: 0x4FBF674
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_ReadTimeout()
    int get_ReadTimeout();
    // public override System.Void set_ReadTimeout(System.Int32 value)
    // Offset: 0x4FBF698
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_ReadTimeout(System.Int32 value)
    void set_ReadTimeout(int value);
    // public override System.Int32 get_WriteTimeout()
    // Offset: 0x4FBF6BC
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_WriteTimeout()
    int get_WriteTimeout();
    // public override System.Void set_WriteTimeout(System.Int32 value)
    // Offset: 0x4FBF6E0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_WriteTimeout(System.Int32 value)
    void set_WriteTimeout(int value);
    // public override System.Int64 get_Length()
    // Offset: 0x4FBF704
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x4FBF724
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x4FBF744
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x4FBF768
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x4FBF78C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(::ArrayW<uint8_t> buffer, int offset, int size);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x4FBF7B0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::ArrayW<uint8_t> buffer, int offset, int size);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x4FBF7D4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x4FBF8B0
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t> buffer, int offset, int size, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x4FBF8D4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(::System::IAsyncResult* asyncResult);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4FBF8F8
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<int>* ReadAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x4FBF91C
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t> buffer, int offset, int size, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x4FBF940
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(::System::IAsyncResult* asyncResult);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4FBF964
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Void Flush()
    // Offset: 0x4FBF988
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Threading.Tasks.Task FlushAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4FBF9AC
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::FlushAsync(System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x4FBF9D0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
  }; // System.Net.NetworkStreamWrapper
  #pragma pack(pop)
  static check_size<sizeof(NetworkStreamWrapper), 48 + sizeof(::System::Net::Sockets::NetworkStream*)> __System_Net_NetworkStreamWrapperSizeCheck;
  static_assert(sizeof(NetworkStreamWrapper) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_UsingSecureStream
// Il2CppName: get_UsingSecureStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_UsingSecureStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_UsingSecureStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_ServerAddress
// Il2CppName: get_ServerAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_ServerAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_ServerAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_Socket
// Il2CppName: get_Socket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_Socket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_Socket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_NetworkStream
// Il2CppName: get_NetworkStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::NetworkStream* (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_NetworkStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_NetworkStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::set_NetworkStream
// Il2CppName: set_NetworkStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(::System::Net::Sockets::NetworkStream*)>(&System::Net::NetworkStreamWrapper::set_NetworkStream)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "NetworkStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "set_NetworkStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::CloseSocket
// Il2CppName: CloseSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::CloseSocket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "CloseSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(int)>(&System::Net::NetworkStreamWrapper::Close)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::SetSocketTimeoutOption
// Il2CppName: SetSocketTimeoutOption
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(int)>(&System::Net::NetworkStreamWrapper::SetSocketTimeoutOption)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "SetSocketTimeoutOption", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_CanTimeout
// Il2CppName: get_CanTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_CanTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_CanTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_ReadTimeout
// Il2CppName: get_ReadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_ReadTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::set_ReadTimeout
// Il2CppName: set_ReadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(int)>(&System::Net::NetworkStreamWrapper::set_ReadTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "set_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_WriteTimeout
// Il2CppName: get_WriteTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_WriteTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::set_WriteTimeout
// Il2CppName: set_WriteTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(int)>(&System::Net::NetworkStreamWrapper::set_WriteTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "set_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(int64_t)>(&System::Net::NetworkStreamWrapper::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::NetworkStreamWrapper::*)(int64_t, ::System::IO::SeekOrigin)>(&System::Net::NetworkStreamWrapper::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::NetworkStreamWrapper::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::NetworkStreamWrapper::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(bool)>(&System::Net::NetworkStreamWrapper::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::NetworkStreamWrapper::BeginRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::NetworkStreamWrapper::*)(::System::IAsyncResult*)>(&System::Net::NetworkStreamWrapper::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::NetworkStreamWrapper::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::NetworkStreamWrapper::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(::System::IAsyncResult*)>(&System::Net::NetworkStreamWrapper::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::NetworkStreamWrapper::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)()>(&System::Net::NetworkStreamWrapper::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::FlushAsync
// Il2CppName: FlushAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::NetworkStreamWrapper::*)(::System::Threading::CancellationToken)>(&System::Net::NetworkStreamWrapper::FlushAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "FlushAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkStreamWrapper::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkStreamWrapper::*)(int64_t)>(&System::Net::NetworkStreamWrapper::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkStreamWrapper*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};