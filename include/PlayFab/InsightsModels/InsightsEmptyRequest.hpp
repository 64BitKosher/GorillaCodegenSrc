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
// Type namespace: PlayFab.InsightsModels
namespace PlayFab::InsightsModels {
  // Forward declaring type: InsightsEmptyRequest
  class InsightsEmptyRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::InsightsModels::InsightsEmptyRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::InsightsModels::InsightsEmptyRequest*, "PlayFab.InsightsModels", "InsightsEmptyRequest");
// Type namespace: PlayFab.InsightsModels
namespace PlayFab::InsightsModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.InsightsModels.InsightsEmptyRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class InsightsEmptyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B611C4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InsightsEmptyRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::InsightsModels::InsightsEmptyRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InsightsEmptyRequest*, creationType>()));
    }
  }; // PlayFab.InsightsModels.InsightsEmptyRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::InsightsModels::InsightsEmptyRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
