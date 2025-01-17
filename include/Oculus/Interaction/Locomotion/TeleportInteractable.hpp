// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Interactable`2
#include "Oculus/Interaction/Interactable_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Locomotion
namespace Oculus::Interaction::Locomotion {
  // Forward declaring type: TeleportInteractor
  class TeleportInteractor;
  // Forward declaring type: TeleportHit
  struct TeleportHit;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Pose
  struct Pose;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: ISurface
  class ISurface;
  // Forward declaring type: IBounds
  class IBounds;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Forward declaring type: TeleportInteractable
  class TeleportInteractable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Locomotion::TeleportInteractable);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Locomotion::TeleportInteractable*, "Oculus.Interaction.Locomotion", "TeleportInteractable");
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.Locomotion.TeleportInteractable
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportInteractable : public ::Oculus::Interaction::Interactable_2<::Oculus::Interaction::Locomotion::TeleportInteractor*, ::Oculus::Interaction::Locomotion::TeleportInteractable*> {
    public:
    public:
    // private System.Boolean _allowTeleport
    // Size: 0x1
    // Offset: 0xB0
    bool allowTeleport;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single _equalDistanceToBlockerOverride
    // Size: 0x4
    // Offset: 0xB4
    float equalDistanceToBlockerOverride;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _tieBreakerScore
    // Size: 0x4
    // Offset: 0xB8
    int tieBreakerScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Object _surface
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::Object* surface;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Surfaces.ISurface <Surface>k__BackingField
    // Size: 0x8
    // Offset: 0xC8
    ::Oculus::Interaction::Surfaces::ISurface* Surface;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Surfaces::ISurface*) == 0x8);
    // private Oculus.Interaction.Surfaces.IBounds <SurfaceBounds>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    ::Oculus::Interaction::Surfaces::IBounds* SurfaceBounds;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Surfaces::IBounds*) == 0x8);
    // private UnityEngine.Transform _targetPoint
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::Transform* targetPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean _faceTargetDirection
    // Size: 0x1
    // Offset: 0xE0
    bool faceTargetDirection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _eyeLevel
    // Size: 0x1
    // Offset: 0xE1
    bool eyeLevel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean _allowTeleport
    [[deprecated("Use field access instead!")]] bool& dyn__allowTeleport();
    // Get instance field reference: private System.Single _equalDistanceToBlockerOverride
    [[deprecated("Use field access instead!")]] float& dyn__equalDistanceToBlockerOverride();
    // Get instance field reference: private System.Int32 _tieBreakerScore
    [[deprecated("Use field access instead!")]] int& dyn__tieBreakerScore();
    // Get instance field reference: private UnityEngine.Object _surface
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__surface();
    // Get instance field reference: private Oculus.Interaction.Surfaces.ISurface <Surface>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Surfaces::ISurface*& dyn_$Surface$k__BackingField();
    // Get instance field reference: private Oculus.Interaction.Surfaces.IBounds <SurfaceBounds>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Surfaces::IBounds*& dyn_$SurfaceBounds$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform _targetPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__targetPoint();
    // Get instance field reference: private System.Boolean _faceTargetDirection
    [[deprecated("Use field access instead!")]] bool& dyn__faceTargetDirection();
    // Get instance field reference: private System.Boolean _eyeLevel
    [[deprecated("Use field access instead!")]] bool& dyn__eyeLevel();
    // public System.Boolean get_AllowTeleport()
    // Offset: 0x4809704
    bool get_AllowTeleport();
    // public System.Void set_AllowTeleport(System.Boolean value)
    // Offset: 0x480970C
    void set_AllowTeleport(bool value);
    // public System.Single get_EqualDistanceToBlockerOverride()
    // Offset: 0x4809718
    float get_EqualDistanceToBlockerOverride();
    // public System.Void set_EqualDistanceToBlockerOverride(System.Single value)
    // Offset: 0x4809720
    void set_EqualDistanceToBlockerOverride(float value);
    // public System.Int32 get_TieBreakerScore()
    // Offset: 0x4809728
    int get_TieBreakerScore();
    // public System.Void set_TieBreakerScore(System.Int32 value)
    // Offset: 0x4809730
    void set_TieBreakerScore(int value);
    // public Oculus.Interaction.Surfaces.ISurface get_Surface()
    // Offset: 0x4809738
    ::Oculus::Interaction::Surfaces::ISurface* get_Surface();
    // private System.Void set_Surface(Oculus.Interaction.Surfaces.ISurface value)
    // Offset: 0x4809740
    void set_Surface(::Oculus::Interaction::Surfaces::ISurface* value);
    // public Oculus.Interaction.Surfaces.IBounds get_SurfaceBounds()
    // Offset: 0x4809748
    ::Oculus::Interaction::Surfaces::IBounds* get_SurfaceBounds();
    // private System.Void set_SurfaceBounds(Oculus.Interaction.Surfaces.IBounds value)
    // Offset: 0x4809750
    void set_SurfaceBounds(::Oculus::Interaction::Surfaces::IBounds* value);
    // public System.Boolean get_FaceTargetDirection()
    // Offset: 0x4809758
    bool get_FaceTargetDirection();
    // public System.Void set_FaceTargetDirection(System.Boolean value)
    // Offset: 0x4809760
    void set_FaceTargetDirection(bool value);
    // public System.Boolean get_EyeLevel()
    // Offset: 0x480976C
    bool get_EyeLevel();
    // public System.Void set_EyeLevel(System.Boolean value)
    // Offset: 0x4809774
    void set_EyeLevel(bool value);
    // public System.Boolean IsInRange(UnityEngine.Pose origin, System.Single maxSqrDistance)
    // Offset: 0x48098CC
    bool IsInRange(::UnityEngine::Pose origin, float maxSqrDistance);
    // public System.Boolean DetectHit(UnityEngine.Vector3 from, UnityEngine.Vector3 to, out Oculus.Interaction.Locomotion.TeleportHit hit)
    // Offset: 0x4809BD0
    bool DetectHit(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ByRef<::Oculus::Interaction::Locomotion::TeleportHit> hit);
    // public UnityEngine.Pose TargetPose(UnityEngine.Pose hitPose)
    // Offset: 0x4809E68
    ::UnityEngine::Pose TargetPose(::UnityEngine::Pose hitPose);
    // public System.Void InjectAllTeleportInteractable(Oculus.Interaction.Surfaces.ISurface surface)
    // Offset: 0x4809F60
    void InjectAllTeleportInteractable(::Oculus::Interaction::Surfaces::ISurface* surface);
    // public System.Void InjectSurface(Oculus.Interaction.Surfaces.ISurface surface)
    // Offset: 0x4809F64
    void InjectSurface(::Oculus::Interaction::Surfaces::ISurface* surface);
    // public System.Void InjectOptionalTargetPoint(UnityEngine.Transform targetPoint)
    // Offset: 0x480A064
    void InjectOptionalTargetPoint(::UnityEngine::Transform* targetPoint);
    // private System.Void <Start>b__31_0()
    // Offset: 0x480A0E0
    void $Start$b__31_0();
    // protected override System.Void Awake()
    // Offset: 0x4809780
    // Implemented from: Oculus.Interaction.Interactable`2
    // Base method: System.Void Interactable_2::Awake()
    void Awake();
    // protected override System.Void Start()
    // Offset: 0x4809830
    // Implemented from: Oculus.Interaction.Interactable`2
    // Base method: System.Void Interactable_2::Start()
    void Start();
    // public System.Void .ctor()
    // Offset: 0x480A06C
    // Implemented from: Oculus.Interaction.Interactable`2
    // Base method: System.Void Interactable_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportInteractable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Locomotion::TeleportInteractable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportInteractable*, creationType>()));
    }
  }; // Oculus.Interaction.Locomotion.TeleportInteractable
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::get_AllowTeleport
// Il2CppName: get_AllowTeleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::get_AllowTeleport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "get_AllowTeleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::set_AllowTeleport
// Il2CppName: set_AllowTeleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(bool)>(&Oculus::Interaction::Locomotion::TeleportInteractable::set_AllowTeleport)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "set_AllowTeleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::get_EqualDistanceToBlockerOverride
// Il2CppName: get_EqualDistanceToBlockerOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::get_EqualDistanceToBlockerOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "get_EqualDistanceToBlockerOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::set_EqualDistanceToBlockerOverride
// Il2CppName: set_EqualDistanceToBlockerOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(float)>(&Oculus::Interaction::Locomotion::TeleportInteractable::set_EqualDistanceToBlockerOverride)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "set_EqualDistanceToBlockerOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::get_TieBreakerScore
// Il2CppName: get_TieBreakerScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::get_TieBreakerScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "get_TieBreakerScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::set_TieBreakerScore
// Il2CppName: set_TieBreakerScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(int)>(&Oculus::Interaction::Locomotion::TeleportInteractable::set_TieBreakerScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "set_TieBreakerScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::get_Surface
// Il2CppName: get_Surface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::get_Surface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "get_Surface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::set_Surface
// Il2CppName: set_Surface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&Oculus::Interaction::Locomotion::TeleportInteractable::set_Surface)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "set_Surface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::get_SurfaceBounds
// Il2CppName: get_SurfaceBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Surfaces::IBounds* (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::get_SurfaceBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "get_SurfaceBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::set_SurfaceBounds
// Il2CppName: set_SurfaceBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(::Oculus::Interaction::Surfaces::IBounds*)>(&Oculus::Interaction::Locomotion::TeleportInteractable::set_SurfaceBounds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "IBounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "set_SurfaceBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::get_FaceTargetDirection
// Il2CppName: get_FaceTargetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::get_FaceTargetDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "get_FaceTargetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::set_FaceTargetDirection
// Il2CppName: set_FaceTargetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(bool)>(&Oculus::Interaction::Locomotion::TeleportInteractable::set_FaceTargetDirection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "set_FaceTargetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::get_EyeLevel
// Il2CppName: get_EyeLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::get_EyeLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "get_EyeLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::set_EyeLevel
// Il2CppName: set_EyeLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(bool)>(&Oculus::Interaction::Locomotion::TeleportInteractable::set_EyeLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "set_EyeLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::IsInRange
// Il2CppName: IsInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Locomotion::TeleportInteractable::*)(::UnityEngine::Pose, float)>(&Oculus::Interaction::Locomotion::TeleportInteractable::IsInRange)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    static auto* maxSqrDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "IsInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, maxSqrDistance});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::DetectHit
// Il2CppName: DetectHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Locomotion::TeleportInteractable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::Oculus::Interaction::Locomotion::TeleportHit>)>(&Oculus::Interaction::Locomotion::TeleportInteractable::DetectHit)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "TeleportHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "DetectHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, hit});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::TargetPose
// Il2CppName: TargetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::Locomotion::TeleportInteractable::*)(::UnityEngine::Pose)>(&Oculus::Interaction::Locomotion::TeleportInteractable::TargetPose)> {
  static const MethodInfo* get() {
    static auto* hitPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "TargetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitPose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::InjectAllTeleportInteractable
// Il2CppName: InjectAllTeleportInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&Oculus::Interaction::Locomotion::TeleportInteractable::InjectAllTeleportInteractable)> {
  static const MethodInfo* get() {
    static auto* surface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "InjectAllTeleportInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{surface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::InjectSurface
// Il2CppName: InjectSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&Oculus::Interaction::Locomotion::TeleportInteractable::InjectSurface)> {
  static const MethodInfo* get() {
    static auto* surface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "InjectSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{surface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::InjectOptionalTargetPoint
// Il2CppName: InjectOptionalTargetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::Locomotion::TeleportInteractable::InjectOptionalTargetPoint)> {
  static const MethodInfo* get() {
    static auto* targetPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "InjectOptionalTargetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPoint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::$Start$b__31_0
// Il2CppName: <Start>b__31_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::$Start$b__31_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "<Start>b__31_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&Oculus::Interaction::Locomotion::TeleportInteractable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TeleportInteractable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TeleportInteractable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
