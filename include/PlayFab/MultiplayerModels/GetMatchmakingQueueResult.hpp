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
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: MatchmakingQueueConfig
  class MatchmakingQueueConfig;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: GetMatchmakingQueueResult
  class GetMatchmakingQueueResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::GetMatchmakingQueueResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::GetMatchmakingQueueResult*, "PlayFab.MultiplayerModels", "GetMatchmakingQueueResult");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.GetMatchmakingQueueResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetMatchmakingQueueResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public PlayFab.MultiplayerModels.MatchmakingQueueConfig MatchmakingQueue
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::MultiplayerModels::MatchmakingQueueConfig* MatchmakingQueue;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig*) == 0x8);
    public:
    // Creating conversion operator: operator ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*
    constexpr operator ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*() const noexcept {
      return MatchmakingQueue;
    }
    // Get instance field reference: public PlayFab.MultiplayerModels.MatchmakingQueueConfig MatchmakingQueue
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*& dyn_MatchmakingQueue();
    // public System.Void .ctor()
    // Offset: 0x4B60EBC
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetMatchmakingQueueResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::GetMatchmakingQueueResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetMatchmakingQueueResult*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.GetMatchmakingQueueResult
  #pragma pack(pop)
  static check_size<sizeof(GetMatchmakingQueueResult), 32 + sizeof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig*)> __PlayFab_MultiplayerModels_GetMatchmakingQueueResultSizeCheck;
  static_assert(sizeof(GetMatchmakingQueueResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::GetMatchmakingQueueResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
