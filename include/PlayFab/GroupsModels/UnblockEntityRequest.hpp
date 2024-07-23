// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: UnblockEntityRequest
  class UnblockEntityRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::UnblockEntityRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::UnblockEntityRequest*, "PlayFab.GroupsModels", "UnblockEntityRequest");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.UnblockEntityRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UnblockEntityRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.GroupsModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::GroupsModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityKey*) == 0x8);
    // public PlayFab.GroupsModels.EntityKey Group
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::GroupsModels::EntityKey* Group;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityKey*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.GroupsModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public PlayFab.GroupsModels.EntityKey Group
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityKey*& dyn_Group();
    // public System.Void .ctor()
    // Offset: 0x4B61374
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnblockEntityRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::UnblockEntityRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnblockEntityRequest*, creationType>()));
    }
  }; // PlayFab.GroupsModels.UnblockEntityRequest
  #pragma pack(pop)
  static check_size<sizeof(UnblockEntityRequest), 32 + sizeof(::PlayFab::GroupsModels::EntityKey*)> __PlayFab_GroupsModels_UnblockEntityRequestSizeCheck;
  static_assert(sizeof(UnblockEntityRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::UnblockEntityRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
