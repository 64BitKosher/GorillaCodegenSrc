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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ConsumeItemResult
  class ConsumeItemResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::ConsumeItemResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::ConsumeItemResult*, "PlayFab.ClientModels", "ConsumeItemResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.ConsumeItemResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ConsumeItemResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String ItemInstanceId
    // Size: 0x8
    // Offset: 0x20
    ::StringW ItemInstanceId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 RemainingUses
    // Size: 0x4
    // Offset: 0x28
    int RemainingUses;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String ItemInstanceId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ItemInstanceId();
    // Get instance field reference: public System.Int32 RemainingUses
    [[deprecated("Use field access instead!")]] int& dyn_RemainingUses();
    // public System.Void .ctor()
    // Offset: 0x4B6E48C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConsumeItemResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::ConsumeItemResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConsumeItemResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.ConsumeItemResult
  #pragma pack(pop)
  static check_size<sizeof(ConsumeItemResult), 40 + sizeof(int)> __PlayFab_ClientModels_ConsumeItemResultSizeCheck;
  static_assert(sizeof(ConsumeItemResult) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::ConsumeItemResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
