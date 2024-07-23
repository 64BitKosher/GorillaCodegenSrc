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
  // Forward declaring type: EntityMemberRole
  class EntityMemberRole;
}
// Completed forward declares
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: ListGroupMembersResponse
  class ListGroupMembersResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::ListGroupMembersResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::ListGroupMembersResponse*, "PlayFab.GroupsModels", "ListGroupMembersResponse");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.ListGroupMembersResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class ListGroupMembersResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.GroupsModels.EntityMemberRole> Members
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>* Members;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>*
    constexpr operator ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>*() const noexcept {
      return Members;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.GroupsModels.EntityMemberRole> Members
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>*& dyn_Members();
    // public System.Void .ctor()
    // Offset: 0x4B61334
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListGroupMembersResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::ListGroupMembersResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListGroupMembersResponse*, creationType>()));
    }
  }; // PlayFab.GroupsModels.ListGroupMembersResponse
  #pragma pack(pop)
  static check_size<sizeof(ListGroupMembersResponse), 32 + sizeof(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>*)> __PlayFab_GroupsModels_ListGroupMembersResponseSizeCheck;
  static_assert(sizeof(ListGroupMembersResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::ListGroupMembersResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
