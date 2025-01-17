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
  // Forward declaring type: AddUsernamePasswordRequest
  class AddUsernamePasswordRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::AddUsernamePasswordRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::AddUsernamePasswordRequest*, "PlayFab.ClientModels", "AddUsernamePasswordRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.AddUsernamePasswordRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class AddUsernamePasswordRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String Email
    // Size: 0x8
    // Offset: 0x18
    ::StringW Email;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Password
    // Size: 0x8
    // Offset: 0x20
    ::StringW Password;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Username
    // Size: 0x8
    // Offset: 0x28
    ::StringW Username;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String Email
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Email();
    // Get instance field reference: public System.String Password
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Password();
    // Get instance field reference: public System.String Username
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Username();
    // public System.Void .ctor()
    // Offset: 0x4B6E3D4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddUsernamePasswordRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::AddUsernamePasswordRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddUsernamePasswordRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.AddUsernamePasswordRequest
  #pragma pack(pop)
  static check_size<sizeof(AddUsernamePasswordRequest), 40 + sizeof(::StringW)> __PlayFab_ClientModels_AddUsernamePasswordRequestSizeCheck;
  static_assert(sizeof(AddUsernamePasswordRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::AddUsernamePasswordRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
