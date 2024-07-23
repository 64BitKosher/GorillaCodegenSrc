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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: BuildRegionParams
  class BuildRegionParams;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: UpdateBuildRegionsRequest
  class UpdateBuildRegionsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest*, "PlayFab.MultiplayerModels", "UpdateBuildRegionsRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.UpdateBuildRegionsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UpdateBuildRegionsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String BuildId
    // Size: 0x8
    // Offset: 0x18
    ::StringW BuildId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildRegionParams> BuildRegions
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>* BuildRegions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String BuildId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildId();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildRegionParams> BuildRegions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*& dyn_BuildRegions();
    // public System.Void .ctor()
    // Offset: 0x4B6119C
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UpdateBuildRegionsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UpdateBuildRegionsRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.UpdateBuildRegionsRequest
  #pragma pack(pop)
  static check_size<sizeof(UpdateBuildRegionsRequest), 32 + sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*)> __PlayFab_MultiplayerModels_UpdateBuildRegionsRequestSizeCheck;
  static_assert(sizeof(UpdateBuildRegionsRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
