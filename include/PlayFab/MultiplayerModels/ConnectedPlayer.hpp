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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: ConnectedPlayer
  class ConnectedPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::ConnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::ConnectedPlayer*, "PlayFab.MultiplayerModels", "ConnectedPlayer");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.ConnectedPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedPlayer : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String PlayerId
    // Size: 0x8
    // Offset: 0x10
    ::StringW PlayerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return PlayerId;
    }
    // Get instance field reference: public System.String PlayerId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PlayerId();
    // public System.Void .ctor()
    // Offset: 0x4B60D54
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::ConnectedPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayer*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.ConnectedPlayer
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayer), 16 + sizeof(::StringW)> __PlayFab_MultiplayerModels_ConnectedPlayerSizeCheck;
  static_assert(sizeof(ConnectedPlayer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::ConnectedPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!