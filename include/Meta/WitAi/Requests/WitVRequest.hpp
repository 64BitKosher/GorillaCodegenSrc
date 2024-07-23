// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.VRequest
#include "Meta/WitAi/Requests/VRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: IWitRequestConfiguration
  class IWitRequestConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: UriBuilder
  class UriBuilder;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: WitVRequest
  class WitVRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::WitVRequest);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::WitVRequest*, "Meta.WitAi.Requests", "WitVRequest");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.WitVRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class WitVRequest : public ::Meta::WitAi::Requests::VRequest {
    public:
    public:
    // private System.String <RequestId>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::StringW RequestId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Meta.WitAi.IWitRequestConfiguration <Configuration>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::Meta::WitAi::IWitRequestConfiguration* Configuration;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::IWitRequestConfiguration*) == 0x8);
    // private System.Boolean _useServerToken
    // Size: 0x1
    // Offset: 0x60
    bool useServerToken;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Func`2<System.UriBuilder,System.UriBuilder> OnProvideCustomUri
    static ::System::Func_2<::System::UriBuilder*, ::System::UriBuilder*>* _get_OnProvideCustomUri();
    // Set static field: static private System.Func`2<System.UriBuilder,System.UriBuilder> OnProvideCustomUri
    static void _set_OnProvideCustomUri(::System::Func_2<::System::UriBuilder*, ::System::UriBuilder*>* value);
    // Get static field: static private System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> OnProvideCustomHeaders
    static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* _get_OnProvideCustomHeaders();
    // Set static field: static private System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> OnProvideCustomHeaders
    static void _set_OnProvideCustomHeaders(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* value);
    // Get static field: static private System.Action`1<System.Text.StringBuilder> OnProvideCustomUserAgent
    static ::System::Action_1<::System::Text::StringBuilder*>* _get_OnProvideCustomUserAgent();
    // Set static field: static private System.Action`1<System.Text.StringBuilder> OnProvideCustomUserAgent
    static void _set_OnProvideCustomUserAgent(::System::Action_1<::System::Text::StringBuilder*>* value);
    // Get static field: static private System.String _operatingSystem
    static ::StringW _get__operatingSystem();
    // Set static field: static private System.String _operatingSystem
    static void _set__operatingSystem(::StringW value);
    // Get static field: static private System.String _deviceModel
    static ::StringW _get__deviceModel();
    // Set static field: static private System.String _deviceModel
    static void _set__deviceModel(::StringW value);
    // Get static field: static private System.String _appIdentifier
    static ::StringW _get__appIdentifier();
    // Set static field: static private System.String _appIdentifier
    static void _set__appIdentifier(::StringW value);
    // Get static field: static private System.String _unityVersion
    static ::StringW _get__unityVersion();
    // Set static field: static private System.String _unityVersion
    static void _set__unityVersion(::StringW value);
    // Get instance field reference: private System.String <RequestId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$RequestId$k__BackingField();
    // Get instance field reference: private Meta.WitAi.IWitRequestConfiguration <Configuration>k__BackingField
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::IWitRequestConfiguration*& dyn_$Configuration$k__BackingField();
    // Get instance field reference: private System.Boolean _useServerToken
    [[deprecated("Use field access instead!")]] bool& dyn__useServerToken();
    // static public System.Void add_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.UriBuilder> value)
    // Offset: 0x4445D30
    static void add_OnProvideCustomUri(::System::Func_2<::System::UriBuilder*, ::System::UriBuilder*>* value);
    // static public System.Void remove_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.UriBuilder> value)
    // Offset: 0x4445DFC
    static void remove_OnProvideCustomUri(::System::Func_2<::System::UriBuilder*, ::System::UriBuilder*>* value);
    // static public System.Void add_OnProvideCustomHeaders(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> value)
    // Offset: 0x4445EC8
    static void add_OnProvideCustomHeaders(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* value);
    // static public System.Void remove_OnProvideCustomHeaders(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> value)
    // Offset: 0x4445F98
    static void remove_OnProvideCustomHeaders(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* value);
    // static public System.Void add_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder> value)
    // Offset: 0x4446068
    static void add_OnProvideCustomUserAgent(::System::Action_1<::System::Text::StringBuilder*>* value);
    // static public System.Void remove_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder> value)
    // Offset: 0x4446138
    static void remove_OnProvideCustomUserAgent(::System::Action_1<::System::Text::StringBuilder*>* value);
    // public System.String get_RequestId()
    // Offset: 0x4446208
    ::StringW get_RequestId();
    // private System.Void set_RequestId(System.String value)
    // Offset: 0x4446210
    void set_RequestId(::StringW value);
    // public Meta.WitAi.IWitRequestConfiguration get_Configuration()
    // Offset: 0x4446218
    ::Meta::WitAi::IWitRequestConfiguration* get_Configuration();
    // private System.Void set_Configuration(Meta.WitAi.IWitRequestConfiguration value)
    // Offset: 0x4446220
    void set_Configuration(::Meta::WitAi::IWitRequestConfiguration* value);
    // public System.Void .ctor(Meta.WitAi.IWitRequestConfiguration configuration, System.String requestId, System.Boolean useServerToken, Meta.WitAi.Requests.VRequest/RequestProgressDelegate onDownloadProgress, Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate onFirstResponse)
    // Offset: 0x4444E84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitVRequest* New_ctor(::Meta::WitAi::IWitRequestConfiguration* configuration, ::StringW requestId, bool useServerToken, ::Meta::WitAi::Requests::VRequest::RequestProgressDelegate* onDownloadProgress, ::Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate* onFirstResponse) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::WitVRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitVRequest*, creationType>(configuration, requestId, useServerToken, onDownloadProgress, onFirstResponse)));
    }
    // public System.Uri GetUri(System.String path, System.Collections.Generic.Dictionary`2<System.String,System.String> queryParams)
    // Offset: 0x4445ADC
    ::System::Uri* GetUri(::StringW path, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams);
    // public System.Boolean RequestWitGet(System.String uriEndpoint, System.Collections.Generic.Dictionary`2<System.String,System.String> uriParams, Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData> onComplete)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TData>
    bool RequestWitGet(::StringW uriEndpoint, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* uriParams, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<TData>* onComplete) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::WitVRequest::RequestWitGet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RequestWitGet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(uriEndpoint), ::il2cpp_utils::ExtractType(uriParams), ::il2cpp_utils::ExtractType(onComplete)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, uriEndpoint, uriParams, onComplete);
    }
    // public System.Boolean RequestWitPost(System.String uriEndpoint, System.Collections.Generic.Dictionary`2<System.String,System.String> uriParams, System.String postText, Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData> onComplete)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TData>
    bool RequestWitPost(::StringW uriEndpoint, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* uriParams, ::StringW postText, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<TData>* onComplete) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::WitVRequest::RequestWitPost");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RequestWitPost", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(uriEndpoint), ::il2cpp_utils::ExtractType(uriParams), ::il2cpp_utils::ExtractType(postText), ::il2cpp_utils::ExtractType(onComplete)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, uriEndpoint, uriParams, postText, onComplete);
    }
    // public System.Boolean RequestWitPut(System.String uriEndpoint, System.Collections.Generic.Dictionary`2<System.String,System.String> uriParams, System.String putText, Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData> onComplete)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TData>
    bool RequestWitPut(::StringW uriEndpoint, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* uriParams, ::StringW putText, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<TData>* onComplete) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::WitVRequest::RequestWitPut");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RequestWitPut", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(uriEndpoint), ::il2cpp_utils::ExtractType(uriParams), ::il2cpp_utils::ExtractType(putText), ::il2cpp_utils::ExtractType(onComplete)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, uriEndpoint, uriParams, putText, onComplete);
    }
    // static public System.Uri GetWitUri(Meta.WitAi.IWitRequestConfiguration configuration, System.String path, System.Collections.Generic.Dictionary`2<System.String,System.String> queryParams)
    // Offset: 0x4446228
    static ::System::Uri* GetWitUri(::Meta::WitAi::IWitRequestConfiguration* configuration, ::StringW path, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.String> GetWitHeaders(Meta.WitAi.IWitRequestConfiguration configuration, System.String requestId, System.Boolean useServerToken)
    // Offset: 0x4446888
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetWitHeaders(::Meta::WitAi::IWitRequestConfiguration* configuration, ::StringW requestId, bool useServerToken);
    // static private System.String GetAuthorizationHeader(Meta.WitAi.IWitRequestConfiguration configuration, System.Boolean useServerToken)
    // Offset: 0x4446F88
    static ::StringW GetAuthorizationHeader(::Meta::WitAi::IWitRequestConfiguration* configuration, bool useServerToken);
    // static private System.String GetUserAgentHeader(Meta.WitAi.IWitRequestConfiguration configuration)
    // Offset: 0x4446B5C
    static ::StringW GetUserAgentHeader(::Meta::WitAi::IWitRequestConfiguration* configuration);
    // protected override System.Collections.Generic.Dictionary`2<System.String,System.String> GetHeaders()
    // Offset: 0x4445294
    // Implemented from: Meta.WitAi.Requests.VRequest
    // Base method: System.Collections.Generic.Dictionary`2<System.String,System.String> VRequest::GetHeaders()
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetHeaders();
    // public override System.Boolean Request(UnityEngine.Networking.UnityWebRequest unityRequest, Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest> onComplete)
    // Offset: 0x4446AC8
    // Implemented from: Meta.WitAi.Requests.VRequest
    // Base method: System.Boolean VRequest::Request(UnityEngine.Networking.UnityWebRequest unityRequest, Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest> onComplete)
    bool Request(::UnityEngine::Networking::UnityWebRequest* unityRequest, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::UnityEngine::Networking::UnityWebRequest*>* onComplete);
  }; // Meta.WitAi.Requests.WitVRequest
  #pragma pack(pop)
  static check_size<sizeof(WitVRequest), 96 + sizeof(bool)> __Meta_WitAi_Requests_WitVRequestSizeCheck;
  static_assert(sizeof(WitVRequest) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::add_OnProvideCustomUri
// Il2CppName: add_OnProvideCustomUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_2<::System::UriBuilder*, ::System::UriBuilder*>*)>(&Meta::WitAi::Requests::WitVRequest::add_OnProvideCustomUri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UriBuilder"), ::il2cpp_utils::GetClassFromName("System", "UriBuilder")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "add_OnProvideCustomUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::remove_OnProvideCustomUri
// Il2CppName: remove_OnProvideCustomUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_2<::System::UriBuilder*, ::System::UriBuilder*>*)>(&Meta::WitAi::Requests::WitVRequest::remove_OnProvideCustomUri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UriBuilder"), ::il2cpp_utils::GetClassFromName("System", "UriBuilder")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "remove_OnProvideCustomUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::add_OnProvideCustomHeaders
// Il2CppName: add_OnProvideCustomHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>*)>(&Meta::WitAi::Requests::WitVRequest::add_OnProvideCustomHeaders)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "add_OnProvideCustomHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::remove_OnProvideCustomHeaders
// Il2CppName: remove_OnProvideCustomHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>*)>(&Meta::WitAi::Requests::WitVRequest::remove_OnProvideCustomHeaders)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "remove_OnProvideCustomHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::add_OnProvideCustomUserAgent
// Il2CppName: add_OnProvideCustomUserAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Text::StringBuilder*>*)>(&Meta::WitAi::Requests::WitVRequest::add_OnProvideCustomUserAgent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "add_OnProvideCustomUserAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::remove_OnProvideCustomUserAgent
// Il2CppName: remove_OnProvideCustomUserAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Text::StringBuilder*>*)>(&Meta::WitAi::Requests::WitVRequest::remove_OnProvideCustomUserAgent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "remove_OnProvideCustomUserAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::get_RequestId
// Il2CppName: get_RequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Requests::WitVRequest::*)()>(&Meta::WitAi::Requests::WitVRequest::get_RequestId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "get_RequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::set_RequestId
// Il2CppName: set_RequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::WitVRequest::*)(::StringW)>(&Meta::WitAi::Requests::WitVRequest::set_RequestId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "set_RequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::get_Configuration
// Il2CppName: get_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::IWitRequestConfiguration* (Meta::WitAi::Requests::WitVRequest::*)()>(&Meta::WitAi::Requests::WitVRequest::get_Configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "get_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::set_Configuration
// Il2CppName: set_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::WitVRequest::*)(::Meta::WitAi::IWitRequestConfiguration*)>(&Meta::WitAi::Requests::WitVRequest::set_Configuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "IWitRequestConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "set_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::GetUri
// Il2CppName: GetUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (Meta::WitAi::Requests::WitVRequest::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&Meta::WitAi::Requests::WitVRequest::GetUri)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* queryParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "GetUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, queryParams});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::RequestWitGet
// Il2CppName: RequestWitGet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::RequestWitPost
// Il2CppName: RequestWitPost
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::RequestWitPut
// Il2CppName: RequestWitPut
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::GetWitUri
// Il2CppName: GetWitUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::Meta::WitAi::IWitRequestConfiguration*, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&Meta::WitAi::Requests::WitVRequest::GetWitUri)> {
  static const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "IWitRequestConfiguration")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* queryParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "GetWitUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration, path, queryParams});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::GetWitHeaders
