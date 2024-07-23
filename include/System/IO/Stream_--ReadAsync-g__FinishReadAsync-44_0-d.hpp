// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.hpp"
// Including type: System.Memory`1
#include "System/Memory_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: Task`1 because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d, "System.IO", "Stream/<<ReadAsync>g__FinishReadAsync|44_0>d");
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.Stream/<<ReadAsync>g__FinishReadAsync|44_0>d
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct Stream::$$ReadAsync$g__FinishReadAsync|44_0$d/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int> $$t__builder;
    // public System.Threading.Tasks.Task`1<System.Int32> readTask
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::Tasks::Task_1<int>* readTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<int>*) == 0x8);
    // public System.Byte[] localBuffer
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> localBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Memory`1<System.Byte> localDestination
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Memory_1<uint8_t> localDestination;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $$ReadAsync$g__FinishReadAsync|44_0$d
    constexpr $$ReadAsync$g__FinishReadAsync|44_0$d(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int> $$t__builder_ = {}, ::System::Threading::Tasks::Task_1<int>* readTask_ = {}, ::ArrayW<uint8_t> localBuffer_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::System::Memory_1<uint8_t> localDestination_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, readTask{readTask_}, localBuffer{localBuffer_}, localDestination{localDestination_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Int32> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int>& dyn_$$t__builder();
    // Get instance field reference: public System.Threading.Tasks.Task`1<System.Int32> readTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<int>*& dyn_readTask();
    // Get instance field reference: public System.Byte[] localBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_localBuffer();
    // Get instance field reference: public System.Memory`1<System.Byte> localDestination
    [[deprecated("Use field access instead!")]] ::System::Memory_1<uint8_t>& dyn_localDestination();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x45D48E8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x45D4C70
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.IO.Stream/<<ReadAsync>g__FinishReadAsync|44_0>d
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d::*)()>(&System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$ReadAsync$g__FinishReadAsync|44_0$d), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
