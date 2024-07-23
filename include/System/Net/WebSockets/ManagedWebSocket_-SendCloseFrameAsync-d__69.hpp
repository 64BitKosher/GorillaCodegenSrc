// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebSockets.ManagedWebSocket
#include "System/Net/WebSockets/ManagedWebSocket.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Net.WebSockets.WebSocketCloseStatus
#include "System/Net/WebSockets/WebSocketCloseStatus.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69, "System.Net.WebSockets", "ManagedWebSocket/<SendCloseFrameAsync>d__69");
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebSockets.ManagedWebSocket/<SendCloseFrameAsync>d__69
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct ManagedWebSocket::$SendCloseFrameAsync$d__69/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.String closeStatusDescription
    // Size: 0x8
    // Offset: 0x20
    ::StringW closeStatusDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Net.WebSockets.WebSocketCloseStatus closeStatus
    // Size: 0x4
    // Offset: 0x28
    ::System::Net::WebSockets::WebSocketCloseStatus closeStatus;
    // Field size check
    static_assert(sizeof(::System::Net::WebSockets::WebSocketCloseStatus) == 0x4);
    // public System.Net.WebSockets.ManagedWebSocket <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::WebSockets::ManagedWebSocket* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebSockets::ManagedWebSocket*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Byte[] <buffer>5__2
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> $buffer$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter <>u__1
    // Size: 0xB
    // Offset: 0x48
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter) == 0xB);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__2
    // Size: 0x9
    // Offset: 0x58
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    public:
    // Creating value type constructor for type: $SendCloseFrameAsync$d__69
    constexpr $SendCloseFrameAsync$d__69(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::StringW closeStatusDescription_ = {}, ::System::Net::WebSockets::WebSocketCloseStatus closeStatus_ = {}, ::System::Net::WebSockets::ManagedWebSocket* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::ArrayW<uint8_t> $buffer$5__2_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, closeStatusDescription{closeStatusDescription_}, closeStatus{closeStatus_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $buffer$5__2{$buffer$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.String closeStatusDescription
    [[deprecated("Use field access instead!")]] ::StringW& dyn_closeStatusDescription();
    // Get instance field reference: public System.Net.WebSockets.WebSocketCloseStatus closeStatus
    [[deprecated("Use field access instead!")]] ::System::Net::WebSockets::WebSocketCloseStatus& dyn_closeStatus();
    // Get instance field reference: public System.Net.WebSockets.ManagedWebSocket <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::WebSockets::ManagedWebSocket*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Byte[] <buffer>5__2
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_$buffer$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x4EE5B00
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x4EE6464
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebSockets.ManagedWebSocket/<SendCloseFrameAsync>d__69
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69::*)()>(&System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ManagedWebSocket::$SendCloseFrameAsync$d__69), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
