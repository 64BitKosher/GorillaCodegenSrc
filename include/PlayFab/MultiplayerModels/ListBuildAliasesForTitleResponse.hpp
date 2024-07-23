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
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: BuildAliasDetailsResponse
  class BuildAliasDetailsResponse;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: ListBuildAliasesForTitleResponse
  class ListBuildAliasesForTitleResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse*, "PlayFab.MultiplayerModels", "ListBuildAliasesForTitleResponse");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.ListBuildAliasesForTitleResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class ListBuildAliasesForTitleResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildAliasDetailsResponse> BuildAliases
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>* BuildAliases;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*
    constexpr operator ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*() const noexcept {
      return BuildAliases;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildAliasDetailsResponse> BuildAliases
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*& dyn_BuildAliases();
    // public System.Void .ctor()
    // Offset: 0x4B60FAC
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListBuildAliasesForTitleResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListBuildAliasesForTitleResponse*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.ListBuildAliasesForTitleResponse
  #pragma pack(pop)
  static check_size<sizeof(ListBuildAliasesForTitleResponse), 32 + sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*)> __PlayFab_MultiplayerModels_ListBuildAliasesForTitleResponseSizeCheck;
  static_assert(sizeof(ListBuildAliasesForTitleResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
