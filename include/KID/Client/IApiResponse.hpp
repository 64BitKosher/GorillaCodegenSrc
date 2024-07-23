// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpStatusCode
  struct HttpStatusCode;
  // Forward declaring type: Cookie
  class Cookie;
}
// Forward declaring namespace: KID::Client
namespace KID::Client {
  // Forward declaring type: Multimap`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Multimap_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: KID.Client
namespace KID::Client {
  // Forward declaring type: IApiResponse
  class IApiResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Client::IApiResponse);
DEFINE_IL2CPP_ARG_TYPE(::KID::Client::IApiResponse*, "KID.Client", "IApiResponse");
// Type namespace: KID.Client
namespace KID::Client {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: KID.Client.IApiResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class IApiResponse {
    public:
    // public System.Type get_ResponseType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_ResponseType();
    // public System.Object get_Content()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_Content();
    // public System.Net.HttpStatusCode get_StatusCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::HttpStatusCode get_StatusCode();
    // public KID.Client.Multimap`2<System.String,System.String> get_Headers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::KID::Client::Multimap_2<::StringW, ::StringW>* get_Headers();
    // public System.String get_ErrorText()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ErrorText();
    // public System.Void set_ErrorText(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ErrorText(::StringW value);
    // public System.Collections.Generic.List`1<System.Net.Cookie> get_Cookies()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::System::Net::Cookie*>* get_Cookies();
    // public System.Void set_Cookies(System.Collections.Generic.List`1<System.Net.Cookie> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Cookies(::System::Collections::Generic::List_1<::System::Net::Cookie*>* value);
    // public System.String get_RawContent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_RawContent();
  }; // KID.Client.IApiResponse
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Client::IApiResponse::get_ResponseType
// Il2CppName: get_ResponseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (KID::Client::IApiResponse::*)()>(&KID::Client::IApiResponse::get_ResponseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "get_ResponseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiResponse::get_Content
// Il2CppName: get_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (KID::Client::IApiResponse::*)()>(&KID::Client::IApiResponse::get_Content)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "get_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiResponse::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpStatusCode (KID::Client::IApiResponse::*)()>(&KID::Client::IApiResponse::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::Multimap_2<::StringW, ::StringW>* (KID::Client::IApiResponse::*)()>(&KID::Client::IApiResponse::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiResponse::get_ErrorText
// Il2CppName: get_ErrorText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IApiResponse::*)()>(&KID::Client::IApiResponse::get_ErrorText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "get_ErrorText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiResponse::set_ErrorText
// Il2CppName: set_ErrorText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Client::IApiResponse::*)(::StringW)>(&KID::Client::IApiResponse::set_ErrorText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "set_ErrorText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiResponse::get_Cookies
// Il2CppName: get_Cookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Net::Cookie*>* (KID::Client::IApiResponse::*)()>(&KID::Client::IApiResponse::get_Cookies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "get_Cookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiResponse::set_Cookies
// Il2CppName: set_Cookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Client::IApiResponse::*)(::System::Collections::Generic::List_1<::System::Net::Cookie*>*)>(&KID::Client::IApiResponse::set_Cookies)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net", "Cookie")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "set_Cookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiResponse::get_RawContent
// Il2CppName: get_RawContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IApiResponse::*)()>(&KID::Client::IApiResponse::get_RawContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiResponse*), "get_RawContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
