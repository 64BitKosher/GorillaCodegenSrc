// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: KID.Api.IAuthAPIsApi
#include "KID/Api/IAuthAPIsApi.hpp"
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
  // Forward declaring type: IssueAuthTokenResponse
  class IssueAuthTokenResponse;
  // Forward declaring type: CreateClientAuthTokenRequest
  class CreateClientAuthTokenRequest;
  // Forward declaring type: RefreshClientAuthTokenRequest
  class RefreshClientAuthTokenRequest;
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
  // Forward declaring type: AuthAPIsApi
  class AuthAPIsApi;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::AuthAPIsApi);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::AuthAPIsApi*, "KID.Api", "AuthAPIsApi");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.AuthAPIsApi
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthAPIsApi : public ::Il2CppObject/*, public ::System::IDisposable, public ::KID::Api::IAuthAPIsApi*/ {
    public:
    // Nested type: ::KID::Api::AuthAPIsApi::$$c
    class $$c;
    // Nested type: ::KID::Api::AuthAPIsApi::$CreateClientAuthTokenAsync$d__28
    struct $CreateClientAuthTokenAsync$d__28;
    // Nested type: ::KID::Api::AuthAPIsApi::$CreateClientAuthTokenWithHttpInfoAsync$d__29
    struct $CreateClientAuthTokenWithHttpInfoAsync$d__29;
    // Nested type: ::KID::Api::AuthAPIsApi::$RefreshClientAuthTokenAsync$d__32
    struct $RefreshClientAuthTokenAsync$d__32;
    // Nested type: ::KID::Api::AuthAPIsApi::$RefreshClientAuthTokenWithHttpInfoAsync$d__33
    struct $RefreshClientAuthTokenWithHttpInfoAsync$d__33;
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
    // Creating interface conversion operator: operator ::KID::Api::IAuthAPIsApi
    operator ::KID::Api::IAuthAPIsApi() noexcept {
      return *reinterpret_cast<::KID::Api::IAuthAPIsApi*>(this);
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
    // Offset: 0x438F794
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthAPIsApi* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::AuthAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthAPIsApi*, creationType>()));
    }
    // public System.Void .ctor(System.String basePath)
    // Offset: 0x438F79C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthAPIsApi* New_ctor(::StringW basePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::AuthAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthAPIsApi*, creationType>(basePath)));
    }
    // public System.Void .ctor(KID.Client.Configuration configuration)
    // Offset: 0x438FA64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthAPIsApi* New_ctor(::KID::Client::Configuration* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::AuthAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthAPIsApi*, creationType>(configuration)));
    }
    // public System.Void .ctor(KID.Client.ISynchronousClient client, KID.Client.IAsynchronousClient asyncClient, KID.Client.IReadableConfiguration configuration)
    // Offset: 0x438FD48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthAPIsApi* New_ctor(::KID::Client::ISynchronousClient* client, ::KID::Client::IAsynchronousClient* asyncClient, ::KID::Client::IReadableConfiguration* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::AuthAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthAPIsApi*, creationType>(client, asyncClient, configuration)));
    }
    // public System.Void Dispose()
    // Offset: 0x438FF54
    void Dispose();
    // public KID.Client.ApiClient get_ApiClient()
    // Offset: 0x438FF58
    ::KID::Client::ApiClient* get_ApiClient();
    // public System.Void set_ApiClient(KID.Client.ApiClient value)
    // Offset: 0x438FF60
    void set_ApiClient(::KID::Client::ApiClient* value);
    // public KID.Client.IAsynchronousClient get_AsynchronousClient()
    // Offset: 0x438FF68
    ::KID::Client::IAsynchronousClient* get_AsynchronousClient();
    // public System.Void set_AsynchronousClient(KID.Client.IAsynchronousClient value)
    // Offset: 0x438FF70
    void set_AsynchronousClient(::KID::Client::IAsynchronousClient* value);
    // public KID.Client.ISynchronousClient get_Client()
    // Offset: 0x438FF78
    ::KID::Client::ISynchronousClient* get_Client();
    // public System.Void set_Client(KID.Client.ISynchronousClient value)
    // Offset: 0x438FF80
    void set_Client(::KID::Client::ISynchronousClient* value);
    // public System.String GetBasePath()
    // Offset: 0x438FF88
    ::StringW GetBasePath();
    // public KID.Client.IReadableConfiguration get_Configuration()
    // Offset: 0x439002C
    ::KID::Client::IReadableConfiguration* get_Configuration();
    // public System.Void set_Configuration(KID.Client.IReadableConfiguration value)
    // Offset: 0x4390034
    void set_Configuration(::KID::Client::IReadableConfiguration* value);
    // public KID.Client.ExceptionFactory get_ExceptionFactory()
    // Offset: 0x439003C
    ::KID::Client::ExceptionFactory* get_ExceptionFactory();
    // public System.Void set_ExceptionFactory(KID.Client.ExceptionFactory value)
    // Offset: 0x43900C0
    void set_ExceptionFactory(::KID::Client::ExceptionFactory* value);
    // public KID.Model.IssueAuthTokenResponse CreateClientAuthToken(KID.Model.CreateClientAuthTokenRequest createClientAuthTokenRequest)
    // Offset: 0x43900C8
    ::KID::Model::IssueAuthTokenResponse* CreateClientAuthToken(::KID::Model::CreateClientAuthTokenRequest* createClientAuthTokenRequest);
    // public KID.Client.ApiResponse`1<KID.Model.IssueAuthTokenResponse> CreateClientAuthTokenWithHttpInfo(KID.Model.CreateClientAuthTokenRequest createClientAuthTokenRequest)
    // Offset: 0x439011C
    ::KID::Client::ApiResponse_1<::KID::Model::IssueAuthTokenResponse*>* CreateClientAuthTokenWithHttpInfo(::KID::Model::CreateClientAuthTokenRequest* createClientAuthTokenRequest);
    // public System.Threading.Tasks.Task`1<KID.Model.IssueAuthTokenResponse> CreateClientAuthTokenAsync(KID.Model.CreateClientAuthTokenRequest createClientAuthTokenRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x43905A0
    ::System::Threading::Tasks::Task_1<::KID::Model::IssueAuthTokenResponse*>* CreateClientAuthTokenAsync(::KID::Model::CreateClientAuthTokenRequest* createClientAuthTokenRequest, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<KID.Client.ApiResponse`1<KID.Model.IssueAuthTokenResponse>> CreateClientAuthTokenWithHttpInfoAsync(KID.Model.CreateClientAuthTokenRequest createClientAuthTokenRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x43906D0
    ::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::IssueAuthTokenResponse*>*>* CreateClientAuthTokenWithHttpInfoAsync(::KID::Model::CreateClientAuthTokenRequest* createClientAuthTokenRequest, ::System::Threading::CancellationToken cancellationToken);
    // public KID.Model.IssueAuthTokenResponse RefreshClientAuthToken(KID.Model.RefreshClientAuthTokenRequest refreshClientAuthTokenRequest)
    // Offset: 0x4390800
    ::KID::Model::IssueAuthTokenResponse* RefreshClientAuthToken(::KID::Model::RefreshClientAuthTokenRequest* refreshClientAuthTokenRequest);
    // public KID.Client.ApiResponse`1<KID.Model.IssueAuthTokenResponse> RefreshClientAuthTokenWithHttpInfo(KID.Model.RefreshClientAuthTokenRequest refreshClientAuthTokenRequest)
    // Offset: 0x4390854
    ::KID::Client::ApiResponse_1<::KID::Model::IssueAuthTokenResponse*>* RefreshClientAuthTokenWithHttpInfo(::KID::Model::RefreshClientAuthTokenRequest* refreshClientAuthTokenRequest);
    // public System.Threading.Tasks.Task`1<KID.Model.IssueAuthTokenResponse> RefreshClientAuthTokenAsync(KID.Model.RefreshClientAuthTokenRequest refreshClientAuthTokenRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4390CD8
    ::System::Threading::Tasks::Task_1<::KID::Model::IssueAuthTokenResponse*>* RefreshClientAuthTokenAsync(::KID::Model::RefreshClientAuthTokenRequest* refreshClientAuthTokenRequest, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<KID.Client.ApiResponse`1<KID.Model.IssueAuthTokenResponse>> RefreshClientAuthTokenWithHttpInfoAsync(KID.Model.RefreshClientAuthTokenRequest refreshClientAuthTokenRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x4390E08
    ::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::IssueAuthTokenResponse*>*>* RefreshClientAuthTokenWithHttpInfoAsync(::KID::Model::RefreshClientAuthTokenRequest* refreshClientAuthTokenRequest, ::System::Threading::CancellationToken cancellationToken);
  }; // KID.Api.AuthAPIsApi
  #pragma pack(pop)
  static check_size<sizeof(AuthAPIsApi), 48 + sizeof(::KID::Client::IReadableConfiguration*)> __KID_Api_AuthAPIsApiSizeCheck;
  static_assert(sizeof(AuthAPIsApi) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::AuthAPIsApi::*)()>(&KID::Api::AuthAPIsApi::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::get_ApiClient
// Il2CppName: get_ApiClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ApiClient* (KID::Api::AuthAPIsApi::*)()>(&KID::Api::AuthAPIsApi::get_ApiClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "get_ApiClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::set_ApiClient
// Il2CppName: set_ApiClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::AuthAPIsApi::*)(::KID::Client::ApiClient*)>(&KID::Api::AuthAPIsApi::set_ApiClient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ApiClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "set_ApiClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::get_AsynchronousClient
// Il2CppName: get_AsynchronousClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::IAsynchronousClient* (KID::Api::AuthAPIsApi::*)()>(&KID::Api::AuthAPIsApi::get_AsynchronousClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "get_AsynchronousClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::set_AsynchronousClient
// Il2CppName: set_AsynchronousClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::AuthAPIsApi::*)(::KID::Client::IAsynchronousClient*)>(&KID::Api::AuthAPIsApi::set_AsynchronousClient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "IAsynchronousClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "set_AsynchronousClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::get_Client
// Il2CppName: get_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ISynchronousClient* (KID::Api::AuthAPIsApi::*)()>(&KID::Api::AuthAPIsApi::get_Client)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "get_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::set_Client
// Il2CppName: set_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::AuthAPIsApi::*)(::KID::Client::ISynchronousClient*)>(&KID::Api::AuthAPIsApi::set_Client)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ISynchronousClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "set_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::GetBasePath
// Il2CppName: GetBasePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Api::AuthAPIsApi::*)()>(&KID::Api::AuthAPIsApi::GetBasePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "GetBasePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::get_Configuration
// Il2CppName: get_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::IReadableConfiguration* (KID::Api::AuthAPIsApi::*)()>(&KID::Api::AuthAPIsApi::get_Configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "get_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::set_Configuration
// Il2CppName: set_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::AuthAPIsApi::*)(::KID::Client::IReadableConfiguration*)>(&KID::Api::AuthAPIsApi::set_Configuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "IReadableConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "set_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::get_ExceptionFactory
// Il2CppName: get_ExceptionFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ExceptionFactory* (KID::Api::AuthAPIsApi::*)()>(&KID::Api::AuthAPIsApi::get_ExceptionFactory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "get_ExceptionFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::set_ExceptionFactory
// Il2CppName: set_ExceptionFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::AuthAPIsApi::*)(::KID::Client::ExceptionFactory*)>(&KID::Api::AuthAPIsApi::set_ExceptionFactory)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ExceptionFactory")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "set_ExceptionFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::CreateClientAuthToken
// Il2CppName: CreateClientAuthToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Model::IssueAuthTokenResponse* (KID::Api::AuthAPIsApi::*)(::KID::Model::CreateClientAuthTokenRequest*)>(&KID::Api::AuthAPIsApi::CreateClientAuthToken)> {
  static const MethodInfo* get() {
    static auto* createClientAuthTokenRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "CreateClientAuthTokenRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "CreateClientAuthToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{createClientAuthTokenRequest});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::CreateClientAuthTokenWithHttpInfo
// Il2CppName: CreateClientAuthTokenWithHttpInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ApiResponse_1<::KID::Model::IssueAuthTokenResponse*>* (KID::Api::AuthAPIsApi::*)(::KID::Model::CreateClientAuthTokenRequest*)>(&KID::Api::AuthAPIsApi::CreateClientAuthTokenWithHttpInfo)> {
  static const MethodInfo* get() {
    static auto* createClientAuthTokenRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "CreateClientAuthTokenRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "CreateClientAuthTokenWithHttpInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{createClientAuthTokenRequest});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::CreateClientAuthTokenAsync
// Il2CppName: CreateClientAuthTokenAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Model::IssueAuthTokenResponse*>* (KID::Api::AuthAPIsApi::*)(::KID::Model::CreateClientAuthTokenRequest*, ::System::Threading::CancellationToken)>(&KID::Api::AuthAPIsApi::CreateClientAuthTokenAsync)> {
  static const MethodInfo* get() {
    static auto* createClientAuthTokenRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "CreateClientAuthTokenRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "CreateClientAuthTokenAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{createClientAuthTokenRequest, cancellationToken});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::CreateClientAuthTokenWithHttpInfoAsync
// Il2CppName: CreateClientAuthTokenWithHttpInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::IssueAuthTokenResponse*>*>* (KID::Api::AuthAPIsApi::*)(::KID::Model::CreateClientAuthTokenRequest*, ::System::Threading::CancellationToken)>(&KID::Api::AuthAPIsApi::CreateClientAuthTokenWithHttpInfoAsync)> {
  static const MethodInfo* get() {
    static auto* createClientAuthTokenRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "CreateClientAuthTokenRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "CreateClientAuthTokenWithHttpInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{createClientAuthTokenRequest, cancellationToken});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::RefreshClientAuthToken
// Il2CppName: RefreshClientAuthToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Model::IssueAuthTokenResponse* (KID::Api::AuthAPIsApi::*)(::KID::Model::RefreshClientAuthTokenRequest*)>(&KID::Api::AuthAPIsApi::RefreshClientAuthToken)> {
  static const MethodInfo* get() {
    static auto* refreshClientAuthTokenRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "RefreshClientAuthTokenRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "RefreshClientAuthToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refreshClientAuthTokenRequest});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::RefreshClientAuthTokenWithHttpInfo
// Il2CppName: RefreshClientAuthTokenWithHttpInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ApiResponse_1<::KID::Model::IssueAuthTokenResponse*>* (KID::Api::AuthAPIsApi::*)(::KID::Model::RefreshClientAuthTokenRequest*)>(&KID::Api::AuthAPIsApi::RefreshClientAuthTokenWithHttpInfo)> {
  static const MethodInfo* get() {
    static auto* refreshClientAuthTokenRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "RefreshClientAuthTokenRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "RefreshClientAuthTokenWithHttpInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refreshClientAuthTokenRequest});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::RefreshClientAuthTokenAsync
// Il2CppName: RefreshClientAuthTokenAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Model::IssueAuthTokenResponse*>* (KID::Api::AuthAPIsApi::*)(::KID::Model::RefreshClientAuthTokenRequest*, ::System::Threading::CancellationToken)>(&KID::Api::AuthAPIsApi::RefreshClientAuthTokenAsync)> {
  static const MethodInfo* get() {
    static auto* refreshClientAuthTokenRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "RefreshClientAuthTokenRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "RefreshClientAuthTokenAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refreshClientAuthTokenRequest, cancellationToken});
  }
};
// Writing MetadataGetter for method: KID::Api::AuthAPIsApi::RefreshClientAuthTokenWithHttpInfoAsync
// Il2CppName: RefreshClientAuthTokenWithHttpInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::IssueAuthTokenResponse*>*>* (KID::Api::AuthAPIsApi::*)(::KID::Model::RefreshClientAuthTokenRequest*, ::System::Threading::CancellationToken)>(&KID::Api::AuthAPIsApi::RefreshClientAuthTokenWithHttpInfoAsync)> {
  static const MethodInfo* get() {
    static auto* refreshClientAuthTokenRequest = &::il2cpp_utils::GetClassFromName("KID.Model", "RefreshClientAuthTokenRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::AuthAPIsApi*), "RefreshClientAuthTokenWithHttpInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refreshClientAuthTokenRequest, cancellationToken});
  }
};
