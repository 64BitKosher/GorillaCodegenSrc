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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: MatchmakingPlayerWithTeamAssignment
  class MatchmakingPlayerWithTeamAssignment;
  // Forward declaring type: ServerDetails
  class ServerDetails;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: GetMatchResult
  class GetMatchResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::GetMatchResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::GetMatchResult*, "PlayFab.MultiplayerModels", "GetMatchResult");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.GetMatchResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetMatchResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String MatchId
    // Size: 0x8
    // Offset: 0x20
    ::StringW MatchId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.MatchmakingPlayerWithTeamAssignment> Members
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* Members;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> RegionPreferences
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::StringW>* RegionPreferences;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public PlayFab.MultiplayerModels.ServerDetails ServerDetails
    // Size: 0x8
    // Offset: 0x38
    ::PlayFab::MultiplayerModels::ServerDetails* ServerDetails;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::ServerDetails*) == 0x8);
    public:
    // Get instance field reference: public System.String MatchId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MatchId();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.MatchmakingPlayerWithTeamAssignment> Members
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*& dyn_Members();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> RegionPreferences
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_RegionPreferences();
    // Get instance field reference: public PlayFab.MultiplayerModels.ServerDetails ServerDetails
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::ServerDetails*& dyn_ServerDetails();
    // public System.Void .ctor()
    // Offset: 0x4B60EDC
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetMatchResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::GetMatchResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetMatchResult*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.GetMatchResult
  #pragma pack(pop)
  static check_size<sizeof(GetMatchResult), 56 + sizeof(::PlayFab::MultiplayerModels::ServerDetails*)> __PlayFab_MultiplayerModels_GetMatchResultSizeCheck;
  static_assert(sizeof(GetMatchResult) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::GetMatchResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
