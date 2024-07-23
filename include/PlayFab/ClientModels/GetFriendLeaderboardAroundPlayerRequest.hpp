// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: PlayerProfileViewConstraints
  class PlayerProfileViewConstraints;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetFriendLeaderboardAroundPlayerRequest
  class GetFriendLeaderboardAroundPlayerRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerRequest*, "PlayFab.ClientModels", "GetFriendLeaderboardAroundPlayerRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetFriendLeaderboardAroundPlayerRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.Nullable`1<System.Boolean> IncludeFacebookFriends
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<bool> IncludeFacebookFriends;
    // public System.Nullable`1<System.Boolean> IncludeSteamFriends
    // Size: 0xFFFFFFFF
    // Offset: 0x1A
    ::System::Nullable_1<bool> IncludeSteamFriends;
    // public System.Nullable`1<System.Int32> MaxResultsCount
    // Size: 0xFFFFFFFF
    // Offset: 0x1C
    ::System::Nullable_1<int> MaxResultsCount;
    // public System.String PlayFabId
    // Size: 0x8
    // Offset: 0x28
    ::StringW PlayFabId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.ClientModels.PlayerProfileViewConstraints ProfileConstraints
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::ClientModels::PlayerProfileViewConstraints* ProfileConstraints;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::PlayerProfileViewConstraints*) == 0x8);
    // public System.String StatisticName
    // Size: 0x8
    // Offset: 0x38
    ::StringW StatisticName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.Int32> Version
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Nullable_1<int> Version;
    // public System.String XboxToken
    // Size: 0x8
    // Offset: 0x48
    ::StringW XboxToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.Nullable`1<System.Boolean> IncludeFacebookFriends
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_IncludeFacebookFriends();
    // Get instance field reference: public System.Nullable`1<System.Boolean> IncludeSteamFriends
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_IncludeSteamFriends();
    // Get instance field reference: public System.Nullable`1<System.Int32> MaxResultsCount
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_MaxResultsCount();
    // Get instance field reference: public System.String PlayFabId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PlayFabId();
    // Get instance field reference: public PlayFab.ClientModels.PlayerProfileViewConstraints ProfileConstraints
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::PlayerProfileViewConstraints*& dyn_ProfileConstraints();
    // Get instance field reference: public System.String StatisticName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_StatisticName();
    // Get instance field reference: public System.Nullable`1<System.Int32> Version
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_Version();
    // Get instance field reference: public System.String XboxToken
    [[deprecated("Use field access instead!")]] ::StringW& dyn_XboxToken();
    // public System.Void .ctor()
    // Offset: 0x4B6E5DC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetFriendLeaderboardAroundPlayerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetFriendLeaderboardAroundPlayerRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
