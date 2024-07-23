// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetWindowsHelloChallengeResponse
  class GetWindowsHelloChallengeResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetWindowsHelloChallengeResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetWindowsHelloChallengeResponse*, "PlayFab.ClientModels", "GetWindowsHelloChallengeResponse");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetWindowsHelloChallengeResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class GetWindowsHelloChallengeResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String Challenge
    // Size: 0x8
    // Offset: 0x20
    ::StringW Challenge;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Challenge;
    }
    // Get instance field reference: public System.String Challenge
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Challenge();
    // public System.Void .ctor()
    // Offset: 0x4B6E854
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetWindowsHelloChallengeResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetWindowsHelloChallengeResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetWindowsHelloChallengeResponse*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetWindowsHelloChallengeResponse
  #pragma pack(pop)
  static check_size<sizeof(GetWindowsHelloChallengeResponse), 32 + sizeof(::StringW)> __PlayFab_ClientModels_GetWindowsHelloChallengeResponseSizeCheck;
  static_assert(sizeof(GetWindowsHelloChallengeResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetWindowsHelloChallengeResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
