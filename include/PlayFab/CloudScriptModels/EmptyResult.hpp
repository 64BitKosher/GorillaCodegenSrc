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
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: EmptyResult
  class EmptyResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::EmptyResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::EmptyResult*, "PlayFab.CloudScriptModels", "EmptyResult");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.CloudScriptModels.EmptyResult
  // [TokenAttribute] Offset: FFFFFFFF
  class EmptyResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B633F0
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::EmptyResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyResult*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.EmptyResult
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::EmptyResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
