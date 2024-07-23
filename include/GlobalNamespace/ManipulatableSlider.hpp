// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ManipulatableObject
#include "GlobalNamespace/ManipulatableObject.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ManipulatableSlider
  class ManipulatableSlider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ManipulatableSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ManipulatableSlider*, "", "ManipulatableSlider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: ManipulatableSlider
  // [TokenAttribute] Offset: FFFFFFFF
  class ManipulatableSlider : public ::GlobalNamespace::ManipulatableObject {
    public:
    public:
    // public System.Single breakDistance
    // Size: 0x4
    // Offset: 0x38
    float breakDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxXOffset
    // Size: 0x4
    // Offset: 0x3C
    float maxXOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minXOffset
    // Size: 0x4
    // Offset: 0x40
    float minXOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxYOffset
    // Size: 0x4
    // Offset: 0x44
    float maxYOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minYOffset
    // Size: 0x4
    // Offset: 0x48
    float minYOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxZOffset
    // Size: 0x4
    // Offset: 0x4C
    float maxZOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minZOffset
    // Size: 0x4
    // Offset: 0x50
    float minZOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean applyReleaseVelocity
    // Size: 0x1
    // Offset: 0x54
    bool applyReleaseVelocity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: applyReleaseVelocity and: releaseDrag
    char __padding7[0x3] = {};
    // public System.Single releaseDrag
    // Size: 0x4
    // Offset: 0x58
    float releaseDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Matrix4x4 localSpace
    // Size: 0x40
    // Offset: 0x5C
    ::UnityEngine::Matrix4x4 localSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Vector3 startingPos
    // Size: 0xC
    // Offset: 0x9C
    ::UnityEngine::Vector3 startingPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 velocity
    // Size: 0xC
    // Offset: 0xA8
    ::UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public System.Single breakDistance
    [[deprecated("Use field access instead!")]] float& dyn_breakDistance();
    // Get instance field reference: public System.Single maxXOffset
    [[deprecated("Use field access instead!")]] float& dyn_maxXOffset();
    // Get instance field reference: public System.Single minXOffset
    [[deprecated("Use field access instead!")]] float& dyn_minXOffset();
    // Get instance field reference: public System.Single maxYOffset
    [[deprecated("Use field access instead!")]] float& dyn_maxYOffset();
    // Get instance field reference: public System.Single minYOffset
    [[deprecated("Use field access instead!")]] float& dyn_minYOffset();
    // Get instance field reference: public System.Single maxZOffset
    [[deprecated("Use field access instead!")]] float& dyn_maxZOffset();
    // Get instance field reference: public System.Single minZOffset
    [[deprecated("Use field access instead!")]] float& dyn_minZOffset();
    // Get instance field reference: public System.Boolean applyReleaseVelocity
    [[deprecated("Use field access instead!")]] bool& dyn_applyReleaseVelocity();
    // Get instance field reference: public System.Single releaseDrag
    [[deprecated("Use field access instead!")]] float& dyn_releaseDrag();
    // Get instance field reference: private UnityEngine.Matrix4x4 localSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_localSpace();
    // Get instance field reference: private UnityEngine.Vector3 startingPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startingPos();
    // Get instance field reference: private UnityEngine.Vector3 velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_velocity();
    // private System.Void Awake()
    // Offset: 0x26B80D0
    void Awake();
    // public System.Void SetProgress(System.Single x, System.Single y, System.Single z)
    // Offset: 0x26B8528
    void SetProgress(float x, float y, float z);
    // public System.Single GetProgressX()
    // Offset: 0x26B860C
    float GetProgressX();
    // public System.Single GetProgressY()
    // Offset: 0x26B864C
    float GetProgressY();
    // public System.Single GetProgressZ()
    // Offset: 0x26B868C
    float GetProgressZ();
    // protected override System.Void OnStartManipulation(UnityEngine.GameObject grabbingHand)
    // Offset: 0x26B8144
    // Implemented from: ManipulatableObject
    // Base method: System.Void ManipulatableObject::OnStartManipulation(UnityEngine.GameObject grabbingHand)
    void OnStartManipulation(::UnityEngine::GameObject* grabbingHand);
    // protected override System.Void OnStopManipulation(UnityEngine.GameObject releasingHand, UnityEngine.Vector3 releaseVelocity)
    // Offset: 0x26B8148
    // Implemented from: ManipulatableObject
    // Base method: System.Void ManipulatableObject::OnStopManipulation(UnityEngine.GameObject releasingHand, UnityEngine.Vector3 releaseVelocity)
    void OnStopManipulation(::UnityEngine::GameObject* releasingHand, ::UnityEngine::Vector3 releaseVelocity);
    // protected override System.Boolean ShouldHandDetach(UnityEngine.GameObject hand)
    // Offset: 0x26B8174
    // Implemented from: ManipulatableObject
    // Base method: System.Boolean ManipulatableObject::ShouldHandDetach(UnityEngine.GameObject hand)
    bool ShouldHandDetach(::UnityEngine::GameObject* hand);
    // protected override System.Void OnHeldUpdate(UnityEngine.GameObject hand)
    // Offset: 0x26B8210
    // Implemented from: ManipulatableObject
    // Base method: System.Void ManipulatableObject::OnHeldUpdate(UnityEngine.GameObject hand)
    void OnHeldUpdate(::UnityEngine::GameObject* hand);
    // protected override System.Void OnReleasedUpdate()
    // Offset: 0x26B830C
    // Implemented from: ManipulatableObject
    // Base method: System.Void ManipulatableObject::OnReleasedUpdate()
    void OnReleasedUpdate();
    // public System.Void .ctor()
    // Offset: 0x26B86CC
    // Implemented from: ManipulatableObject
    // Base method: System.Void ManipulatableObject::.ctor()
    // Base method: System.Void HoldableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManipulatableSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ManipulatableSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManipulatableSlider*, creationType>()));
    }
  }; // ManipulatableSlider
  #pragma pack(pop)
  static check_size<sizeof(ManipulatableSlider), 168 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_ManipulatableSliderSizeCheck;
  static_assert(sizeof(ManipulatableSlider) == 0xB4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ManipulatableSlider::*)()>(&GlobalNamespace::ManipulatableSlider::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::SetProgress
// Il2CppName: SetProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ManipulatableSlider::*)(float, float, float)>(&GlobalNamespace::ManipulatableSlider::SetProgress)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "SetProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::GetProgressX
// Il2CppName: GetProgressX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ManipulatableSlider::*)()>(&GlobalNamespace::ManipulatableSlider::GetProgressX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "GetProgressX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::GetProgressY
// Il2CppName: GetProgressY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ManipulatableSlider::*)()>(&GlobalNamespace::ManipulatableSlider::GetProgressY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "GetProgressY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::GetProgressZ
// Il2CppName: GetProgressZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ManipulatableSlider::*)()>(&GlobalNamespace::ManipulatableSlider::GetProgressZ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "GetProgressZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::OnStartManipulation
// Il2CppName: OnStartManipulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ManipulatableSlider::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ManipulatableSlider::OnStartManipulation)> {
  static const MethodInfo* get() {
    static auto* grabbingHand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "OnStartManipulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbingHand});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::OnStopManipulation
// Il2CppName: OnStopManipulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ManipulatableSlider::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3)>(&GlobalNamespace::ManipulatableSlider::OnStopManipulation)> {
  static const MethodInfo* get() {
    static auto* releasingHand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* releaseVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "OnStopManipulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{releasingHand, releaseVelocity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::ShouldHandDetach
// Il2CppName: ShouldHandDetach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ManipulatableSlider::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ManipulatableSlider::ShouldHandDetach)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "ShouldHandDetach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::OnHeldUpdate
// Il2CppName: OnHeldUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ManipulatableSlider::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ManipulatableSlider::OnHeldUpdate)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "OnHeldUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::OnReleasedUpdate
// Il2CppName: OnReleasedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ManipulatableSlider::*)()>(&GlobalNamespace::ManipulatableSlider::OnReleasedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ManipulatableSlider*), "OnReleasedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!