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
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::SharedModels
namespace PlayFab::SharedModels {
  // Forward declaring type: PlayFabRequestCommon
  class PlayFabRequestCommon;
}
// Completed forward declares
// Type namespace: PlayFab.SharedModels
namespace PlayFab::SharedModels {
  // Forward declaring type: PlayFabResultCommon
  class PlayFabResultCommon;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::SharedModels::PlayFabResultCommon);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::SharedModels::PlayFabResultCommon*, "PlayFab.SharedModels", "PlayFabResultCommon");
// Type namespace: PlayFab.SharedModels
namespace PlayFab::SharedModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.SharedModels.PlayFabResultCommon
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabResultCommon : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public PlayFab.SharedModels.PlayFabRequestCommon Request
    // Size: 0x8
    // Offset: 0x10
    ::PlayFab::SharedModels::PlayFabRequestCommon* Request;
    // Field size check
    static_assert(sizeof(::PlayFab::SharedModels::PlayFabRequestCommon*) == 0x8);
    // public System.Object CustomData
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* CustomData;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public PlayFab.SharedModels.PlayFabRequestCommon Request
    [[deprecated("Use field access instead!")]] ::PlayFab::SharedModels::PlayFabRequestCommon*& dyn_Request();
    // Get instance field reference: public System.Object CustomData
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_CustomData();
    // public System.Void .ctor()
    // Offset: 0x4AFC244
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabResultCommon* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::SharedModels::PlayFabResultCommon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabResultCommon*, creationType>()));
    }
  }; // PlayFab.SharedModels.PlayFabResultCommon
  #pragma pack(pop)
  static check_size<sizeof(PlayFabResultCommon), 24 + sizeof(::Il2CppObject*)> __PlayFab_SharedModels_PlayFabResultCommonSizeCheck;
  static_assert(sizeof(PlayFabResultCommon) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::SharedModels::PlayFabResultCommon::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
