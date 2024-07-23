// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebClient
#include "System/Net/WebClient.hpp"
// Including type: System.Net.Http.DelegatingStream
#include "System/Net/Http/DelegatingStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebClient::WebClientWriteStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebClient::WebClientWriteStream*, "System.Net", "WebClient/WebClientWriteStream");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebClient/WebClientWriteStream
  // [TokenAttribute] Offset: FFFFFFFF
  class WebClient::WebClientWriteStream : public ::System::Net::Http::DelegatingStream {
    public:
    public:
    // private readonly System.Net.WebRequest _request
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::WebRequest* request;
    // Field size check
    static_assert(sizeof(::System::Net::WebRequest*) == 0x8);
    // private readonly System.Net.WebClient _webClient
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::WebClient* webClient;
    // Field size check
    static_assert(sizeof(::System::Net::WebClient*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Net.WebRequest _request
    [[deprecated("Use field access instead!")]] ::System::Net::WebRequest*& dyn__request();
    // Get instance field reference: private readonly System.Net.WebClient _webClient
    [[deprecated("Use field access instead!")]] ::System::Net::WebClient*& dyn__webClient();
    // public System.Void .ctor(System.IO.Stream stream, System.Net.WebRequest request, System.Net.WebClient webClient)
    // Offset: 0x4FC3660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebClient::WebClientWriteStream* New_ctor(::System::IO::Stream* stream, ::System::Net::WebRequest* request, ::System::Net::WebClient* webClient) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebClient::WebClientWriteStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebClient::WebClientWriteStream*, creationType>(stream, request, webClient)));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x4FCB030
    // Implemented from: System.Net.Http.DelegatingStream
    // Base method: System.Void DelegatingStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.WebClient/WebClientWriteStream
  #pragma pack(pop)
  static check_size<sizeof(WebClient::WebClientWriteStream), 56 + sizeof(::System::Net::WebClient*)> __System_Net_WebClient_WebClientWriteStreamSizeCheck;
  static_assert(sizeof(WebClient::WebClientWriteStream) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebClient::WebClientWriteStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebClient::WebClientWriteStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::WebClientWriteStream::*)(bool)>(&System::Net::WebClient::WebClientWriteStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::WebClientWriteStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};