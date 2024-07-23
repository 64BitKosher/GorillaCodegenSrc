// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebConnection
#include "System/Net/WebConnection.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebOperation
  class WebOperation;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: NetworkStream
  class NetworkStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection::$CreateStream$d__18, "System.Net", "WebConnection/<CreateStream>d__18");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebConnection/<CreateStream>d__18
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct WebConnection::$CreateStream$d__18/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder;
    // public System.Net.WebConnection <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::WebConnection* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebConnection*) == 0x8);
    // public System.Net.WebOperation operation
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::WebOperation* operation;
    // Field size check
    static_assert(sizeof(::System::Net::WebOperation*) == 0x8);
    // public System.Boolean reused
    // Size: 0x1
    // Offset: 0x30
    bool reused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Net.Sockets.NetworkStream <stream>5__2
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::Sockets::NetworkStream* $stream$5__2;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::NetworkStream*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__1
    // Size: 0x9
    // Offset: 0x48
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::IO::Stream*>::ConfiguredTaskAwaiter $$u__2;
    public:
    // Creating value type constructor for type: $CreateStream$d__18
    constexpr $CreateStream$d__18(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, ::System::Net::WebConnection* $$4__this_ = {}, ::System::Net::WebOperation* operation_ = {}, bool reused_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Net::Sockets::NetworkStream* $stream$5__2_ = {}, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::IO::Stream*>::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, operation{operation_}, reused{reused_}, cancellationToken{cancellationToken_}, $stream$5__2{$stream$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& dyn_$$t__builder();
    // Get instance field reference: public System.Net.WebConnection <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::WebConnection*& dyn_$$4__this();
    // Get instance field reference: public System.Net.WebOperation operation
    [[deprecated("Use field access instead!")]] ::System::Net::WebOperation*& dyn_operation();
    // Get instance field reference: public System.Boolean reused
    [[deprecated("Use field access instead!")]] bool& dyn_reused();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Net.Sockets.NetworkStream <stream>5__2
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::NetworkStream*& dyn_$stream$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> <>u__2
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::IO::Stream*>::ConfiguredTaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x4EB8FEC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x4EB982C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebConnection/<CreateStream>d__18
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnection::$CreateStream$d__18::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::$CreateStream$d__18::*)()>(&System::Net::WebConnection::$CreateStream$d__18::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnection::$CreateStream$d__18), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnection::$CreateStream$d__18::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::$CreateStream$d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebConnection::$CreateStream$d__18::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnection::$CreateStream$d__18), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
