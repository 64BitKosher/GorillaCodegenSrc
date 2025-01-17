// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TransferrableObject
#include "GlobalNamespace/TransferrableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaTag::Cosmetics
namespace GorillaTag::Cosmetics {
  // Forward declaring type: DicePhysics
  class DicePhysics;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RubberDuckEvents
  class RubberDuckEvents;
  // Forward declaring type: PhotonMessageInfoWrapped
  struct PhotonMessageInfoWrapped;
  // Forward declaring type: InteractionPoint
  class InteractionPoint;
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
  // Forward declaring type: DiceHoldable
  class DiceHoldable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Cosmetics::DiceHoldable);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Cosmetics::DiceHoldable*, "GorillaTag.Cosmetics", "DiceHoldable");
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // WARNING Size may be invalid!
  // Autogenerated type: GorillaTag.Cosmetics.DiceHoldable
  // [TokenAttribute] Offset: FFFFFFFF
  class DiceHoldable : public ::GlobalNamespace::TransferrableObject {
    public:
    public:
    // private GorillaTag.Cosmetics.DicePhysics dicePhysics
    // Size: 0x8
    // Offset: 0x2D0
    ::GorillaTag::Cosmetics::DicePhysics* dicePhysics;
    // Field size check
    static_assert(sizeof(::GorillaTag::Cosmetics::DicePhysics*) == 0x8);
    // private RubberDuckEvents _events
    // Size: 0x8
    // Offset: 0x2D8
    ::GlobalNamespace::RubberDuckEvents* events;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RubberDuckEvents*) == 0x8);
    public:
    // Get instance field reference: private GorillaTag.Cosmetics.DicePhysics dicePhysics
    [[deprecated("Use field access instead!")]] ::GorillaTag::Cosmetics::DicePhysics*& dyn_dicePhysics();
    // Get instance field reference: private RubberDuckEvents _events
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RubberDuckEvents*& dyn__events();
    // private System.Void OnDiceEvent(System.Int32 sender, System.Int32 target, System.Object[] args, PhotonMessageInfoWrapped info)
    // Offset: 0x28B2F60
    void OnDiceEvent(int sender, int target, ::ArrayW<::Il2CppObject*> args, ::GlobalNamespace::PhotonMessageInfoWrapped info);
    // private System.Void ThrowDiceLocal(UnityEngine.Vector3 startPosition, UnityEngine.Vector3 throwVelocity, System.Single playerScale, System.Int32 landingSide, System.Double startTime)
    // Offset: 0x28B3438
    void ThrowDiceLocal(::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 throwVelocity, float playerScale, int landingSide, double startTime);
    // public override System.Void OnEnable()
    // Offset: 0x28B2B7C
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnEnable()
    void OnEnable();
    // public override System.Void OnDisable()
    // Offset: 0x28B2E00
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnDisable()
    void OnDisable();
    // public override System.Void OnGrab(InteractionPoint pointGrabbed, UnityEngine.GameObject grabbingHand)
    // Offset: 0x28B36C0
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnGrab(InteractionPoint pointGrabbed, UnityEngine.GameObject grabbingHand)
    void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::UnityEngine::GameObject* grabbingHand);
    // public override System.Boolean OnRelease(DropZone zoneReleased, UnityEngine.GameObject releasingHand)
    // Offset: 0x28B39FC
    // Implemented from: TransferrableObject
    // Base method: System.Boolean TransferrableObject::OnRelease(DropZone zoneReleased, UnityEngine.GameObject releasingHand)
    bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::UnityEngine::GameObject* releasingHand);
    // public System.Void .ctor()
    // Offset: 0x28B426C
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::.ctor()
    // Base method: System.Void HoldableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiceHoldable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Cosmetics::DiceHoldable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiceHoldable*, creationType>()));
    }
  }; // GorillaTag.Cosmetics.DiceHoldable
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DiceHoldable::OnDiceEvent
// Il2CppName: OnDiceEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DiceHoldable::*)(int, int, ::ArrayW<::Il2CppObject*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&GorillaTag::Cosmetics::DiceHoldable::OnDiceEvent)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("", "PhotonMessageInfoWrapped")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DiceHoldable*), "OnDiceEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, target, args, info});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DiceHoldable::ThrowDiceLocal
// Il2CppName: ThrowDiceLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DiceHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, int, double)>(&GorillaTag::Cosmetics::DiceHoldable::ThrowDiceLocal)> {
  static const MethodInfo* get() {
    static auto* startPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* throwVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* playerScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* landingSide = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DiceHoldable*), "ThrowDiceLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startPosition, throwVelocity, playerScale, landingSide, startTime});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DiceHoldable::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DiceHoldable::*)()>(&GorillaTag::Cosmetics::DiceHoldable::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DiceHoldable*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DiceHoldable::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DiceHoldable::*)()>(&GorillaTag::Cosmetics::DiceHoldable::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DiceHoldable*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DiceHoldable::OnGrab
// Il2CppName: OnGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::DiceHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&GorillaTag::Cosmetics::DiceHoldable::OnGrab)> {
  static const MethodInfo* get() {
    static auto* pointGrabbed = &::il2cpp_utils::GetClassFromName("", "InteractionPoint")->byval_arg;
    static auto* grabbingHand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DiceHoldable*), "OnGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointGrabbed, grabbingHand});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DiceHoldable::OnRelease
// Il2CppName: OnRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaTag::Cosmetics::DiceHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&GorillaTag::Cosmetics::DiceHoldable::OnRelease)> {
  static const MethodInfo* get() {
    static auto* zoneReleased = &::il2cpp_utils::GetClassFromName("", "DropZone")->byval_arg;
    static auto* releasingHand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::DiceHoldable*), "OnRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zoneReleased, releasingHand});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::DiceHoldable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
