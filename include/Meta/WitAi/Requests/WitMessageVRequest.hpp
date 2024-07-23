// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.WitVRequest
#include "Meta/WitAi/Requests/WitVRequest.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: WitMessageVRequest
  class WitMessageVRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::WitMessageVRequest);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::WitMessageVRequest*, "Meta.WitAi.Requests", "WitMessageVRequest");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.WitMessageVRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class WitMessageVRequest : public ::Meta::WitAi::Requests::WitVRequest {
    public:
    // public System.Void .ctor(Meta.WitAi.IWitRequestConfiguration configuration, System.String requestId, Meta.WitAi.Requests.VRequest/RequestProgressDelegate onDownloadProgress, Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate onFirstResponse)
    // Offset: 0x4444E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitMessageVRequest* New_ctor(::Meta::WitAi::IWitRequestConfiguration* configuration, ::StringW requestId, ::Meta::WitAi::Requests::VRequest::RequestProgressDelegate* onDownloadProgress, ::Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate* onFirstResponse) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::WitMessageVRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitMessageVRequest*, creationType>(configuration, requestId, onDownloadProgress, onFirstResponse)));
    }
    // public System.Boolean MessageRequest(System.String text, System.Collections.Generic.Dictionary`2<System.String,System.String> queryParams, Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode> onComplete)
    // Offset: 0x4444F7C
    bool MessageRequest(::StringW text, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::Meta::WitAi::Json::WitResponseNode*>* onComplete);
    // public System.Boolean MessageRequest(System.String endpoint, System.Boolean post, System.String text, System.Collections.Generic.Dictionary`2<System.String,System.String> queryParams, Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode> onComplete)
    // Offset: 0x4444FF0
    bool MessageRequest(::StringW endpoint, bool post, ::StringW text, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::Meta::WitAi::Json::WitResponseNode*>* onComplete);
  }; // Meta.WitAi.Requests.WitMessageVRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitMessageVRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitMessageVRequest::MessageRequest
// Il2CppName: MessageRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::WitMessageVRequest::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::Meta::WitAi::Json::WitResponseNode*>*)>(&Meta::WitAi::Requests::WitMessageVRequest::MessageRequest)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* queryParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* onComplete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VRequest/RequestCompleteDelegate`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitMessageVRequest*), "MessageRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, queryParams, onComplete});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::WitMessageVRequest::MessageRequest
// Il2CppName: MessageRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::WitMessageVRequest::*)(::StringW, bool, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::Meta::WitAi::Json::WitResponseNode*>*)>(&Meta::WitAi::Requests::WitMessageVRequest::MessageRequest)> {
  static const MethodInfo* get() {
    static auto* endpoint = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* post = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* queryParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* onComplete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VRequest/RequestCompleteDelegate`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::WitMessageVRequest*), "MessageRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endpoint, post, text, queryParams, onComplete});
  }
};