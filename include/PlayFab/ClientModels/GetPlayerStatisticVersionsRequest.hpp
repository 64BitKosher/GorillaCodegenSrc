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
  // Forward declaring type: GetPlayerStatisticVersionsRequest
  class GetPlayerStatisticVersionsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest*, "PlayFab.ClientModels", "GetPlayerStatisticVersionsRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetPlayerStatisticVersionsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetPlayerStatisticVersionsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String StatisticName
    // Size: 0x8
    // Offset: 0x18
    ::StringW StatisticName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String StatisticName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_StatisticName();
    // public System.Void .ctor()
    // Offset: 0x4B6E6B4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPlayerStatisticVersionsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPlayerStatisticVersionsRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetPlayerStatisticVersionsRequest
  #pragma pack(pop)
  static check_size<sizeof(GetPlayerStatisticVersionsRequest), 24 + sizeof(::StringW)> __PlayFab_ClientModels_GetPlayerStatisticVersionsRequestSizeCheck;
  static_assert(sizeof(GetPlayerStatisticVersionsRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetPlayerStatisticVersionsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!