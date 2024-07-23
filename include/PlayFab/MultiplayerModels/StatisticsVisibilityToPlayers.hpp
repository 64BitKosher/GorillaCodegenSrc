// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: StatisticsVisibilityToPlayers
  class StatisticsVisibilityToPlayers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*, "PlayFab.MultiplayerModels", "StatisticsVisibilityToPlayers");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.StatisticsVisibilityToPlayers
  // [TokenAttribute] Offset: FFFFFFFF
  class StatisticsVisibilityToPlayers : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Boolean ShowNumberOfPlayersMatching
    // Size: 0x1
    // Offset: 0x10
    bool ShowNumberOfPlayersMatching;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ShowTimeToMatch
    // Size: 0x1
    // Offset: 0x11
    bool ShowTimeToMatch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean ShowNumberOfPlayersMatching
    [[deprecated("Use field access instead!")]] bool& dyn_ShowNumberOfPlayersMatching();
    // Get instance field reference: public System.Boolean ShowTimeToMatch
    [[deprecated("Use field access instead!")]] bool& dyn_ShowTimeToMatch();
    // public System.Void .ctor()
    // Offset: 0x4B6114C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StatisticsVisibilityToPlayers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StatisticsVisibilityToPlayers*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.StatisticsVisibilityToPlayers
  #pragma pack(pop)
  static check_size<sizeof(StatisticsVisibilityToPlayers), 17 + sizeof(bool)> __PlayFab_MultiplayerModels_StatisticsVisibilityToPlayersSizeCheck;
  static_assert(sizeof(StatisticsVisibilityToPlayers) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
