// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: IFeatureStateThresholds`2<TFeature, TFeatureState>
  template<typename TFeature, typename TFeatureState>
  class IFeatureStateThresholds_2;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: IFeatureThresholds`2<TFeature, TFeatureState>
  template<typename TFeature, typename TFeatureState>
  class IFeatureThresholds_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2, "Oculus.Interaction.PoseDetection", "IFeatureThresholds`2");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.PoseDetection.IFeatureThresholds`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TFeature, typename TFeatureState>
  class IFeatureThresholds_2 {
    public:
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState>> get_FeatureStateThresholds()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*>* get_FeatureStateThresholds() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::IFeatureThresholds_2::get_FeatureStateThresholds");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature, TFeatureState>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*>*, false>(this, ___internal__method);
    }
    // public System.Double get_MinTimeInState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double get_MinTimeInState() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::IFeatureThresholds_2::get_MinTimeInState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature, TFeatureState>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<double, false>(this, ___internal__method);
    }
  }; // Oculus.Interaction.PoseDetection.IFeatureThresholds`2
  // Could not write size check! Type: Oculus.Interaction.PoseDetection.IFeatureThresholds`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"