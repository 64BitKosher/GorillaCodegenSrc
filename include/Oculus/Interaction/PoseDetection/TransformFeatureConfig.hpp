// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.FeatureConfigBase`1
#include "Oculus/Interaction/PoseDetection/FeatureConfigBase_1.hpp"
// Including type: Oculus.Interaction.PoseDetection.TransformFeature
#include "Oculus/Interaction/PoseDetection/TransformFeature.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformFeatureConfig
  class TransformFeatureConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::TransformFeatureConfig);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::TransformFeatureConfig*, "Oculus.Interaction.PoseDetection", "TransformFeatureConfig");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.PoseDetection.TransformFeatureConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformFeatureConfig : public ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<::Oculus::Interaction::PoseDetection::TransformFeature> {
    public:
    // public System.Void .ctor()
    // Offset: 0x47F6870
    // Implemented from: Oculus.Interaction.PoseDetection.FeatureConfigBase`1
    // Base method: System.Void FeatureConfigBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFeatureConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::TransformFeatureConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFeatureConfig*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.TransformFeatureConfig
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
