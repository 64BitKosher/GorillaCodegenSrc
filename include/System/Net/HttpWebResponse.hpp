// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.HttpStatusCode
#include "System/Net/HttpStatusCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: CookieContainer
  class CookieContainer;
  // Forward declaring type: WebResponseStream
  class WebResponseStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpWebResponse
  class HttpWebResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebResponse*, "System.Net", "HttpWebResponse");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpWebResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpWebResponse : public ::System::Net::WebResponse {
    public:
    // Writing base type padding for base size: 0x1A to desired offset: 0x20
    char ___base_padding[0x6] = {};
    public:
    // private System.Uri uri
    // Size: 0x8
    // Offset: 0x20
    ::System::Uri* uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Net.WebHeaderCollection webHeaders
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::WebHeaderCollection* webHeaders;
    // Field size check
    static_assert(sizeof(::System::Net::WebHeaderCollection*) == 0x8);
    // private System.Net.CookieCollection cookieCollection
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::CookieCollection* cookieCollection;
    // Field size check
    static_assert(sizeof(::System::Net::CookieCollection*) == 0x8);
    // private System.String method
    // Size: 0x8
    // Offset: 0x38
    ::StringW method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x40
    ::System::Version* version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Net.HttpStatusCode statusCode
    // Size: 0x4
    // Offset: 0x48
    ::System::Net::HttpStatusCode statusCode;
    // Field size check
    static_assert(sizeof(::System::Net::HttpStatusCode) == 0x4);
    // Padding between fields: statusCode and: statusDescription
    char __padding5[0x4] = {};
    // private System.String statusDescription
    // Size: 0x8
    // Offset: 0x50
    ::StringW statusDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 contentLength
    // Size: 0x8
    // Offset: 0x58
    int64_t contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String contentType
    // Size: 0x8
    // Offset: 0x60
    ::StringW contentType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Net.CookieContainer cookie_container
    // Size: 0x8
    // Offset: 0x68
    ::System::Net::CookieContainer* cookie_container;
    // Field size check
    static_assert(sizeof(::System::Net::CookieContainer*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x70
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: stream
    char __padding10[0x7] = {};
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x78
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    public:
    // Get instance field reference: private System.Uri uri
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_uri();
    // Get instance field reference: private System.Net.WebHeaderCollection webHeaders
    [[deprecated("Use field access instead!")]] ::System::Net::WebHeaderCollection*& dyn_webHeaders();
    // Get instance field reference: private System.Net.CookieCollection cookieCollection
    [[deprecated("Use field access instead!")]] ::System::Net::CookieCollection*& dyn_cookieCollection();
    // Get instance field reference: private System.String method
    [[deprecated("Use field access instead!")]] ::StringW& dyn_method();
    // Get instance field reference: private System.Version version
    [[deprecated("Use field access instead!")]] ::System::Version*& dyn_version();
    // Get instance field reference: private System.Net.HttpStatusCode statusCode
    [[deprecated("Use field access instead!")]] ::System::Net::HttpStatusCode& dyn_statusCode();
    // Get instance field reference: private System.String statusDescription
    [[deprecated("Use field access instead!")]] ::StringW& dyn_statusDescription();
    // Get instance field reference: private System.Int64 contentLength
    [[deprecated("Use field access instead!")]] int64_t& dyn_contentLength();
    // Get instance field reference: private System.String contentType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_contentType();
    // Get instance field reference: private System.Net.CookieContainer cookie_container
    [[deprecated("Use field access instead!")]] ::System::Net::CookieContainer*& dyn_cookie_container();
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private System.IO.Stream stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_stream();
    // System.Void .ctor(System.Uri uri, System.String method, System.Net.HttpStatusCode status, System.Net.WebHeaderCollection headers)
    // Offset: 0x4EA7814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::HttpStatusCode status, ::System::Net::WebHeaderCollection* headers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>(uri, method, status, headers)));
    }
    // System.Void .ctor(System.Uri uri, System.String method, System.Net.WebResponseStream stream, System.Net.CookieContainer container)
    // Offset: 0x4EA7000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::WebResponseStream* stream, ::System::Net::CookieContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>(uri, method, stream, container)));
    }
    // public System.String get_CharacterSet()
    // Offset: 0x4EA7F2C
    ::StringW get_CharacterSet();
    // public System.String get_ContentEncoding()
    // Offset: 0x4EA8020
    ::StringW get_ContentEncoding();
    // public System.Net.CookieCollection get_Cookies()
    // Offset: 0x4EA81D8
    ::System::Net::CookieCollection* get_Cookies();
    // public System.Void set_Cookies(System.Net.CookieCollection value)
    // Offset: 0x4EA8250
    void set_Cookies(::System::Net::CookieCollection* value);
    // static private System.Exception GetMustImplement()
    // Offset: 0x4EA8284
    static ::System::Exception* GetMustImplement();
    // public System.DateTime get_LastModified()
    // Offset: 0x4EA82FC
    ::System::DateTime get_LastModified();
    // public System.String get_Method()
    // Offset: 0x4EA8510
    ::StringW get_Method();
    // public System.Version get_ProtocolVersion()
    // Offset: 0x4EA8528
    ::System::Version* get_ProtocolVersion();
    // public System.String get_Server()
    // Offset: 0x4EA8558
    ::StringW get_Server();
    // public System.Net.HttpStatusCode get_StatusCode()
    // Offset: 0x4EA85D8
    ::System::Net::HttpStatusCode get_StatusCode();
    // public System.String get_StatusDescription()
    // Offset: 0x4EA85E0
    ::StringW get_StatusDescription();
    // public System.String GetResponseHeader(System.String headerName)
    // Offset: 0x4EA8600
    ::StringW GetResponseHeader(::StringW headerName);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x4EA870C
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4EA8908
    void System_IDisposable_Dispose();
    // private System.Void CheckDisposed()
    // Offset: 0x4EA80A0
    void CheckDisposed();
    // private System.Void FillCookies()
    // Offset: 0x4EA7900
    void FillCookies();
    // public System.Void .ctor()
    // Offset: 0x4EA780C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x4EA7B28
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>(serializationInfo, streamingContext)));
    }
    // public override System.Int64 get_ContentLength()
    // Offset: 0x4EA811C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Int64 WebResponse::get_ContentLength()
    int64_t get_ContentLength();
    // public override System.String get_ContentType()
    // Offset: 0x4EA8124
    // Implemented from: System.Net.WebResponse
    // Base method: System.String WebResponse::get_ContentType()
    ::StringW get_ContentType();
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x4EA827C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    ::System::Net::WebHeaderCollection* get_Headers();
    // public override System.Boolean get_IsMutuallyAuthenticated()
    // Offset: 0x4EA82D8
    // Implemented from: System.Net.WebResponse
    // Base method: System.Boolean WebResponse::get_IsMutuallyAuthenticated()
    bool get_IsMutuallyAuthenticated();
    // public override System.Uri get_ResponseUri()
    // Offset: 0x4EA8540
    // Implemented from: System.Net.WebResponse
    // Base method: System.Uri WebResponse::get_ResponseUri()
    ::System::Uri* get_ResponseUri();
    // public override System.Boolean get_SupportsHeaders()
    // Offset: 0x4EA85F8
    // Implemented from: System.Net.WebResponse
    // Base method: System.Boolean WebResponse::get_SupportsHeaders()
    bool get_SupportsHeaders();
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0x4EA8670
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    ::System::IO::Stream* GetResponseStream();
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x4EA8718
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void Close()
    // Offset: 0x4EA88D8
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x4EA8918
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.HttpWebResponse
  #pragma pack(pop)
  static check_size<sizeof(HttpWebResponse), 120 + sizeof(::System::IO::Stream*)> __System_Net_HttpWebResponseSizeCheck;
  static_assert(sizeof(HttpWebResponse) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_CharacterSet
// Il2CppName: get_CharacterSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_CharacterSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_CharacterSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_ContentEncoding
// Il2CppName: get_ContentEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_ContentEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_ContentEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_Cookies
// Il2CppName: get_Cookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieCollection* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_Cookies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_Cookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::set_Cookies
// Il2CppName: set_Cookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(::System::Net::CookieCollection*)>(&System::Net::HttpWebResponse::set_Cookies)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "CookieCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "set_Cookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::GetMustImplement
// Il2CppName: GetMustImplement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::Net::HttpWebResponse::GetMustImplement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "GetMustImplement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_LastModified
// Il2CppName: get_LastModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_LastModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_LastModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_ProtocolVersion
// Il2CppName: get_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_ProtocolVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_Server
// Il2CppName: get_Server
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_Server)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_Server", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpStatusCode (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_StatusDescription
// Il2CppName: get_StatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_StatusDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_StatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::GetResponseHeader
// Il2CppName: GetResponseHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)(::StringW)>(&System::Net::HttpWebResponse::GetResponseHeader)> {
  static const MethodInfo* get() {
    static auto* headerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "GetResponseHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headerName});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::CheckDisposed
// Il2CppName: CheckDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::CheckDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "CheckDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::FillCookies
// Il2CppName: FillCookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::FillCookies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "FillCookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_ContentLength
// Il2CppName: get_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_ContentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_ContentType
// Il2CppName: get_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_ContentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_IsMutuallyAuthenticated
// Il2CppName: get_IsMutuallyAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_IsMutuallyAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_IsMutuallyAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_ResponseUri
// Il2CppName: get_ResponseUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_ResponseUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_ResponseUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_SupportsHeaders
// Il2CppName: get_SupportsHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_SupportsHeaders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_SupportsHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::GetResponseStream
// Il2CppName: GetResponseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::GetResponseStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "GetResponseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(bool)>(&System::Net::HttpWebResponse::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
