// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkSystemFusion
#include "GlobalNamespace/NetworkSystemFusion.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: Fusion.GameMode
#include "Fusion/GameMode.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RoomConfig
  class RoomConfig;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: StartGameResult
  class StartGameResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkSystemFusion::$Connect$d__52, "", "NetworkSystemFusion/<Connect>d__52");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkSystemFusion/<Connect>d__52
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NetworkSystemFusion::$Connect$d__52/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public NetworkSystemFusion <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::NetworkSystemFusion* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion*) == 0x8);
    // public Fusion.GameMode mode
    // Size: 0x4
    // Offset: 0x28
    ::Fusion::GameMode mode;
    // Field size check
    static_assert(sizeof(::Fusion::GameMode) == 0x4);
    // public RoomConfig opts
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::RoomConfig* opts;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RoomConfig*) == 0x8);
    // public System.String targetSessionName
    // Size: 0x8
    // Offset: 0x38
    ::StringW targetSessionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Threading.Tasks.Task`1<Fusion.StartGameResult> <startupTask>5__2
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* $startupTask$5__2;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*) == 0x8);
    // private System.Boolean <goingBetweenRooms>5__3
    // Size: 0x1
    // Offset: 0x48
    bool $goingBetweenRooms$5__3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__2
    // Size: 0x1
    // Offset: 0x58
    ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter) == 0x1);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.StartGameResult> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*> $$u__3;
    public:
    // Creating value type constructor for type: $Connect$d__52
    constexpr $Connect$d__52(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, ::GlobalNamespace::NetworkSystemFusion* $$4__this_ = {}, ::Fusion::GameMode mode_ = {}, ::GlobalNamespace::RoomConfig* opts_ = {}, ::StringW targetSessionName_ = {}, ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>* $startupTask$5__2_ = {}, bool $goingBetweenRooms$5__3_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, mode{mode_}, opts{opts_}, targetSessionName{targetSessionName_}, $startupTask$5__2{$startupTask$5__2_}, $goingBetweenRooms$5__3{$goingBetweenRooms$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
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
    // Get instance field reference: public NetworkSystemFusion <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NetworkSystemFusion*& dyn_$$4__this();
    // Get instance field reference: public Fusion.GameMode mode
    [[deprecated("Use field access instead!")]] ::Fusion::GameMode& dyn_mode();
    // Get instance field reference: public RoomConfig opts
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RoomConfig*& dyn_opts();
    // Get instance field reference: public System.String targetSessionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_targetSessionName();
    // Get instance field reference: private System.Threading.Tasks.Task`1<Fusion.StartGameResult> <startupTask>5__2
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*& dyn_$startupTask$5__2();
    // Get instance field reference: private System.Boolean <goingBetweenRooms>5__3
    [[deprecated("Use field access instead!")]] bool& dyn_$goingBetweenRooms$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.StartGameResult> <>u__3
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x290C1B8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x290D16C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkSystemFusion/<Connect>d__52
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemFusion::$Connect$d__52::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemFusion::$Connect$d__52::*)()>(&GlobalNamespace::NetworkSystemFusion::$Connect$d__52::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemFusion::$Connect$d__52), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemFusion::$Connect$d__52::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemFusion::$Connect$d__52::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetworkSystemFusion::$Connect$d__52::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemFusion::$Connect$d__52), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};