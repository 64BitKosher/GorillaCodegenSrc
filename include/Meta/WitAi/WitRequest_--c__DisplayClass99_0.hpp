// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.WitRequest
#include "Meta/WitAi/WitRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::WitRequest::$$c__DisplayClass99_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::WitRequest::$$c__DisplayClass99_0*, "Meta.WitAi", "WitRequest/<>c__DisplayClass99_0");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.WitRequest/<>c__DisplayClass99_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WitRequest::$$c__DisplayClass99_0 : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.WitRequest <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::Meta::WitAi::WitRequest* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::WitRequest*) == 0x8);
    // public System.String stringResponse
    // Size: 0x8
    // Offset: 0x18
    ::StringW stringResponse;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String transcription
    // Size: 0x8
    // Offset: 0x20
    ::StringW transcription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean hasResponse
    // Size: 0x1
    // Offset: 0x28
    bool hasResponse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isFinal
    // Size: 0x1
    // Offset: 0x29
    bool isFinal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isFinal and: responseNode
    char __padding4[0x6] = {};
    // public Meta.WitAi.Json.WitResponseNode responseNode
    // Size: 0x8
    // Offset: 0x30
    ::Meta::WitAi::Json::WitResponseNode* responseNode;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Json::WitResponseNode*) == 0x8);
    public:
    // Get instance field reference: public Meta.WitAi.WitRequest <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::WitRequest*& dyn_$$4__this();
    // Get instance field reference: public System.String stringResponse
    [[deprecated("Use field access instead!")]] ::StringW& dyn_stringResponse();
    // Get instance field reference: public System.String transcription
    [[deprecated("Use field access instead!")]] ::StringW& dyn_transcription();
    // Get instance field reference: public System.Boolean hasResponse
    [[deprecated("Use field access instead!")]] bool& dyn_hasResponse();
    // Get instance field reference: public System.Boolean isFinal
    [[deprecated("Use field access instead!")]] bool& dyn_isFinal();
    // Get instance field reference: public Meta.WitAi.Json.WitResponseNode responseNode
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Json::WitResponseNode*& dyn_responseNode();
    // public System.Void .ctor()
    // Offset: 0x442F02C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitRequest::$$c__DisplayClass99_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::WitRequest::$$c__DisplayClass99_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitRequest::$$c__DisplayClass99_0*, creationType>()));
    }
    // System.Void <ProcessStringResponse>b__0()
    // Offset: 0x442FDE0
    void $ProcessStringResponse$b__0();
    // System.Void <ProcessStringResponse>b__1()
    // Offset: 0x442FE18
    void $ProcessStringResponse$b__1();
  }; // Meta.WitAi.WitRequest/<>c__DisplayClass99_0
  #pragma pack(pop)
  static check_size<sizeof(WitRequest::$$c__DisplayClass99_0), 48 + sizeof(::Meta::WitAi::Json::WitResponseNode*)> __Meta_WitAi_WitRequest_$$c__DisplayClass99_0SizeCheck;
  static_assert(sizeof(WitRequest::$$c__DisplayClass99_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::WitRequest::$$c__DisplayClass99_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::WitRequest::$$c__DisplayClass99_0::$ProcessStringResponse$b__0
// Il2CppName: <ProcessStringResponse>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WitRequest::$$c__DisplayClass99_0::*)()>(&Meta::WitAi::WitRequest::$$c__DisplayClass99_0::$ProcessStringResponse$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WitRequest::$$c__DisplayClass99_0*), "<ProcessStringResponse>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WitRequest::$$c__DisplayClass99_0::$ProcessStringResponse$b__1
// Il2CppName: <ProcessStringResponse>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WitRequest::$$c__DisplayClass99_0::*)()>(&Meta::WitAi::WitRequest::$$c__DisplayClass99_0::$ProcessStringResponse$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WitRequest::$$c__DisplayClass99_0*), "<ProcessStringResponse>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
