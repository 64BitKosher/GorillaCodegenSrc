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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: LinkFacebookInstantGamesIdResult
  class LinkFacebookInstantGamesIdResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::LinkFacebookInstantGamesIdResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::LinkFacebookInstantGamesIdResult*, "PlayFab.ClientModels", "LinkFacebookInstantGamesIdResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.LinkFacebookInstantGamesIdResult
  // [TokenAttribute] Offset: FFFFFFFF
  class LinkFacebookInstantGamesIdResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B6E8D4
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkFacebookInstantGamesIdResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::LinkFacebookInstantGamesIdResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkFacebookInstantGamesIdResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.LinkFacebookInstantGamesIdResult
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::LinkFacebookInstantGamesIdResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
