// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder
#include "Oculus/Interaction/PoseDetection/FingerFeatureConfigBuilder.hpp"
// Including type: Oculus.Interaction.PoseDetection.FeatureStateActiveMode
#include "Oculus/Interaction/PoseDetection/FeatureStateActiveMode.hpp"
// Including type: Oculus.Interaction.PoseDetection.ShapeRecognizer
#include "Oculus/Interaction/PoseDetection/ShapeRecognizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder*, "Oculus.Interaction.PoseDetection", "FingerFeatureConfigBuilder/AbductionStateBuilder");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder/AbductionStateBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class FingerFeatureConfigBuilder::AbductionStateBuilder : public ::Il2CppObject {
    public:
    public:
    // private readonly Oculus.Interaction.PoseDetection.FeatureStateActiveMode _mode
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode mode;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode) == 0x4);
    public:
    // Creating conversion operator: operator ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode
    constexpr operator ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode() const noexcept {
      return mode;
    }
    // Get instance field reference: private readonly Oculus.Interaction.PoseDetection.FeatureStateActiveMode _mode
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode& dyn__mode();
    // public System.Void .ctor(Oculus.Interaction.PoseDetection.FeatureStateActiveMode mode)
    // Offset: 0x47E71E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerFeatureConfigBuilder::AbductionStateBuilder* New_ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerFeatureConfigBuilder::AbductionStateBuilder*, creationType>(mode)));
    }
    // public Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig get_None()
    // Offset: 0x47E720C
    ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig* get_None();
    // public Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig get_Closed()
    // Offset: 0x47E72F8
    ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig* get_Closed();
    // public Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig get_Open()
    // Offset: 0x47E73E8
    ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig* get_Open();
  }; // Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder/AbductionStateBuilder
  #pragma pack(pop)
  static check_size<sizeof(FingerFeatureConfigBuilder::AbductionStateBuilder), 16 + sizeof(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode)> __Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilderSizeCheck;
  static_assert(sizeof(FingerFeatureConfigBuilder::AbductionStateBuilder) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::get_None
// Il2CppName: get_None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig* (Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::get_None)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder*), "get_None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::get_Closed
// Il2CppName: get_Closed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig* (Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::get_Closed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder*), "get_Closed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::get_Open
// Il2CppName: get_Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig* (Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder::get_Open)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder::AbductionStateBuilder*), "get_Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
