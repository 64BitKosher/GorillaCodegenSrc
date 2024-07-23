// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/TweenableVariableBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IEquatable`1 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
  // Forward declaring type: TweenableVariableSynchronousBase`1<T>
  template<typename T>
  class TweenableVariableSynchronousBase_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables", "TweenableVariableSynchronousBase`1");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableSynchronousBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class TweenableVariableSynchronousBase_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T> {
    public:
    // protected T Lerp(T from, T to, System.Single t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Lerp(T from, T to, float t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1::Lerp");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, from, to, t);
    }
    // protected System.Boolean IsNearlyEqual(T startValue, T targetValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsNearlyEqual(T startValue, T targetValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1::IsNearlyEqual");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, startValue, targetValue);
    }
    // protected override System.Void ExecuteTween(T startValue, T targetValue, System.Single tweenAmount, System.Boolean useCurve)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1
    // Base method: System.Void TweenableVariableBase_1::ExecuteTween(T startValue, T targetValue, System.Single tweenAmount, System.Boolean useCurve)
    void ExecuteTween(T startValue, T targetValue, float tweenAmount, bool useCurve) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1::ExecuteTween");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, startValue, targetValue, tweenAmount, useCurve);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1
    // Base method: System.Void TweenableVariableBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TweenableVariableSynchronousBase_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TweenableVariableSynchronousBase_1<T>*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableSynchronousBase`1
  // Could not write size check! Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableSynchronousBase`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
