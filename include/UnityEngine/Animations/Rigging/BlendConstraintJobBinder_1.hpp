// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.AnimationJobBinder`2
#include "UnityEngine/Animations/Rigging/AnimationJobBinder_2.hpp"
// Including type: UnityEngine.Animations.Rigging.BlendConstraintJob
#include "UnityEngine/Animations/Rigging/BlendConstraintJob.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IAnimationJobData
  class IAnimationJobData;
  // Forward declaring type: IBlendConstraintData
  class IBlendConstraintData;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
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
  // Forward declaring type: BlendConstraintJobBinder`1<T>
  template<typename T>
  class BlendConstraintJobBinder_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Animations::Rigging::BlendConstraintJobBinder_1, "UnityEngine.Animations.Rigging", "BlendConstraintJobBinder`1");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Animations.Rigging.BlendConstraintJobBinder`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BlendConstraintJobBinder_1 : public ::UnityEngine::Animations::Rigging::AnimationJobBinder_2<::UnityEngine::Animations::Rigging::BlendConstraintJob, T> {
    public:
    // public UnityEngine.Animations.Rigging.BlendConstraintJob Create(UnityEngine.Animator animator, ref T data, UnityEngine.Component component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::Rigging::BlendConstraintJob Create(::UnityEngine::Animator* animator, ByRef<T> data, ::UnityEngine::Component* component) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::BlendConstraintJobBinder_1::Create");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::BlendConstraintJobBinder_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Animations::Rigging::BlendConstraintJob, false>(this, ___internal__method, animator, byref(data), component);
    }
    // public System.Void Destroy(UnityEngine.Animations.Rigging.BlendConstraintJob job)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Destroy(::UnityEngine::Animations::Rigging::BlendConstraintJob job) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::BlendConstraintJobBinder_1::Destroy");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Animations::Rigging::BlendConstraintJobBinder_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, job);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Animations.Rigging.AnimationJobBinder`2
    // Base method: System.Void AnimationJobBinder_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlendConstraintJobBinder_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::BlendConstraintJobBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlendConstraintJobBinder_1<T>*, creationType>()));
    }
  }; // UnityEngine.Animations.Rigging.BlendConstraintJobBinder`1
  // Could not write size check! Type: UnityEngine.Animations.Rigging.BlendConstraintJobBinder`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
