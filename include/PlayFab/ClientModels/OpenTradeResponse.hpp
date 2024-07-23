// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: TradeInfo
  class TradeInfo;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: OpenTradeResponse
  class OpenTradeResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::OpenTradeResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::OpenTradeResponse*, "PlayFab.ClientModels", "OpenTradeResponse");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.OpenTradeResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class OpenTradeResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public PlayFab.ClientModels.TradeInfo Trade
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::ClientModels::TradeInfo* Trade;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::TradeInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::PlayFab::ClientModels::TradeInfo*
    constexpr operator ::PlayFab::ClientModels::TradeInfo*() const noexcept {
      return Trade;
    }
    // Get instance field reference: public PlayFab.ClientModels.TradeInfo Trade
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::TradeInfo*& dyn_Trade();
    // public System.Void .ctor()
    // Offset: 0x4B6EA84
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenTradeResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::OpenTradeResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenTradeResponse*, creationType>()));
    }
  }; // PlayFab.ClientModels.OpenTradeResponse
  #pragma pack(pop)
  static check_size<sizeof(OpenTradeResponse), 32 + sizeof(::PlayFab::ClientModels::TradeInfo*)> __PlayFab_ClientModels_OpenTradeResponseSizeCheck;
  static_assert(sizeof(OpenTradeResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::OpenTradeResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
