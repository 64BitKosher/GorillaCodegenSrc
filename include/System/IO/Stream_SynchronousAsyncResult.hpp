// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Stream::SynchronousAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream::SynchronousAsyncResult*, "System.IO", "Stream/SynchronousAsyncResult");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Stream/SynchronousAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class Stream::SynchronousAsyncResult : public ::Il2CppObject/*, public ::System::IAsyncResult*/ {
    public:
    // Nested type: ::System::IO::Stream::SynchronousAsyncResult::$$c
    class $$c;
    public:
    // private readonly System.Object _stateObject
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* stateObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean _isWrite
    // Size: 0x1
    // Offset: 0x18
    bool isWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isWrite and: waitHandle
    char __padding1[0x7] = {};
    // private System.Threading.ManualResetEvent _waitHandle
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::ManualResetEvent* waitHandle;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private System.Runtime.ExceptionServices.ExceptionDispatchInfo _exceptionInfo
    // Size: 0x8
    // Offset: 0x28
    ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionInfo;
    // Field size check
    static_assert(sizeof(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*) == 0x8);
    // private System.Boolean _endXxxCalled
    // Size: 0x1
    // Offset: 0x30
    bool endXxxCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: endXxxCalled and: bytesRead
    char __padding4[0x3] = {};
    // private System.Int32 _bytesRead
    // Size: 0x4
    // Offset: 0x34
    int bytesRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IAsyncResult
    operator ::System::IAsyncResult() noexcept {
      return *reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Get instance field reference: private readonly System.Object _stateObject
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__stateObject();
    // Get instance field reference: private readonly System.Boolean _isWrite
    [[deprecated("Use field access instead!")]] bool& dyn__isWrite();
    // Get instance field reference: private System.Threading.ManualResetEvent _waitHandle
    [[deprecated("Use field access instead!")]] ::System::Threading::ManualResetEvent*& dyn__waitHandle();
    // Get instance field reference: private System.Runtime.ExceptionServices.ExceptionDispatchInfo _exceptionInfo
    [[deprecated("Use field access instead!")]] ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& dyn__exceptionInfo();
    // Get instance field reference: private System.Boolean _endXxxCalled
    [[deprecated("Use field access instead!")]] bool& dyn__endXxxCalled();
    // Get instance field reference: private System.Int32 _bytesRead
    [[deprecated("Use field access instead!")]] int& dyn__bytesRead();
    // System.Void .ctor(System.Int32 bytesRead, System.Object asyncStateObject)
    // Offset: 0x45D3198
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::SynchronousAsyncResult* New_ctor(int bytesRead, ::Il2CppObject* asyncStateObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Stream::SynchronousAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::SynchronousAsyncResult*, creationType>(bytesRead, asyncStateObject)));
    }
    // System.Void .ctor(System.Object asyncStateObject)
    // Offset: 0x45D348C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::SynchronousAsyncResult* New_ctor(::Il2CppObject* asyncStateObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Stream::SynchronousAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::SynchronousAsyncResult*, creationType>(asyncStateObject)));
    }
    // System.Void .ctor(System.Exception ex, System.Object asyncStateObject, System.Boolean isWrite)
    // Offset: 0x45D31D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::SynchronousAsyncResult* New_ctor(::System::Exception* ex, ::Il2CppObject* asyncStateObject, bool isWrite) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Stream::SynchronousAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::SynchronousAsyncResult*, creationType>(ex, asyncStateObject, isWrite)));
    }
    // public System.Boolean get_IsCompleted()
    // Offset: 0x45D3EC4
    bool get_IsCompleted();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x45D3ECC
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Object get_AsyncState()
    // Offset: 0x45D3FC4
    ::Il2CppObject* get_AsyncState();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x45D3FCC
    bool get_CompletedSynchronously();
    // System.Void ThrowIfError()
    // Offset: 0x45D3FD4
    void ThrowIfError();
    // static System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x45D3238
    static int EndRead(::System::IAsyncResult* asyncResult);
    // static System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x45D34CC
    static void EndWrite(::System::IAsyncResult* asyncResult);
  }; // System.IO.Stream/SynchronousAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(Stream::SynchronousAsyncResult), 52 + sizeof(int)> __System_IO_Stream_SynchronousAsyncResultSizeCheck;
  static_assert(sizeof(Stream::SynchronousAsyncResult) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::SynchronousAsyncResult::*)()>(&System::IO::Stream::SynchronousAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (System::IO::Stream::SynchronousAsyncResult::*)()>(&System::IO::Stream::SynchronousAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::IO::Stream::SynchronousAsyncResult::*)()>(&System::IO::Stream::SynchronousAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::SynchronousAsyncResult::*)()>(&System::IO::Stream::SynchronousAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::ThrowIfError
// Il2CppName: ThrowIfError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::SynchronousAsyncResult::*)()>(&System::IO::Stream::SynchronousAsyncResult::ThrowIfError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult*), "ThrowIfError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IAsyncResult*)>(&System::IO::Stream::SynchronousAsyncResult::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&System::IO::Stream::SynchronousAsyncResult::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
