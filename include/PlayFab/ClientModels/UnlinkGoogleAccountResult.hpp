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
  // Forward declaring type: UnlinkGoogleAccountResult
  class UnlinkGoogleAccountResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UnlinkGoogleAccountResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UnlinkGoogleAccountResult*, "PlayFab.ClientModels", "UnlinkGoogleAccountResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UnlinkGoogleAccountResult
  // [TokenAttribute] Offset: FFFFFFFF
  class UnlinkGoogleAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B6ECE4
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnlinkGoogleAccountResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UnlinkGoogleAccountResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnlinkGoogleAccountResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.UnlinkGoogleAccountResult
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UnlinkGoogleAccountResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
