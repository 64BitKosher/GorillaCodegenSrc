// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SnapshotSceneManager
#include "GlobalNamespace/SnapshotSceneManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: OVRAnchor
#include "GlobalNamespace/OVRAnchor.hpp"
// Including type: SnapshotSceneManager/SnapshotComparer/ChangeType
#include "GlobalNamespace/SnapshotSceneManager_SnapshotComparer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5, "", "SnapshotSceneManager/<UpdateScene>d__5");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SnapshotSceneManager/<UpdateScene>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct SnapshotSceneManager::$UpdateScene$d__5/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public SnapshotSceneManager <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SnapshotSceneManager* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SnapshotSceneManager*) == 0x8);
    // private SnapshotSceneManager/SceneSnapshot <currentSnapshot>5__2
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::SnapshotSceneManager::SceneSnapshot* $currentSnapshot$5__2;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<SnapshotSceneManager/SceneSnapshot> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.ValueTuple`2<OVRAnchor,SnapshotSceneManager/SnapshotComparer/ChangeType>>> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::SnapshotSceneManager::SnapshotComparer::ChangeType>>*> $$u__2;
    public:
    // Creating value type constructor for type: $UpdateScene$d__5
    constexpr $UpdateScene$d__5(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::SnapshotSceneManager* $$4__this_ = {}, ::GlobalNamespace::SnapshotSceneManager::SceneSnapshot* $currentSnapshot$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*> $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::SnapshotSceneManager::SnapshotComparer::ChangeType>>*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $currentSnapshot$5__2{$currentSnapshot$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public SnapshotSceneManager <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SnapshotSceneManager*& dyn_$$4__this();
    // Get instance field reference: private SnapshotSceneManager/SceneSnapshot <currentSnapshot>5__2
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*& dyn_$currentSnapshot$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<SnapshotSceneManager/SceneSnapshot> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<System.ValueTuple`2<OVRAnchor,SnapshotSceneManager/SnapshotComparer/ChangeType>>> <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::SnapshotSceneManager::SnapshotComparer::ChangeType>>*>& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x2946520
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2946B6C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // SnapshotSceneManager/<UpdateScene>d__5
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5::*)()>(&GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SnapshotSceneManager::$UpdateScene$d__5), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
