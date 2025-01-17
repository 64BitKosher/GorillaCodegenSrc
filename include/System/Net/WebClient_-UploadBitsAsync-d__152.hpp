// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebClient
#include "System/Net/WebClient.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebClient::$UploadBitsAsync$d__152, "System.Net", "WebClient/<UploadBitsAsync>d__152");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebClient/<UploadBitsAsync>d__152
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct WebClient::$UploadBitsAsync$d__152/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public System.Net.WebClient <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::WebClient* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebClient*) == 0x8);
    // public System.Net.WebRequest request
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::WebRequest* request;
    // Field size check
    static_assert(sizeof(::System::Net::WebRequest*) == 0x8);
    // public System.Byte[] header
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> header;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] footer
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> footer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.ComponentModel.AsyncOperation asyncOp
    // Size: 0x8
    // Offset: 0x48
    ::System::ComponentModel::AsyncOperation* asyncOp;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::AsyncOperation*) == 0x8);
    // public System.IO.Stream readStream
    // Size: 0x8
    // Offset: 0x50
    ::System::IO::Stream* readStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // public System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 chunkSize
    // Size: 0x4
    // Offset: 0x60
    int chunkSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Action`3<System.Byte[],System.Exception,System.ComponentModel.AsyncOperation> completionDelegate
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_3<::ArrayW<uint8_t>, ::System::Exception*, ::System::ComponentModel::AsyncOperation*>* completionDelegate;
    // Field size check
    static_assert(sizeof(::System::Action_3<::ArrayW<uint8_t>, ::System::Exception*, ::System::ComponentModel::AsyncOperation*>*) == 0x8);
    // private System.Exception <exception>5__2
    // Size: 0x8
    // Offset: 0x70
    ::System::Exception* $exception$5__2;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.IO.Stream <writeStream>5__3
    // Size: 0x8
    // Offset: 0x78
    ::System::IO::Stream* $writeStream$5__3;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::IO::Stream*>::ConfiguredTaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter <>u__2
    // Size: 0xB
    // Offset: 0x90
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter) == 0xB);
    // private System.IO.Stream <>7__wrap3
    // Size: 0x8
    // Offset: 0xA0
    ::System::IO::Stream* $$7__wrap3;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Int32 <bytesRead>5__5
    // Size: 0x4
    // Offset: 0xA8
    int $bytesRead$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0xB0
    typename ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<int>::ConfiguredValueTaskAwaiter $$u__3;
    // private System.Int32 <toWrite>5__6
    // Size: 0x4
    // Offset: 0xC0
    int $toWrite$5__6;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: $UploadBitsAsync$d__152
    constexpr $UploadBitsAsync$d__152(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::System::Net::WebClient* $$4__this_ = {}, ::System::Net::WebRequest* request_ = {}, ::ArrayW<uint8_t> header_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> footer_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::System::ComponentModel::AsyncOperation* asyncOp_ = {}, ::System::IO::Stream* readStream_ = {}, ::ArrayW<uint8_t> buffer_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int chunkSize_ = {}, ::System::Action_3<::ArrayW<uint8_t>, ::System::Exception*, ::System::ComponentModel::AsyncOperation*>* completionDelegate_ = {}, ::System::Exception* $exception$5__2_ = {}, ::System::IO::Stream* $writeStream$5__3_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::IO::Stream*>::ConfiguredTaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter $$u__2_ = {}, ::System::IO::Stream* $$7__wrap3_ = {}, int $bytesRead$5__5_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<int>::ConfiguredValueTaskAwaiter $$u__3_ = {}, int $toWrite$5__6_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, request{request_}, header{header_}, footer{footer_}, asyncOp{asyncOp_}, readStream{readStream_}, buffer{buffer_}, chunkSize{chunkSize_}, completionDelegate{completionDelegate_}, $exception$5__2{$exception$5__2_}, $writeStream$5__3{$writeStream$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$7__wrap3{$$7__wrap3_}, $bytesRead$5__5{$bytesRead$5__5_}, $$u__3{$$u__3_}, $toWrite$5__6{$toWrite$5__6_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.Net.WebClient <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::WebClient*& dyn_$$4__this();
    // Get instance field reference: public System.Net.WebRequest request
    [[deprecated("Use field access instead!")]] ::System::Net::WebRequest*& dyn_request();
    // Get instance field reference: public System.Byte[] header
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_header();
    // Get instance field reference: public System.Byte[] footer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_footer();
    // Get instance field reference: public System.ComponentModel.AsyncOperation asyncOp
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::AsyncOperation*& dyn_asyncOp();
    // Get instance field reference: public System.IO.Stream readStream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_readStream();
    // Get instance field reference: public System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: public System.Int32 chunkSize
    [[deprecated("Use field access instead!")]] int& dyn_chunkSize();
    // Get instance field reference: public System.Action`3<System.Byte[],System.Exception,System.ComponentModel.AsyncOperation> completionDelegate
    [[deprecated("Use field access instead!")]] ::System::Action_3<::ArrayW<uint8_t>, ::System::Exception*, ::System::ComponentModel::AsyncOperation*>*& dyn_completionDelegate();
    // Get instance field reference: private System.Exception <exception>5__2
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn_$exception$5__2();
    // Get instance field reference: private System.IO.Stream <writeStream>5__3
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_$writeStream$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::IO::Stream*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter& dyn_$$u__2();
    // Get instance field reference: private System.IO.Stream <>7__wrap3
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_$$7__wrap3();
    // Get instance field reference: private System.Int32 <bytesRead>5__5
    [[deprecated("Use field access instead!")]] int& dyn_$bytesRead$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32> <>u__3
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<int>::ConfiguredValueTaskAwaiter& dyn_$$u__3();
    // Get instance field reference: private System.Int32 <toWrite>5__6
    [[deprecated("Use field access instead!")]] int& dyn_$toWrite$5__6();
    // private System.Void MoveNext()
    // Offset: 0x4FCC3A4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x4FCDB28
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebClient/<UploadBitsAsync>d__152
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebClient::$UploadBitsAsync$d__152::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$UploadBitsAsync$d__152::*)()>(&System::Net::WebClient::$UploadBitsAsync$d__152::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$UploadBitsAsync$d__152), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$UploadBitsAsync$d__152::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$UploadBitsAsync$d__152::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebClient::$UploadBitsAsync$d__152::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$UploadBitsAsync$d__152), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
