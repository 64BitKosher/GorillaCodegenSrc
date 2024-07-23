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
// Type namespace: PlayFab.InsightsModels
namespace PlayFab::InsightsModels {
  // Forward declaring type: InsightsGetOperationStatusRequest
  class InsightsGetOperationStatusRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*, "PlayFab.InsightsModels", "InsightsGetOperationStatusRequest");
// Type namespace: PlayFab.InsightsModels
namespace PlayFab::InsightsModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.InsightsModels.InsightsGetOperationStatusRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class InsightsGetOperationStatusRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String OperationId
    // Size: 0x8
    // Offset: 0x18
    ::StringW OperationId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String OperationId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OperationId();
    // public System.Void .ctor()
    // Offset: 0x4B611DC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InsightsGetOperationStatusRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::InsightsModels::InsightsGetOperationStatusRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InsightsGetOperationStatusRequest*, creationType>()));
    }
  }; // PlayFab.InsightsModels.InsightsGetOperationStatusRequest
  #pragma pack(pop)
  static check_size<sizeof(InsightsGetOperationStatusRequest), 24 + sizeof(::StringW)> __PlayFab_InsightsModels_InsightsGetOperationStatusRequestSizeCheck;
  static_assert(sizeof(InsightsGetOperationStatusRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::InsightsModels::InsightsGetOperationStatusRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!