// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.VoiceServiceRequest
#include "Meta/WitAi/Requests/VoiceServiceRequest.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Data
namespace Meta::WitAi::Data {
  // Forward declaring type: SimulatedResponseMessage
  class SimulatedResponseMessage;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5, "Meta.WitAi.Requests", "VoiceServiceRequest/<SimulateResponse>d__5");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.VoiceServiceRequest/<SimulateResponse>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct VoiceServiceRequest::$SimulateResponse$d__5/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public Meta.WitAi.Requests.VoiceServiceRequest <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Meta::WitAi::Requests::VoiceServiceRequest* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequest*) == 0x8);
    // private Meta.WitAi.Requests.VoiceServiceRequest/<>c__DisplayClass5_0 <>8__1
    // Size: 0x8
    // Offset: 0x30
    ::Meta::WitAi::Requests::VoiceServiceRequest::$$c__DisplayClass5_0* $$8__1;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequest::$$c__DisplayClass5_0*) == 0x8);
    // private Meta.WitAi.Data.SimulatedResponseMessage <lastMessage>5__2
    // Size: 0x8
    // Offset: 0x38
    ::Meta::WitAi::Data::SimulatedResponseMessage* $lastMessage$5__2;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Data::SimulatedResponseMessage*) == 0x8);
    // private System.Int32 <i>5__3
    // Size: 0x4
    // Offset: 0x40
    int $i$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $i$5__3 and: $message$5__4
    char __padding5[0x4] = {};
    // private Meta.WitAi.Data.SimulatedResponseMessage <message>5__4
    // Size: 0x8
    // Offset: 0x48
    ::Meta::WitAi::Data::SimulatedResponseMessage* $message$5__4;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Data::SimulatedResponseMessage*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $SimulateResponse$d__5
    constexpr $SimulateResponse$d__5(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::Meta::WitAi::Requests::VoiceServiceRequest* $$4__this_ = {}, ::Meta::WitAi::Requests::VoiceServiceRequest::$$c__DisplayClass5_0* $$8__1_ = {}, ::Meta::WitAi::Data::SimulatedResponseMessage* $lastMessage$5__2_ = {}, int $i$5__3_ = {}, ::Meta::WitAi::Data::SimulatedResponseMessage* $message$5__4_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $lastMessage$5__2{$lastMessage$5__2_}, $i$5__3{$i$5__3_}, $message$5__4{$message$5__4_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public Meta.WitAi.Requests.VoiceServiceRequest <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::VoiceServiceRequest*& dyn_$$4__this();
    // Get instance field reference: private Meta.WitAi.Requests.VoiceServiceRequest/<>c__DisplayClass5_0 <>8__1
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::VoiceServiceRequest::$$c__DisplayClass5_0*& dyn_$$8__1();
    // Get instance field reference: private Meta.WitAi.Data.SimulatedResponseMessage <lastMessage>5__2
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Data::SimulatedResponseMessage*& dyn_$lastMessage$5__2();
    // Get instance field reference: private System.Int32 <i>5__3
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__3();
    // Get instance field reference: private Meta.WitAi.Data.SimulatedResponseMessage <message>5__4
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Data::SimulatedResponseMessage*& dyn_$message$5__4();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x4438714
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x4438D34
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Meta.WitAi.Requests.VoiceServiceRequest/<SimulateResponse>d__5
  #pragma pack(pop)
  static check_size<sizeof(VoiceServiceRequest::$SimulateResponse$d__5), 80 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __Meta_WitAi_Requests_VoiceServiceRequest_$SimulateResponse$d__5SizeCheck;
  static_assert(sizeof(VoiceServiceRequest::$SimulateResponse$d__5) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5::*)()>(&Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
