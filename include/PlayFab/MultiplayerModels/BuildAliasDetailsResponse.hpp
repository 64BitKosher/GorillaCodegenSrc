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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: BuildSelectionCriterion
  class BuildSelectionCriterion;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: BuildAliasDetailsResponse
  class BuildAliasDetailsResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*, "PlayFab.MultiplayerModels", "BuildAliasDetailsResponse");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.BuildAliasDetailsResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class BuildAliasDetailsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String AliasId
    // Size: 0x8
    // Offset: 0x20
    ::StringW AliasId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AliasName
    // Size: 0x8
    // Offset: 0x28
    ::StringW AliasName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildSelectionCriterion> BuildSelectionCriteria
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>* BuildSelectionCriteria;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*) == 0x8);
    // public System.Int32 PageSize
    // Size: 0x4
    // Offset: 0x38
    int PageSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PageSize and: SkipToken
    char __padding3[0x4] = {};
    // public System.String SkipToken
    // Size: 0x8
    // Offset: 0x40
    ::StringW SkipToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String AliasId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AliasId();
    // Get instance field reference: public System.String AliasName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AliasName();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildSelectionCriterion> BuildSelectionCriteria
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*& dyn_BuildSelectionCriteria();
    // Get instance field reference: public System.Int32 PageSize
    [[deprecated("Use field access instead!")]] int& dyn_PageSize();
    // Get instance field reference: public System.String SkipToken
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SkipToken();
    // public System.Void .ctor()
    // Offset: 0x4B60CD4
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuildAliasDetailsResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::BuildAliasDetailsResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuildAliasDetailsResponse*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.BuildAliasDetailsResponse
  #pragma pack(pop)
  static check_size<sizeof(BuildAliasDetailsResponse), 64 + sizeof(::StringW)> __PlayFab_MultiplayerModels_BuildAliasDetailsResponseSizeCheck;
  static_assert(sizeof(BuildAliasDetailsResponse) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::BuildAliasDetailsResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
