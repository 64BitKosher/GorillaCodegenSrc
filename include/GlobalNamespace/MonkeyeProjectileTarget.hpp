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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MonkeyeAI
  class MonkeyeAI;
  // Forward declaring type: SlingshotProjectileHitNotifier
  class SlingshotProjectileHitNotifier;
  // Forward declaring type: SlingshotProjectile
  class SlingshotProjectile;
  // Forward declaring type: PaperPlaneProjectile
  class PaperPlaneProjectile;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collision
  class Collision;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MonkeyeProjectileTarget
  class MonkeyeProjectileTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MonkeyeProjectileTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonkeyeProjectileTarget*, "", "MonkeyeProjectileTarget");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MonkeyeProjectileTarget
  // [TokenAttribute] Offset: FFFFFFFF
  class MonkeyeProjectileTarget : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MonkeyeAI monkeyeAI
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MonkeyeAI* monkeyeAI;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MonkeyeAI*) == 0x8);
    // private SlingshotProjectileHitNotifier notifier
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SlingshotProjectileHitNotifier* notifier;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SlingshotProjectileHitNotifier*) == 0x8);
    public:
    // Get instance field reference: private MonkeyeAI monkeyeAI
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MonkeyeAI*& dyn_monkeyeAI();
    // Get instance field reference: private SlingshotProjectileHitNotifier notifier
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SlingshotProjectileHitNotifier*& dyn_notifier();
    // private System.Void Awake()
    // Offset: 0x289D7D0
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x289D860
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x289D98C
    void OnDisable();
    // private System.Void Notifier_OnProjectileHit(SlingshotProjectile projectile, UnityEngine.Collision collision)
    // Offset: 0x289DAB8
    void Notifier_OnProjectileHit(::GlobalNamespace::SlingshotProjectile* projectile, ::UnityEngine::Collision* collision);
    // private System.Void Notifier_OnPaperPlaneHit(PaperPlaneProjectile projectile, UnityEngine.Collider collider)
    // Offset: 0x289DAD4
    void Notifier_OnPaperPlaneHit(::GlobalNamespace::PaperPlaneProjectile* projectile, ::UnityEngine::Collider* collider);
    // public System.Void .ctor()
    // Offset: 0x289DAF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonkeyeProjectileTarget* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MonkeyeProjectileTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonkeyeProjectileTarget*, creationType>()));
    }
  }; // MonkeyeProjectileTarget
  #pragma pack(pop)
  static check_size<sizeof(MonkeyeProjectileTarget), 40 + sizeof(::GlobalNamespace::SlingshotProjectileHitNotifier*)> __GlobalNamespace_MonkeyeProjectileTargetSizeCheck;
  static_assert(sizeof(MonkeyeProjectileTarget) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MonkeyeProjectileTarget::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonkeyeProjectileTarget::*)()>(&GlobalNamespace::MonkeyeProjectileTarget::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonkeyeProjectileTarget*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonkeyeProjectileTarget::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonkeyeProjectileTarget::*)()>(&GlobalNamespace::MonkeyeProjectileTarget::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonkeyeProjectileTarget*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonkeyeProjectileTarget::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonkeyeProjectileTarget::*)()>(&GlobalNamespace::MonkeyeProjectileTarget::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonkeyeProjectileTarget*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonkeyeProjectileTarget::Notifier_OnProjectileHit
// Il2CppName: Notifier_OnProjectileHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonkeyeProjectileTarget::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&GlobalNamespace::MonkeyeProjectileTarget::Notifier_OnProjectileHit)> {
  static const MethodInfo* get() {
    static auto* projectile = &::il2cpp_utils::GetClassFromName("", "SlingshotProjectile")->byval_arg;
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonkeyeProjectileTarget*), "Notifier_OnProjectileHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{projectile, collision});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonkeyeProjectileTarget::Notifier_OnPaperPlaneHit
// Il2CppName: Notifier_OnPaperPlaneHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonkeyeProjectileTarget::*)(::GlobalNamespace::PaperPlaneProjectile*, ::UnityEngine::Collider*)>(&GlobalNamespace::MonkeyeProjectileTarget::Notifier_OnPaperPlaneHit)> {
  static const MethodInfo* get() {
    static auto* projectile = &::il2cpp_utils::GetClassFromName("", "PaperPlaneProjectile")->byval_arg;
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonkeyeProjectileTarget*), "Notifier_OnPaperPlaneHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{projectile, collider});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonkeyeProjectileTarget::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
