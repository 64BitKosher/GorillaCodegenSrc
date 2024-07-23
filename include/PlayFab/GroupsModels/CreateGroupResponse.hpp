// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: EntityKey
  class EntityKey;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: CreateGroupResponse
  class CreateGroupResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::CreateGroupResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::CreateGroupResponse*, "PlayFab.GroupsModels", "CreateGroupResponse");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.CreateGroupResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateGroupResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String AdminRoleId
    // Size: 0x8
    // Offset: 0x20
    ::StringW AdminRoleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.DateTime Created
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime Created;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public PlayFab.GroupsModels.EntityKey Group
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::GroupsModels::EntityKey* Group;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityKey*) == 0x8);
    // public System.String GroupName
    // Size: 0x8
    // Offset: 0x38
    ::StringW GroupName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String MemberRoleId
    // Size: 0x8
    // Offset: 0x40
    ::StringW MemberRoleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 ProfileVersion
    // Size: 0x4
    // Offset: 0x48
    int ProfileVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ProfileVersion and: Roles
    char __padding5[0x4] = {};
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> Roles
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Roles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    public:
    // Get instance field reference: public System.String AdminRoleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AdminRoleId();
    // Get instance field reference: public System.DateTime Created
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_Created();
    // Get instance field reference: public PlayFab.GroupsModels.EntityKey Group
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityKey*& dyn_Group();
    // Get instance field reference: public System.String GroupName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_GroupName();
    // Get instance field reference: public System.String MemberRoleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MemberRoleId();
    // Get instance field reference: public System.Int32 ProfileVersion
    [[deprecated("Use field access instead!")]] int& dyn_ProfileVersion();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.String> Roles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_Roles();
    // public System.Void .ctor()
    // Offset: 0x4B6125C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateGroupResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::CreateGroupResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateGroupResponse*, creationType>()));
    }
  }; // PlayFab.GroupsModels.CreateGroupResponse
  #pragma pack(pop)
  static check_size<sizeof(CreateGroupResponse), 80 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)> __PlayFab_GroupsModels_CreateGroupResponseSizeCheck;
  static_assert(sizeof(CreateGroupResponse) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::CreateGroupResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
