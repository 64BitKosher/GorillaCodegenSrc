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
  // Forward declaring type: GetMatchmakingTicketRequest
  class GetMatchmakingTicketRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest*, "PlayFab.MultiplayerModels", "GetMatchmakingTicketRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.GetMatchmakingTicketRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetMatchmakingTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.Boolean EscapeObject
    // Size: 0x1
    // Offset: 0x18
    bool EscapeObject;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: EscapeObject and: QueueName
    char __padding0[0x7] = {};
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
    // Get instance field reference: public System.Boolean EscapeObject
    [[deprecated("Use field access instead!")]] bool& dyn_EscapeObject();
    // Get instance field reference: public System.String QueueName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_QueueName();
    // Get instance field reference: public System.String TicketId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TicketId();
    // public System.Void .ctor()
    // Offset: 0x4B60EC4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetMatchmakingTicketRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetMatchmakingTicketRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.GetMatchmakingTicketRequest
  #pragma pack(pop)
  static check_size<sizeof(GetMatchmakingTicketRequest), 40 + sizeof(::StringW)> __PlayFab_MultiplayerModels_GetMatchmakingTicketRequestSizeCheck;
  static_assert(sizeof(GetMatchmakingTicketRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
