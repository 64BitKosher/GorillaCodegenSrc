// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: IRequest
  class IRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::IRequest);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::IRequest*, "Meta.WitAi", "IRequest");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.IRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class IRequest {
    public:
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::WebHeaderCollection* get_Headers();
    // public System.Void set_Headers(System.Net.WebHeaderCollection value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Headers(::System::Net::WebHeaderCollection* value);
    // public System.String get_Method()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Method();
    // public System.Void set_Method(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Method(::StringW value);
    // public System.String get_ContentType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ContentType();
    // public System.Void set_ContentType(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ContentType(::StringW value);
    // public System.Int64 get_ContentLength()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_ContentLength();
    // public System.Void set_ContentLength(System.Int64 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ContentLength(int64_t value);
    // public System.Boolean get_SendChunked()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SendChunked();
    // public System.Void set_SendChunked(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_SendChunked(bool value);
    // public System.String get_UserAgent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_UserAgent();
    // public System.Void set_UserAgent(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_UserAgent(::StringW value);
    // public System.Int32 get_Timeout()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Timeout();
    // public System.Void set_Timeout(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Timeout(int value);
    // public System.IAsyncResult BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.IAsyncResult BeginGetResponse(System.AsyncCallback callback, System.Object state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.IO.Stream EndGetRequestStream(System.IAsyncResult asyncResult)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);
    // public System.Net.WebResponse EndGetResponse(System.IAsyncResult asyncResult)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);
    // public System.Void Abort()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Abort();
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose();
  }; // Meta.WitAi.IRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::IRequest::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::set_Headers
// Il2CppName: set_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)(::System::Net::WebHeaderCollection*)>(&Meta::WitAi::IRequest::set_Headers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "WebHeaderCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "set_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)(::StringW)>(&Meta::WitAi::IRequest::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::get_ContentType
// Il2CppName: get_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::get_ContentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "get_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::set_ContentType
// Il2CppName: set_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)(::StringW)>(&Meta::WitAi::IRequest::set_ContentType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "set_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::get_ContentLength
// Il2CppName: get_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::get_ContentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "get_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::set_ContentLength
// Il2CppName: set_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)(int64_t)>(&Meta::WitAi::IRequest::set_ContentLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "set_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::get_SendChunked
// Il2CppName: get_SendChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::get_SendChunked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "get_SendChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::set_SendChunked
// Il2CppName: set_SendChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)(bool)>(&Meta::WitAi::IRequest::set_SendChunked)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "set_SendChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::get_UserAgent
// Il2CppName: get_UserAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::get_UserAgent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "get_UserAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::set_UserAgent
// Il2CppName: set_UserAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)(::StringW)>(&Meta::WitAi::IRequest::set_UserAgent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "set_UserAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::get_Timeout
// Il2CppName: get_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::get_Timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "get_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::set_Timeout
// Il2CppName: set_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)(int)>(&Meta::WitAi::IRequest::set_Timeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "set_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::BeginGetRequestStream
// Il2CppName: BeginGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Meta::WitAi::IRequest::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&Meta::WitAi::IRequest::BeginGetRequestStream)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "BeginGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::BeginGetResponse
// Il2CppName: BeginGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Meta::WitAi::IRequest::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&Meta::WitAi::IRequest::BeginGetResponse)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "BeginGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::EndGetRequestStream
// Il2CppName: EndGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Meta::WitAi::IRequest::*)(::System::IAsyncResult*)>(&Meta::WitAi::IRequest::EndGetRequestStream)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "EndGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::EndGetResponse
// Il2CppName: EndGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (Meta::WitAi::IRequest::*)(::System::IAsyncResult*)>(&Meta::WitAi::IRequest::EndGetResponse)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "EndGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IRequest::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IRequest::*)()>(&Meta::WitAi::IRequest::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IRequest*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
