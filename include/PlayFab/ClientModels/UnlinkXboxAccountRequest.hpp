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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: UnlinkXboxAccountRequest
  class UnlinkXboxAccountRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UnlinkXboxAccountRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UnlinkXboxAccountRequest*, "PlayFab.ClientModels", "UnlinkXboxAccountRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UnlinkXboxAccountRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UnlinkXboxAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String XboxToken
    // Size: 0x8
    // Offset: 0x18
    ::StringW XboxToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String XboxToken
    [[deprecated("Use field access instead!")]] ::StringW& dyn_XboxToken();
    // public System.Void .ctor()
    // Offset: 0x4B6ED6C
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnlinkXboxAccountRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UnlinkXboxAccountRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnlinkXboxAccountRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.UnlinkXboxAccountRequest
  #pragma pack(pop)
  static check_size<sizeof(UnlinkXboxAccountRequest), 24 + sizeof(::StringW)> __PlayFab_ClientModels_UnlinkXboxAccountRequestSizeCheck;
  static_assert(sizeof(UnlinkXboxAccountRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UnlinkXboxAccountRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!