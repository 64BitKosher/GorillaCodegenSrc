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
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: UnlinkKongregateAccountRequest
  class UnlinkKongregateAccountRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UnlinkKongregateAccountRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UnlinkKongregateAccountRequest*, "PlayFab.ClientModels", "UnlinkKongregateAccountRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UnlinkKongregateAccountRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UnlinkKongregateAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B6ECFC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnlinkKongregateAccountRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UnlinkKongregateAccountRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnlinkKongregateAccountRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.UnlinkKongregateAccountRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UnlinkKongregateAccountRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
