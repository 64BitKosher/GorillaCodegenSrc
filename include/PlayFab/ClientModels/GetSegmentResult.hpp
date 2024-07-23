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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetSegmentResult
  class GetSegmentResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetSegmentResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetSegmentResult*, "PlayFab.ClientModels", "GetSegmentResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetSegmentResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetSegmentResult : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String ABTestParent
    // Size: 0x8
    // Offset: 0x10
    ::StringW ABTestParent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Id
    // Size: 0x8
    // Offset: 0x18
    ::StringW Id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Name
    // Size: 0x8
    // Offset: 0x20
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String ABTestParent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ABTestParent();
    // Get instance field reference: public System.String Id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Id();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // public System.Void .ctor()
    // Offset: 0x4B6E7B4
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetSegmentResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetSegmentResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetSegmentResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetSegmentResult
  #pragma pack(pop)
  static check_size<sizeof(GetSegmentResult), 32 + sizeof(::StringW)> __PlayFab_ClientModels_GetSegmentResultSizeCheck;
  static_assert(sizeof(GetSegmentResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetSegmentResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
