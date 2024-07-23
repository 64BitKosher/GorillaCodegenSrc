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
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: Statistics
  class Statistics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::Statistics);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::Statistics*, "PlayFab.MultiplayerModels", "Statistics");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.Statistics
  // [TokenAttribute] Offset: FFFFFFFF
  class Statistics : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Double Average
    // Size: 0x8
    // Offset: 0x10
    double Average;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double Percentile50
    // Size: 0x8
    // Offset: 0x18
    double Percentile50;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double Percentile90
    // Size: 0x8
    // Offset: 0x20
    double Percentile90;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double Percentile99
    // Size: 0x8
    // Offset: 0x28
    double Percentile99;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get instance field reference: public System.Double Average
    [[deprecated("Use field access instead!")]] double& dyn_Average();
    // Get instance field reference: public System.Double Percentile50
    [[deprecated("Use field access instead!")]] double& dyn_Percentile50();
    // Get instance field reference: public System.Double Percentile90
    [[deprecated("Use field access instead!")]] double& dyn_Percentile90();
    // Get instance field reference: public System.Double Percentile99
    [[deprecated("Use field access instead!")]] double& dyn_Percentile99();
    // public System.Void .ctor()
    // Offset: 0x4B61144
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Statistics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::Statistics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Statistics*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.Statistics
  #pragma pack(pop)
  static check_size<sizeof(Statistics), 40 + sizeof(double)> __PlayFab_MultiplayerModels_StatisticsSizeCheck;
  static_assert(sizeof(Statistics) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::Statistics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!