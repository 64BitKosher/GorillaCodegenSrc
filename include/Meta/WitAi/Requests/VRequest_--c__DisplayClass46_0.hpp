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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::VRequest::$$c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::VRequest::$$c__DisplayClass46_0*, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass46_0");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.VRequest/<>c__DisplayClass46_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VRequest::$$c__DisplayClass46_0 : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Byte[]> onComplete
    // Size: 0x8
    // Offset: 0x10
    ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::ArrayW<uint8_t>>* onComplete;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::ArrayW<uint8_t>>*) == 0x8);
    public:
    // Creating conversion operator: operator ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::ArrayW<uint8_t>>*
    constexpr operator ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::ArrayW<uint8_t>>*() const noexcept {
      return onComplete;
    }
    // Get instance field reference: public Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Byte[]> onComplete
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::ArrayW<uint8_t>>*& dyn_onComplete();
    // public System.Void .ctor()
    // Offset: 0x444323C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRequest::$$c__DisplayClass46_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VRequest::$$c__DisplayClass46_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRequest::$$c__DisplayClass46_0*, creationType>()));
    }
    // System.Void <RequestFile>b__0(UnityEngine.Networking.UnityWebRequest response, System.String error)
    // Offset: 0x44445FC
    void $RequestFile$b__0(::UnityEngine::Networking::UnityWebRequest* response, ::StringW error);
  }; // Meta.WitAi.Requests.VRequest/<>c__DisplayClass46_0
  #pragma pack(pop)
  static check_size<sizeof(VRequest::$$c__DisplayClass46_0), 16 + sizeof(::Meta::WitAi::Requests::VRequest::RequestCompleteDelegate_1<::ArrayW<uint8_t>>*)> __Meta_WitAi_Requests_VRequest_$$c__DisplayClass46_0SizeCheck;
  static_assert(sizeof(VRequest::$$c__DisplayClass46_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::VRequest::$$c__DisplayClass46_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::VRequest::$$c__DisplayClass46_0::$RequestFile$b__0
// Il2CppName: <RequestFile>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VRequest::$$c__DisplayClass46_0::*)(::UnityEngine::Networking::UnityWebRequest*, ::StringW)>(&Meta::WitAi::Requests::VRequest::$$c__DisplayClass46_0::$RequestFile$b__0)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VRequest::$$c__DisplayClass46_0*), "<RequestFile>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response, error});
  }
};
