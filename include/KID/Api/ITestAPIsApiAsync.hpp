// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: KID.Client.IApiAccessor
#include "KID/Client/IApiAccessor.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: KID::Model
namespace KID::Model {
  // Forward declaring type: SetChallengeStatusRequest
  class SetChallengeStatusRequest;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: KID::Client
namespace KID::Client {
  // Forward declaring type: ApiResponse`1<T>
  template<typename T>
  class ApiResponse_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: KID.Api
namespace KID::Api {
  // Forward declaring type: ITestAPIsApiAsync
  class ITestAPIsApiAsync;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::ITestAPIsApiAsync);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::ITestAPIsApiAsync*, "KID.Api", "ITestAPIsApiAsync");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.ITestAPIsApiAsync
  // [TokenAttribute] Offset: FFFFFFFF
  class ITestAPIsApiAsync/*, public ::KID::Client::IApiAccessor*/ {
    public:
    // Creating interface conversion operator: operator ::KID::Client::IApiAccessor
    operator ::KID::Client::IApiAccessor() noexcept {
      return *reinterpret_cast<::KID::Client::IApiAccessor*>(this);
    }
    // public System.Threading.Tasks.Task`1<System.Object> SetChallengeStatusAsync(KID.Model.SetChallengeStatusRequest setChallengeStatusRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task_1<::Il2CppObject*>* SetChallengeStatusAsync(::KID::Model::SetChallengeStatusRequest* setChallengeStatusRequest, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<KID.Client.ApiResponse`1<System.Object>> SetChallengeStatusWithHttpInfoAsync(KID.Model.SetChallengeStatusRequest setChallengeStatusRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::Il2CppObject*>*>* SetChallengeStatusWithHttpInfoAsync(::KID::Model::SetChallengeStatusRequest* setChallengeStatusRequest, ::System::Threading::CancellationToken cancellationToken);
  }; // KID.Api.ITestAPIsApiAsync
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Api::ITestAPIsApiAsync::SetChallengeStatusAsync
// Il2CppName: SetChallengeStatusAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Il2CppObject*>* (KID::Api::ITestAPIsApiAsync::*)(::KID::Model::SetChallengeStatusRequest*, ::System::Threading::CancellationToken)>(&KID::Api::ITestAPIsApiAsync::SetChallengeStatusAsync)> {
  static const MethodInfo* get() {
    static auto* setChallengeStatusRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "SetChallengeStatusRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::ITestAPIsApiAsync*), "SetChallengeStatusAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setChallengeStatusRequest, cancellationToken});
  }
};
// Writing MetadataGetter for method: KID::Api::ITestAPIsApiAsync::SetChallengeStatusWithHttpInfoAsync
// Il2CppName: SetChallengeStatusWithHttpInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::Il2CppObject*>*>* (KID::Api::ITestAPIsApiAsync::*)(::KID::Model::SetChallengeStatusRequest*, ::System::Threading::CancellationToken)>(&KID::Api::ITestAPIsApiAsync::SetChallengeStatusWithHttpInfoAsync)> {
  static const MethodInfo* get() {
    static auto* setChallengeStatusRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "SetChallengeStatusRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::ITestAPIsApiAsync*), "SetChallengeStatusWithHttpInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setChallengeStatusRequest, cancellationToken});
  }
};
