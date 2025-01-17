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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaVelocityEstimator
  class GorillaVelocityEstimator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LongScarfSim
  class LongScarfSim;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LongScarfSim);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LongScarfSim*, "", "LongScarfSim");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: LongScarfSim
  // [TokenAttribute] Offset: FFFFFFFF
  class LongScarfSim : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject[] gameObjects
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::GameObject*> gameObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private System.Single speedThreshold
    // Size: 0x4
    // Offset: 0x28
    float speedThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single blendAmountPerSecond
    // Size: 0x4
    // Offset: 0x2C
    float blendAmountPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private GorillaVelocityEstimator velocityEstimator
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::GorillaVelocityEstimator* velocityEstimator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaVelocityEstimator*) == 0x8);
    // private UnityEngine.Quaternion[] baseLocalRotations
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Quaternion> baseLocalRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // private System.Single currentBlend
    // Size: 0x4
    // Offset: 0x40
    float currentBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single centerOfMassLength
    // Size: 0x4
    // Offset: 0x44
    float centerOfMassLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single gravityStrength
    // Size: 0x4
    // Offset: 0x48
    float gravityStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single drag
    // Size: 0x4
    // Offset: 0x4C
    float drag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 clampToPlane
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 clampToPlane;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastCenterPos
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 lastCenterPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 velocity
    // Size: 0xC
    // Offset: 0x68
    ::UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private UnityEngine.GameObject[] gameObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_gameObjects();
    // Get instance field reference: private System.Single speedThreshold
    [[deprecated("Use field access instead!")]] float& dyn_speedThreshold();
    // Get instance field reference: private System.Single blendAmountPerSecond
    [[deprecated("Use field access instead!")]] float& dyn_blendAmountPerSecond();
    // Get instance field reference: private GorillaVelocityEstimator velocityEstimator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaVelocityEstimator*& dyn_velocityEstimator();
    // Get instance field reference: private UnityEngine.Quaternion[] baseLocalRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_baseLocalRotations();
    // Get instance field reference: private System.Single currentBlend
    [[deprecated("Use field access instead!")]] float& dyn_currentBlend();
    // Get instance field reference: private System.Single centerOfMassLength
    [[deprecated("Use field access instead!")]] float& dyn_centerOfMassLength();
    // Get instance field reference: private System.Single gravityStrength
    [[deprecated("Use field access instead!")]] float& dyn_gravityStrength();
    // Get instance field reference: private System.Single drag
    [[deprecated("Use field access instead!")]] float& dyn_drag();
    // Get instance field reference: private UnityEngine.Vector3 clampToPlane
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_clampToPlane();
    // Get instance field reference: private UnityEngine.Vector3 lastCenterPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastCenterPos();
    // Get instance field reference: private UnityEngine.Vector3 velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_velocity();
    // private System.Void Start()
    // Offset: 0x278B168
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x278B35C
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x278B7D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongScarfSim* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LongScarfSim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongScarfSim*, creationType>()));
    }
  }; // LongScarfSim
  #pragma pack(pop)
  static check_size<sizeof(LongScarfSim), 104 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_LongScarfSimSizeCheck;
  static_assert(sizeof(LongScarfSim) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LongScarfSim::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LongScarfSim::*)()>(&GlobalNamespace::LongScarfSim::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LongScarfSim*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LongScarfSim::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LongScarfSim::*)()>(&GlobalNamespace::LongScarfSim::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LongScarfSim*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LongScarfSim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
