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
// Type namespace: PlayFab.AuthenticationModels
namespace PlayFab::AuthenticationModels {
  // Forward declaring type: ValidateEntityTokenRequest
  class ValidateEntityTokenRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*, "PlayFab.AuthenticationModels", "ValidateEntityTokenRequest");
// Type namespace: PlayFab.AuthenticationModels
namespace PlayFab::AuthenticationModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.AuthenticationModels.ValidateEntityTokenRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidateEntityTokenRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String EntityToken
    // Size: 0x8
    // Offset: 0x18
    ::StringW EntityToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String EntityToken
    [[deprecated("Use field access instead!")]] ::StringW& dyn_EntityToken();
    // public System.Void .ctor()
    // Offset: 0x4B6F0A0
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidateEntityTokenRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::AuthenticationModels::ValidateEntityTokenRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidateEntityTokenRequest*, creationType>()));
    }
  }; // PlayFab.AuthenticationModels.ValidateEntityTokenRequest
  #pragma pack(pop)
  static check_size<sizeof(ValidateEntityTokenRequest), 24 + sizeof(::StringW)> __PlayFab_AuthenticationModels_ValidateEntityTokenRequestSizeCheck;
  static_assert(sizeof(ValidateEntityTokenRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::AuthenticationModels::ValidateEntityTokenRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
