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
  // Forward declaring type: MatchmakingPlayer
  class MatchmakingPlayer;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: JoinMatchmakingTicketRequest
  class JoinMatchmakingTicketRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest*, "PlayFab.MultiplayerModels", "JoinMatchmakingTicketRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.JoinMatchmakingTicketRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class JoinMatchmakingTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.MultiplayerModels.MatchmakingPlayer Member
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::MultiplayerModels::MatchmakingPlayer* Member;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::MatchmakingPlayer*) == 0x8);
    // public System.String QueueName
    // Size: 0x8
    // Offset: 0x20
    ::StringW QueueName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TicketId
    // Size: 0x8
    // Offset: 0x28
    ::StringW TicketId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.MultiplayerModels.MatchmakingPlayer Member
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::MatchmakingPlayer*& dyn_Member();
    // Get instance field reference: public System.String QueueName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_QueueName();
    // Get instance field reference: public System.String TicketId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TicketId();
    // public System.Void .ctor()
    // Offset: 0x4B60F64
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JoinMatchmakingTicketRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JoinMatchmakingTicketRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.JoinMatchmakingTicketRequest
  #pragma pack(pop)
  static check_size<sizeof(JoinMatchmakingTicketRequest), 40 + sizeof(::StringW)> __PlayFab_MultiplayerModels_JoinMatchmakingTicketRequestSizeCheck;
  static_assert(sizeof(JoinMatchmakingTicketRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
