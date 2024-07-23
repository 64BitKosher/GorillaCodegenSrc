// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebConnectionStream
#include "System/Net/WebConnectionStream.hpp"
// Including type: System.Net.HttpStatusCode
#include "System/Net/HttpStatusCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebReadStream
  class WebReadStream;
  // Forward declaring type: WebCompletionSource
  class WebCompletionSource;
  // Forward declaring type: WebRequestStream
  class WebRequestStream;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: BufferOffsetSize
  class BufferOffsetSize;
  // Forward declaring type: WebException
  class WebException;
  // Forward declaring type: WebExceptionStatus
  struct WebExceptionStatus;
  // Forward declaring type: ReadState
  struct ReadState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Exception
  class Exception;
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
  // Forward declaring type: WebResponseStream
  class WebResponseStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebResponseStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream*, "System.Net", "WebResponseStream");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebResponseStream
  // [TokenAttribute] Offset: FFFFFFFF
  class WebResponseStream : public ::System::Net::WebConnectionStream {
    public:
    // Nested type: ::System::Net::WebResponseStream::$ReadAsync$d__40
    struct $ReadAsync$d__40;
    // Nested type: ::System::Net::WebResponseStream::$$c__DisplayClass41_0
    class $$c__DisplayClass41_0;
    // Nested type: ::System::Net::WebResponseStream::$ReadAllAsyncInner$d__47
    struct $ReadAllAsyncInner$d__47;
    // Nested type: ::System::Net::WebResponseStream::$ReadAllAsync$d__48
    struct $ReadAllAsync$d__48;
    // Nested type: ::System::Net::WebResponseStream::$InitReadAsync$d__52
    struct $InitReadAsync$d__52;
    public:
    // private System.Net.WebReadStream innerStream
    // Size: 0x8
    // Offset: 0x60
    ::System::Net::WebReadStream* innerStream;
    // Field size check
    static_assert(sizeof(::System::Net::WebReadStream*) == 0x8);
    // private System.Boolean nextReadCalled
    // Size: 0x1
    // Offset: 0x68
    bool nextReadCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean bufferedEntireContent
    // Size: 0x1
    // Offset: 0x69
    bool bufferedEntireContent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bufferedEntireContent and: pendingRead
    char __padding2[0x6] = {};
    // private System.Net.WebCompletionSource pendingRead
    // Size: 0x8
    // Offset: 0x70
    ::System::Net::WebCompletionSource* pendingRead;
    // Field size check
    static_assert(sizeof(::System::Net::WebCompletionSource*) == 0x8);
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 nestedRead
    // Size: 0x4
    // Offset: 0x80
    int nestedRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean read_eof
    // Size: 0x1
    // Offset: 0x84
    bool read_eof;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: read_eof and: RequestStream
    char __padding6[0x3] = {};
    // private readonly System.Net.WebRequestStream <RequestStream>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    ::System::Net::WebRequestStream* RequestStream;
    // Field size check
    static_assert(sizeof(::System::Net::WebRequestStream*) == 0x8);
    // private System.Net.WebHeaderCollection <Headers>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::System::Net::WebHeaderCollection* Headers;
    // Field size check
    static_assert(sizeof(::System::Net::WebHeaderCollection*) == 0x8);
    // private System.Net.HttpStatusCode <StatusCode>k__BackingField
    // Size: 0x4
    // Offset: 0x98
    ::System::Net::HttpStatusCode StatusCode;
    // Field size check
    static_assert(sizeof(::System::Net::HttpStatusCode) == 0x4);
    // Padding between fields: StatusCode and: StatusDescription
    char __padding9[0x4] = {};
    // private System.String <StatusDescription>k__BackingField
    // Size: 0x8
    // Offset: 0xA0
    ::StringW StatusDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Version <Version>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    ::System::Version* Version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Boolean <KeepAlive>k__BackingField
    // Size: 0x1
    // Offset: 0xB0
    bool KeepAlive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: KeepAlive and: ME
    char __padding12[0x7] = {};
    // readonly System.String ME
    // Size: 0x8
    // Offset: 0xB8
    ::StringW ME;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <ChunkedRead>k__BackingField
    // Size: 0x1
    // Offset: 0xC0
    bool ChunkedRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Net.WebReadStream innerStream
    [[deprecated("Use field access instead!")]] ::System::Net::WebReadStream*& dyn_innerStream();
    // Get instance field reference: private System.Boolean nextReadCalled
    [[deprecated("Use field access instead!")]] bool& dyn_nextReadCalled();
    // Get instance field reference: private System.Boolean bufferedEntireContent
    [[deprecated("Use field access instead!")]] bool& dyn_bufferedEntireContent();
    // Get instance field reference: private System.Net.WebCompletionSource pendingRead
    [[deprecated("Use field access instead!")]] ::System::Net::WebCompletionSource*& dyn_pendingRead();
    // Get instance field reference: private System.Object locker
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_locker();
    // Get instance field reference: private System.Int32 nestedRead
    [[deprecated("Use field access instead!")]] int& dyn_nestedRead();
    // Get instance field reference: private System.Boolean read_eof
    [[deprecated("Use field access instead!")]] bool& dyn_read_eof();
    // Get instance field reference: private readonly System.Net.WebRequestStream <RequestStream>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::WebRequestStream*& dyn_$RequestStream$k__BackingField();
    // Get instance field reference: private System.Net.WebHeaderCollection <Headers>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::WebHeaderCollection*& dyn_$Headers$k__BackingField();
    // Get instance field reference: private System.Net.HttpStatusCode <StatusCode>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::HttpStatusCode& dyn_$StatusCode$k__BackingField();
    // Get instance field reference: private System.String <StatusDescription>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$StatusDescription$k__BackingField();
    // Get instance field reference: private System.Version <Version>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Version*& dyn_$Version$k__BackingField();
    // Get instance field reference: private System.Boolean <KeepAlive>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$KeepAlive$k__BackingField();
    // Get instance field reference: readonly System.String ME
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ME();
    // Get instance field reference: private System.Boolean <ChunkedRead>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ChunkedRead$k__BackingField();
    // public System.Net.WebRequestStream get_RequestStream()
    // Offset: 0x4EC2B28
    ::System::Net::WebRequestStream* get_RequestStream();
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x4EC2B30
    ::System::Net::WebHeaderCollection* get_Headers();
    // private System.Void set_Headers(System.Net.WebHeaderCollection value)
    // Offset: 0x4EC2B38
    void set_Headers(::System::Net::WebHeaderCollection* value);
    // public System.Net.HttpStatusCode get_StatusCode()
    // Offset: 0x4EC2B40
    ::System::Net::HttpStatusCode get_StatusCode();
    // private System.Void set_StatusCode(System.Net.HttpStatusCode value)
    // Offset: 0x4EC2B48
    void set_StatusCode(::System::Net::HttpStatusCode value);
    // public System.String get_StatusDescription()
    // Offset: 0x4EC2B50
    ::StringW get_StatusDescription();
    // private System.Void set_StatusDescription(System.String value)
    // Offset: 0x4EC2B58
    void set_StatusDescription(::StringW value);
    // public System.Version get_Version()
    // Offset: 0x4EC2B60
    ::System::Version* get_Version();
    // private System.Void set_Version(System.Version value)
    // Offset: 0x4EC2B68
    void set_Version(::System::Version* value);
    // public System.Boolean get_KeepAlive()
    // Offset: 0x4EC2B70
    bool get_KeepAlive();
    // private System.Void set_KeepAlive(System.Boolean value)
    // Offset: 0x4EC2B78
    void set_KeepAlive(bool value);
    // public System.Void .ctor(System.Net.WebRequestStream request)
    // Offset: 0x4EBE1CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebResponseStream* New_ctor(::System::Net::WebRequestStream* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebResponseStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebResponseStream*, creationType>(request)));
    }
    // private System.Boolean get_ChunkedRead()
    // Offset: 0x4EC2B94
    bool get_ChunkedRead();
    // private System.Void set_ChunkedRead(System.Boolean value)
    // Offset: 0x4EC2B9C
    void set_ChunkedRead(bool value);
    // private System.Threading.Tasks.Task`1<System.Int32> ProcessRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EC2D10
    ::System::Threading::Tasks::Task_1<int>* ProcessRead(::ArrayW<uint8_t> buffer, int offset, int size, ::System::Threading::CancellationToken cancellationToken);
    // private System.Boolean CheckAuthHeader(System.String headerName)
    // Offset: 0x4EC3078
    bool CheckAuthHeader(::StringW headerName);
    // private System.Boolean get_ExpectContent()
    // Offset: 0x4EC30F0
    bool get_ExpectContent();
    // private System.Void Initialize(System.Net.BufferOffsetSize buffer)
    // Offset: 0x4EC3184
    void Initialize(::System::Net::BufferOffsetSize* buffer);
    // private System.Threading.Tasks.Task`1<System.Byte[]> ReadAllAsyncInner(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EC36C8
    ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* ReadAllAsyncInner(::System::Threading::CancellationToken cancellationToken);
    // System.Threading.Tasks.Task ReadAllAsync(System.Boolean resending, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EC3804
    ::System::Threading::Tasks::Task* ReadAllAsync(bool resending, ::System::Threading::CancellationToken cancellationToken);
    // private System.Net.WebException GetReadException(System.Net.WebExceptionStatus status, System.Exception error, System.String where)
    // Offset: 0x4EC3A58
    ::System::Net::WebException* GetReadException(::System::Net::WebExceptionStatus status, ::System::Exception* error, ::StringW where);
    // System.Threading.Tasks.Task InitReadAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EBE260
    ::System::Threading::Tasks::Task* InitReadAsync(::System::Threading::CancellationToken cancellationToken);
    // private System.Boolean GetResponse(System.Net.BufferOffsetSize buffer, ref System.Int32 pos, ref System.Net.ReadState state)
    // Offset: 0x4EC3CEC
    bool GetResponse(::System::Net::BufferOffsetSize* buffer, ByRef<int> pos, ByRef<::System::Net::ReadState> state);
    // public override System.Boolean get_CanRead()
    // Offset: 0x4EC2B84
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x4EC2B8C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EC2BA8
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<int>* ReadAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // protected override System.Boolean TryReadFromBufferedContent(System.Byte[] buffer, System.Int32 offset, System.Int32 count, out System.Int32 result)
    // Offset: 0x4EC2FAC
    // Implemented from: System.Net.WebConnectionStream
    // Base method: System.Boolean WebConnectionStream::TryReadFromBufferedContent(System.Byte[] buffer, System.Int32 offset, System.Int32 count, out System.Int32 result)
    bool TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int offset, int count, ByRef<int> result);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EC3918
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // protected override System.Void Close_internal(ref System.Boolean disposed)
    // Offset: 0x4EC39B4
    // Implemented from: System.Net.WebConnectionStream
    // Base method: System.Void WebConnectionStream::Close_internal(ref System.Boolean disposed)
    void Close_internal(ByRef<bool> disposed);
  }; // System.Net.WebResponseStream
  #pragma pack(pop)
  static check_size<sizeof(WebResponseStream), 192 + sizeof(bool)> __System_Net_WebResponseStreamSizeCheck;
  static_assert(sizeof(WebResponseStream) == 0xC1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_RequestStream
// Il2CppName: get_RequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequestStream* (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_RequestStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_RequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::set_Headers
// Il2CppName: set_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::*)(::System::Net::WebHeaderCollection*)>(&System::Net::WebResponseStream::set_Headers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "WebHeaderCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "set_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpStatusCode (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::*)(::System::Net::HttpStatusCode)>(&System::Net::WebResponseStream::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "HttpStatusCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_StatusDescription
// Il2CppName: get_StatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_StatusDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_StatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::set_StatusDescription
// Il2CppName: set_StatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::*)(::StringW)>(&System::Net::WebResponseStream::set_StatusDescription)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "set_StatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::set_Version
// Il2CppName: set_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::*)(::System::Version*)>(&System::Net::WebResponseStream::set_Version)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "set_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_KeepAlive
// Il2CppName: get_KeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_KeepAlive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_KeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::set_KeepAlive
// Il2CppName: set_KeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::*)(bool)>(&System::Net::WebResponseStream::set_KeepAlive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "set_KeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_ChunkedRead
// Il2CppName: get_ChunkedRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_ChunkedRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_ChunkedRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::set_ChunkedRead
// Il2CppName: set_ChunkedRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::*)(bool)>(&System::Net::WebResponseStream::set_ChunkedRead)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "set_ChunkedRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::ProcessRead
// Il2CppName: ProcessRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::WebResponseStream::ProcessRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "ProcessRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::CheckAuthHeader
// Il2CppName: CheckAuthHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::*)(::StringW)>(&System::Net::WebResponseStream::CheckAuthHeader)> {
  static const MethodInfo* get() {
    static auto* headerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "CheckAuthHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headerName});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_ExpectContent
// Il2CppName: get_ExpectContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_ExpectContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_ExpectContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::*)(::System::Net::BufferOffsetSize*)>(&System::Net::WebResponseStream::Initialize)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System.Net", "BufferOffsetSize")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::ReadAllAsyncInner
// Il2CppName: ReadAllAsyncInner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (System::Net::WebResponseStream::*)(::System::Threading::CancellationToken)>(&System::Net::WebResponseStream::ReadAllAsyncInner)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "ReadAllAsyncInner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::ReadAllAsync
// Il2CppName: ReadAllAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebResponseStream::*)(bool, ::System::Threading::CancellationToken)>(&System::Net::WebResponseStream::ReadAllAsync)> {
  static const MethodInfo* get() {
    static auto* resending = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "ReadAllAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resending, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::GetReadException
// Il2CppName: GetReadException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException* (System::Net::WebResponseStream::*)(::System::Net::WebExceptionStatus, ::System::Exception*, ::StringW)>(&System::Net::WebResponseStream::GetReadException)> {
  static const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("System.Net", "WebExceptionStatus")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* where = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "GetReadException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status, error, where});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::InitReadAsync
// Il2CppName: InitReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebResponseStream::*)(::System::Threading::CancellationToken)>(&System::Net::WebResponseStream::InitReadAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "InitReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::GetResponse
// Il2CppName: GetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::*)(::System::Net::BufferOffsetSize*, ByRef<int>, ByRef<::System::Net::ReadState>)>(&System::Net::WebResponseStream::GetResponse)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System.Net", "BufferOffsetSize")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System.Net", "ReadState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "GetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, pos, state});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::*)()>(&System::Net::WebResponseStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::WebResponseStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::TryReadFromBufferedContent
// Il2CppName: TryReadFromBufferedContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int, int, ByRef<int>)>(&System::Net::WebResponseStream::TryReadFromBufferedContent)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "TryReadFromBufferedContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, result});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::WebResponseStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::Close_internal
// Il2CppName: Close_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::*)(ByRef<bool>)>(&System::Net::WebResponseStream::Close_internal)> {
  static const MethodInfo* get() {
    static auto* disposed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream*), "Close_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposed});
  }
};
