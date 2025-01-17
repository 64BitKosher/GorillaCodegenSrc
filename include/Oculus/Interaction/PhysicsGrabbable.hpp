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
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: Grabbable
  class Grabbable;
  // Forward declaring type: PointerEvent
  struct PointerEvent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PhysicsGrabbable
  class PhysicsGrabbable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PhysicsGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PhysicsGrabbable*, "Oculus.Interaction", "PhysicsGrabbable");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PhysicsGrabbable
  // [TokenAttribute] Offset: FFFFFFFF
  class PhysicsGrabbable : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::PhysicsGrabbable::$$c
    class $$c;
    public:
    // private Oculus.Interaction.Grabbable _grabbable
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::Grabbable* grabbable;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Grabbable*) == 0x8);
    // private UnityEngine.Rigidbody _rigidbody
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private System.Boolean _scaleMassWithSize
    // Size: 0x1
    // Offset: 0x30
    bool scaleMassWithSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _savedIsKinematicState
    // Size: 0x1
    // Offset: 0x31
    bool savedIsKinematicState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isBeingTransformed
    // Size: 0x1
    // Offset: 0x32
    bool isBeingTransformed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isBeingTransformed and: initialScale
    char __padding4[0x1] = {};
    // private UnityEngine.Vector3 _initialScale
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 initialScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _hasPendingForce
    // Size: 0x1
    // Offset: 0x40
    bool hasPendingForce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPendingForce and: linearVelocity
    char __padding6[0x3] = {};
    // private UnityEngine.Vector3 _linearVelocity
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 linearVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _angularVelocity
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 angularVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x5C
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: WhenVelocitiesApplied
    char __padding9[0x3] = {};
    // private System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> WhenVelocitiesApplied
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* WhenVelocitiesApplied;
    // Field size check
    static_assert(sizeof(::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>*) == 0x8);
    public:
    // Get instance field reference: private Oculus.Interaction.Grabbable _grabbable
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Grabbable*& dyn__grabbable();
    // Get instance field reference: private UnityEngine.Rigidbody _rigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn__rigidbody();
    // Get instance field reference: private System.Boolean _scaleMassWithSize
    [[deprecated("Use field access instead!")]] bool& dyn__scaleMassWithSize();
    // Get instance field reference: private System.Boolean _savedIsKinematicState
    [[deprecated("Use field access instead!")]] bool& dyn__savedIsKinematicState();
    // Get instance field reference: private System.Boolean _isBeingTransformed
    [[deprecated("Use field access instead!")]] bool& dyn__isBeingTransformed();
    // Get instance field reference: private UnityEngine.Vector3 _initialScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__initialScale();
    // Get instance field reference: private System.Boolean _hasPendingForce
    [[deprecated("Use field access instead!")]] bool& dyn__hasPendingForce();
    // Get instance field reference: private UnityEngine.Vector3 _linearVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__linearVelocity();
    // Get instance field reference: private UnityEngine.Vector3 _angularVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__angularVelocity();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> WhenVelocitiesApplied
    [[deprecated("Use field access instead!")]] ::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>*& dyn_WhenVelocitiesApplied();
    // public System.Void add_WhenVelocitiesApplied(System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> value)
    // Offset: 0x47D6208
    void add_WhenVelocitiesApplied(::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* value);
    // public System.Void remove_WhenVelocitiesApplied(System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> value)
    // Offset: 0x47D62B8
    void remove_WhenVelocitiesApplied(::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* value);
    // private System.Void Reset()
    // Offset: 0x47D6368
    void Reset();
    // protected System.Void Start()
    // Offset: 0x47D63F8
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47D6430
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47D64CC
    void OnDisable();
    // private System.Void HandlePointerEventRaised(Oculus.Interaction.PointerEvent evt)
    // Offset: 0x47D6568
    void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent evt);
    // private System.Void DisablePhysics()
    // Offset: 0x47D65DC
    void DisablePhysics();
    // private System.Void ReenablePhysics()
    // Offset: 0x47D660C
    void ReenablePhysics();
    // public System.Void ApplyVelocities(UnityEngine.Vector3 linearVelocity, UnityEngine.Vector3 angularVelocity)
    // Offset: 0x47D6704
    void ApplyVelocities(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity);
    // private System.Void FixedUpdate()
    // Offset: 0x47D671C
    void FixedUpdate();
    // private System.Void CachePhysicsState()
    // Offset: 0x47D66B0
    void CachePhysicsState();
    // public System.Void InjectAllPhysicsGrabbable(Oculus.Interaction.Grabbable grabbable, UnityEngine.Rigidbody rigidbody)
    // Offset: 0x47D679C
    void InjectAllPhysicsGrabbable(::Oculus::Interaction::Grabbable* grabbable, ::UnityEngine::Rigidbody* rigidbody);
    // public System.Void InjectGrabbable(Oculus.Interaction.Grabbable grabbable)
    // Offset: 0x47D67CC
    void InjectGrabbable(::Oculus::Interaction::Grabbable* grabbable);
    // public System.Void InjectRigidbody(UnityEngine.Rigidbody rigidbody)
    // Offset: 0x47D67D4
    void InjectRigidbody(::UnityEngine::Rigidbody* rigidbody);
    // public System.Void InjectOptionalScaleMassWithSize(System.Boolean scaleMassWithSize)
    // Offset: 0x47D67DC
    void InjectOptionalScaleMassWithSize(bool scaleMassWithSize);
    // public System.Void .ctor()
    // Offset: 0x47D67E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicsGrabbable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PhysicsGrabbable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicsGrabbable*, creationType>()));
    }
  }; // Oculus.Interaction.PhysicsGrabbable
  #pragma pack(pop)
  static check_size<sizeof(PhysicsGrabbable), 96 + sizeof(::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>*)> __Oculus_Interaction_PhysicsGrabbableSizeCheck;
  static_assert(sizeof(PhysicsGrabbable) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::add_WhenVelocitiesApplied
// Il2CppName: add_WhenVelocitiesApplied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)(::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>*)>(&Oculus::Interaction::PhysicsGrabbable::add_WhenVelocitiesApplied)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "add_WhenVelocitiesApplied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::remove_WhenVelocitiesApplied
// Il2CppName: remove_WhenVelocitiesApplied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)(::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>*)>(&Oculus::Interaction::PhysicsGrabbable::remove_WhenVelocitiesApplied)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "remove_WhenVelocitiesApplied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)()>(&Oculus::Interaction::PhysicsGrabbable::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)()>(&Oculus::Interaction::PhysicsGrabbable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)()>(&Oculus::Interaction::PhysicsGrabbable::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)()>(&Oculus::Interaction::PhysicsGrabbable::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::HandlePointerEventRaised
// Il2CppName: HandlePointerEventRaised
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::PointerEvent)>(&Oculus::Interaction::PhysicsGrabbable::HandlePointerEventRaised)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "HandlePointerEventRaised", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::DisablePhysics
// Il2CppName: DisablePhysics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)()>(&Oculus::Interaction::PhysicsGrabbable::DisablePhysics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "DisablePhysics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::ReenablePhysics
// Il2CppName: ReenablePhysics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)()>(&Oculus::Interaction::PhysicsGrabbable::ReenablePhysics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "ReenablePhysics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::ApplyVelocities
// Il2CppName: ApplyVelocities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Oculus::Interaction::PhysicsGrabbable::ApplyVelocities)> {
  static const MethodInfo* get() {
    static auto* linearVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angularVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "ApplyVelocities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{linearVelocity, angularVelocity});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)()>(&Oculus::Interaction::PhysicsGrabbable::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::CachePhysicsState
// Il2CppName: CachePhysicsState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)()>(&Oculus::Interaction::PhysicsGrabbable::CachePhysicsState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "CachePhysicsState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::InjectAllPhysicsGrabbable
// Il2CppName: InjectAllPhysicsGrabbable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::Grabbable*, ::UnityEngine::Rigidbody*)>(&Oculus::Interaction::PhysicsGrabbable::InjectAllPhysicsGrabbable)> {
  static const MethodInfo* get() {
    static auto* grabbable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "Grabbable")->byval_arg;
    static auto* rigidbody = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "InjectAllPhysicsGrabbable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbable, rigidbody});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::InjectGrabbable
// Il2CppName: InjectGrabbable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::Grabbable*)>(&Oculus::Interaction::PhysicsGrabbable::InjectGrabbable)> {
  static const MethodInfo* get() {
    static auto* grabbable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "Grabbable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "InjectGrabbable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbable});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::InjectRigidbody
// Il2CppName: InjectRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)(::UnityEngine::Rigidbody*)>(&Oculus::Interaction::PhysicsGrabbable::InjectRigidbody)> {
  static const MethodInfo* get() {
    static auto* rigidbody = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "InjectRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rigidbody});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::InjectOptionalScaleMassWithSize
// Il2CppName: InjectOptionalScaleMassWithSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PhysicsGrabbable::*)(bool)>(&Oculus::Interaction::PhysicsGrabbable::InjectOptionalScaleMassWithSize)> {
  static const MethodInfo* get() {
    static auto* scaleMassWithSize = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PhysicsGrabbable*), "InjectOptionalScaleMassWithSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleMassWithSize});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PhysicsGrabbable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
