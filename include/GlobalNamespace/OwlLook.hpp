// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OwlLook
  class OwlLook;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OwlLook);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OwlLook*, "", "OwlLook");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OwlLook
  // [TokenAttribute] Offset: FFFFFFFF
  class OwlLook : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform head
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* head;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform lookTarget
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* lookTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform neck
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* neck;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single lookRadius
    // Size: 0x4
    // Offset: 0x38
    float lookRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lookRadius and: overlapColliders
    char __padding3[0x4] = {};
    // public UnityEngine.Collider[] overlapColliders
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Collider*> overlapColliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // public System.Collections.Generic.List`1<VRRig> rigs
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>* rigs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>*) == 0x8);
    // public UnityEngine.LayerMask layerMask
    // Size: 0x4
    // Offset: 0x50
    ::UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public System.Single rotSpeed
    // Size: 0x4
    // Offset: 0x54
    float rotSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lookAtAngleDegrees
    // Size: 0x4
    // Offset: 0x58
    float lookAtAngleDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxNeckY
    // Size: 0x4
    // Offset: 0x5C
    float maxNeckY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minNeckY
    // Size: 0x4
    // Offset: 0x60
    float minNeckY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: minNeckY and: myRig
    char __padding10[0x4] = {};
    // public VRRig myRig
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::VRRig* myRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform head
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_head();
    // Get instance field reference: public UnityEngine.Transform lookTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_lookTarget();
    // Get instance field reference: public UnityEngine.Transform neck
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_neck();
    // Get instance field reference: public System.Single lookRadius
    [[deprecated("Use field access instead!")]] float& dyn_lookRadius();
    // Get instance field reference: public UnityEngine.Collider[] overlapColliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_overlapColliders();
    // Get instance field reference: public System.Collections.Generic.List`1<VRRig> rigs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>*& dyn_rigs();
    // Get instance field reference: public UnityEngine.LayerMask layerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_layerMask();
    // Get instance field reference: public System.Single rotSpeed
    [[deprecated("Use field access instead!")]] float& dyn_rotSpeed();
    // Get instance field reference: public System.Single lookAtAngleDegrees
    [[deprecated("Use field access instead!")]] float& dyn_lookAtAngleDegrees();
    // Get instance field reference: public System.Single maxNeckY
    [[deprecated("Use field access instead!")]] float& dyn_maxNeckY();
    // Get instance field reference: public System.Single minNeckY
    [[deprecated("Use field access instead!")]] float& dyn_minNeckY();
    // Get instance field reference: public VRRig myRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_myRig();
    // private System.Void Awake()
    // Offset: 0x26BAE40
    void Awake();
    // private System.Void LateUpdate()
    // Offset: 0x26BAF94
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x26BB95C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OwlLook* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OwlLook::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OwlLook*, creationType>()));
    }
  }; // OwlLook
  #pragma pack(pop)
  static check_size<sizeof(OwlLook), 104 + sizeof(::GlobalNamespace::VRRig*)> __GlobalNamespace_OwlLookSizeCheck;
  static_assert(sizeof(OwlLook) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OwlLook::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwlLook::*)()>(&GlobalNamespace::OwlLook::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwlLook*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwlLook::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwlLook::*)()>(&GlobalNamespace::OwlLook::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwlLook*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwlLook::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
