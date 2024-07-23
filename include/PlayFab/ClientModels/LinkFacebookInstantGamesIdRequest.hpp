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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: LinkFacebookInstantGamesIdRequest
  class LinkFacebookInstantGamesIdRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest*, "PlayFab.ClientModels", "LinkFacebookInstantGamesIdRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class LinkFacebookInstantGamesIdRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String FacebookInstantGamesSignature
    // Size: 0x8
    // Offset: 0x18
    ::StringW FacebookInstantGamesSignature;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.Boolean> ForceLink
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<bool> ForceLink;
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String FacebookInstantGamesSignature
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FacebookInstantGamesSignature();
    // Get instance field reference: public System.Nullable`1<System.Boolean> ForceLink
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_ForceLink();
    // public System.Void .ctor()
    // Offset: 0x4B6E8CC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkFacebookInstantGamesIdRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkFacebookInstantGamesIdRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
