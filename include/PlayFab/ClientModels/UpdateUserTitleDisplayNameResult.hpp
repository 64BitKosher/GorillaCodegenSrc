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
  // Forward declaring type: UpdateUserTitleDisplayNameResult
  class UpdateUserTitleDisplayNameResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult*, "PlayFab.ClientModels", "UpdateUserTitleDisplayNameResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UpdateUserTitleDisplayNameResult
  // [TokenAttribute] Offset: FFFFFFFF
  class UpdateUserTitleDisplayNameResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x20
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return DisplayName;
    }
    // Get instance field reference: public System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // public System.Void .ctor()
    // Offset: 0x4B6EDF4
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UpdateUserTitleDisplayNameResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UpdateUserTitleDisplayNameResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.UpdateUserTitleDisplayNameResult
  #pragma pack(pop)
  static check_size<sizeof(UpdateUserTitleDisplayNameResult), 32 + sizeof(::StringW)> __PlayFab_ClientModels_UpdateUserTitleDisplayNameResultSizeCheck;
  static_assert(sizeof(UpdateUserTitleDisplayNameResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UpdateUserTitleDisplayNameResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
