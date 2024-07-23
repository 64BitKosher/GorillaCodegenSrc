// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebProxy
  class WebProxy;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: KID.Client
namespace KID::Client {
  // Forward declaring type: IReadableConfiguration
  class IReadableConfiguration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Client::IReadableConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::KID::Client::IReadableConfiguration*, "KID.Client", "IReadableConfiguration");
// Type namespace: KID.Client
namespace KID::Client {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: KID.Client.IReadableConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  class IReadableConfiguration {
    public:
    // public System.String get_AccessToken()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_AccessToken();
    // public System.Collections.Generic.IDictionary`2<System.String,System.String> get_ApiKey()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_ApiKey();
    // public System.Collections.Generic.IDictionary`2<System.String,System.String> get_ApiKeyPrefix()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_ApiKeyPrefix();
    // public System.String get_BasePath()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_BasePath();
    // public System.String get_DateTimeFormat()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_DateTimeFormat();
    // public System.Collections.Generic.IDictionary`2<System.String,System.String> get_DefaultHeader()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_DefaultHeader();
    // public System.Collections.Generic.IDictionary`2<System.String,System.String> get_DefaultHeaders()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_DefaultHeaders();
    // public System.String get_TempFolderPath()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_TempFolderPath();
    // public System.Int32 get_Timeout()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Timeout();
    // public System.Net.WebProxy get_Proxy()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::WebProxy* get_Proxy();
    // public System.String get_UserAgent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_UserAgent();
    // public System.String get_Username()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Username();
    // public System.String get_Password()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Password();
    // public System.Boolean get_UseDefaultCredentials()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_UseDefaultCredentials();
    // public System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>>> get_OperationServers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Il2CppObject*>*>*>* get_OperationServers();
    // public System.String GetApiKeyWithPrefix(System.String apiKeyIdentifier)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetApiKeyWithPrefix(::StringW apiKeyIdentifier);
    // public System.String GetOperationServerUrl(System.String operation, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetOperationServerUrl(::StringW operation, int index);
    // public System.Security.Cryptography.X509Certificates.X509CertificateCollection get_ClientCertificates()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();
    // public System.Net.Security.RemoteCertificateValidationCallback get_RemoteCertificateValidationCallback()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::Security::RemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback();
  }; // KID.Client.IReadableConfiguration
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_AccessToken
// Il2CppName: get_AccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_AccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_AccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_ApiKey
// Il2CppName: get_ApiKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_ApiKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_ApiKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_ApiKeyPrefix
// Il2CppName: get_ApiKeyPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_ApiKeyPrefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_ApiKeyPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_BasePath
// Il2CppName: get_BasePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_BasePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_BasePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_DateTimeFormat
// Il2CppName: get_DateTimeFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_DateTimeFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_DateTimeFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_DefaultHeader
// Il2CppName: get_DefaultHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_DefaultHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_DefaultHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_DefaultHeaders
// Il2CppName: get_DefaultHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_DefaultHeaders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_DefaultHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_TempFolderPath
// Il2CppName: get_TempFolderPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_TempFolderPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_TempFolderPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_Timeout
// Il2CppName: get_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_Timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_Proxy
// Il2CppName: get_Proxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebProxy* (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_Proxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_Proxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_UserAgent
// Il2CppName: get_UserAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_UserAgent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_UserAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_Username
// Il2CppName: get_Username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_Username)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_Username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_Password
// Il2CppName: get_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_Password)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_UseDefaultCredentials
// Il2CppName: get_UseDefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_UseDefaultCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_UseDefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_OperationServers
// Il2CppName: get_OperationServers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Il2CppObject*>*>*>* (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_OperationServers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_OperationServers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::GetApiKeyWithPrefix
// Il2CppName: GetApiKeyWithPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)(::StringW)>(&KID::Client::IReadableConfiguration::GetApiKeyWithPrefix)> {
  static const MethodInfo* get() {
    static auto* apiKeyIdentifier = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "GetApiKeyWithPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{apiKeyIdentifier});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::GetOperationServerUrl
// Il2CppName: GetOperationServerUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IReadableConfiguration::*)(::StringW, int)>(&KID::Client::IReadableConfiguration::GetOperationServerUrl)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "GetOperationServerUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation, index});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_ClientCertificates
// Il2CppName: get_ClientCertificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_ClientCertificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_ClientCertificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IReadableConfiguration::get_RemoteCertificateValidationCallback
// Il2CppName: get_RemoteCertificateValidationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (KID::Client::IReadableConfiguration::*)()>(&KID::Client::IReadableConfiguration::get_RemoteCertificateValidationCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IReadableConfiguration*), "get_RemoteCertificateValidationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
