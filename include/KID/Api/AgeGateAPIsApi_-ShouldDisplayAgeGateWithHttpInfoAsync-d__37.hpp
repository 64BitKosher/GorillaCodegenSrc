// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: KID.Api.AgeGateAPIsApi
#include "KID/Api/AgeGateAPIsApi.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: KID::Client
namespace KID::Client {
  // Forward declaring type: ApiResponse`1<T>
  template<typename T>
  class ApiResponse_1;
}
// Forward declaring namespace: KID::Model
namespace KID::Model {
  // Forward declaring type: ShouldDisplayAgeGateResponse
  class ShouldDisplayAgeGateResponse;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37, "KID.Api", "AgeGateAPIsApi/<ShouldDisplayAgeGateWithHttpInfoAsync>d__37");
// Type namespace: KID.Api
namespace KID::Api {
  // WARNING Size may be invalid!
  // Autogenerated type: KID.Api.AgeGateAPIsApi/<ShouldDisplayAgeGateWithHttpInfoAsync>d__37
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<KID.Client.ApiResponse`1<KID.Model.ShouldDisplayAgeGateResponse>> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::KID::Client::ApiResponse_1<::KID::Model::ShouldDisplayAgeGateResponse*>*> $$t__builder;
    // public System.String jurisdiction
    // Size: 0x8
    // Offset: 0x20
    ::StringW jurisdiction;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public KID.Api.AgeGateAPIsApi <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::KID::Api::AgeGateAPIsApi* $$4__this;
    // Field size check
    static_assert(sizeof(::KID::Api::AgeGateAPIsApi*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<KID.Client.ApiResponse`1<KID.Model.ShouldDisplayAgeGateResponse>> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::KID::Client::ApiResponse_1<::KID::Model::ShouldDisplayAgeGateResponse*>*>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $ShouldDisplayAgeGateWithHttpInfoAsync$d__37
    constexpr $ShouldDisplayAgeGateWithHttpInfoAsync$d__37(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::KID::Client::ApiResponse_1<::KID::Model::ShouldDisplayAgeGateResponse*>*> $$t__builder_ = {}, ::StringW jurisdiction_ = {}, ::KID::Api::AgeGateAPIsApi* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::KID::Client::ApiResponse_1<::KID::Model::ShouldDisplayAgeGateResponse*>*>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, jurisdiction{jurisdiction_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<KID.Client.ApiResponse`1<KID.Model.ShouldDisplayAgeGateResponse>> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::KID::Client::ApiResponse_1<::KID::Model::ShouldDisplayAgeGateResponse*>*>& dyn_$$t__builder();
    // Get instance field reference: public System.String jurisdiction
    [[deprecated("Use field access instead!")]] ::StringW& dyn_jurisdiction();
    // Get instance field reference: public KID.Api.AgeGateAPIsApi <>4__this
    [[deprecated("Use field access instead!")]] ::KID::Api::AgeGateAPIsApi*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<KID.Client.ApiResponse`1<KID.Model.ShouldDisplayAgeGateResponse>> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::KID::Client::ApiResponse_1<::KID::Model::ShouldDisplayAgeGateResponse*>*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x438EFB4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x438F73C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // KID.Api.AgeGateAPIsApi/<ShouldDisplayAgeGateWithHttpInfoAsync>d__37
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37::*)()>(&KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AgeGateAPIsApi::$ShouldDisplayAgeGateWithHttpInfoAsync$d__37), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
