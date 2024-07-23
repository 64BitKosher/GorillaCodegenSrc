// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface
#include "Oculus/Interaction/Grab/GrabSurfaces/IGrabSurface.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Pose
  struct Pose;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Oculus::Interaction::Grab
namespace Oculus::Interaction::Grab {
  // Forward declaring type: GrabPoseScore
  struct GrabPoseScore;
  // Forward declaring type: PoseMeasureParameters
  struct PoseMeasureParameters;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Grab.GrabSurfaces
namespace Oculus::Interaction::Grab::GrabSurfaces {
  // Forward declaring type: ColliderGrabSurface
  class ColliderGrabSurface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*, "Oculus.Interaction.Grab.GrabSurfaces", "ColliderGrabSurface");
// Type namespace: Oculus.Interaction.Grab.GrabSurfaces
namespace Oculus::Interaction::Grab::GrabSurfaces {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface
  // [TokenAttribute] Offset: FFFFFFFF
  class ColliderGrabSurface : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*/ {
    public:
    public:
    // private UnityEngine.Collider _collider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface
    operator ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this);
    }
    // Get instance field reference: private UnityEngine.Collider _collider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn__collider();
    // protected System.Void Start()
    // Offset: 0x4835194
    void Start();
    // private UnityEngine.Vector3 NearestPointInSurface(UnityEngine.Vector3 targetPosition)
    // Offset: 0x4835198
    ::UnityEngine::Vector3 NearestPointInSurface(::UnityEngine::Vector3 targetPosition);
    // public Oculus.Interaction.Grab.GrabPoseScore CalculateBestPoseAtSurface(in UnityEngine.Pose targetPose, out UnityEngine.Pose bestPose, in Oculus.Interaction.Grab.PoseMeasureParameters scoringModifier, UnityEngine.Transform relativeTo)
    // Offset: 0x483525C
    ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Pose> bestPose, ByRef<::Oculus::Interaction::Grab::PoseMeasureParameters> scoringModifier, ::UnityEngine::Transform* relativeTo);
    // public System.Boolean CalculateBestPoseAtSurface(UnityEngine.Ray targetRay, out UnityEngine.Pose bestPose, UnityEngine.Transform relativeTo)
    // Offset: 0x4835308
    bool CalculateBestPoseAtSurface(::UnityEngine::Ray targetRay, ByRef<::UnityEngine::Pose> bestPose, ::UnityEngine::Transform* relativeTo);
    // public UnityEngine.Pose MirrorPose(in UnityEngine.Pose gripPose, UnityEngine.Transform relativeTo)
    // Offset: 0x483542C
    ::UnityEngine::Pose MirrorPose(ByRef<::UnityEngine::Pose> gripPose, ::UnityEngine::Transform* relativeTo);
    // public Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface CreateMirroredSurface(UnityEngine.GameObject gameObject)
    // Offset: 0x4835440
    ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateMirroredSurface(::UnityEngine::GameObject* gameObject);
    // public Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface CreateDuplicatedSurface(UnityEngine.GameObject gameObject)
    // Offset: 0x4835444
    ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateDuplicatedSurface(::UnityEngine::GameObject* gameObject);
    // public System.Void InjectAllColliderGrabSurface(UnityEngine.Collider collider)
    // Offset: 0x48354B4
    void InjectAllColliderGrabSurface(::UnityEngine::Collider* collider);
    // public System.Void InjectCollider(UnityEngine.Collider collider)
    // Offset: 0x48354BC
    void InjectCollider(::UnityEngine::Collider* collider);
    // public System.Void .ctor()
    // Offset: 0x48354C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColliderGrabSurface* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColliderGrabSurface*, creationType>()));
    }
    // private Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(in UnityEngine.Pose targetPose, out UnityEngine.Pose bestPose, in Oculus.Interaction.Grab.PoseMeasureParameters scoringModifier, UnityEngine.Transform relativeTo)
    // Offset: 0x48354CC
    ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Pose> bestPose, ByRef<::Oculus::Interaction::Grab::PoseMeasureParameters> scoringModifier, ::UnityEngine::Transform* relativeTo);
    // private UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose(in UnityEngine.Pose gripPose, UnityEngine.Transform relativeTo)
    // Offset: 0x48354D0
    ::UnityEngine::Pose Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(ByRef<::UnityEngine::Pose> gripPose, ::UnityEngine::Transform* relativeTo);
  }; // Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface
  #pragma pack(pop)
  static check_size<sizeof(ColliderGrabSurface), 32 + sizeof(::UnityEngine::Collider*)> __Oculus_Interaction_Grab_GrabSurfaces_ColliderGrabSurfaceSizeCheck;
  static_assert(sizeof(ColliderGrabSurface) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)()>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::NearestPointInSurface
// Il2CppName: NearestPointInSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::NearestPointInSurface)> {
  static const MethodInfo* get() {
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "NearestPointInSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPosition});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface
// Il2CppName: CalculateBestPoseAtSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Pose>, ByRef<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface)> {
  static const MethodInfo* get() {
    static auto* targetPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* bestPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* scoringModifier = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Grab", "PoseMeasureParameters")->this_arg;
    static auto* relativeTo = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "CalculateBestPoseAtSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPose, bestPose, scoringModifier, relativeTo});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface
// Il2CppName: CalculateBestPoseAtSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::Ray, ByRef<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface)> {
  static const MethodInfo* get() {
    static auto* targetRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* bestPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* relativeTo = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "CalculateBestPoseAtSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetRay, bestPose, relativeTo});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::MirrorPose
// Il2CppName: MirrorPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(ByRef<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::MirrorPose)> {
  static const MethodInfo* get() {
    static auto* gripPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* relativeTo = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "MirrorPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gripPose, relativeTo});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CreateMirroredSurface
// Il2CppName: CreateMirroredSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::GameObject*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CreateMirroredSurface)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "CreateMirroredSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CreateDuplicatedSurface
// Il2CppName: CreateDuplicatedSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::GameObject*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CreateDuplicatedSurface)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "CreateDuplicatedSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::InjectAllColliderGrabSurface
// Il2CppName: InjectAllColliderGrabSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::Collider*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::InjectAllColliderGrabSurface)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "InjectAllColliderGrabSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::InjectCollider
// Il2CppName: InjectCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::Collider*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::InjectCollider)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "InjectCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
// Il2CppName: Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Pose>, ByRef<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  static const MethodInfo* get() {
    static auto* targetPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* bestPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* scoringModifier = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Grab", "PoseMeasureParameters")->this_arg;
    static auto* relativeTo = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPose, bestPose, scoringModifier, relativeTo});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose
// Il2CppName: Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(ByRef<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose)> {
  static const MethodInfo* get() {
    static auto* gripPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* relativeTo = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*), "Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gripPose, relativeTo});
  }
};
