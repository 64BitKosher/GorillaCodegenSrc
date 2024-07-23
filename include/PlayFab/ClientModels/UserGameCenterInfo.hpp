// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: UserGameCenterInfo
  class UserGameCenterInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UserGameCenterInfo);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UserGameCenterInfo*, "PlayFab.ClientModels", "UserGameCenterInfo");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UserGameCenterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserGameCenterInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String GameCenterId
    // Size: 0x8
    // Offset: 0x10
    ::StringW GameCenterId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return GameCenterId;
    }
    // Get instance field reference: public System.String GameCenterId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_GameCenterId();
    // public System.Void .ctor()
    // Offset: 0x4B6EE34
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserGameCenterInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UserGameCenterInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserGameCenterInfo*, creationType>()));
    }
  }; // PlayFab.ClientModels.UserGameCenterInfo
  #pragma pack(pop)
  static check_size<sizeof(UserGameCenterInfo), 16 + sizeof(::StringW)> __PlayFab_ClientModels_UserGameCenterInfoSizeCheck;
  static_assert(sizeof(UserGameCenterInfo) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UserGameCenterInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!