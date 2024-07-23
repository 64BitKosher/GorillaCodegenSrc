// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: FeatureConfigBuilder
  class FeatureConfigBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder*, "Oculus.Interaction.PoseDetection", "FeatureConfigBuilder");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.FeatureConfigBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class FeatureConfigBuilder : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder::BuildCondition_1<TBuildState>
    template<typename TBuildState>
    class BuildCondition_1;
    // public System.Void .ctor()
    // Offset: 0x47E6A30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FeatureConfigBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureConfigBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FeatureConfigBuilder*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.FeatureConfigBuilder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FeatureConfigBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
