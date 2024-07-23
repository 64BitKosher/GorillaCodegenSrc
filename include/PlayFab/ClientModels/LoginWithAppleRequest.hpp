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
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetPlayerCombinedInfoRequestParams
  class GetPlayerCombinedInfoRequestParams;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: LoginWithAppleRequest
  class LoginWithAppleRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::LoginWithAppleRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::LoginWithAppleRequest*, "PlayFab.ClientModels", "LoginWithAppleRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.LoginWithAppleRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class LoginWithAppleRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.Nullable`1<System.Boolean> CreateAccount
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<bool> CreateAccount;
    // public System.String EncryptedRequest
    // Size: 0x8
    // Offset: 0x20
    ::StringW EncryptedRequest;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String IdentityToken
    // Size: 0x8
    // Offset: 0x28
    ::StringW IdentityToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams InfoRequestParameters
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*) == 0x8);
    // public System.String PlayerSecret
    // Size: 0x8
    // Offset: 0x38
    ::StringW PlayerSecret;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TitleId
    // Size: 0x8
    // Offset: 0x40
    ::StringW TitleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.Nullable`1<System.Boolean> CreateAccount
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_CreateAccount();
    // Get instance field reference: public System.String EncryptedRequest
    [[deprecated("Use field access instead!")]] ::StringW& dyn_EncryptedRequest();
    // Get instance field reference: public System.String IdentityToken
    [[deprecated("Use field access instead!")]] ::StringW& dyn_IdentityToken();
    // Get instance field reference: public PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams InfoRequestParameters
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& dyn_InfoRequestParameters();
    // Get instance field reference: public System.String PlayerSecret
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PlayerSecret();
    // Get instance field reference: public System.String TitleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TitleId();
    // public System.Void .ctor()
    // Offset: 0x4B6E9B4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginWithAppleRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::LoginWithAppleRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginWithAppleRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.LoginWithAppleRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::LoginWithAppleRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
