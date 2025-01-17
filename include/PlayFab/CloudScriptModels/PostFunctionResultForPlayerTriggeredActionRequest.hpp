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
// Begin forward declares
// Forward declaring namespace: PlayFab::CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: EntityKey
  class EntityKey;
  // Forward declaring type: ExecuteFunctionResult
  class ExecuteFunctionResult;
  // Forward declaring type: PlayerProfileModel
  class PlayerProfileModel;
  // Forward declaring type: PlayStreamEventEnvelopeModel
  class PlayStreamEventEnvelopeModel;
}
// Completed forward declares
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: PostFunctionResultForPlayerTriggeredActionRequest
  class PostFunctionResultForPlayerTriggeredActionRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*, "PlayFab.CloudScriptModels", "PostFunctionResultForPlayerTriggeredActionRequest");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.CloudScriptModels.PostFunctionResultForPlayerTriggeredActionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class PostFunctionResultForPlayerTriggeredActionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.CloudScriptModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::CloudScriptModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::CloudScriptModels::EntityKey*) == 0x8);
    // public PlayFab.CloudScriptModels.ExecuteFunctionResult FunctionResult
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::CloudScriptModels::ExecuteFunctionResult* FunctionResult;
    // Field size check
    static_assert(sizeof(::PlayFab::CloudScriptModels::ExecuteFunctionResult*) == 0x8);
    // public PlayFab.CloudScriptModels.PlayerProfileModel PlayerProfile
    // Size: 0x8
    // Offset: 0x28
    ::PlayFab::CloudScriptModels::PlayerProfileModel* PlayerProfile;
    // Field size check
    static_assert(sizeof(::PlayFab::CloudScriptModels::PlayerProfileModel*) == 0x8);
    // public PlayFab.CloudScriptModels.PlayStreamEventEnvelopeModel PlayStreamEventEnvelope
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel* PlayStreamEventEnvelope;
    // Field size check
    static_assert(sizeof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.CloudScriptModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::CloudScriptModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public PlayFab.CloudScriptModels.ExecuteFunctionResult FunctionResult
    [[deprecated("Use field access instead!")]] ::PlayFab::CloudScriptModels::ExecuteFunctionResult*& dyn_FunctionResult();
    // Get instance field reference: public PlayFab.CloudScriptModels.PlayerProfileModel PlayerProfile
    [[deprecated("Use field access instead!")]] ::PlayFab::CloudScriptModels::PlayerProfileModel*& dyn_PlayerProfile();
    // Get instance field reference: public PlayFab.CloudScriptModels.PlayStreamEventEnvelopeModel PlayStreamEventEnvelope
    [[deprecated("Use field access instead!")]] ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*& dyn_PlayStreamEventEnvelope();
    // public System.Void .ctor()
    // Offset: 0x4B634A0
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PostFunctionResultForPlayerTriggeredActionRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PostFunctionResultForPlayerTriggeredActionRequest*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.PostFunctionResultForPlayerTriggeredActionRequest
  #pragma pack(pop)
  static check_size<sizeof(PostFunctionResultForPlayerTriggeredActionRequest), 48 + sizeof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*)> __PlayFab_CloudScriptModels_PostFunctionResultForPlayerTriggeredActionRequestSizeCheck;
  static_assert(sizeof(PostFunctionResultForPlayerTriggeredActionRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
