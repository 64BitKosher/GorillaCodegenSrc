// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: QueueRuleAttribute
  class QueueRuleAttribute;
  // Forward declaring type: MatchTotalRuleExpansion
  class MatchTotalRuleExpansion;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: MatchTotalRule
  class MatchTotalRule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::MatchTotalRule);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::MatchTotalRule*, "PlayFab.MultiplayerModels", "MatchTotalRule");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.MultiplayerModels.MatchTotalRule
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchTotalRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public PlayFab.MultiplayerModels.QueueRuleAttribute Attribute
    // Size: 0x8
    // Offset: 0x10
    ::PlayFab::MultiplayerModels::QueueRuleAttribute* Attribute;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::QueueRuleAttribute*) == 0x8);
    // public PlayFab.MultiplayerModels.MatchTotalRuleExpansion Expansion
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion* Expansion;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*) == 0x8);
    // public System.Double Max
    // Size: 0x8
    // Offset: 0x20
    double Max;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double Min
    // Size: 0x8
    // Offset: 0x28
    double Min;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.String Name
    // Size: 0x8
    // Offset: 0x30
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.UInt32> SecondsUntilOptional
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<uint> SecondsUntilOptional;
    // public System.Double Weight
    // Size: 0x8
    // Offset: 0x40
    double Weight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get instance field reference: public PlayFab.MultiplayerModels.QueueRuleAttribute Attribute
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::QueueRuleAttribute*& dyn_Attribute();
    // Get instance field reference: public PlayFab.MultiplayerModels.MatchTotalRuleExpansion Expansion
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*& dyn_Expansion();
    // Get instance field reference: public System.Double Max
    [[deprecated("Use field access instead!")]] double& dyn_Max();
    // Get instance field reference: public System.Double Min
    [[deprecated("Use field access instead!")]] double& dyn_Min();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public System.Nullable`1<System.UInt32> SecondsUntilOptional
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<uint>& dyn_SecondsUntilOptional();
    // Get instance field reference: public System.Double Weight
    [[deprecated("Use field access instead!")]] double& dyn_Weight();
    // public System.Void .ctor()
    // Offset: 0x4B6109C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchTotalRule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::MatchTotalRule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchTotalRule*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.MatchTotalRule
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::MatchTotalRule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
