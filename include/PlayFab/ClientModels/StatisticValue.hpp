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
  // Forward declaring type: StatisticValue
  class StatisticValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::StatisticValue);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::StatisticValue*, "PlayFab.ClientModels", "StatisticValue");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.StatisticValue
  // [TokenAttribute] Offset: FFFFFFFF
  class StatisticValue : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String StatisticName
    // Size: 0x8
    // Offset: 0x10
    ::StringW StatisticName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 Value
    // Size: 0x4
    // Offset: 0x18
    int Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt32 Version
    // Size: 0x4
    // Offset: 0x1C
    uint Version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public System.String StatisticName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_StatisticName();
    // Get instance field reference: public System.Int32 Value
    [[deprecated("Use field access instead!")]] int& dyn_Value();
    // Get instance field reference: public System.UInt32 Version
    [[deprecated("Use field access instead!")]] uint& dyn_Version();
    // public System.Void .ctor()
    // Offset: 0x4B6EC2C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StatisticValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::StatisticValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StatisticValue*, creationType>()));
    }
  }; // PlayFab.ClientModels.StatisticValue
  #pragma pack(pop)
  static check_size<sizeof(StatisticValue), 28 + sizeof(uint)> __PlayFab_ClientModels_StatisticValueSizeCheck;
  static_assert(sizeof(StatisticValue) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::StatisticValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
