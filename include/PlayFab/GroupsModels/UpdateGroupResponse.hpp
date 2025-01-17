// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.GroupsModels.OperationTypes
#include "PlayFab/GroupsModels/OperationTypes.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: UpdateGroupResponse
  class UpdateGroupResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::UpdateGroupResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::UpdateGroupResponse*, "PlayFab.GroupsModels", "UpdateGroupResponse");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.GroupsModels.UpdateGroupResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class UpdateGroupResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String OperationReason
    // Size: 0x8
    // Offset: 0x20
    ::StringW OperationReason;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 ProfileVersion
    // Size: 0x4
    // Offset: 0x28
    int ProfileVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Nullable`1<PlayFab.GroupsModels.OperationTypes> SetResult
    // Size: 0xFFFFFFFF
    // Offset: 0x2C
    ::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes> SetResult;
    public:
    // Get instance field reference: public System.String OperationReason
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OperationReason();
    // Get instance field reference: public System.Int32 ProfileVersion
    [[deprecated("Use field access instead!")]] int& dyn_ProfileVersion();
    // Get instance field reference: public System.Nullable`1<PlayFab.GroupsModels.OperationTypes> SetResult
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes>& dyn_SetResult();
    // public System.Void .ctor()
    // Offset: 0x4B61384
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UpdateGroupResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::UpdateGroupResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UpdateGroupResponse*, creationType>()));
    }
  }; // PlayFab.GroupsModels.UpdateGroupResponse
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::UpdateGroupResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
