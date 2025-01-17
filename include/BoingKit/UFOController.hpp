// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BoingKit.Vector3Spring
#include "BoingKit/Vector3Spring.hpp"
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
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Completed forward declares
// Type namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: UFOController
  class UFOController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::UFOController);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::UFOController*, "BoingKit", "UFOController");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0xF8
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.UFOController
  // [TokenAttribute] Offset: FFFFFFFF
  class UFOController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single LinearThrust
    // Size: 0x4
    // Offset: 0x20
    float LinearThrust;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaxLinearSpeed
    // Size: 0x4
    // Offset: 0x24
    float MaxLinearSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LinearDrag
    // Size: 0x4
    // Offset: 0x28
    float LinearDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Tilt
    // Size: 0x4
    // Offset: 0x2C
    float Tilt;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single AngularThrust
    // Size: 0x4
    // Offset: 0x30
    float AngularThrust;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaxAngularSpeed
    // Size: 0x4
    // Offset: 0x34
    float MaxAngularSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single AngularDrag
    // Size: 0x4
    // Offset: 0x38
    float AngularDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Hover
    // Size: 0x4
    // Offset: 0x3C
    float Hover;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Transform Eyes
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* Eyes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single BlinkInterval
    // Size: 0x4
    // Offset: 0x48
    float BlinkInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_blinkTimer
    // Size: 0x4
    // Offset: 0x4C
    float m_blinkTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_lastBlinkWasDouble
    // Size: 0x1
    // Offset: 0x50
    bool m_lastBlinkWasDouble;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_lastBlinkWasDouble and: m_eyeInitScale
    char __padding11[0x3] = {};
    // private UnityEngine.Vector3 m_eyeInitScale
    // Size: 0xC
    // Offset: 0x54
    ::UnityEngine::Vector3 m_eyeInitScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_eyeInitPositionLs
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 m_eyeInitPositionLs;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private BoingKit.Vector3Spring m_eyeScaleSpring
    // Size: 0x20
    // Offset: 0x6C
    ::BoingKit::Vector3Spring m_eyeScaleSpring;
    // Field size check
    static_assert(sizeof(::BoingKit::Vector3Spring) == 0x20);
    // private BoingKit.Vector3Spring m_eyePositionLsSpring
    // Size: 0x20
    // Offset: 0x8C
    ::BoingKit::Vector3Spring m_eyePositionLsSpring;
    // Field size check
    static_assert(sizeof(::BoingKit::Vector3Spring) == 0x20);
    // Padding between fields: m_eyePositionLsSpring and: Motor
    char __padding15[0x4] = {};
    // public UnityEngine.Transform Motor
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Transform* Motor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single MotorBaseAngularSpeed
    // Size: 0x4
    // Offset: 0xB8
    float MotorBaseAngularSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MotorMaxAngularSpeed
    // Size: 0x4
    // Offset: 0xBC
    float MotorMaxAngularSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.ParticleSystem BubbleEmitter
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::ParticleSystem* BubbleEmitter;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // public System.Single BubbleBaseEmissionRate
    // Size: 0x4
    // Offset: 0xC8
    float BubbleBaseEmissionRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single BubbleMaxEmissionRate
    // Size: 0x4
    // Offset: 0xCC
    float BubbleMaxEmissionRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 m_linearVelocity
    // Size: 0xC
    // Offset: 0xD0
    ::UnityEngine::Vector3 m_linearVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_angularVelocity
    // Size: 0x4
    // Offset: 0xDC
    float m_angularVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_yawAngle
    // Size: 0x4
    // Offset: 0xE0
    float m_yawAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 m_hoverCenter
    // Size: 0xC
    // Offset: 0xE4
    ::UnityEngine::Vector3 m_hoverCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_hoverPhase
    // Size: 0x4
    // Offset: 0xF0
    float m_hoverPhase;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_motorAngle
    // Size: 0x4
    // Offset: 0xF4
    float m_motorAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single LinearThrust
    [[deprecated("Use field access instead!")]] float& dyn_LinearThrust();
    // Get instance field reference: public System.Single MaxLinearSpeed
    [[deprecated("Use field access instead!")]] float& dyn_MaxLinearSpeed();
    // Get instance field reference: public System.Single LinearDrag
    [[deprecated("Use field access instead!")]] float& dyn_LinearDrag();
    // Get instance field reference: public System.Single Tilt
    [[deprecated("Use field access instead!")]] float& dyn_Tilt();
    // Get instance field reference: public System.Single AngularThrust
    [[deprecated("Use field access instead!")]] float& dyn_AngularThrust();
    // Get instance field reference: public System.Single MaxAngularSpeed
    [[deprecated("Use field access instead!")]] float& dyn_MaxAngularSpeed();
    // Get instance field reference: public System.Single AngularDrag
    [[deprecated("Use field access instead!")]] float& dyn_AngularDrag();
    // Get instance field reference: public System.Single Hover
    [[deprecated("Use field access instead!")]] float& dyn_Hover();
    // Get instance field reference: public UnityEngine.Transform Eyes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_Eyes();
    // Get instance field reference: public System.Single BlinkInterval
    [[deprecated("Use field access instead!")]] float& dyn_BlinkInterval();
    // Get instance field reference: private System.Single m_blinkTimer
    [[deprecated("Use field access instead!")]] float& dyn_m_blinkTimer();
    // Get instance field reference: private System.Boolean m_lastBlinkWasDouble
    [[deprecated("Use field access instead!")]] bool& dyn_m_lastBlinkWasDouble();
    // Get instance field reference: private UnityEngine.Vector3 m_eyeInitScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_eyeInitScale();
    // Get instance field reference: private UnityEngine.Vector3 m_eyeInitPositionLs
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_eyeInitPositionLs();
    // Get instance field reference: private BoingKit.Vector3Spring m_eyeScaleSpring
    [[deprecated("Use field access instead!")]] ::BoingKit::Vector3Spring& dyn_m_eyeScaleSpring();
    // Get instance field reference: private BoingKit.Vector3Spring m_eyePositionLsSpring
    [[deprecated("Use field access instead!")]] ::BoingKit::Vector3Spring& dyn_m_eyePositionLsSpring();
    // Get instance field reference: public UnityEngine.Transform Motor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_Motor();
    // Get instance field reference: public System.Single MotorBaseAngularSpeed
    [[deprecated("Use field access instead!")]] float& dyn_MotorBaseAngularSpeed();
    // Get instance field reference: public System.Single MotorMaxAngularSpeed
    [[deprecated("Use field access instead!")]] float& dyn_MotorMaxAngularSpeed();
    // Get instance field reference: public UnityEngine.ParticleSystem BubbleEmitter
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_BubbleEmitter();
    // Get instance field reference: public System.Single BubbleBaseEmissionRate
    [[deprecated("Use field access instead!")]] float& dyn_BubbleBaseEmissionRate();
    // Get instance field reference: public System.Single BubbleMaxEmissionRate
    [[deprecated("Use field access instead!")]] float& dyn_BubbleMaxEmissionRate();
    // Get instance field reference: private UnityEngine.Vector3 m_linearVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_linearVelocity();
    // Get instance field reference: private System.Single m_angularVelocity
    [[deprecated("Use field access instead!")]] float& dyn_m_angularVelocity();
    // Get instance field reference: private System.Single m_yawAngle
    [[deprecated("Use field access instead!")]] float& dyn_m_yawAngle();
    // Get instance field reference: private UnityEngine.Vector3 m_hoverCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_hoverCenter();
    // Get instance field reference: private System.Single m_hoverPhase
    [[deprecated("Use field access instead!")]] float& dyn_m_hoverPhase();
    // Get instance field reference: private System.Single m_motorAngle
    [[deprecated("Use field access instead!")]] float& dyn_m_motorAngle();
    // private System.Void Start()
    // Offset: 0x28E7A5C
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x28E7C34
    void OnEnable();
    // private System.Void FixedUpdate()
    // Offset: 0x28E7C38
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x28E8AB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UFOController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::UFOController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UFOController*, creationType>()));
    }
  }; // BoingKit.UFOController
  #pragma pack(pop)
  static check_size<sizeof(UFOController), 244 + sizeof(float)> __BoingKit_UFOControllerSizeCheck;
  static_assert(sizeof(UFOController) == 0xF8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::UFOController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::UFOController::*)()>(&BoingKit::UFOController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::UFOController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::UFOController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::UFOController::*)()>(&BoingKit::UFOController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::UFOController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::UFOController::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::UFOController::*)()>(&BoingKit::UFOController::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::UFOController*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::UFOController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
