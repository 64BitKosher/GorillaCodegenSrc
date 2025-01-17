// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GorillaLocomotion::Climbing
namespace GorillaLocomotion::Climbing {
  // Forward declaring type: GorillaHandClimber
  class GorillaHandClimber;
  // Forward declaring type: GorillaClimbableRef
  class GorillaClimbableRef;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Climbing
namespace GorillaLocomotion::Climbing {
  // Forward declaring type: GorillaClimbable
  class GorillaClimbable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Climbing::GorillaClimbable);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Climbing::GorillaClimbable*, "GorillaLocomotion.Climbing", "GorillaClimbable");
// Type namespace: GorillaLocomotion.Climbing
namespace GorillaLocomotion::Climbing {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Climbing.GorillaClimbable
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaClimbable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean snapX
    // Size: 0x1
    // Offset: 0x20
    bool snapX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean snapY
    // Size: 0x1
    // Offset: 0x21
    bool snapY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean snapZ
    // Size: 0x1
    // Offset: 0x22
    bool snapZ;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: snapZ and: maxDistanceSnap
    char __padding2[0x1] = {};
    // public System.Single maxDistanceSnap
    // Size: 0x4
    // Offset: 0x24
    float maxDistanceSnap;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.AudioClip clip
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioClip* clip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // public UnityEngine.AudioClip clipOnFullRelease
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioClip* clipOnFullRelease;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // public System.Action`2<GorillaLocomotion.Climbing.GorillaHandClimber,GorillaLocomotion.Climbing.GorillaClimbableRef> onBeforeClimb
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_2<::GorillaLocomotion::Climbing::GorillaHandClimber*, ::GorillaLocomotion::Climbing::GorillaClimbableRef*>* onBeforeClimb;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GorillaLocomotion::Climbing::GorillaHandClimber*, ::GorillaLocomotion::Climbing::GorillaClimbableRef*>*) == 0x8);
    // public System.Boolean climbOnlyWhileSmall
    // Size: 0x1
    // Offset: 0x40
    bool climbOnlyWhileSmall;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isBeingClimbed
    // Size: 0x1
    // Offset: 0x41
    bool isBeingClimbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isBeingClimbed and: colliderCache
    char __padding8[0x6] = {};
    // public UnityEngine.Collider colliderCache
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Collider* colliderCache;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean snapX
    [[deprecated("Use field access instead!")]] bool& dyn_snapX();
    // Get instance field reference: public System.Boolean snapY
    [[deprecated("Use field access instead!")]] bool& dyn_snapY();
    // Get instance field reference: public System.Boolean snapZ
    [[deprecated("Use field access instead!")]] bool& dyn_snapZ();
    // Get instance field reference: public System.Single maxDistanceSnap
    [[deprecated("Use field access instead!")]] float& dyn_maxDistanceSnap();
    // Get instance field reference: public UnityEngine.AudioClip clip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_clip();
    // Get instance field reference: public UnityEngine.AudioClip clipOnFullRelease
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_clipOnFullRelease();
    // Get instance field reference: public System.Action`2<GorillaLocomotion.Climbing.GorillaHandClimber,GorillaLocomotion.Climbing.GorillaClimbableRef> onBeforeClimb
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GorillaLocomotion::Climbing::GorillaHandClimber*, ::GorillaLocomotion::Climbing::GorillaClimbableRef*>*& dyn_onBeforeClimb();
    // Get instance field reference: public System.Boolean climbOnlyWhileSmall
    [[deprecated("Use field access instead!")]] bool& dyn_climbOnlyWhileSmall();
    // Get instance field reference: public System.Boolean isBeingClimbed
    [[deprecated("Use field access instead!")]] bool& dyn_isBeingClimbed();
    // Get instance field reference: public UnityEngine.Collider colliderCache
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_colliderCache();
    // private System.Void Awake()
    // Offset: 0x27EF04C
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x27EF0A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaClimbable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Climbing::GorillaClimbable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaClimbable*, creationType>()));
    }
  }; // GorillaLocomotion.Climbing.GorillaClimbable
  #pragma pack(pop)
  static check_size<sizeof(GorillaClimbable), 72 + sizeof(::UnityEngine::Collider*)> __GorillaLocomotion_Climbing_GorillaClimbableSizeCheck;
  static_assert(sizeof(GorillaClimbable) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaClimbable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Climbing::GorillaClimbable::*)()>(&GorillaLocomotion::Climbing::GorillaClimbable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaClimbable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaClimbable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
