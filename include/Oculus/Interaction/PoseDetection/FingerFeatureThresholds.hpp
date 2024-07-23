// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2
#include "Oculus/Interaction/PoseDetection/IFeatureStateThresholds_2.hpp"
// Including type: Oculus.Interaction.PoseDetection.FingerFeature
#include "Oculus/Interaction/PoseDetection/FingerFeature.hpp"
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
  // Forward declaring type: FingerFeatureStateThreshold
  class FingerFeatureStateThreshold;
  // Forward declaring type: IFeatureStateThreshold`1<TFeatureState>
  template<typename TFeatureState>
  class IFeatureStateThreshold_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: FingerFeatureThresholds
  class FingerFeatureThresholds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::FingerFeatureThresholds);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*, "Oculus.Interaction.PoseDetection", "FingerFeatureThresholds");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.FingerFeatureThresholds
  // [TokenAttribute] Offset: FFFFFFFF
  class FingerFeatureThresholds : public ::Il2CppObject/*, public ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature, ::StringW>*/ {
    public:
    public:
    // private Oculus.Interaction.PoseDetection.FingerFeature _feature
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Interaction::PoseDetection::FingerFeature feature;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeature) == 0x4);
    // Padding between fields: feature and: thresholds
    char __padding0[0x4] = {};
    // private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.FingerFeatureStateThreshold> _thresholds
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>* thresholds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature, ::StringW>
    operator ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature, ::StringW>() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature, ::StringW>*>(this);
    }
    // Get instance field reference: private Oculus.Interaction.PoseDetection.FingerFeature _feature
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::FingerFeature& dyn__feature();
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.FingerFeatureStateThreshold> _thresholds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*& dyn__thresholds();
    // public System.Void .ctor()
    // Offset: 0x47EA248
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerFeatureThresholds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerFeatureThresholds*, creationType>()));
    }
    // public System.Void .ctor(Oculus.Interaction.PoseDetection.FingerFeature feature, System.Collections.Generic.IEnumerable`1<Oculus.Interaction.PoseDetection.FingerFeatureStateThreshold> thresholds)
    // Offset: 0x47EA250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerFeatureThresholds* New_ctor(::Oculus::Interaction::PoseDetection::FingerFeature feature, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>* thresholds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerFeatureThresholds*, creationType>(feature, thresholds)));
    }
    // public Oculus.Interaction.PoseDetection.FingerFeature get_Feature()
    // Offset: 0x47EA2F0
    ::Oculus::Interaction::PoseDetection::FingerFeature get_Feature();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.IFeatureStateThreshold`1<System.String>> get_Thresholds()
    // Offset: 0x47EA2F8
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* get_Thresholds();
  }; // Oculus.Interaction.PoseDetection.FingerFeatureThresholds
  #pragma pack(pop)
  static check_size<sizeof(FingerFeatureThresholds), 24 + sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*)> __Oculus_Interaction_PoseDetection_FingerFeatureThresholdsSizeCheck;
  static_assert(sizeof(FingerFeatureThresholds) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureThresholds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureThresholds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureThresholds::get_Feature
// Il2CppName: get_Feature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::FingerFeature (Oculus::Interaction::PoseDetection::FingerFeatureThresholds::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureThresholds::get_Feature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureThresholds*), "get_Feature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureThresholds::get_Thresholds
// Il2CppName: get_Thresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* (Oculus::Interaction::PoseDetection::FingerFeatureThresholds::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureThresholds::get_Thresholds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureThresholds*), "get_Thresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
