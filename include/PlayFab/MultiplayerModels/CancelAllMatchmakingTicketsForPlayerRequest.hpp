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
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: EntityKey
  class EntityKey;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: CancelAllMatchmakingTicketsForPlayerRequest
  class CancelAllMatchmakingTicketsForPlayerRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest*, "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.CancelAllMatchmakingTicketsForPlayerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CancelAllMatchmakingTicketsForPlayerRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.MultiplayerModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::MultiplayerModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::EntityKey*) == 0x8);
    // public System.String QueueName
    // Size: 0x8
    // Offset: 0x20
    ::StringW QueueName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.MultiplayerModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public System.String QueueName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_QueueName();
    // public System.Void .ctor()
    // Offset: 0x4B60D04
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CancelAllMatchmakingTicketsForPlayerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CancelAllMatchmakingTicketsForPlayerRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.CancelAllMatchmakingTicketsForPlayerRequest
  #pragma pack(pop)
  static check_size<sizeof(CancelAllMatchmakingTicketsForPlayerRequest), 32 + sizeof(::StringW)> __PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerRequestSizeCheck;
  static_assert(sizeof(CancelAllMatchmakingTicketsForPlayerRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
