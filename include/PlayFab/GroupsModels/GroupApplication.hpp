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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: EntityWithLineage
  class EntityWithLineage;
  // Forward declaring type: EntityKey
  class EntityKey;
}
// Completed forward declares
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: GroupApplication
  class GroupApplication;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::GroupApplication);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::GroupApplication*, "PlayFab.GroupsModels", "GroupApplication");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.GroupApplication
  // [TokenAttribute] Offset: FFFFFFFF
  class GroupApplication : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public PlayFab.GroupsModels.EntityWithLineage Entity
    // Size: 0x8
    // Offset: 0x10
    ::PlayFab::GroupsModels::EntityWithLineage* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityWithLineage*) == 0x8);
    // public System.DateTime Expires
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime Expires;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public PlayFab.GroupsModels.EntityKey Group
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::GroupsModels::EntityKey* Group;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityKey*) == 0x8);
    public:
    // Get instance field reference: public PlayFab.GroupsModels.EntityWithLineage Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityWithLineage*& dyn_Entity();
    // Get instance field reference: public System.DateTime Expires
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_Expires();
    // Get instance field reference: public PlayFab.GroupsModels.EntityKey Group
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityKey*& dyn_Group();
    // public System.Void .ctor()
    // Offset: 0x4B612B4
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupApplication* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::GroupApplication::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupApplication*, creationType>()));
    }
  }; // PlayFab.GroupsModels.GroupApplication
  #pragma pack(pop)
  static check_size<sizeof(GroupApplication), 32 + sizeof(::PlayFab::GroupsModels::EntityKey*)> __PlayFab_GroupsModels_GroupApplicationSizeCheck;
  static_assert(sizeof(GroupApplication) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::GroupApplication::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!