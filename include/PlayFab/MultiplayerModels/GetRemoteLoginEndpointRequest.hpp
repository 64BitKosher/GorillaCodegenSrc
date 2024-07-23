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
  // Forward declaring type: GetRemoteLoginEndpointRequest
  class GetRemoteLoginEndpointRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest*, "PlayFab.MultiplayerModels", "GetRemoteLoginEndpointRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.GetRemoteLoginEndpointRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetRemoteLoginEndpointRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String BuildId
    // Size: 0x8
    // Offset: 0x18
    ::StringW BuildId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Region
    // Size: 0x8
    // Offset: 0x20
    ::StringW Region;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String VmId
    // Size: 0x8
    // Offset: 0x28
    ::StringW VmId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String BuildId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildId();
    // Get instance field reference: public System.String Region
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Region();
    // Get instance field reference: public System.String VmId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VmId();
    // public System.Void .ctor()
    // Offset: 0x4B60F1C
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetRemoteLoginEndpointRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetRemoteLoginEndpointRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.GetRemoteLoginEndpointRequest
  #pragma pack(pop)
  static check_size<sizeof(GetRemoteLoginEndpointRequest), 40 + sizeof(::StringW)> __PlayFab_MultiplayerModels_GetRemoteLoginEndpointRequestSizeCheck;
  static_assert(sizeof(GetRemoteLoginEndpointRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!