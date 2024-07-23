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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: AssetSummary
  class AssetSummary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::AssetSummary);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::AssetSummary*, "PlayFab.MultiplayerModels", "AssetSummary");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.AssetSummary
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetSummary : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String FileName
    // Size: 0x8
    // Offset: 0x10
    ::StringW FileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> Metadata
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Metadata;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    public:
    // Get instance field reference: public System.String FileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FileName();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.String> Metadata
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_Metadata();
    // public System.Void .ctor()
    // Offset: 0x4B60CCC
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetSummary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::AssetSummary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetSummary*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.AssetSummary
  #pragma pack(pop)
  static check_size<sizeof(AssetSummary), 24 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)> __PlayFab_MultiplayerModels_AssetSummarySizeCheck;
  static_assert(sizeof(AssetSummary) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::AssetSummary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
