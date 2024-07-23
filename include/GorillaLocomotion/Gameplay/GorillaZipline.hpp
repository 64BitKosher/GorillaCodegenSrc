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
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GorillaLocomotion::Climbing
namespace GorillaLocomotion::Climbing {
  // Forward declaring type: GorillaClimbable
  class GorillaClimbable;
  // Forward declaring type: GorillaHandClimber
  class GorillaHandClimber;
  // Forward declaring type: GorillaClimbableRef
  class GorillaClimbableRef;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BezierSpline
  class BezierSpline;
}
// Forward declaring namespace: GorillaLocomotion::Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: GorillaZiplineSettings
  class GorillaZiplineSettings;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: GorillaZipline
  class GorillaZipline;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Gameplay::GorillaZipline);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Gameplay::GorillaZipline*, "GorillaLocomotion.Gameplay", "GorillaZipline");
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Gameplay.GorillaZipline
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaZipline : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform segmentsRoot
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* segmentsRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.GameObject segmentPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* segmentPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private GorillaLocomotion.Climbing.GorillaClimbable slideHelper
    // Size: 0x8
    // Offset: 0x30
    ::GorillaLocomotion::Climbing::GorillaClimbable* slideHelper;
    // Field size check
    static_assert(sizeof(::GorillaLocomotion::Climbing::GorillaClimbable*) == 0x8);
    // private UnityEngine.AudioSource audioSlide
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AudioSource* audioSlide;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private BezierSpline spline
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BezierSpline* spline;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BezierSpline*) == 0x8);
    // private UnityEngine.Transform climbOffsetHelper
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* climbOffsetHelper;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private GorillaLocomotion.Gameplay.GorillaZiplineSettings settings
    // Size: 0x8
    // Offset: 0x50
    ::GorillaLocomotion::Gameplay::GorillaZiplineSettings* settings;
    // Field size check
    static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings*) == 0x8);
    // private System.Single <currentSpeed>k__BackingField
    // Size: 0x4
    // Offset: 0x58
    float currentSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single ziplineDistance
    // Size: 0x4
    // Offset: 0x5C
    float ziplineDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single segmentDistance
    // Size: 0x4
    // Offset: 0x60
    float segmentDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: segmentDistance and: currentClimber
    char __padding9[0x4] = {};
    // private GorillaLocomotion.Climbing.GorillaHandClimber currentClimber
    // Size: 0x8
    // Offset: 0x68
    ::GorillaLocomotion::Climbing::GorillaHandClimber* currentClimber;
    // Field size check
    static_assert(sizeof(::GorillaLocomotion::Climbing::GorillaHandClimber*) == 0x8);
    // private System.Single currentT
    // Size: 0x4
    // Offset: 0x70
    float currentT;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single currentInheritVelocityMulti
    // Size: 0x4
    // Offset: 0x74
    float currentInheritVelocityMulti;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Single inheritVelocityRechargeRate
    static constexpr const float inheritVelocityRechargeRate = 0.2;
    // Get static field: static private System.Single inheritVelocityRechargeRate
    static float _get_inheritVelocityRechargeRate();
    // Set static field: static private System.Single inheritVelocityRechargeRate
    static void _set_inheritVelocityRechargeRate(float value);
    // static field const value: static private System.Single inheritVelocityValueOnRelease
    static constexpr const float inheritVelocityValueOnRelease = 0.55;
    // Get static field: static private System.Single inheritVelocityValueOnRelease
    static float _get_inheritVelocityValueOnRelease();
    // Set static field: static private System.Single inheritVelocityValueOnRelease
    static void _set_inheritVelocityValueOnRelease(float value);
    // Get instance field reference: private UnityEngine.Transform segmentsRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_segmentsRoot();
    // Get instance field reference: private UnityEngine.GameObject segmentPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_segmentPrefab();
    // Get instance field reference: private GorillaLocomotion.Climbing.GorillaClimbable slideHelper
    [[deprecated("Use field access instead!")]] ::GorillaLocomotion::Climbing::GorillaClimbable*& dyn_slideHelper();
    // Get instance field reference: private UnityEngine.AudioSource audioSlide
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSlide();
    // Get instance field reference: private BezierSpline spline
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BezierSpline*& dyn_spline();
    // Get instance field reference: private UnityEngine.Transform climbOffsetHelper
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_climbOffsetHelper();
    // Get instance field reference: private GorillaLocomotion.Gameplay.GorillaZiplineSettings settings
    [[deprecated("Use field access instead!")]] ::GorillaLocomotion::Gameplay::GorillaZiplineSettings*& dyn_settings();
    // Get instance field reference: private System.Single <currentSpeed>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$currentSpeed$k__BackingField();
    // Get instance field reference: private System.Single ziplineDistance
    [[deprecated("Use field access instead!")]] float& dyn_ziplineDistance();
    // Get instance field reference: private System.Single segmentDistance
    [[deprecated("Use field access instead!")]] float& dyn_segmentDistance();
    // Get instance field reference: private GorillaLocomotion.Climbing.GorillaHandClimber currentClimber
    [[deprecated("Use field access instead!")]] ::GorillaLocomotion::Climbing::GorillaHandClimber*& dyn_currentClimber();
    // Get instance field reference: private System.Single currentT
    [[deprecated("Use field access instead!")]] float& dyn_currentT();
    // Get instance field reference: private System.Single currentInheritVelocityMulti
    [[deprecated("Use field access instead!")]] float& dyn_currentInheritVelocityMulti();
    // public System.Single get_currentSpeed()
    // Offset: 0x27E9DAC
    float get_currentSpeed();
    // private System.Void set_currentSpeed(System.Single value)
    // Offset: 0x27E9DB4
    void set_currentSpeed(float value);
    // private System.Void FindTFromDistance(ref System.Single t, System.Single distance, System.Int32 steps)
    // Offset: 0x27E9DBC
    void FindTFromDistance(ByRef<float> t, float distance, int steps);
    // private System.Single FindSlideHelperSpot(UnityEngine.Vector3 grabPoint)
    // Offset: 0x27E9F04
    float FindSlideHelperSpot(::UnityEngine::Vector3 grabPoint);
    // private System.Void Start()
    // Offset: 0x27E9FF8
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x27EA110
    void OnDestroy();
    // public UnityEngine.Vector3 GetCurrentDirection()
    // Offset: 0x27EA1F4
    ::UnityEngine::Vector3 GetCurrentDirection();
    // private System.Void OnBeforeClimb(GorillaLocomotion.Climbing.GorillaHandClimber hand, GorillaLocomotion.Climbing.GorillaClimbableRef climbRef)
    // Offset: 0x27EA218
    void OnBeforeClimb(::GorillaLocomotion::Climbing::GorillaHandClimber* hand, ::GorillaLocomotion::Climbing::GorillaClimbableRef* climbRef);
    // private System.Void Update()
    // Offset: 0x27EA500
    void Update();
    // private System.Void Stop()
    // Offset: 0x27EA8F4
    void Stop();
    // public System.Void .ctor()
    // Offset: 0x27EA964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaZipline* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Gameplay::GorillaZipline::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaZipline*, creationType>()));
    }
  }; // GorillaLocomotion.Gameplay.GorillaZipline
  #pragma pack(pop)
  static check_size<sizeof(GorillaZipline), 116 + sizeof(float)> __GorillaLocomotion_Gameplay_GorillaZiplineSizeCheck;
  static_assert(sizeof(GorillaZipline) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::get_currentSpeed
// Il2CppName: get_currentSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&GorillaLocomotion::Gameplay::GorillaZipline::get_currentSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "get_currentSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::set_currentSpeed
// Il2CppName: set_currentSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::GorillaZipline::*)(float)>(&GorillaLocomotion::Gameplay::GorillaZipline::set_currentSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "set_currentSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::FindTFromDistance
// Il2CppName: FindTFromDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::GorillaZipline::*)(ByRef<float>, float, int)>(&GorillaLocomotion::Gameplay::GorillaZipline::FindTFromDistance)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* steps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "FindTFromDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, distance, steps});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::FindSlideHelperSpot
// Il2CppName: FindSlideHelperSpot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GorillaLocomotion::Gameplay::GorillaZipline::*)(::UnityEngine::Vector3)>(&GorillaLocomotion::Gameplay::GorillaZipline::FindSlideHelperSpot)> {
  static const MethodInfo* get() {
    static auto* grabPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "FindSlideHelperSpot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabPoint});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&GorillaLocomotion::Gameplay::GorillaZipline::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&GorillaLocomotion::Gameplay::GorillaZipline::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::GetCurrentDirection
// Il2CppName: GetCurrentDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&GorillaLocomotion::Gameplay::GorillaZipline::GetCurrentDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "GetCurrentDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::OnBeforeClimb
// Il2CppName: OnBeforeClimb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::GorillaZipline::*)(::GorillaLocomotion::Climbing::GorillaHandClimber*, ::GorillaLocomotion::Climbing::GorillaClimbableRef*)>(&GorillaLocomotion::Gameplay::GorillaZipline::OnBeforeClimb)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Climbing", "GorillaHandClimber")->byval_arg;
    static auto* climbRef = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Climbing", "GorillaClimbableRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "OnBeforeClimb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, climbRef});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&GorillaLocomotion::Gameplay::GorillaZipline::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&GorillaLocomotion::Gameplay::GorillaZipline::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::GorillaZipline*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZipline::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
