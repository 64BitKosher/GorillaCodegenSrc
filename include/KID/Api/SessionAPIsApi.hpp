// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: KID.Api.ISessionAPIsApi
#include "KID/Api/ISessionAPIsApi.hpp"
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
  // Forward declaring type: Session
  class Session;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
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
  // Forward declaring type: SessionAPIsApi
  class SessionAPIsApi;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::SessionAPIsApi);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::SessionAPIsApi*, "KID.Api", "SessionAPIsApi");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.SessionAPIsApi
  // [TokenAttribute] Offset: FFFFFFFF
  class SessionAPIsApi : public ::Il2CppObject/*, public ::System::IDisposable, public ::KID::Api::ISessionAPIsApi*/ {
    public:
    // Nested type: ::KID::Api::SessionAPIsApi::$$c
    class $$c;
    // Nested type: ::KID::Api::SessionAPIsApi::$GetSessionAsync$d__28
    struct $GetSessionAsync$d__28;
    // Nested type: ::KID::Api::SessionAPIsApi::$GetSessionWithHttpInfoAsync$d__29
    struct $GetSessionWithHttpInfoAsync$d__29;
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
    // Creating interface conversion operator: operator ::KID::Api::ISessionAPIsApi
    operator ::KID::Api::ISessionAPIsApi() noexcept {
      return *reinterpret_cast<::KID::Api::ISessionAPIsApi*>(this);
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
    // Offset: 0x43964D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionAPIsApi* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::SessionAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionAPIsApi*, creationType>()));
    }
    // public System.Void .ctor(System.String basePath)
    // Offset: 0x43964DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionAPIsApi* New_ctor(::StringW basePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::SessionAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionAPIsApi*, creationType>(basePath)));
    }
    // public System.Void .ctor(KID.Client.Configuration configuration)
    // Offset: 0x43967A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionAPIsApi* New_ctor(::KID::Client::Configuration* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::SessionAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionAPIsApi*, creationType>(configuration)));
    }
    // public System.Void .ctor(KID.Client.ISynchronousClient client, KID.Client.IAsynchronousClient asyncClient, KID.Client.IReadableConfiguration configuration)
    // Offset: 0x4396A88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionAPIsApi* New_ctor(::KID::Client::ISynchronousClient* client, ::KID::Client::IAsynchronousClient* asyncClient, ::KID::Client::IReadableConfiguration* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::SessionAPIsApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionAPIsApi*, creationType>(client, asyncClient, configuration)));
    }
    // public System.Void Dispose()
    // Offset: 0x4396C94
    void Dispose();
    // public KID.Client.ApiClient get_ApiClient()
    // Offset: 0x4396C98
    ::KID::Client::ApiClient* get_ApiClient();
    // public System.Void set_ApiClient(KID.Client.ApiClient value)
    // Offset: 0x4396CA0
    void set_ApiClient(::KID::Client::ApiClient* value);
    // public KID.Client.IAsynchronousClient get_AsynchronousClient()
    // Offset: 0x4396CA8
    ::KID::Client::IAsynchronousClient* get_AsynchronousClient();
    // public System.Void set_AsynchronousClient(KID.Client.IAsynchronousClient value)
    // Offset: 0x4396CB0
    void set_AsynchronousClient(::KID::Client::IAsynchronousClient* value);
    // public KID.Client.ISynchronousClient get_Client()
    // Offset: 0x4396CB8
    ::KID::Client::ISynchronousClient* get_Client();
    // public System.Void set_Client(KID.Client.ISynchronousClient value)
    // Offset: 0x4396CC0
    void set_Client(::KID::Client::ISynchronousClient* value);
    // public System.String GetBasePath()
    // Offset: 0x4396CC8
    ::StringW GetBasePath();
    // public KID.Client.IReadableConfiguration get_Configuration()
    // Offset: 0x4396D6C
    ::KID::Client::IReadableConfiguration* get_Configuration();
    // public System.Void set_Configuration(KID.Client.IReadableConfiguration value)
    // Offset: 0x4396D74
    void set_Configuration(::KID::Client::IReadableConfiguration* value);
    // public KID.Client.ExceptionFactory get_ExceptionFactory()
    // Offset: 0x4396D7C
    ::KID::Client::ExceptionFactory* get_ExceptionFactory();
    // public System.Void set_ExceptionFactory(KID.Client.ExceptionFactory value)
    // Offset: 0x4396E00
    void set_ExceptionFactory(::KID::Client::ExceptionFactory* value);
    // public KID.Model.Session GetSession(System.Guid sessionId, System.String etag)
    // Offset: 0x4396E08
    ::KID::Model::Session* GetSession(::System::Guid sessionId, ::StringW etag);
    // public KID.Client.ApiResponse`1<KID.Model.Session> GetSessionWithHttpInfo(System.Guid sessionId, System.String etag)
    // Offset: 0x4396E74
    ::KID::Client::ApiResponse_1<::KID::Model::Session*>* GetSessionWithHttpInfo(::System::Guid sessionId, ::StringW etag);
    // public System.Threading.Tasks.Task`1<KID.Model.Session> GetSessionAsync(System.Guid sessionId, System.String etag, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x43973A8
    ::System::Threading::Tasks::Task_1<::KID::Model::Session*>* GetSessionAsync(::System::Guid sessionId, ::StringW etag, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<KID.Client.ApiResponse`1<KID.Model.Session>> GetSessionWithHttpInfoAsync(System.Guid sessionId, System.String etag, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x43974F0
    ::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::Session*>*>* GetSessionWithHttpInfoAsync(::System::Guid sessionId, ::StringW etag, ::System::Threading::CancellationToken cancellationToken);
  }; // KID.Api.SessionAPIsApi
  #pragma pack(pop)
  static check_size<sizeof(SessionAPIsApi), 48 + sizeof(::KID::Client::IReadableConfiguration*)> __KID_Api_SessionAPIsApiSizeCheck;
  static_assert(sizeof(SessionAPIsApi) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::SessionAPIsApi::*)()>(&KID::Api::SessionAPIsApi::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::get_ApiClient
// Il2CppName: get_ApiClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ApiClient* (KID::Api::SessionAPIsApi::*)()>(&KID::Api::SessionAPIsApi::get_ApiClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "get_ApiClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::set_ApiClient
// Il2CppName: set_ApiClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::SessionAPIsApi::*)(::KID::Client::ApiClient*)>(&KID::Api::SessionAPIsApi::set_ApiClient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ApiClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "set_ApiClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::get_AsynchronousClient
// Il2CppName: get_AsynchronousClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::IAsynchronousClient* (KID::Api::SessionAPIsApi::*)()>(&KID::Api::SessionAPIsApi::get_AsynchronousClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "get_AsynchronousClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::set_AsynchronousClient
// Il2CppName: set_AsynchronousClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::SessionAPIsApi::*)(::KID::Client::IAsynchronousClient*)>(&KID::Api::SessionAPIsApi::set_AsynchronousClient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "IAsynchronousClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "set_AsynchronousClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::get_Client
// Il2CppName: get_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ISynchronousClient* (KID::Api::SessionAPIsApi::*)()>(&KID::Api::SessionAPIsApi::get_Client)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "get_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::set_Client
// Il2CppName: set_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::SessionAPIsApi::*)(::KID::Client::ISynchronousClient*)>(&KID::Api::SessionAPIsApi::set_Client)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ISynchronousClient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "set_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::GetBasePath
// Il2CppName: GetBasePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Api::SessionAPIsApi::*)()>(&KID::Api::SessionAPIsApi::GetBasePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "GetBasePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::get_Configuration
// Il2CppName: get_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::IReadableConfiguration* (KID::Api::SessionAPIsApi::*)()>(&KID::Api::SessionAPIsApi::get_Configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "get_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::set_Configuration
// Il2CppName: set_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::SessionAPIsApi::*)(::KID::Client::IReadableConfiguration*)>(&KID::Api::SessionAPIsApi::set_Configuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "IReadableConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "set_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::get_ExceptionFactory
// Il2CppName: get_ExceptionFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ExceptionFactory* (KID::Api::SessionAPIsApi::*)()>(&KID::Api::SessionAPIsApi::get_ExceptionFactory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "get_ExceptionFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::set_ExceptionFactory
// Il2CppName: set_ExceptionFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Api::SessionAPIsApi::*)(::KID::Client::ExceptionFactory*)>(&KID::Api::SessionAPIsApi::set_ExceptionFactory)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ExceptionFactory")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "set_ExceptionFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::GetSession
// Il2CppName: GetSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Model::Session* (KID::Api::SessionAPIsApi::*)(::System::Guid, ::StringW)>(&KID::Api::SessionAPIsApi::GetSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* etag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "GetSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, etag});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::GetSessionWithHttpInfo
// Il2CppName: GetSessionWithHttpInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ApiResponse_1<::KID::Model::Session*>* (KID::Api::SessionAPIsApi::*)(::System::Guid, ::StringW)>(&KID::Api::SessionAPIsApi::GetSessionWithHttpInfo)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* etag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "GetSessionWithHttpInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, etag});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::GetSessionAsync
// Il2CppName: GetSessionAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Model::Session*>* (KID::Api::SessionAPIsApi::*)(::System::Guid, ::StringW, ::System::Threading::CancellationToken)>(&KID::Api::SessionAPIsApi::GetSessionAsync)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* etag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "GetSessionAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, etag, cancellationToken});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::GetSessionWithHttpInfoAsync
// Il2CppName: GetSessionWithHttpInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::Session*>*>* (KID::Api::SessionAPIsApi::*)(::System::Guid, ::StringW, ::System::Threading::CancellationToken)>(&KID::Api::SessionAPIsApi::GetSessionWithHttpInfoAsync)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* etag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi*), "GetSessionWithHttpInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, etag, cancellationToken});
  }
};
