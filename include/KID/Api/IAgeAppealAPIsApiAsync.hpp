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
  // Forward declaring type: CheckAgeAppealResponse
  class CheckAgeAppealResponse;
  // Forward declaring type: CheckAgeAppealRequest
  class CheckAgeAppealRequest;
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
// Type namespace: KID.Api
namespace KID::Api {
  // Forward declaring type: IAgeAppealAPIsApiAsync
  class IAgeAppealAPIsApiAsync;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::IAgeAppealAPIsApiAsync);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::IAgeAppealAPIsApiAsync*, "KID.Api", "IAgeAppealAPIsApiAsync");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.IAgeAppealAPIsApiAsync
  // [TokenAttribute] Offset: FFFFFFFF
  class IAgeAppealAPIsApiAsync/*, public ::KID::Client::IApiAccessor*/ {
    public:
    // Creating interface conversion operator: operator ::KID::Client::IApiAccessor
    operator ::KID::Client::IApiAccessor() noexcept {
      return *reinterpret_cast<::KID::Client::IApiAccessor*>(this);
    }
    // public System.Threading.Tasks.Task`1<KID.Model.CheckAgeAppealResponse> CheckAgeAppealAsync(KID.Model.CheckAgeAppealRequest checkAgeAppealRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task_1<::KID::Model::CheckAgeAppealResponse*>* CheckAgeAppealAsync(::KID::Model::CheckAgeAppealRequest* checkAgeAppealRequest, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<KID.Client.ApiResponse`1<KID.Model.CheckAgeAppealResponse>> CheckAgeAppealWithHttpInfoAsync(KID.Model.CheckAgeAppealRequest checkAgeAppealRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::CheckAgeAppealResponse*>*>* CheckAgeAppealWithHttpInfoAsync(::KID::Model::CheckAgeAppealRequest* checkAgeAppealRequest, ::System::Threading::CancellationToken cancellationToken);
  }; // KID.Api.IAgeAppealAPIsApiAsync
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Api::IAgeAppealAPIsApiAsync::CheckAgeAppealAsync
// Il2CppName: CheckAgeAppealAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Model::CheckAgeAppealResponse*>* (KID::Api::IAgeAppealAPIsApiAsync::*)(::KID::Model::CheckAgeAppealRequest*, ::System::Threading::CancellationToken)>(&KID::Api::IAgeAppealAPIsApiAsync::CheckAgeAppealAsync)> {
  static const MethodInfo* get() {
    static auto* checkAgeAppealRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "CheckAgeAppealRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::IAgeAppealAPIsApiAsync*), "CheckAgeAppealAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checkAgeAppealRequest, cancellationToken});
  }
};
// Writing MetadataGetter for method: KID::Api::IAgeAppealAPIsApiAsync::CheckAgeAppealWithHttpInfoAsync
// Il2CppName: CheckAgeAppealWithHttpInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::CheckAgeAppealResponse*>*>* (KID::Api::IAgeAppealAPIsApiAsync::*)(::KID::Model::CheckAgeAppealRequest*, ::System::Threading::CancellationToken)>(&KID::Api::IAgeAppealAPIsApiAsync::CheckAgeAppealWithHttpInfoAsync)> {
  static const MethodInfo* get() {
    static auto* checkAgeAppealRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "CheckAgeAppealRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::IAgeAppealAPIsApiAsync*), "CheckAgeAppealWithHttpInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checkAgeAppealRequest, cancellationToken});
  }
};
