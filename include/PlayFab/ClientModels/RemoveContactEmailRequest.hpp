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
  // Forward declaring type: RemoveContactEmailRequest
  class RemoveContactEmailRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::RemoveContactEmailRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::RemoveContactEmailRequest*, "PlayFab.ClientModels", "RemoveContactEmailRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.RemoveContactEmailRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoveContactEmailRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B6EB34
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoveContactEmailRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::RemoveContactEmailRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoveContactEmailRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.RemoveContactEmailRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::RemoveContactEmailRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
