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
  // Forward declaring type: LoginWithPlayFabRequest
  class LoginWithPlayFabRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::LoginWithPlayFabRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::LoginWithPlayFabRequest*, "PlayFab.ClientModels", "LoginWithPlayFabRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.LoginWithPlayFabRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class LoginWithPlayFabRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams InfoRequestParameters
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*) == 0x8);
    // public System.String Password
    // Size: 0x8
    // Offset: 0x20
    ::StringW Password;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TitleId
    // Size: 0x8
    // Offset: 0x28
    ::StringW TitleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Username
    // Size: 0x8
    // Offset: 0x30
    ::StringW Username;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams InfoRequestParameters
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& dyn_InfoRequestParameters();
    // Get instance field reference: public System.String Password
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Password();
    // Get instance field reference: public System.String TitleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TitleId();
    // Get instance field reference: public System.String Username
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Username();
    // public System.Void .ctor()
    // Offset: 0x4B6EA14
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginWithPlayFabRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::LoginWithPlayFabRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginWithPlayFabRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.LoginWithPlayFabRequest
  #pragma pack(pop)
  static check_size<sizeof(LoginWithPlayFabRequest), 48 + sizeof(::StringW)> __PlayFab_ClientModels_LoginWithPlayFabRequestSizeCheck;
  static_assert(sizeof(LoginWithPlayFabRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::LoginWithPlayFabRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
