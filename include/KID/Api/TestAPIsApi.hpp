// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: KID.Api.ITestAPIsApi
#include "KID/Api/ITestAPIsApi.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: KID::Api
namespace KID::Api {
}
// Forward declaring namespace: KID::Client
namespace KID::Client {
  // Forward declaring type: ExceptionFactory
  class ExceptionFactory;
  // Forward declaring type: ApiClient
  class ApiClient;
  // Forward declaring type: IAsynchronousClient
  class IAsynchronousClient;
  // Forward declaring type: ISynchronousClient
  class ISynchronousClient;
  // Forward declaring type: IReadableConfiguration
  class IReadableConfiguration;
  // Forward declaring type: Configuration
  class Configuration;
  // Forward declaring type: ApiResponse`1<T>
  template<typename T>
  class ApiResponse_1;
}
// Forward declaring namespace: KID::Model
namespace KID::Model {
  // Forward declaring type: SetChallengeStatusRequest
  class SetChallengeStatusRequest;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: KID.Api
namespace KID::Api {
  // Forward declaring type: TestAPIsApi
  class TestAPIsApi;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::TestAPIsApi);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::TestAPIsApi*, "KID.Api", "TestAPIsApi");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.TestAPIsApi
  // [TokenAttribute] Offset: FFFFFFFF
  class TestAPIsApi : public ::Il2CppObject/*, public ::System::IDisposable, public ::KID::Api::ITestAPIsApi*/ {
    public:
    // Nested type: ::KID::Api::TestAPIsApi::$$c
    class $$c;
    // Nested type: ::KID::Api::TestAPIsApi::$SetChallengeStatusAsync$d__28
    struct $SetChallengeStatusAsync$d__28;
    // Nested type: ::KID::Api::TestAPIsApi::$SetChallengeStatusWithHttpInfoAsync$d__29
    struct $SetChallengeStatusWithHttpInfoAsync$d__29;
    public:
    // private KID.Client.ExceptionFactory _exceptionFactory
    // Size: 0x8
    // Offset: 0x10
    ::KID::Client::ExceptionFactory* exceptionFactory;
    // Field size check
    static_assert(sizeof(::KID::Client::ExceptionFactory*) == 0x8);
    // private KID.Client.ApiClient <ApiClient>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::KID::Client::ApiClient* ApiClient;
    // Field size check
    static_assert(sizeof(::KID::Client::ApiClient*) == 0x8);
    // private KID.Client.IAsynchronousClient <AsynchronousClient>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::KID::Client::IAsynchronousClient* AsynchronousClient;
    // Field size check
    static_assert(sizeof(::KID::Client::IAsynchronousClient*) == 0x8);
    // private KID.Client.ISynchronousClient <Client>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::KID::Client::ISynchronousClient* Client;
    // Field size check
    static_assert(sizeof(::KID::Client::ISynchronousClient*) == 0x8);
    // private KID.Client.IReadableConfiguration <Configuration>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::KID::Client::IReadableConfiguration* Configuration;
    // Field size check
    static_assert(sizeof(::KID::Client::IReadableConfiguration*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::KID::Api::ITestAPIsApi
    operator ::KID::Api::ITestAPIsApi() noexcept {
      return *reinterpret_cast<::KID::Api::ITestAPIsApi*>(this);
    }
    // Get instance field reference: private KID.Client.ExceptionFactory _exceptionFactory
    [[deprecated("Use field access instead!")]] ::KID::Client::ExceptionFactory*& dyn__exceptionFactory();
    // Get instance field reference: private KID.Client.ApiClient <ApiClient>k__BackingField
    [[deprecated("Use field access instead!")]] ::KID::Client::ApiClient*& dyn_$ApiClient$k__BackingField();
    // Get instance field reference: private KID.Client.IAsynchronousClient <AsynchronousClient>k__BackingField
    [[deprecated("Use field access instead!")]] ::KID::Client::IAsynchronousClient*& dyn_$AsynchronousClient$k__BackingField();
    // Get instance field reference: private KID.Client.ISynchronousClient <Client>k__BackingField
    [[deprecated("Use field access instead!")]] ::KID::Client::ISynchronousClient*& dyn_$Client$k__BackingField();
    // Get instance field reference: private KID.Client.IReadableConfiguration <Configuration>k__BackingField
    [[deprecated("Use field access instead!")]] ::KID::Client::IReadableConfiguration*& dyn_$Configuration$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x439814C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestAPIsApi* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::TestAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestAPIsApi*, creationType>()));
    }
    // public System.Void .ctor(System.String basePath)
    // Offset: 0x4398154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestAPIsApi* New_ctor(::StringW basePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::TestAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestAPIsApi*, creationType>(basePath)));
    }
    // public System.Void .ctor(KID.Client.Configuration configuration)
    // Offset: 0x439841C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestAPIsApi* New_ctor(::KID::Client::Configuration* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::TestAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestAPIsApi*, creationType>(configuration)));
    }
    // public System.Void .ctor(KID.Client.ISynchronousClient client, KID.Client.IAsynchronousClient asyncClient, KID.Client.IReadableConfiguration configuration)
    // Offset: 0x4398700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestAPIsApi* New_ctor(::KID::Client::ISynchronousClient* client, ::KID::Client::IAsynchronousClient* asyncClient, ::KID::Client::IReadableConfiguration* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::TestAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestAPIsApi*, creationType>(client, asyncClient, configuration)));
    }
    // public System.Void Dispose()
    // Offset: 0x439890C
    void Dispose();
    // public KID.Client.ApiClient get_ApiClient()
    // Offset: 0x4398910
    ::KID::Client::ApiClient* get_ApiClient();
    // public System.Void set_ApiClient(KID.Client.ApiClient value)
    // Offset: 0x4398918
    void set_ApiClient(::KID::Client::ApiClient* value);
    // public KID.Client.IAsynchronousClient get_AsynchronousClient()
    // Offset: 0x4398920
    ::KID::Client::IAsynchronousClient* get_AsynchronousClient();
    // public System.Void set_AsynchronousClient(KID.Client.IAsynchronousClient value)
    // Offset: 0x4398928
    void set_AsynchronousClient(::KID::Client::IAsynchronousClient* value);
    // public KID.Client.ISynchronousClient get_Client()
    // Offset: 0x4398930
    ::KID::Client::ISynchronousClient* get_Client();
    // public System.Void set_Client(KID.Client.ISynchronousClient value)
    // Offset: 0x4398938
    void set_Client(::KID::Client::ISynchronousClient* value);
    // public System.String GetBasePath()
    // Offset: 0x4398940
    ::StringW GetBasePath();
    // public KID.Client.IReadableConfiguration get_Configuration()
    // Offset: 0x43989E4
    ::KID::Client::IReadableConfiguration* get_Configuration();
    // public System.Void set_Configuration(KID.Client.IReadableConfiguration value)
    // Offset: 0x43989EC
    void set_Configuration(::KID::Client::IReadableConfiguration* value);
    // public KID.Client.ExceptionFactory get_ExceptionFactory()
    // Offset: 0x43989F4
    ::KID::Client::ExceptionFactory* get_ExceptionFactory();
    // public System.Void set_ExceptionFactory(KID.Client.ExceptionFactory value)
    // Offset: 0x4398A78
    void set_ExceptionFactory(::KID::Client::ExceptionFactory* value);
    // public System.Object SetChallengeStatus(KID.Model.SetChallengeStatusRequest setChallengeStatusRequest)
    // Offset: 0x4398A80
    ::Il2CppObject* SetChallengeStatus(::KID::Model::SetChallengeStatusRequest* setChallengeStatusRequest);
    // public KID.Client.ApiResponse`1<System.Object> SetChallengeStatusWithHttpInfo(KID.Model.SetChallengeStatusRequest setChallengeStatusRequest)
    // Offset: 0x4398AD4
    ::KID::Client::ApiResponse_1<::Il2CppObject*>* SetChallengeStatusWithHttpInfo(::KID::Model::SetChallengeStatusRequest* setChallengeStatusRequest);
    // public System.Threading.Tasks.Task`1<System.Object> SetChallengeStatusAsync(KID.Model.SetChallengeStatusRequest setChallengeStatusRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4398F58
    ::System::Threading::Tasks::Task_1<::Il2CppObject*>* SetChallengeStatusAsync(::KID::Model::SetChallengeStatusRequest* setChallengeStatusRequest, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<KID.Client.ApiResponse`1<System.Object>> SetChallengeStatusWithHttpInfoAsync(KID.Model.SetChallengeStatusRequest setChallengeStatusRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4399098
    ::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::Il2CppObject*>*>* SetChallengeStatusWithHttpInfoAsync(::KID::Model::SetChallengeStatusRequest* setChallengeStatusRequest, ::System::Threading::CancellationToken cancellationToken);
  }; // KID.Api.TestAPIsApi
  #pragma pack(pop)
  static check_size<sizeof(TestAPIsApi), 48 + sizeof(::KID::Client::IReadableConfiguration*)> __KID_Api_TestAPIsApiSizeCheck;
  static_assert(sizeof(TestAPIsApi) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::TestAPIsApi::*)()>(&KID::Api::TestAPIsApi::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::get_ApiClient
// Il2CppName: get_ApiClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ApiClient* (KID::Api::TestAPIsApi::*)()>(&KID::Api::TestAPIsApi::get_ApiClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "get_ApiClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::set_ApiClient
// Il2CppName: set_ApiClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::TestAPIsApi::*)(::KID::Client::ApiClient*)>(&KID::Api::TestAPIsApi::set_ApiClient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ApiClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "set_ApiClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::get_AsynchronousClient
// Il2CppName: get_AsynchronousClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::IAsynchronousClient* (KID::Api::TestAPIsApi::*)()>(&KID::Api::TestAPIsApi::get_AsynchronousClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "get_AsynchronousClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::set_AsynchronousClient
// Il2CppName: set_AsynchronousClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::TestAPIsApi::*)(::KID::Client::IAsynchronousClient*)>(&KID::Api::TestAPIsApi::set_AsynchronousClient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "IAsynchronousClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "set_AsynchronousClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::get_Client
// Il2CppName: get_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ISynchronousClient* (KID::Api::TestAPIsApi::*)()>(&KID::Api::TestAPIsApi::get_Client)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "get_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::set_Client
// Il2CppName: set_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::TestAPIsApi::*)(::KID::Client::ISynchronousClient*)>(&KID::Api::TestAPIsApi::set_Client)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ISynchronousClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "set_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::GetBasePath
// Il2CppName: GetBasePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Api::TestAPIsApi::*)()>(&KID::Api::TestAPIsApi::GetBasePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "GetBasePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::get_Configuration
// Il2CppName: get_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::IReadableConfiguration* (KID::Api::TestAPIsApi::*)()>(&KID::Api::TestAPIsApi::get_Configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "get_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::set_Configuration
// Il2CppName: set_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::TestAPIsApi::*)(::KID::Client::IReadableConfiguration*)>(&KID::Api::TestAPIsApi::set_Configuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "IReadableConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "set_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::get_ExceptionFactory
// Il2CppName: get_ExceptionFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ExceptionFactory* (KID::Api::TestAPIsApi::*)()>(&KID::Api::TestAPIsApi::get_ExceptionFactory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "get_ExceptionFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::set_ExceptionFactory
// Il2CppName: set_ExceptionFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::TestAPIsApi::*)(::KID::Client::ExceptionFactory*)>(&KID::Api::TestAPIsApi::set_ExceptionFactory)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ExceptionFactory")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "set_ExceptionFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::SetChallengeStatus
// Il2CppName: SetChallengeStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (KID::Api::TestAPIsApi::*)(::KID::Model::SetChallengeStatusRequest*)>(&KID::Api::TestAPIsApi::SetChallengeStatus)> {
  static const MethodInfo* get() {
    static auto* setChallengeStatusRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "SetChallengeStatusRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "SetChallengeStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setChallengeStatusRequest});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::SetChallengeStatusWithHttpInfo
// Il2CppName: SetChallengeStatusWithHttpInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ApiResponse_1<::Il2CppObject*>* (KID::Api::TestAPIsApi::*)(::KID::Model::SetChallengeStatusRequest*)>(&KID::Api::TestAPIsApi::SetChallengeStatusWithHttpInfo)> {
  static const MethodInfo* get() {
    static auto* setChallengeStatusRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "SetChallengeStatusRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "SetChallengeStatusWithHttpInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setChallengeStatusRequest});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::SetChallengeStatusAsync
// Il2CppName: SetChallengeStatusAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Il2CppObject*>* (KID::Api::TestAPIsApi::*)(::KID::Model::SetChallengeStatusRequest*, ::System::Threading::CancellationToken)>(&KID::Api::TestAPIsApi::SetChallengeStatusAsync)> {
  static const MethodInfo* get() {
    static auto* setChallengeStatusRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "SetChallengeStatusRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "SetChallengeStatusAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setChallengeStatusRequest, cancellationToken});
  }
};
// Writing MetadataGetter for method: KID::Api::TestAPIsApi::SetChallengeStatusWithHttpInfoAsync
// Il2CppName: SetChallengeStatusWithHttpInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::Il2CppObject*>*>* (KID::Api::TestAPIsApi::*)(::KID::Model::SetChallengeStatusRequest*, ::System::Threading::CancellationToken)>(&KID::Api::TestAPIsApi::SetChallengeStatusWithHttpInfoAsync)> {
  static const MethodInfo* get() {
    static auto* setChallengeStatusRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "SetChallengeStatusRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::TestAPIsApi*), "SetChallengeStatusWithHttpInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setChallengeStatusRequest, cancellationToken});
  }
};
