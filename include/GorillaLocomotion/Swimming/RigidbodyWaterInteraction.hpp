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
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GorillaLocomotion::Swimming
namespace GorillaLocomotion::Swimming {
  // Forward declaring type: WaterVolume
  class WaterVolume;
  // Forward declaring type: WaterCurrent
  class WaterCurrent;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Forward declaring type: RigidbodyWaterInteraction
  class RigidbodyWaterInteraction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*, "GorillaLocomotion.Swimming", "RigidbodyWaterInteraction");
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Swimming.RigidbodyWaterInteraction
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class RigidbodyWaterInteraction : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean applyDamping
    // Size: 0x1
    // Offset: 0x20
    bool applyDamping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean applyBuoyancyForce
    // Size: 0x1
    // Offset: 0x21
    bool applyBuoyancyForce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean applyAngularDrag
    // Size: 0x1
    // Offset: 0x22
    bool applyAngularDrag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean applyWaterCurrents
    // Size: 0x1
    // Offset: 0x23
    bool applyWaterCurrents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean applySurfaceTorque
    // Size: 0x1
    // Offset: 0x24
    bool applySurfaceTorque;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: applySurfaceTorque and: underWaterDampingHalfLife
    char __padding4[0x3] = {};
    // public System.Single underWaterDampingHalfLife
    // Size: 0x4
    // Offset: 0x28
    float underWaterDampingHalfLife;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single waterSurfaceDampingHalfLife
    // Size: 0x4
    // Offset: 0x2C
    float waterSurfaceDampingHalfLife;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single underWaterBuoyancyFactor
    // Size: 0x4
    // Offset: 0x30
    float underWaterBuoyancyFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single angularDrag
    // Size: 0x4
    // Offset: 0x34
    float angularDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single surfaceTorqueAmount
    // Size: 0x4
    // Offset: 0x38
    float surfaceTorqueAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean enablePreciseWaterCollision
    // Size: 0x1
    // Offset: 0x3C
    bool enablePreciseWaterCollision;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enablePreciseWaterCollision and: objectRadiusForWaterCollision
    char __padding10[0x3] = {};
    // public System.Single objectRadiusForWaterCollision
    // Size: 0x4
    // Offset: 0x40
    float objectRadiusForWaterCollision;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single buoyancyEquilibrium
    // Size: 0x4
    // Offset: 0x44
    float buoyancyEquilibrium;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Rigidbody rb
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rigidbody* rb;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private System.Collections.Generic.List`1<GorillaLocomotion.Swimming.WaterVolume> overlappingWaterVolumes
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterVolume*>* overlappingWaterVolumes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterVolume*>*) == 0x8);
    // private System.Collections.Generic.List`1<GorillaLocomotion.Swimming.WaterCurrent> activeWaterCurrents
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterCurrent*>* activeWaterCurrents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterCurrent*>*) == 0x8);
    // private System.Single baseAngularDrag
    // Size: 0x4
    // Offset: 0x60
    float baseAngularDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean applyDamping
    [[deprecated("Use field access instead!")]] bool& dyn_applyDamping();
    // Get instance field reference: public System.Boolean applyBuoyancyForce
    [[deprecated("Use field access instead!")]] bool& dyn_applyBuoyancyForce();
    // Get instance field reference: public System.Boolean applyAngularDrag
    [[deprecated("Use field access instead!")]] bool& dyn_applyAngularDrag();
    // Get instance field reference: public System.Boolean applyWaterCurrents
    [[deprecated("Use field access instead!")]] bool& dyn_applyWaterCurrents();
    // Get instance field reference: public System.Boolean applySurfaceTorque
    [[deprecated("Use field access instead!")]] bool& dyn_applySurfaceTorque();
    // Get instance field reference: public System.Single underWaterDampingHalfLife
    [[deprecated("Use field access instead!")]] float& dyn_underWaterDampingHalfLife();
    // Get instance field reference: public System.Single waterSurfaceDampingHalfLife
    [[deprecated("Use field access instead!")]] float& dyn_waterSurfaceDampingHalfLife();
    // Get instance field reference: public System.Single underWaterBuoyancyFactor
    [[deprecated("Use field access instead!")]] float& dyn_underWaterBuoyancyFactor();
    // Get instance field reference: public System.Single angularDrag
    [[deprecated("Use field access instead!")]] float& dyn_angularDrag();
    // Get instance field reference: public System.Single surfaceTorqueAmount
    [[deprecated("Use field access instead!")]] float& dyn_surfaceTorqueAmount();
    // Get instance field reference: public System.Boolean enablePreciseWaterCollision
    [[deprecated("Use field access instead!")]] bool& dyn_enablePreciseWaterCollision();
    // Get instance field reference: public System.Single objectRadiusForWaterCollision
    [[deprecated("Use field access instead!")]] float& dyn_objectRadiusForWaterCollision();
    // Get instance field reference: public System.Single buoyancyEquilibrium
    [[deprecated("Use field access instead!")]] float& dyn_buoyancyEquilibrium();
    // Get instance field reference: private UnityEngine.Rigidbody rb
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_rb();
    // Get instance field reference: private System.Collections.Generic.List`1<GorillaLocomotion.Swimming.WaterVolume> overlappingWaterVolumes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterVolume*>*& dyn_overlappingWaterVolumes();
    // Get instance field reference: private System.Collections.Generic.List`1<GorillaLocomotion.Swimming.WaterCurrent> activeWaterCurrents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterCurrent*>*& dyn_activeWaterCurrents();
    // Get instance field reference: private System.Single baseAngularDrag
    [[deprecated("Use field access instead!")]] float& dyn_baseAngularDrag();
    // protected System.Void Awake()
    // Offset: 0x27DC960
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x27DCB54
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x27DCBE4
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0x27DCD74
    void OnDestroy();
    // public System.Void InvokeFixedUpdate()
    // Offset: 0x27DCDC8
    void InvokeFixedUpdate();
    // protected System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x27DE804
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // protected System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x27DE94C
    void OnTriggerExit(::UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x27DEA40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RigidbodyWaterInteraction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Swimming::RigidbodyWaterInteraction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RigidbodyWaterInteraction*, creationType>()));
    }
  }; // GorillaLocomotion.Swimming.RigidbodyWaterInteraction
  #pragma pack(pop)
  static check_size<sizeof(RigidbodyWaterInteraction), 96 + sizeof(float)> __GorillaLocomotion_Swimming_RigidbodyWaterInteractionSizeCheck;
  static_assert(sizeof(RigidbodyWaterInteraction) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteraction::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteraction::*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteraction::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteraction*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteraction::*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteraction*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteraction::*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteraction*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteraction::*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteraction*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteraction::InvokeFixedUpdate
// Il2CppName: InvokeFixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteraction::*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteraction::InvokeFixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteraction*), "InvokeFixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteraction::*)(::UnityEngine::Collider*)>(&GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteraction*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteraction::*)(::UnityEngine::Collider*)>(&GorillaLocomotion::Swimming::RigidbodyWaterInteraction::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteraction*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteraction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
