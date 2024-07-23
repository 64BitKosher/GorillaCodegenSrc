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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ItemInstance
  class ItemInstance;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: RedeemCouponResult
  class RedeemCouponResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::RedeemCouponResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::RedeemCouponResult*, "PlayFab.ClientModels", "RedeemCouponResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.RedeemCouponResult
  // [TokenAttribute] Offset: FFFFFFFF
  class RedeemCouponResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> GrantedItems
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* GrantedItems;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*
    constexpr operator ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*() const noexcept {
      return GrantedItems;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> GrantedItems
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& dyn_GrantedItems();
    // public System.Void .ctor()
    // Offset: 0x4B6EAF4
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RedeemCouponResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::RedeemCouponResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RedeemCouponResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.RedeemCouponResult
  #pragma pack(pop)
  static check_size<sizeof(RedeemCouponResult), 32 + sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*)> __PlayFab_ClientModels_RedeemCouponResultSizeCheck;
  static_assert(sizeof(RedeemCouponResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::RedeemCouponResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
