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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
  // Forward declaring type: Memory`1<T>
  template<typename T>
  struct Memory_1;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: ReadOnlyMemory`1<T>
  template<typename T>
  struct ReadOnlyMemory_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: ValueTask`1<TResult>
  template<typename TResult>
  struct ValueTask_1;
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: ValueTask
  struct ValueTask;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Forward declaring type: DelegatingStream
  class DelegatingStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::DelegatingStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::DelegatingStream*, "System.Net.Http", "DelegatingStream");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.DelegatingStream
  // [TokenAttribute] Offset: FFFFFFFF
  class DelegatingStream : public ::System::IO::Stream {
    public:
    public:
    // private readonly System.IO.Stream _innerStream
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* innerStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    public:
    // Get instance field reference: private readonly System.IO.Stream _innerStream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn__innerStream();
    // protected System.Void .ctor(System.IO.Stream innerStream)
    // Offset: 0x4EEF908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelegatingStream* New_ctor(::System::IO::Stream* innerStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::DelegatingStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelegatingStream*, creationType>(innerStream)));
    }
    // public override System.Boolean get_CanRead()
    // Offset: 0x4EEF794
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x4EEF7B4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x4EEF7D4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x4EEF7F4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x4EEF814
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x4EEF834
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 get_ReadTimeout()
    // Offset: 0x4EEF858
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_ReadTimeout()
    int get_ReadTimeout();
    // public override System.Void set_ReadTimeout(System.Int32 value)
    // Offset: 0x4EEF87C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_ReadTimeout(System.Int32 value)
    void set_ReadTimeout(int value);
    // public override System.Boolean get_CanTimeout()
    // Offset: 0x4EEF8A0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanTimeout()
    bool get_CanTimeout();
    // public override System.Int32 get_WriteTimeout()
    // Offset: 0x4EEF8C0
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_WriteTimeout()
    int get_WriteTimeout();
    // public override System.Void set_WriteTimeout(System.Int32 value)
    // Offset: 0x4EEF8E4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_WriteTimeout(System.Int32 value)
    void set_WriteTimeout(int value);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x4EEF97C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x4EEF9BC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x4EEF9E0
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Int32 Read(System.Span`1<System.Byte> buffer)
    // Offset: 0x4EEFA04
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Span`1<System.Byte> buffer)
    int Read(::System::Span_1<uint8_t> buffer);
    // public override System.Int32 ReadByte()
    // Offset: 0x4EEFA28
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EEFA4C
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<int>* ReadAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.ValueTask`1<System.Int32> ReadAsync(System.Memory`1<System.Byte> buffer, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EEFA70
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.ValueTask`1<System.Int32> Stream::ReadAsync(System.Memory`1<System.Byte> buffer, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::ValueTask_1<int> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x4EEFA94
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x4EEFAB8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(::System::IAsyncResult* asyncResult);
    // public override System.Void Flush()
    // Offset: 0x4EEFADC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Threading.Tasks.Task FlushAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EEFB00
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::FlushAsync(System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x4EEFB24
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x4EEFB48
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Void Write(System.ReadOnlySpan`1<System.Byte> buffer)
    // Offset: 0x4EEFB6C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.ReadOnlySpan`1<System.Byte> buffer)
    void Write(::System::ReadOnlySpan_1<uint8_t> buffer);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x4EEFB90
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EEFBB4
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.ValueTask WriteAsync(System.ReadOnlyMemory`1<System.Byte> buffer, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4EEFBD8
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.ValueTask Stream::WriteAsync(System.ReadOnlyMemory`1<System.Byte> buffer, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x4EEFBFC
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x4EEFC20
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(::System::IAsyncResult* asyncResult);
  }; // System.Net.Http.DelegatingStream
  #pragma pack(pop)
  static check_size<sizeof(DelegatingStream), 40 + sizeof(::System::IO::Stream*)> __System_Net_Http_DelegatingStreamSizeCheck;
  static_assert(sizeof(DelegatingStream) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(int64_t)>(&System::Net::Http::DelegatingStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::get_ReadTimeout
// Il2CppName: get_ReadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::get_ReadTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "get_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::set_ReadTimeout
// Il2CppName: set_ReadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(int)>(&System::Net::Http::DelegatingStream::set_ReadTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "set_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::get_CanTimeout
// Il2CppName: get_CanTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::get_CanTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "get_CanTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::get_WriteTimeout
// Il2CppName: get_WriteTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::get_WriteTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "get_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::set_WriteTimeout
// Il2CppName: set_WriteTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(int)>(&System::Net::Http::DelegatingStream::set_WriteTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "set_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(bool)>(&System::Net::Http::DelegatingStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Http::DelegatingStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::Net::Http::DelegatingStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::Http::DelegatingStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::DelegatingStream::*)(::System::Span_1<uint8_t>)>(&System::Net::Http::DelegatingStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::Http::DelegatingStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int> (System::Net::Http::DelegatingStream::*)(::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&System::Net::Http::DelegatingStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Memory`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Http::DelegatingStream::BeginRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::DelegatingStream::*)(::System::IAsyncResult*)>(&System::Net::Http::DelegatingStream::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)()>(&System::Net::Http::DelegatingStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::FlushAsync
// Il2CppName: FlushAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Http::DelegatingStream::*)(::System::Threading::CancellationToken)>(&System::Net::Http::DelegatingStream::FlushAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "FlushAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(int64_t)>(&System::Net::Http::DelegatingStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::Http::DelegatingStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&System::Net::Http::DelegatingStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::WriteByte
// Il2CppName: WriteByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(uint8_t)>(&System::Net::Http::DelegatingStream::WriteByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::Http::DelegatingStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (System::Net::Http::DelegatingStream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&System::Net::Http::DelegatingStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlyMemory`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Http::DelegatingStream::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::Http::DelegatingStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::DelegatingStream::*)(::System::IAsyncResult*)>(&System::Net::Http::DelegatingStream::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::DelegatingStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};