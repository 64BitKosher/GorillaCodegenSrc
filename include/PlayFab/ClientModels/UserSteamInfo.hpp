// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.ClientModels.TitleActivationStatus
#include "PlayFab/ClientModels/TitleActivationStatus.hpp"
// Including type: PlayFab.ClientModels.Currency
#include "PlayFab/ClientModels/Currency.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: UserSteamInfo
  class UserSteamInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UserSteamInfo);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UserSteamInfo*, "PlayFab.ClientModels", "UserSteamInfo");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.UserSteamInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserSteamInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Nullable`1<PlayFab.ClientModels.TitleActivationStatus> SteamActivationStatus
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus> SteamActivationStatus;
    // public System.String SteamCountry
    // Size: 0x8
    // Offset: 0x18
    ::StringW SteamCountry;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.ClientModels.Currency> SteamCurrency
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<::PlayFab::ClientModels::Currency> SteamCurrency;
    // public System.String SteamId
    // Size: 0x8
    // Offset: 0x28
    ::StringW SteamId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String SteamName
    // Size: 0x8
    // Offset: 0x30
    ::StringW SteamName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.TitleActivationStatus> SteamActivationStatus
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus>& dyn_SteamActivationStatus();
    // Get instance field reference: public System.String SteamCountry
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SteamCountry();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.Currency> SteamCurrency
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::Currency>& dyn_SteamCurrency();
    // Get instance field reference: public System.String SteamId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SteamId();
    // Get instance field reference: public System.String SteamName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SteamName();
    // public System.Void .ctor()
    // Offset: 0x4B6EE84
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserSteamInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UserSteamInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserSteamInfo*, creationType>()));
    }
  }; // PlayFab.ClientModels.UserSteamInfo
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UserSteamInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
