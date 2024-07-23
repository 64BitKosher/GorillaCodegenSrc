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
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OVRAnchor
#include "GlobalNamespace/OVRAnchor.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: List`1 because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6, "", "SnapshotSceneManager/<LoadSceneSnapshotAsync>d__6");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SnapshotSceneManager/<LoadSceneSnapshotAsync>d__6
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<SnapshotSceneManager/SceneSnapshot> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*> $$t__builder;
    // private SnapshotSceneManager/SceneSnapshot <snapshot>5__2
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SnapshotSceneManager::SceneSnapshot* $snapshot$5__2;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*) == 0x8);
    // private System.Collections.Generic.List`1<OVRAnchor> <rooms>5__3
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* $rooms$5__3;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*) == 0x8);
    // private OVRTask`1/Awaiter<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter $$u__1;
    // private System.Collections.Generic.List`1/Enumerator<OVRAnchor> <>7__wrap3
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    typename ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>::Enumerator $$7__wrap3;
    // private OVRAnchor <room>5__5
    // Size: 0x18
    // Offset: 0x68
    ::GlobalNamespace::OVRAnchor $room$5__5;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRAnchor) == 0x18);
    // private System.Collections.Generic.List`1<OVRAnchor> <children>5__6
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* $children$5__6;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*) == 0x8);
    public:
    // Creating value type constructor for type: $LoadSceneSnapshotAsync$d__6
    constexpr $LoadSceneSnapshotAsync$d__6(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*> $$t__builder_ = {}, ::GlobalNamespace::SnapshotSceneManager::SceneSnapshot* $snapshot$5__2_ = {}, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* $rooms$5__3_ = {}, typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter $$u__1_ = {}, typename ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>::Enumerator $$7__wrap3_ = {}, ::GlobalNamespace::OVRAnchor $room$5__5_ = {}, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* $children$5__6_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $snapshot$5__2{$snapshot$5__2_}, $rooms$5__3{$rooms$5__3_}, $$u__1{$$u__1_}, $$7__wrap3{$$7__wrap3_}, $room$5__5{$room$5__5_}, $children$5__6{$children$5__6_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<SnapshotSceneManager/SceneSnapshot> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*>& dyn_$$t__builder();
    // Get instance field reference: private SnapshotSceneManager/SceneSnapshot <snapshot>5__2
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SnapshotSceneManager::SceneSnapshot*& dyn_$snapshot$5__2();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRAnchor> <rooms>5__3
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& dyn_$rooms$5__3();
    // Get instance field reference: private OVRTask`1/Awaiter<System.Boolean> <>u__1
    [[deprecated("Use field access instead!")]] typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter& dyn_$$u__1();
    // Get instance field reference: private System.Collections.Generic.List`1/Enumerator<OVRAnchor> <>7__wrap3
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>::Enumerator& dyn_$$7__wrap3();
    // Get instance field reference: private OVRAnchor <room>5__5
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRAnchor& dyn_$room$5__5();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRAnchor> <children>5__6
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& dyn_$children$5__6();
    // private System.Void MoveNext()
    // Offset: 0x2945DEC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x29464C8
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // SnapshotSceneManager/<LoadSceneSnapshotAsync>d__6
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6::*)()>(&GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SnapshotSceneManager::$LoadSceneSnapshotAsync$d__6), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};