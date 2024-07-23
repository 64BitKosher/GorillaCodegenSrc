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
  // Forward declaring type: StoreMarketingModel
  class StoreMarketingModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::StoreMarketingModel);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::StoreMarketingModel*, "PlayFab.ClientModels", "StoreMarketingModel");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.StoreMarketingModel
  // [TokenAttribute] Offset: FFFFFFFF
  class StoreMarketingModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String Description
    // Size: 0x8
    // Offset: 0x10
    ::StringW Description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x18
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object Metadata
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* Metadata;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public System.String Description
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Description();
    // Get instance field reference: public System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // Get instance field reference: public System.Object Metadata
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Metadata();
    // public System.Void .ctor()
    // Offset: 0x4B6EC44
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StoreMarketingModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::StoreMarketingModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StoreMarketingModel*, creationType>()));
    }
  }; // PlayFab.ClientModels.StoreMarketingModel
  #pragma pack(pop)
  static check_size<sizeof(StoreMarketingModel), 32 + sizeof(::Il2CppObject*)> __PlayFab_ClientModels_StoreMarketingModelSizeCheck;
  static_assert(sizeof(StoreMarketingModel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::StoreMarketingModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!