// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LegalAgreements
#include "GlobalNamespace/LegalAgreements.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LegalAgreementTextAsset
  class LegalAgreementTextAsset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27, "", "LegalAgreements/<GetAcceptedAgreements>d__27");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LegalAgreements/<GetAcceptedAgreements>d__27
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LegalAgreements::$GetAcceptedAgreements$d__27/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> $$t__builder;
    // public LegalAgreementTextAsset[] agreements
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*> agreements;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>) == 0x8);
    // private LegalAgreements/<>c__DisplayClass27_0 <>8__1
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::LegalAgreements::$$c__DisplayClass27_0* $$8__1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LegalAgreements::$$c__DisplayClass27_0*) == 0x8);
    // private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    // Size: 0x1
    // Offset: 0x30
    ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter) == 0x1);
    public:
    // Creating value type constructor for type: $GetAcceptedAgreements$d__27
    constexpr $GetAcceptedAgreements$d__27(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> $$t__builder_ = {}, ::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*> agreements_ = ::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>(static_cast<void*>(nullptr)), ::GlobalNamespace::LegalAgreements::$$c__DisplayClass27_0* $$8__1_ = {}, ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, agreements{agreements_}, $$8__1{$$8__1_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>& dyn_$$t__builder();
    // Get instance field reference: public LegalAgreementTextAsset[] agreements
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>& dyn_agreements();
    // Get instance field reference: private LegalAgreements/<>c__DisplayClass27_0 <>8__1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LegalAgreements::$$c__DisplayClass27_0*& dyn_$$8__1();
    // Get instance field reference: private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x2753F40
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x275442C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LegalAgreements/<GetAcceptedAgreements>d__27
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27::*)()>(&GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
