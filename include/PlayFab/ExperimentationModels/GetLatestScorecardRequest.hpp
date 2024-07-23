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
// Type namespace: PlayFab.ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Forward declaring type: GetLatestScorecardRequest
  class GetLatestScorecardRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ExperimentationModels::GetLatestScorecardRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*, "PlayFab.ExperimentationModels", "GetLatestScorecardRequest");
// Type namespace: PlayFab.ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ExperimentationModels.GetLatestScorecardRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetLatestScorecardRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String ExperimentId
    // Size: 0x8
    // Offset: 0x18
    ::StringW ExperimentId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String ExperimentId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ExperimentId();
    // public System.Void .ctor()
    // Offset: 0x4B613DC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetLatestScorecardRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ExperimentationModels::GetLatestScorecardRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetLatestScorecardRequest*, creationType>()));
    }
  }; // PlayFab.ExperimentationModels.GetLatestScorecardRequest
  #pragma pack(pop)
  static check_size<sizeof(GetLatestScorecardRequest), 24 + sizeof(::StringW)> __PlayFab_ExperimentationModels_GetLatestScorecardRequestSizeCheck;
  static_assert(sizeof(GetLatestScorecardRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ExperimentationModels::GetLatestScorecardRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