// Il2CppName: GetWitHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::Meta::WitAi::IWitRequestConfiguration*, ::StringW, bool)>(&Meta::WitAi::Requests::WitVRequest::GetWitHeaders)> {
  static const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "IWitRequestConfiguration")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* useServerToken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "GetWitHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration, requestId, useServerToken});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::GetAuthorizationHeader
// Il2CppName: GetAuthorizationHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Meta::WitAi::IWitRequestConfiguration*, bool)>(&Meta::WitAi::Requests::WitVRequest::GetAuthorizationHeader)> {
  static const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "IWitRequestConfiguration")->byval_arg;
    static auto* useServerToken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "GetAuthorizationHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration, useServerToken});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::GetUserAgentHeader
// Il2CppName: GetUserAgentHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Meta::WitAi::IWitRequestConfiguration*)>(&Meta::WitAi::Requests::WitVRequest::GetUserAgentHeader)> {
  static const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "IWitRequestConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "GetUserAgentHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::GetHeaders
// Il2CppName: GetHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (Meta::WitAi::Requests::WitVRequest::*)()>(&Meta::WitAi::Requests::WitVRequest::GetHeaders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "GetHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitVRequest::Request
// Il2CppName: Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::WitVRequest::*)(::UnityEngine::Networking::UnityWebRequest*, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::UnityEngine::Networking::UnityWebRequest*>*)>(&Meta::WitAi::Requests::WitVRequest::Request)> {
  static const MethodInfo* get() {
    static auto* unityRequest = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    static auto* onComplete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VRequest/RequestCompleteDelegate`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitVRequest*), "Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unityRequest, onComplete});
  }
};