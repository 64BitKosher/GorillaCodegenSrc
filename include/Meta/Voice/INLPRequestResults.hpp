// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.IVoiceRequestResults
#include "Meta/Voice/IVoiceRequestResults.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: INLPRequestResults
  class INLPRequestResults;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::INLPRequestResults);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::INLPRequestResults*, "Meta.Voice", "INLPRequestResults");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.INLPRequestResults
  // [TokenAttribute] Offset: FFFFFFFF
  class INLPRequestResults/*, public ::Meta::Voice::IVoiceRequestResults*/ {
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::IVoiceRequestResults
    operator ::Meta::Voice::IVoiceRequestResults() noexcept {
      return *reinterpret_cast<::Meta::Voice::IVoiceRequestResults*>(this);
    }
    // public Meta.WitAi.Json.WitResponseNode get_ResponseData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::Json::WitResponseNode* get_ResponseData();
  }; // Meta.Voice.INLPRequestResults
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::INLPRequestResults::get_ResponseData
// Il2CppName: get_ResponseData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseNode* (Meta::Voice::INLPRequestResults::*)()>(&Meta::Voice::INLPRequestResults::get_ResponseData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::INLPRequestResults*), "get_ResponseData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};