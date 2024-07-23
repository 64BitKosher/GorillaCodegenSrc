// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/TweenableVariableBase_1.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/NativeCurve.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/TweenJobData_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IEquatable`1 because it is already included!
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
  // Forward declaring type: TweenableVariableAsyncBase`1<T>
  template<typename T>
  class TweenableVariableAsyncBase_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables", "TweenableVariableAsyncBase`1");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class TweenableVariableAsyncBase_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Boolean m_OutputInitialized
    // Size: 0x1
    // Offset: 0x0
    bool m_OutputInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private Unity.Collections.NativeArray`1<T> m_JobOutputStore
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::Unity::Collections::NativeArray_1<T> m_JobOutputStore;
    // private System.Boolean m_CurveDirty
    // Size: 0x1
    // Offset: 0x0
    bool m_CurveDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve m_NativeCurve
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve m_NativeCurve;
    // private System.Boolean m_HasJobPending
    // Size: 0x1
    // Offset: 0x0
    bool m_HasJobPending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private Unity.Jobs.JobHandle m_LastJobHandle
    // Size: 0xC
    // Offset: 0x0
    ::Unity::Jobs::JobHandle m_LastJobHandle;
    // Field size check
    static_assert(sizeof(::Unity::Jobs::JobHandle) == 0xC);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_OutputInitialized
    [[deprecated("Use field access instead!")]] bool& dyn_m_OutputInitialized() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::dyn_m_OutputInitialized");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_OutputInitialized"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Unity.Collections.NativeArray`1<T> m_JobOutputStore
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<T>& dyn_m_JobOutputStore() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::dyn_m_JobOutputStore");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_JobOutputStore"))->offset;
      return *reinterpret_cast<::Unity::Collections::NativeArray_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_CurveDirty
    [[deprecated("Use field access instead!")]] bool& dyn_m_CurveDirty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::dyn_m_CurveDirty");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CurveDirty"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve m_NativeCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve& dyn_m_NativeCurve() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::dyn_m_NativeCurve");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_NativeCurve"))->offset;
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_HasJobPending
    [[deprecated("Use field access instead!")]] bool& dyn_m_HasJobPending() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::dyn_m_HasJobPending");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_HasJobPending"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Unity.Jobs.JobHandle m_LastJobHandle
    [[deprecated("Use field access instead!")]] ::Unity::Jobs::JobHandle& dyn_m_LastJobHandle() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::dyn_m_LastJobHandle");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_LastJobHandle"))->offset;
      return *reinterpret_cast<::Unity::Jobs::JobHandle*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void set_Value(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::set_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve GetNativeCurve()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve GetNativeCurve() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::GetNativeCurve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetNativeCurve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve, false>(this, ___internal__method);
    }
    // private System.Void RefreshCurve()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RefreshCurve() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::RefreshCurve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RefreshCurve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void UpdateStateFromCompletedJob()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateStateFromCompletedJob() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::UpdateStateFromCompletedJob");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateStateFromCompletedJob", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected Unity.Jobs.JobHandle ScheduleTweenJob(ref UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<T> jobData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>> jobData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::ScheduleTweenJob");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal__method, byref(jobData));
    }
    // private Unity.Collections.NativeArray`1<T> GetJobOutputStore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Unity::Collections::NativeArray_1<T> GetJobOutputStore() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::GetJobOutputStore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetJobOutputStore", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal__method);
    }
    // private System.Boolean CompleteJob()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CompleteJob() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::CompleteJob");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CompleteJob", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // protected override System.Void PreprocessTween()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1
    // Base method: System.Void TweenableVariableBase_1::PreprocessTween()
    void PreprocessTween() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::PreprocessTween");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected override System.Void ExecuteTween(T startValue, T targetValue, System.Single tweenAmount, System.Boolean useCurve)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1
    // Base method: System.Void TweenableVariableBase_1::ExecuteTween(T startValue, T targetValue, System.Single tweenAmount, System.Boolean useCurve)
    void ExecuteTween(T startValue, T targetValue, float tweenAmount, bool useCurve) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::ExecuteTween");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, startValue, targetValue, tweenAmount, useCurve);
    }
    // protected override System.Void OnAnimationCurveChanged(UnityEngine.AnimationCurve value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1
    // Base method: System.Void TweenableVariableBase_1::OnAnimationCurveChanged(UnityEngine.AnimationCurve value)
    void OnAnimationCurveChanged(::UnityEngine::AnimationCurve* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::OnAnimationCurveChanged");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1
    // Base method: System.Void TweenableVariableBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TweenableVariableAsyncBase_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TweenableVariableAsyncBase_1<T>*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1
  // Could not write size check! Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"