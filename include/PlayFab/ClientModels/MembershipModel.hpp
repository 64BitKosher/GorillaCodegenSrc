// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: SubscriptionModel
  class SubscriptionModel;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: MembershipModel
  class MembershipModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::MembershipModel);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::MembershipModel*, "PlayFab.ClientModels", "MembershipModel");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.MembershipModel
  // [TokenAttribute] Offset: FFFFFFFF
  class MembershipModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Boolean IsActive
    // Size: 0x1
    // Offset: 0x10
    bool IsActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.DateTime MembershipExpiration
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime MembershipExpiration;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.String MembershipId
    // Size: 0x8
    // Offset: 0x20
    ::StringW MembershipId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.DateTime> OverrideExpiration
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::System::DateTime> OverrideExpiration;
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.SubscriptionModel> Subscriptions
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>* Subscriptions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean IsActive
    [[deprecated("Use field access instead!")]] bool& dyn_IsActive();
    // Get instance field reference: public System.DateTime MembershipExpiration
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_MembershipExpiration();
    // Get instance field reference: public System.String MembershipId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MembershipId();
    // Get instance field reference: public System.Nullable`1<System.DateTime> OverrideExpiration
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_OverrideExpiration();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.SubscriptionModel> Subscriptions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>*& dyn_Subscriptions();
    // public System.Void .ctor()
    // Offset: 0x4B6EA5C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MembershipModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::MembershipModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MembershipModel*, creationType>()));
    }
  }; // PlayFab.ClientModels.MembershipModel
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::MembershipModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
