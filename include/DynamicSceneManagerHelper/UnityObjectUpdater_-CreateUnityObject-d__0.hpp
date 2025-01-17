// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DynamicSceneManagerHelper.UnityObjectUpdater
#include "DynamicSceneManagerHelper/UnityObjectUpdater.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OVRAnchor
#include "GlobalNamespace/OVRAnchor.hpp"
// Including type: OVRLocatable
#include "GlobalNamespace/OVRLocatable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0, "DynamicSceneManagerHelper", "UnityObjectUpdater/<CreateUnityObject>d__0");
// Type namespace: DynamicSceneManagerHelper
namespace DynamicSceneManagerHelper {
  // WARNING Size may be invalid!
  // Autogenerated type: DynamicSceneManagerHelper.UnityObjectUpdater/<CreateUnityObject>d__0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct UnityObjectUpdater::$CreateUnityObject$d__0/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::GameObject*> $$t__builder;
    // public OVRAnchor anchor
    // Size: 0x18
    // Offset: 0x20
    ::GlobalNamespace::OVRAnchor anchor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRAnchor) == 0x18);
    // public UnityEngine.GameObject parent
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* parent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private OVRLocatable <locatable>5__2
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::OVRLocatable $locatable$5__2;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRLocatable) == 0x8);
    // private OVRTask`1/Awaiter<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter $$u__1;
    public:
    // Creating value type constructor for type: $CreateUnityObject$d__0
    constexpr $CreateUnityObject$d__0(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::GameObject*> $$t__builder_ = {}, ::GlobalNamespace::OVRAnchor anchor_ = {}, ::UnityEngine::GameObject* parent_ = {}, ::GlobalNamespace::OVRLocatable $locatable$5__2_ = {}, typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, anchor{anchor_}, parent{parent_}, $locatable$5__2{$locatable$5__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::GameObject*>& dyn_$$t__builder();
    // Get instance field reference: public OVRAnchor anchor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRAnchor& dyn_anchor();
    // Get instance field reference: public UnityEngine.GameObject parent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_parent();
    // Get instance field reference: private OVRLocatable <locatable>5__2
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRLocatable& dyn_$locatable$5__2();
    // Get instance field reference: private OVRTask`1/Awaiter<System.Boolean> <>u__1
    [[deprecated("Use field access instead!")]] typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x281F69C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x281FBF4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // DynamicSceneManagerHelper.UnityObjectUpdater/<CreateUnityObject>d__0
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0::*)()>(&DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
