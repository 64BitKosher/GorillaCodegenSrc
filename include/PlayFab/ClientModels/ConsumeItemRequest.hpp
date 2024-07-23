// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ConsumeItemRequest
  class ConsumeItemRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::ConsumeItemRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::ConsumeItemRequest*, "PlayFab.ClientModels", "ConsumeItemRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.ConsumeItemRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ConsumeItemRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String CharacterId
    // Size: 0x8
    // Offset: 0x18
    ::StringW CharacterId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 ConsumeCount
    // Size: 0x4
    // Offset: 0x20
    int ConsumeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ConsumeCount and: ItemInstanceId
    char __padding1[0x4] = {};
    // public System.String ItemInstanceId
    // Size: 0x8
    // Offset: 0x28
    ::StringW ItemInstanceId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String CharacterId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterId();
    // Get instance field reference: public System.Int32 ConsumeCount
    [[deprecated("Use field access instead!")]] int& dyn_ConsumeCount();
    // Get instance field reference: public System.String ItemInstanceId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ItemInstanceId();
    // public System.Void .ctor()
    // Offset: 0x4B6E484
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConsumeItemRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::ConsumeItemRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConsumeItemRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.ConsumeItemRequest
  #pragma pack(pop)
  static check_size<sizeof(ConsumeItemRequest), 40 + sizeof(::StringW)> __PlayFab_ClientModels_ConsumeItemRequestSizeCheck;
  static_assert(sizeof(ConsumeItemRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::ConsumeItemRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
