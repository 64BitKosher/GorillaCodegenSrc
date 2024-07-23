// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
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
// Completed forward declares
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: InviteToGroupRequest
  class InviteToGroupRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::InviteToGroupRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::InviteToGroupRequest*, "PlayFab.GroupsModels", "InviteToGroupRequest");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.GroupsModels.InviteToGroupRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class InviteToGroupRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.Nullable`1<System.Boolean> AutoAcceptOutstandingApplication
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<bool> AutoAcceptOutstandingApplication;
    // public PlayFab.GroupsModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::GroupsModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityKey*) == 0x8);
    // public PlayFab.GroupsModels.EntityKey Group
    // Size: 0x8
    // Offset: 0x28
    ::PlayFab::GroupsModels::EntityKey* Group;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityKey*) == 0x8);
    // public System.String RoleId
    // Size: 0x8
    // Offset: 0x30
    ::StringW RoleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.Nullable`1<System.Boolean> AutoAcceptOutstandingApplication
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_AutoAcceptOutstandingApplication();
    // Get instance field reference: public PlayFab.GroupsModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public PlayFab.GroupsModels.EntityKey Group
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityKey*& dyn_Group();
    // Get instance field reference: public System.String RoleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_RoleId();
    // public System.Void .ctor()
    // Offset: 0x4B612DC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InviteToGroupRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::InviteToGroupRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InviteToGroupRequest*, creationType>()));
    }
  }; // PlayFab.GroupsModels.InviteToGroupRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::InviteToGroupRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!