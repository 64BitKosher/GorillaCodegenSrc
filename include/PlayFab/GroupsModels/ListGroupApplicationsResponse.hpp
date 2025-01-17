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
// Forward declaring namespace: PlayFab::GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: GroupApplication
  class GroupApplication;
}
// Completed forward declares
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: ListGroupApplicationsResponse
  class ListGroupApplicationsResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::ListGroupApplicationsResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::ListGroupApplicationsResponse*, "PlayFab.GroupsModels", "ListGroupApplicationsResponse");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.ListGroupApplicationsResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class ListGroupApplicationsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.GroupsModels.GroupApplication> Applications
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>* Applications;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*
    constexpr operator ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*() const noexcept {
      return Applications;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.GroupsModels.GroupApplication> Applications
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*& dyn_Applications();
    // public System.Void .ctor()
    // Offset: 0x4B61304
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListGroupApplicationsResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::ListGroupApplicationsResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListGroupApplicationsResponse*, creationType>()));
    }
  }; // PlayFab.GroupsModels.ListGroupApplicationsResponse
  #pragma pack(pop)
  static check_size<sizeof(ListGroupApplicationsResponse), 32 + sizeof(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*)> __PlayFab_GroupsModels_ListGroupApplicationsResponseSizeCheck;
  static_assert(sizeof(ListGroupApplicationsResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::ListGroupApplicationsResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
