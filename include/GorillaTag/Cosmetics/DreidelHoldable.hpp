// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TransferrableObject
#include "GlobalNamespace/TransferrableObject.hpp"
// Including type: GorillaTag.Cosmetics.Dreidel
#include "GorillaTag/Cosmetics/Dreidel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: InteractionPoint
  class InteractionPoint;
  // Forward declaring type: RubberDuckEvents
  class RubberDuckEvents;
  // Forward declaring type: PhotonMessageInfoWrapped
  struct PhotonMessageInfoWrapped;
  // Forward declaring type: DropZone
  class DropZone;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // Forward declaring type: DreidelHoldable
  class DreidelHoldable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Cosmetics::DreidelHoldable);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Cosmetics::DreidelHoldable*, "GorillaTag.Cosmetics", "DreidelHoldable");
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // WARNING Size may be invalid!
  // Autogenerated type: GorillaTag.Cosmetics.DreidelHoldable
  // [TokenAttribute] Offset: FFFFFFFF
  class DreidelHoldable : public ::GlobalNamespace::TransferrableObject {
    public:
    public:
    // private GorillaTag.Cosmetics.Dreidel dreidelAnimation
    // Size: 0x8
    // Offset: 0x2D0
    ::GorillaTag::Cosmetics::Dreidel* dreidelAnimation;
    // Field size check
    static_assert(sizeof(::GorillaTag::Cosmetics::Dreidel*) == 0x8);
    // private RubberDuckEvents _events
    // Size: 0x8
    // Offset: 0x2D8
    ::GlobalNamespace::RubberDuckEvents* events;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RubberDuckEvents*) == 0x8);
    public:
    // Get instance field reference: private GorillaTag.Cosmetics.Dreidel dreidelAnimation
    [[deprecated("Use field access instead!")]] ::GorillaTag::Cosmetics::Dreidel*& dyn_dreidelAnimation();
    // Get instance field reference: private RubberDuckEvents _events
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RubberDuckEvents*& dyn__events();
    // private System.Void OnDreidelSpin(System.Int32 sender, System.Int32 target, System.Object[] args, PhotonMessageInfoWrapped info)
    // Offset: 0x28BEE78
    void OnDreidelSpin(int sender, int target, ::ArrayW<::Il2CppObject*> args, ::GlobalNamespace::PhotonMessageInfoWrapped info);
    // private System.Void StartSpinLocal(UnityEngine.Vector3 surfacePoint, UnityEngine.Vector3 surfaceNormal, System.Single duration, System.Boolean counterClockwise, GorillaTag.Cosmetics.Dreidel/Side side, GorillaTag.Cosmetics.Dreidel/Variation variation, System.Double startTime)
    // Offset: 0x28BF2D4
    void StartSpinLocal(::UnityEngine::Vector3 surfacePoint, ::UnityEngine::Vector3 surfaceNormal, float duration, bool counterClockwise, ::GorillaTag::Cosmetics::Dreidel::Side side, ::GorillaTag::Cosmetics::Dreidel::Variation variation, double startTime);
    // public System.Void DebugSpinDreidel()
    // Offset: 0x28BFC10
    void DebugSpinDreidel();
    // public override System.Void OnEnable()
    // Offset: 0x28BEA94
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnEnable()
    void OnEnable();
    // public override System.Void OnDisable()
    // Offset: 0x28BED18
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnDisable()
    void OnDisable();
    // public override System.Void OnGrab(InteractionPoint pointGrabbed, UnityEngine.GameObject grabbingHand)
    // Offset: 0x28BF400
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnGrab(InteractionPoint pointGrabbed, UnityEngine.GameObject grabbingHand)
    void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::UnityEngine::GameObject* grabbingHand);
    // public override System.Boolean OnRelease(DropZone zoneReleased, UnityEngine.GameObject releasingHand)
    // Offset: 0x28BF4D8
    // Implemented from: TransferrableObject
    // Base method: System.Boolean TransferrableObject::OnRelease(DropZone zoneReleased, UnityEngine.GameObject releasingHand)
    bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::UnityEngine::GameObject* releasingHand);
    // public override System.Void OnActivate()
    // Offset: 0x28BF5E0
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnActivate()
    void OnActivate();
    // public System.Void .ctor()
    // Offset: 0x28C023C
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::.ctor()
    // Base method: System.Void HoldableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DreidelHoldable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Cosmetics::DreidelHoldable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DreidelHoldable*, creationType>()));
    }
  }; // GorillaTag.Cosmetics.DreidelHoldable
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::OnDreidelSpin
// Il2CppName: OnDreidelSpin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DreidelHoldable::*)(int, int, ::ArrayW<::Il2CppObject*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&GorillaTag::Cosmetics::DreidelHoldable::OnDreidelSpin)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("", "PhotonMessageInfoWrapped")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DreidelHoldable*), "OnDreidelSpin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, target, args, info});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::StartSpinLocal
// Il2CppName: StartSpinLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DreidelHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, bool, ::GorillaTag::Cosmetics::Dreidel::Side, ::GorillaTag::Cosmetics::Dreidel::Variation, double)>(&GorillaTag::Cosmetics::DreidelHoldable::StartSpinLocal)> {
  static const MethodInfo* get() {
    static auto* surfacePoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* surfaceNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* counterClockwise = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* side = &::il2cpp_utils::GetClassFromName("GorillaTag.Cosmetics", "Dreidel/Side")->byval_arg;
    static auto* variation = &::il2cpp_utils::GetClassFromName("GorillaTag.Cosmetics", "Dreidel/Variation")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DreidelHoldable*), "StartSpinLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{surfacePoint, surfaceNormal, duration, counterClockwise, side, variation, startTime});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::DebugSpinDreidel
// Il2CppName: DebugSpinDreidel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DreidelHoldable::*)()>(&GorillaTag::Cosmetics::DreidelHoldable::DebugSpinDreidel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DreidelHoldable*), "DebugSpinDreidel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DreidelHoldable::*)()>(&GorillaTag::Cosmetics::DreidelHoldable::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DreidelHoldable*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DreidelHoldable::*)()>(&GorillaTag::Cosmetics::DreidelHoldable::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DreidelHoldable*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::OnGrab
// Il2CppName: OnGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DreidelHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&GorillaTag::Cosmetics::DreidelHoldable::OnGrab)> {
  static const MethodInfo* get() {
    static auto* pointGrabbed = &::il2cpp_utils::GetClassFromName("", "InteractionPoint")->byval_arg;
    static auto* grabbingHand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DreidelHoldable*), "OnGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointGrabbed, grabbingHand});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::OnRelease
// Il2CppName: OnRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaTag::Cosmetics::DreidelHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&GorillaTag::Cosmetics::DreidelHoldable::OnRelease)> {
  static const MethodInfo* get() {
    static auto* zoneReleased = &::il2cpp_utils::GetClassFromName("", "DropZone")->byval_arg;
    static auto* releasingHand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DreidelHoldable*), "OnRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zoneReleased, releasingHand});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::OnActivate
// Il2CppName: OnActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DreidelHoldable::*)()>(&GorillaTag::Cosmetics::DreidelHoldable::OnActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DreidelHoldable*), "OnActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DreidelHoldable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
