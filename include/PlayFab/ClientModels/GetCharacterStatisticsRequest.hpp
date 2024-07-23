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
  // Forward declaring type: GetCharacterStatisticsRequest
  class GetCharacterStatisticsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetCharacterStatisticsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetCharacterStatisticsRequest*, "PlayFab.ClientModels", "GetCharacterStatisticsRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetCharacterStatisticsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetCharacterStatisticsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String CharacterId
    // Size: 0x8
    // Offset: 0x18
    ::StringW CharacterId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String CharacterId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterId();
    // public System.Void .ctor()
    // Offset: 0x4B6E5BC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetCharacterStatisticsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetCharacterStatisticsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetCharacterStatisticsRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetCharacterStatisticsRequest
  #pragma pack(pop)
  static check_size<sizeof(GetCharacterStatisticsRequest), 24 + sizeof(::StringW)> __PlayFab_ClientModels_GetCharacterStatisticsRequestSizeCheck;
  static_assert(sizeof(GetCharacterStatisticsRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetCharacterStatisticsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
