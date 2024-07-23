// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2
#include "Oculus/Interaction/PoseDetection/IFeatureStateThresholds_2.hpp"
// Including type: Oculus.Interaction.PoseDetection.TransformFeature
#include "Oculus/Interaction/PoseDetection/TransformFeature.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformFeatureStateThreshold
  class TransformFeatureStateThreshold;
  // Forward declaring type: IFeatureStateThreshold`1<TFeatureState>
  template<typename TFeatureState>
  class IFeatureStateThreshold_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformFeatureThresholds
  class TransformFeatureThresholds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::TransformFeatureThresholds);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*, "Oculus.Interaction.PoseDetection", "TransformFeatureThresholds");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.TransformFeatureThresholds
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformFeatureThresholds : public ::Il2CppObject/*, public ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature, ::StringW>*/ {
    public:
    public:
    // private Oculus.Interaction.PoseDetection.TransformFeature _feature
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Interaction::PoseDetection::TransformFeature feature;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeature) == 0x4);
    // Padding between fields: feature and: thresholds
    char __padding0[0x4] = {};
    // private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.TransformFeatureStateThreshold> _thresholds
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>* thresholds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*) == 0x8);
    // private System.Double _minTimeInState
    // Size: 0x8
    // Offset: 0x20
    double minTimeInState;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature, ::StringW>
    operator ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature, ::StringW>() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature, ::StringW>*>(this);
    }
    // Get instance field reference: private Oculus.Interaction.PoseDetection.TransformFeature _feature
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::TransformFeature& dyn__feature();
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.TransformFeatureStateThreshold> _thresholds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*& dyn__thresholds();
    // Get instance field reference: private System.Double _minTimeInState
    [[deprecated("Use field access instead!")]] double& dyn__minTimeInState();
    // public System.Void .ctor()
    // Offset: 0x47F56D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFeatureThresholds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFeatureThresholds*, creationType>()));
    }
    // public System.Void .ctor(Oculus.Interaction.PoseDetection.TransformFeature featureTransform, System.Collections.Generic.IEnumerable`1<Oculus.Interaction.PoseDetection.TransformFeatureStateThreshold> thresholds)
    // Offset: 0x47F56DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFeatureThresholds* New_ctor(::Oculus::Interaction::PoseDetection::TransformFeature featureTransform, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>* thresholds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFeatureThresholds*, creationType>(featureTransform, thresholds)));
    }
    // public Oculus.Interaction.PoseDetection.TransformFeature get_Feature()
    // Offset: 0x47F577C
    ::Oculus::Interaction::PoseDetection::TransformFeature get_Feature();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.IFeatureStateThreshold`1<System.String>> get_Thresholds()
    // Offset: 0x47F5784
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* get_Thresholds();
    // public System.Double get_MinTimeInState()
    // Offset: 0x47F578C
    double get_MinTimeInState();
  }; // Oculus.Interaction.PoseDetection.TransformFeatureThresholds
  #pragma pack(pop)
  static check_size<sizeof(TransformFeatureThresholds), 32 + sizeof(double)> __Oculus_Interaction_PoseDetection_TransformFeatureThresholdsSizeCheck;
  static_assert(sizeof(TransformFeatureThresholds) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureThresholds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureThresholds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_Feature
// Il2CppName: get_Feature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::TransformFeature (Oculus::Interaction::PoseDetection::TransformFeatureThresholds::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_Feature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureThresholds*), "get_Feature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_Thresholds
// Il2CppName: get_Thresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* (Oculus::Interaction::PoseDetection::TransformFeatureThresholds::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_Thresholds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureThresholds*), "get_Thresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_MinTimeInState
// Il2CppName: get_MinTimeInState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Oculus::Interaction::PoseDetection::TransformFeatureThresholds::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_MinTimeInState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureThresholds*), "get_MinTimeInState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};