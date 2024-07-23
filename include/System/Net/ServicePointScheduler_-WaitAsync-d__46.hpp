// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ServicePointScheduler
#include "System/Net/ServicePointScheduler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePointScheduler::$WaitAsync$d__46, "System.Net", "ServicePointScheduler/<WaitAsync>d__46");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.ServicePointScheduler/<WaitAsync>d__46
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct ServicePointScheduler::$WaitAsync$d__46/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Int32 millisecondTimeout
    // Size: 0x4
    // Offset: 0x20
    int millisecondTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Threading.Tasks.Task workerTask
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::Tasks::Task* workerTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // private System.Threading.CancellationTokenSource <cts>5__2
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::CancellationTokenSource* $cts$5__2;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    // private System.Threading.Tasks.Task <timeoutTask>5__3
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::Tasks::Task* $timeoutTask$5__3;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $WaitAsync$d__46
    constexpr $WaitAsync$d__46(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, int millisecondTimeout_ = {}, ::System::Threading::Tasks::Task* workerTask_ = {}, ::System::Threading::CancellationTokenSource* $cts$5__2_ = {}, ::System::Threading::Tasks::Task* $timeoutTask$5__3_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, millisecondTimeout{millisecondTimeout_}, workerTask{workerTask_}, $cts$5__2{$cts$5__2_}, $timeoutTask$5__3{$timeoutTask$5__3_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Int32 millisecondTimeout
    [[deprecated("Use field access instead!")]] int& dyn_millisecondTimeout();
    // Get instance field reference: public System.Threading.Tasks.Task workerTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_workerTask();
    // Get instance field reference: private System.Threading.CancellationTokenSource <cts>5__2
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn_$cts$5__2();
    // Get instance field reference: private System.Threading.Tasks.Task <timeoutTask>5__3
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_$timeoutTask$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x4EB4520
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x4EB49CC
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.ServicePointScheduler/<WaitAsync>d__46
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::$WaitAsync$d__46::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::$WaitAsync$d__46::*)()>(&System::Net::ServicePointScheduler::$WaitAsync$d__46::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::$WaitAsync$d__46), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::$WaitAsync$d__46::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::$WaitAsync$d__46::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::ServicePointScheduler::$WaitAsync$d__46::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::$WaitAsync$d__46), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
