// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.FusionAddressablePrefabsPreloader
#include "Fusion/FusionAddressablePrefabsPreloader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: Fusion.NetworkPrefabId
#include "Fusion/NetworkPrefabId.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: INetworkPrefabSource
  class INetworkPrefabSource;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::FusionAddressablePrefabsPreloader::$Start$d__1, "Fusion", "FusionAddressablePrefabsPreloader/<Start>d__1");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.FusionAddressablePrefabsPreloader/<Start>d__1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct FusionAddressablePrefabsPreloader::$Start$d__1/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public Fusion.FusionAddressablePrefabsPreloader <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::FusionAddressablePrefabsPreloader* $$4__this;
    // Field size check
    static_assert(sizeof(::Fusion::FusionAddressablePrefabsPreloader*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>> <>7__wrap1
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>*) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> <handle>5__3
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> $handle$5__3;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*> $$u__1;
    public:
    // Creating value type constructor for type: $Start$d__1
    constexpr $Start$d__1(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::Fusion::FusionAddressablePrefabsPreloader* $$4__this_ = {}, ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>* $$7__wrap1_ = {}, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> $handle$5__3_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_}, $handle$5__3{$handle$5__3_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public Fusion.FusionAddressablePrefabsPreloader <>4__this
    [[deprecated("Use field access instead!")]] ::Fusion::FusionAddressablePrefabsPreloader*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>*& dyn_$$7__wrap1();
    // Get instance field reference: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> <handle>5__3
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>& dyn_$handle$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x2AD2574
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2AD2C14
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Fusion.FusionAddressablePrefabsPreloader/<Start>d__1
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::FusionAddressablePrefabsPreloader::$Start$d__1::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::FusionAddressablePrefabsPreloader::$Start$d__1::*)()>(&Fusion::FusionAddressablePrefabsPreloader::$Start$d__1::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::FusionAddressablePrefabsPreloader::$Start$d__1), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::FusionAddressablePrefabsPreloader::$Start$d__1::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::FusionAddressablePrefabsPreloader::$Start$d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&Fusion::FusionAddressablePrefabsPreloader::$Start$d__1::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::FusionAddressablePrefabsPreloader::$Start$d__1), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
