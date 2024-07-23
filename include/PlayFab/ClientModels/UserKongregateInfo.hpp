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
  // Forward declaring type: UserKongregateInfo
  class UserKongregateInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UserKongregateInfo);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UserKongregateInfo*, "PlayFab.ClientModels", "UserKongregateInfo");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UserKongregateInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserKongregateInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String KongregateId
    // Size: 0x8
    // Offset: 0x10
    ::StringW KongregateId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String KongregateName
    // Size: 0x8
    // Offset: 0x18
    ::StringW KongregateName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String KongregateId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_KongregateId();
    // Get instance field reference: public System.String KongregateName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_KongregateName();
    // public System.Void .ctor()
    // Offset: 0x4B6EE4C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserKongregateInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UserKongregateInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserKongregateInfo*, creationType>()));
    }
  }; // PlayFab.ClientModels.UserKongregateInfo
  #pragma pack(pop)
  static check_size<sizeof(UserKongregateInfo), 24 + sizeof(::StringW)> __PlayFab_ClientModels_UserKongregateInfoSizeCheck;
  static_assert(sizeof(UserKongregateInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UserKongregateInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
