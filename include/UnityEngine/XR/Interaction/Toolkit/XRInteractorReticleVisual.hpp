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
// Including type: UnityEngine.PhysicsScene
#include "UnityEngine/PhysicsScene.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
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
// Forward declaring namespace: Unity::XR::CoreUtils
namespace Unity::XR::CoreUtils {
  // Forward declaring type: XROrigin
  class XROrigin;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRBaseInteractor
  class XRBaseInteractor;
  // Forward declaring type: SelectEnterEventArgs
  class SelectEnterEventArgs;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRInteractorReticleVisual
  class XRInteractorReticleVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractorReticleVisual");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class XRInteractorReticleVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single m_MaxRaycastDistance
    // Size: 0x4
    // Offset: 0x20
    float m_MaxRaycastDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_MaxRaycastDistance and: m_ReticlePrefab
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject m_ReticlePrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* m_ReticlePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single m_PrefabScalingFactor
    // Size: 0x4
    // Offset: 0x30
    float m_PrefabScalingFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_UndoDistanceScaling
    // Size: 0x1
    // Offset: 0x34
    bool m_UndoDistanceScaling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_AlignPrefabWithSurfaceNormal
    // Size: 0x1
    // Offset: 0x35
    bool m_AlignPrefabWithSurfaceNormal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_AlignPrefabWithSurfaceNormal and: m_EndpointSmoothingTime
    char __padding4[0x2] = {};
    // private System.Single m_EndpointSmoothingTime
    // Size: 0x4
    // Offset: 0x38
    float m_EndpointSmoothingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_DrawWhileSelecting
    // Size: 0x1
    // Offset: 0x3C
    bool m_DrawWhileSelecting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_DrawOnNoHit
    // Size: 0x1
    // Offset: 0x3D
    bool m_DrawOnNoHit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_DrawOnNoHit and: m_RaycastMask
    char __padding7[0x2] = {};
    // private UnityEngine.LayerMask m_RaycastMask
    // Size: 0x4
    // Offset: 0x40
    ::UnityEngine::LayerMask m_RaycastMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // private System.Boolean m_ReticleActive
    // Size: 0x1
    // Offset: 0x44
    bool m_ReticleActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ReticleActive and: m_XROrigin
    char __padding9[0x3] = {};
    // private Unity.XR.CoreUtils.XROrigin m_XROrigin
    // Size: 0x8
    // Offset: 0x48
    ::Unity::XR::CoreUtils::XROrigin* m_XROrigin;
    // Field size check
    static_assert(sizeof(::Unity::XR::CoreUtils::XROrigin*) == 0x8);
    // private UnityEngine.GameObject m_ReticleInstance
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* m_ReticleInstance;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor m_Interactor
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* m_Interactor;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*) == 0x8);
    // private UnityEngine.Vector3[] m_InteractorLinePoints
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::UnityEngine::Vector3> m_InteractorLinePoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3 m_TargetEndPoint
    // Size: 0xC
    // Offset: 0x68
    ::UnityEngine::Vector3 m_TargetEndPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_TargetEndNormal
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 m_TargetEndNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.PhysicsScene m_LocalPhysicsScene
    // Size: 0x4
    // Offset: 0x80
    ::UnityEngine::PhysicsScene m_LocalPhysicsScene;
    // Field size check
    static_assert(sizeof(::UnityEngine::PhysicsScene) == 0x4);
    // private System.Boolean m_HasRaycastHit
    // Size: 0x1
    // Offset: 0x84
    bool m_HasRaycastHit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_HasRaycastHit and: m_RaycastHits
    char __padding17[0x3] = {};
    // private readonly UnityEngine.RaycastHit[] m_RaycastHits
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::UnityEngine::RaycastHit> m_RaycastHits;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RaycastHit>) == 0x8);
    public:
    // static field const value: static private System.Int32 k_MaxRaycastHits
    static constexpr const int k_MaxRaycastHits = 10;
    // Get static field: static private System.Int32 k_MaxRaycastHits
    static int _get_k_MaxRaycastHits();
    // Set static field: static private System.Int32 k_MaxRaycastHits
    static void _set_k_MaxRaycastHits(int value);
    // Get static field: static private Unity.XR.CoreUtils.XROrigin s_XROriginCache
    static ::Unity::XR::CoreUtils::XROrigin* _get_s_XROriginCache();
    // Set static field: static private Unity.XR.CoreUtils.XROrigin s_XROriginCache
    static void _set_s_XROriginCache(::Unity::XR::CoreUtils::XROrigin* value);
    // Get instance field reference: private System.Single m_MaxRaycastDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxRaycastDistance();
    // Get instance field reference: private UnityEngine.GameObject m_ReticlePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_ReticlePrefab();
    // Get instance field reference: private System.Single m_PrefabScalingFactor
    [[deprecated("Use field access instead!")]] float& dyn_m_PrefabScalingFactor();
    // Get instance field reference: private System.Boolean m_UndoDistanceScaling
    [[deprecated("Use field access instead!")]] bool& dyn_m_UndoDistanceScaling();
    // Get instance field reference: private System.Boolean m_AlignPrefabWithSurfaceNormal
    [[deprecated("Use field access instead!")]] bool& dyn_m_AlignPrefabWithSurfaceNormal();
    // Get instance field reference: private System.Single m_EndpointSmoothingTime
    [[deprecated("Use field access instead!")]] float& dyn_m_EndpointSmoothingTime();
    // Get instance field reference: private System.Boolean m_DrawWhileSelecting
    [[deprecated("Use field access instead!")]] bool& dyn_m_DrawWhileSelecting();
    // Get instance field reference: private System.Boolean m_DrawOnNoHit
    [[deprecated("Use field access instead!")]] bool& dyn_m_DrawOnNoHit();
    // Get instance field reference: private UnityEngine.LayerMask m_RaycastMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_m_RaycastMask();
    // Get instance field reference: private System.Boolean m_ReticleActive
    [[deprecated("Use field access instead!")]] bool& dyn_m_ReticleActive();
    // Get instance field reference: private Unity.XR.CoreUtils.XROrigin m_XROrigin
    [[deprecated("Use field access instead!")]] ::Unity::XR::CoreUtils::XROrigin*& dyn_m_XROrigin();
    // Get instance field reference: private UnityEngine.GameObject m_ReticleInstance
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_ReticleInstance();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor m_Interactor
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*& dyn_m_Interactor();
    // Get instance field reference: private UnityEngine.Vector3[] m_InteractorLinePoints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_m_InteractorLinePoints();
    // Get instance field reference: private UnityEngine.Vector3 m_TargetEndPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_TargetEndPoint();
    // Get instance field reference: private UnityEngine.Vector3 m_TargetEndNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_TargetEndNormal();
    // Get instance field reference: private UnityEngine.PhysicsScene m_LocalPhysicsScene
    [[deprecated("Use field access instead!")]] ::UnityEngine::PhysicsScene& dyn_m_LocalPhysicsScene();
    // Get instance field reference: private System.Boolean m_HasRaycastHit
    [[deprecated("Use field access instead!")]] bool& dyn_m_HasRaycastHit();
    // Get instance field reference: private readonly UnityEngine.RaycastHit[] m_RaycastHits
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::RaycastHit>& dyn_m_RaycastHits();
    // public System.Single get_maxRaycastDistance()
    // Offset: 0x53E6308
    float get_maxRaycastDistance();
    // public System.Void set_maxRaycastDistance(System.Single value)
    // Offset: 0x53E6310
    void set_maxRaycastDistance(float value);
    // public UnityEngine.GameObject get_reticlePrefab()
    // Offset: 0x53E6318
    ::UnityEngine::GameObject* get_reticlePrefab();
    // public System.Void set_reticlePrefab(UnityEngine.GameObject value)
    // Offset: 0x53E6320
    void set_reticlePrefab(::UnityEngine::GameObject* value);
    // public System.Single get_prefabScalingFactor()
    // Offset: 0x53E6448
    float get_prefabScalingFactor();
    // public System.Void set_prefabScalingFactor(System.Single value)
    // Offset: 0x53E6450
    void set_prefabScalingFactor(float value);
    // public System.Boolean get_undoDistanceScaling()
    // Offset: 0x53E6458
    bool get_undoDistanceScaling();
    // public System.Void set_undoDistanceScaling(System.Boolean value)
    // Offset: 0x53E6460
    void set_undoDistanceScaling(bool value);
    // public System.Boolean get_alignPrefabWithSurfaceNormal()
    // Offset: 0x53E646C
    bool get_alignPrefabWithSurfaceNormal();
    // public System.Void set_alignPrefabWithSurfaceNormal(System.Boolean value)
    // Offset: 0x53E6474
    void set_alignPrefabWithSurfaceNormal(bool value);
    // public System.Single get_endpointSmoothingTime()
    // Offset: 0x53E6480
    float get_endpointSmoothingTime();
    // public System.Void set_endpointSmoothingTime(System.Single value)
    // Offset: 0x53E6488
    void set_endpointSmoothingTime(float value);
    // public System.Boolean get_drawWhileSelecting()
    // Offset: 0x53E6490
    bool get_drawWhileSelecting();
    // public System.Void set_drawWhileSelecting(System.Boolean value)
    // Offset: 0x53E6498
    void set_drawWhileSelecting(bool value);
    // public System.Boolean get_drawOnNoHit()
    // Offset: 0x53E64A4
    bool get_drawOnNoHit();
    // public System.Void set_drawOnNoHit(System.Boolean value)
    // Offset: 0x53E64AC
    void set_drawOnNoHit(bool value);
    // public UnityEngine.LayerMask get_raycastMask()
    // Offset: 0x53E64B8
    ::UnityEngine::LayerMask get_raycastMask();
    // public System.Void set_raycastMask(UnityEngine.LayerMask value)
    // Offset: 0x53E64C0
    void set_raycastMask(::UnityEngine::LayerMask value);
    // public System.Boolean get_reticleActive()
    // Offset: 0x53E64C8
    bool get_reticleActive();
    // public System.Void set_reticleActive(System.Boolean value)
    // Offset: 0x53E64D0
    void set_reticleActive(bool value);
    // protected System.Void Awake()
    // Offset: 0x53E6570
    void Awake();
    // protected System.Void Update()
    // Offset: 0x53E67E8
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x53E7264
    void OnDestroy();
    // private System.Void FindXROrigin()
    // Offset: 0x53E66C8
    void FindXROrigin();
    // private System.Void SetupReticlePrefab()
    // Offset: 0x53E633C
    void SetupReticlePrefab();
    // static private UnityEngine.RaycastHit FindClosestHit(UnityEngine.RaycastHit[] hits, System.Int32 hitCount)
    // Offset: 0x53E7350
    static ::UnityEngine::RaycastHit FindClosestHit(::ArrayW<::UnityEngine::RaycastHit> hits, int hitCount);
    // private System.Boolean TryGetRaycastPoint(ref UnityEngine.Vector3 raycastPos, ref UnityEngine.Vector3 raycastNormal)
    // Offset: 0x53E742C
    bool TryGetRaycastPoint(ByRef<::UnityEngine::Vector3> raycastPos, ByRef<::UnityEngine::Vector3> raycastNormal);
    // private System.Boolean UpdateReticleTarget()
    // Offset: 0x53E6874
    bool UpdateReticleTarget();
    // private System.Void ActivateReticleAtTarget()
    // Offset: 0x53E6D10
    void ActivateReticleAtTarget();
    // private System.Void OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs args)
    // Offset: 0x53E7568
    void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);
    // public System.Void .ctor()
    // Offset: 0x53E7570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRInteractorReticleVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRInteractorReticleVisual*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual
  #pragma pack(pop)
  static check_size<sizeof(XRInteractorReticleVisual), 136 + sizeof(::ArrayW<::UnityEngine::RaycastHit>)> __UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisualSizeCheck;
  static_assert(sizeof(XRInteractorReticleVisual) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_maxRaycastDistance
// Il2CppName: get_maxRaycastDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_maxRaycastDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_maxRaycastDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_maxRaycastDistance
// Il2CppName: set_maxRaycastDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_maxRaycastDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_maxRaycastDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_reticlePrefab
// Il2CppName: get_reticlePrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_reticlePrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_reticlePrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_reticlePrefab
// Il2CppName: set_reticlePrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(::UnityEngine::GameObject*)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_reticlePrefab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_reticlePrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_prefabScalingFactor
// Il2CppName: get_prefabScalingFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_prefabScalingFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_prefabScalingFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_prefabScalingFactor
// Il2CppName: set_prefabScalingFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_prefabScalingFactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_prefabScalingFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_undoDistanceScaling
// Il2CppName: get_undoDistanceScaling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_undoDistanceScaling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_undoDistanceScaling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_undoDistanceScaling
// Il2CppName: set_undoDistanceScaling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_undoDistanceScaling)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_undoDistanceScaling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_alignPrefabWithSurfaceNormal
// Il2CppName: get_alignPrefabWithSurfaceNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_alignPrefabWithSurfaceNormal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_alignPrefabWithSurfaceNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_alignPrefabWithSurfaceNormal
// Il2CppName: set_alignPrefabWithSurfaceNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_alignPrefabWithSurfaceNormal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_alignPrefabWithSurfaceNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_endpointSmoothingTime
// Il2CppName: get_endpointSmoothingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_endpointSmoothingTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_endpointSmoothingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_endpointSmoothingTime
// Il2CppName: set_endpointSmoothingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_endpointSmoothingTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_endpointSmoothingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_drawWhileSelecting
// Il2CppName: get_drawWhileSelecting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_drawWhileSelecting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_drawWhileSelecting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_drawWhileSelecting
// Il2CppName: set_drawWhileSelecting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_drawWhileSelecting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_drawWhileSelecting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_drawOnNoHit
// Il2CppName: get_drawOnNoHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_drawOnNoHit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_drawOnNoHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_drawOnNoHit
// Il2CppName: set_drawOnNoHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_drawOnNoHit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_drawOnNoHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_raycastMask
// Il2CppName: get_raycastMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_raycastMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_raycastMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_raycastMask
// Il2CppName: set_raycastMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(::UnityEngine::LayerMask)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_raycastMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_raycastMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_reticleActive
// Il2CppName: get_reticleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::get_reticleActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "get_reticleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_reticleActive
// Il2CppName: set_reticleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::set_reticleActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "set_reticleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::FindXROrigin
// Il2CppName: FindXROrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::FindXROrigin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "FindXROrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::SetupReticlePrefab
// Il2CppName: SetupReticlePrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::SetupReticlePrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "SetupReticlePrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::FindClosestHit
// Il2CppName: FindClosestHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (*)(::ArrayW<::UnityEngine::RaycastHit>, int)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::FindClosestHit)> {
  static const MethodInfo* get() {
    static auto* hits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit"), 1)->byval_arg;
    static auto* hitCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "FindClosestHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hits, hitCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::TryGetRaycastPoint
// Il2CppName: TryGetRaycastPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::TryGetRaycastPoint)> {
  static const MethodInfo* get() {
    static auto* raycastPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* raycastNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "TryGetRaycastPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raycastPos, raycastNormal});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::UpdateReticleTarget
// Il2CppName: UpdateReticleTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::UpdateReticleTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "UpdateReticleTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::ActivateReticleAtTarget
// Il2CppName: ActivateReticleAtTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::ActivateReticleAtTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "ActivateReticleAtTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::OnSelectEntered
// Il2CppName: OnSelectEntered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::OnSelectEntered)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "SelectEnterEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*), "OnSelectEntered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
