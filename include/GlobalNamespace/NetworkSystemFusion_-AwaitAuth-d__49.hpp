// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkSystemFusion
#include "GlobalNamespace/NetworkSystemFusion.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49, "", "NetworkSystemFusion/<AwaitAuth>d__49");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkSystemFusion/<AwaitAuth>d__49
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NetworkSystemFusion::$AwaitAuth$d__49/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public NetworkSystemFusion <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::NetworkSystemFusion* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion*) == 0x8);
    // private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    // Size: 0x1
    // Offset: 0x28
    ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter) == 0x1);
    public:
    // Creating value type constructor for type: $AwaitAuth$d__49
    constexpr $AwaitAuth$d__49(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::NetworkSystemFusion* $$4__this_ = {}, ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public NetworkSystemFusion <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NetworkSystemFusion*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x290B280
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x290B540
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkSystemFusion/<AwaitAuth>d__49
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49::*)()>(&GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemFusion::$AwaitAuth$d__49), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
