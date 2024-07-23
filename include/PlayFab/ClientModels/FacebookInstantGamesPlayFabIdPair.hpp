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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: FacebookInstantGamesPlayFabIdPair
  class FacebookInstantGamesPlayFabIdPair;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair*, "PlayFab.ClientModels", "FacebookInstantGamesPlayFabIdPair");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair
  // [TokenAttribute] Offset: FFFFFFFF
  class FacebookInstantGamesPlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String FacebookInstantGamesId
    // Size: 0x8
    // Offset: 0x10
    ::StringW FacebookInstantGamesId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String PlayFabId
    // Size: 0x8
    // Offset: 0x18
    ::StringW PlayFabId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String FacebookInstantGamesId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FacebookInstantGamesId();
    // Get instance field reference: public System.String PlayFabId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PlayFabId();
    // public System.Void .ctor()
    // Offset: 0x4B6E514
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FacebookInstantGamesPlayFabIdPair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FacebookInstantGamesPlayFabIdPair*, creationType>()));
    }
  }; // PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair
  #pragma pack(pop)
  static check_size<sizeof(FacebookInstantGamesPlayFabIdPair), 24 + sizeof(::StringW)> __PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPairSizeCheck;
  static_assert(sizeof(FacebookInstantGamesPlayFabIdPair) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::FacebookInstantGamesPlayFabIdPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!