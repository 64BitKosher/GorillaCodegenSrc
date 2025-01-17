// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/BaseAffordanceStateReceiver_1.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.IAsyncAffordanceStateReceiver
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/IAsyncAffordanceStateReceiver.hpp"
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
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
  // Forward declaring type: BaseAffordanceTheme`1<T>
  template<typename T>
  class BaseAffordanceTheme_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
  // Forward declaring type: BaseAsyncAffordanceStateReceiver`1<T>
  template<typename T>
  class BaseAsyncAffordanceStateReceiver_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver", "BaseAsyncAffordanceStateReceiver`1");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BaseAsyncAffordanceStateReceiver_1 : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAffordanceStateReceiver_1<T>/*, public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*/ {
    public:
    public:
    // private Unity.Collections.NativeArray`1<T> m_JobOutputStore
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::Unity::Collections::NativeArray_1<T> m_JobOutputStore;
    // private UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve m_NativeCurve
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve m_NativeCurve;
    // private Unity.Jobs.JobHandle m_LastJobHandle
    // Size: 0xC
    // Offset: 0x0
    ::Unity::Jobs::JobHandle m_LastJobHandle;
    // Field size check
    static_assert(sizeof(::Unity::Jobs::JobHandle) == 0xC);
    // private System.Boolean m_OutputInitialized
    // Size: 0x1
    // Offset: 0x0
    bool m_OutputInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver
    operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private Unity.Collections.NativeArray`1<T> m_JobOutputStore
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<T>& dyn_m_JobOutputStore() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::dyn_m_JobOutputStore");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_JobOutputStore"))->offset;
      return *reinterpret_cast<::Unity::Collections::NativeArray_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve m_NativeCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve& dyn_m_NativeCurve() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::dyn_m_NativeCurve");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_NativeCurve"))->offset;
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Unity.Jobs.JobHandle m_LastJobHandle
    [[deprecated("Use field access instead!")]] ::Unity::Jobs::JobHandle& dyn_m_LastJobHandle() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::dyn_m_LastJobHandle");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_LastJobHandle"))->offset;
      return *reinterpret_cast<::Unity::Jobs::JobHandle*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_OutputInitialized
    [[deprecated("Use field access instead!")]] bool& dyn_m_OutputInitialized() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::dyn_m_OutputInitialized");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_OutputInitialized"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::OnDestroy");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public Unity.Jobs.JobHandle HandleTween(System.Single tweenTarget)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Unity::Jobs::JobHandle HandleTween(float tweenTarget) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::HandleTween");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal__method, tweenTarget);
    }
    // public System.Void UpdateStateFromCompletedJob()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateStateFromCompletedJob() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::UpdateStateFromCompletedJob");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected Unity.Jobs.JobHandle ScheduleTweenJob(ref UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<T> jobData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>> jobData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::ScheduleTweenJob");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal__method, byref(jobData));
    }
    // private Unity.Collections.NativeArray`1<T> GetJobOutputStore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Unity::Collections::NativeArray_1<T> GetJobOutputStore() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::GetJobOutputStore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetJobOutputStore", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal__method);
    }
    // protected override System.Void OnAffordanceThemeChanged(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T> newValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1
    // Base method: System.Void BaseAffordanceStateReceiver_1::OnAffordanceThemeChanged(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T> newValue)
    void OnAffordanceThemeChanged(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* newValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::OnAffordanceThemeChanged");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAffordanceStateReceiver_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newValue);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1
    // Base method: System.Void BaseAffordanceStateReceiver_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseAsyncAffordanceStateReceiver_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseAsyncAffordanceStateReceiver_1<T>*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1
  // Could not write size check! Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
