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
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: UntagContainerImageRequest
  class UntagContainerImageRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::UntagContainerImageRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::UntagContainerImageRequest*, "PlayFab.MultiplayerModels", "UntagContainerImageRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.UntagContainerImageRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UntagContainerImageRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String ImageName
    // Size: 0x8
    // Offset: 0x18
    ::StringW ImageName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Tag
    // Size: 0x8
    // Offset: 0x20
    ::StringW Tag;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String ImageName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ImageName();
    // Get instance field reference: public System.String Tag
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Tag();
    // public System.Void .ctor()
    // Offset: 0x4B61184
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UntagContainerImageRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::UntagContainerImageRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UntagContainerImageRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.UntagContainerImageRequest
  #pragma pack(pop)
  static check_size<sizeof(UntagContainerImageRequest), 32 + sizeof(::StringW)> __PlayFab_MultiplayerModels_UntagContainerImageRequestSizeCheck;
  static_assert(sizeof(UntagContainerImageRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::UntagContainerImageRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
