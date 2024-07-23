// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.IAnimationJobBinder
#include "UnityEngine/Animations/Rigging/IAnimationJobBinder.hpp"
// Including type: UnityEngine.Animations.AnimationScriptPlayable
#include "UnityEngine/Animations/AnimationScriptPlayable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: IAnimationJob
  class IAnimationJob;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IAnimationJobData
  class IAnimationJobData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: AnimationJobBinder`2<TJob, TData>
  template<typename TJob, typename TData>
  class AnimationJobBinder_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Animations::Rigging::AnimationJobBinder_2, "UnityEngine.Animations.Rigging", "AnimationJobBinder`2");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Animations.Rigging.AnimationJobBinder`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TJob, typename TData>
  class AnimationJobBinder_2 : public ::Il2CppObject/*, public ::UnityEngine::Animations::Rigging::IAnimationJobBinder*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IAnimationJobBinder
    operator ::UnityEngine::Animations::Rigging::IAnimationJobBinder() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(this);
    }
    // public TJob Create(UnityEngine.Animator animator, ref TData data, UnityEngine.Component component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TJob Create(::UnityEngine::Animator* animator, ByRef<TData> data, ::UnityEngine::Component* component) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::AnimationJobBinder_2::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob, TData>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TJob, false>(this, ___internal__method, animator, byref(data), component);
    }
    // public System.Void Destroy(TJob job)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Destroy(TJob job) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::AnimationJobBinder_2::Destroy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob, TData>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, job);
    }
    // public System.Void Update(TJob job, ref TData data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update(TJob job, ByRef<TData> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::AnimationJobBinder_2::Update");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob, TData>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, job, byref(data));
    }
    // private UnityEngine.Animations.IAnimationJob UnityEngine.Animations.Rigging.IAnimationJobBinder.Create(UnityEngine.Animator animator, UnityEngine.Animations.Rigging.IAnimationJobData data, UnityEngine.Component component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::IAnimationJob* UnityEngine_Animations_Rigging_IAnimationJobBinder_Create(::UnityEngine::Animator* animator, ::UnityEngine::Animations::Rigging::IAnimationJobData* data, ::UnityEngine::Component* component) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::AnimationJobBinder_2::UnityEngine.Animations.Rigging.IAnimationJobBinder.Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob, TData>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Animations::IAnimationJob*, false>(this, ___internal__method, animator, data, component);
    }
    // private System.Void UnityEngine.Animations.Rigging.IAnimationJobBinder.Destroy(UnityEngine.Animations.IAnimationJob job)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnityEngine_Animations_Rigging_IAnimationJobBinder_Destroy(::UnityEngine::Animations::IAnimationJob* job) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::AnimationJobBinder_2::UnityEngine.Animations.Rigging.IAnimationJobBinder.Destroy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob, TData>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, job);
    }
    // private System.Void UnityEngine.Animations.Rigging.IAnimationJobBinder.Update(UnityEngine.Animations.IAnimationJob job, UnityEngine.Animations.Rigging.IAnimationJobData data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnityEngine_Animations_Rigging_IAnimationJobBinder_Update(::UnityEngine::Animations::IAnimationJob* job, ::UnityEngine::Animations::Rigging::IAnimationJobData* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::AnimationJobBinder_2::UnityEngine.Animations.Rigging.IAnimationJobBinder.Update");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob, TData>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, job, data);
    }
    // private UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.Rigging.IAnimationJobBinder.CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Animations.IAnimationJob job)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine_Animations_Rigging_IAnimationJobBinder_CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animations::IAnimationJob* job) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::AnimationJobBinder_2::UnityEngine.Animations.Rigging.IAnimationJobBinder.CreatePlayable");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob, TData>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Animations::AnimationScriptPlayable, false>(this, ___internal__method, graph, job);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationJobBinder_2<TJob, TData>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::AnimationJobBinder_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationJobBinder_2<TJob, TData>*, creationType>()));
    }
  }; // UnityEngine.Animations.Rigging.AnimationJobBinder`2
  // Could not write size check! Type: UnityEngine.Animations.Rigging.AnimationJobBinder`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
