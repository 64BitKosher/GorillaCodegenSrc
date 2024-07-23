// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GraphModifier
#include "Pathfinding/GraphModifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphUpdateScene
  class GraphUpdateScene;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GraphUpdateScene);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GraphUpdateScene*, "Pathfinding", "GraphUpdateScene");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GraphUpdateScene
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class GraphUpdateScene : public ::Pathfinding::GraphModifier {
    public:
    public:
    // public UnityEngine.Vector3[] points
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Vector3> points;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] convexPoints
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Vector3> convexPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public System.Boolean convex
    // Size: 0x1
    // Offset: 0x50
    bool convex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: convex and: minBoundsHeight
    char __padding2[0x3] = {};
    // public System.Single minBoundsHeight
    // Size: 0x4
    // Offset: 0x54
    float minBoundsHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 penaltyDelta
    // Size: 0x4
    // Offset: 0x58
    int penaltyDelta;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean modifyWalkability
    // Size: 0x1
    // Offset: 0x5C
    bool modifyWalkability;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean setWalkability
    // Size: 0x1
    // Offset: 0x5D
    bool setWalkability;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean applyOnStart
    // Size: 0x1
    // Offset: 0x5E
    bool applyOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean applyOnScan
    // Size: 0x1
    // Offset: 0x5F
    bool applyOnScan;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean updatePhysics
    // Size: 0x1
    // Offset: 0x60
    bool updatePhysics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean resetPenaltyOnPhysics
    // Size: 0x1
    // Offset: 0x61
    bool resetPenaltyOnPhysics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean updateErosion
    // Size: 0x1
    // Offset: 0x62
    bool updateErosion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean modifyTag
    // Size: 0x1
    // Offset: 0x63
    bool modifyTag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Int32 setTag
    // Size: 0x4
    // Offset: 0x64
    int setTag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean legacyMode
    // Size: 0x1
    // Offset: 0x68
    bool legacyMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: legacyMode and: setTagInvert
    char __padding14[0x3] = {};
    // private System.Int32 setTagInvert
    // Size: 0x4
    // Offset: 0x6C
    int setTagInvert;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean firstApplied
    // Size: 0x1
    // Offset: 0x70
    bool firstApplied;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstApplied and: serializedVersion
    char __padding16[0x3] = {};
    // private System.Int32 serializedVersion
    // Size: 0x4
    // Offset: 0x74
    int serializedVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean legacyUseWorldSpace
    // Size: 0x1
    // Offset: 0x78
    bool legacyUseWorldSpace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Vector3[] points
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_points();
    // Get instance field reference: private UnityEngine.Vector3[] convexPoints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_convexPoints();
    // Get instance field reference: public System.Boolean convex
    [[deprecated("Use field access instead!")]] bool& dyn_convex();
    // Get instance field reference: public System.Single minBoundsHeight
    [[deprecated("Use field access instead!")]] float& dyn_minBoundsHeight();
    // Get instance field reference: public System.Int32 penaltyDelta
    [[deprecated("Use field access instead!")]] int& dyn_penaltyDelta();
    // Get instance field reference: public System.Boolean modifyWalkability
    [[deprecated("Use field access instead!")]] bool& dyn_modifyWalkability();
    // Get instance field reference: public System.Boolean setWalkability
    [[deprecated("Use field access instead!")]] bool& dyn_setWalkability();
    // Get instance field reference: public System.Boolean applyOnStart
    [[deprecated("Use field access instead!")]] bool& dyn_applyOnStart();
    // Get instance field reference: public System.Boolean applyOnScan
    [[deprecated("Use field access instead!")]] bool& dyn_applyOnScan();
    // Get instance field reference: public System.Boolean updatePhysics
    [[deprecated("Use field access instead!")]] bool& dyn_updatePhysics();
    // Get instance field reference: public System.Boolean resetPenaltyOnPhysics
    [[deprecated("Use field access instead!")]] bool& dyn_resetPenaltyOnPhysics();
    // Get instance field reference: public System.Boolean updateErosion
    [[deprecated("Use field access instead!")]] bool& dyn_updateErosion();
    // Get instance field reference: public System.Boolean modifyTag
    [[deprecated("Use field access instead!")]] bool& dyn_modifyTag();
    // Get instance field reference: public System.Int32 setTag
    [[deprecated("Use field access instead!")]] int& dyn_setTag();
    // Get instance field reference: public System.Boolean legacyMode
    [[deprecated("Use field access instead!")]] bool& dyn_legacyMode();
    // Get instance field reference: private System.Int32 setTagInvert
    [[deprecated("Use field access instead!")]] int& dyn_setTagInvert();
    // Get instance field reference: private System.Boolean firstApplied
    [[deprecated("Use field access instead!")]] bool& dyn_firstApplied();
    // Get instance field reference: private System.Int32 serializedVersion
    [[deprecated("Use field access instead!")]] int& dyn_serializedVersion();
    // Get instance field reference: private System.Boolean legacyUseWorldSpace
    [[deprecated("Use field access instead!")]] bool& dyn_legacyUseWorldSpace();
    // public System.Void Start()
    // Offset: 0x29A182C
    void Start();
    // public System.Void InvertSettings()
    // Offset: 0x29A2094
    void InvertSettings();
    // public System.Void RecalcConvex()
    // Offset: 0x29A20D4
    void RecalcConvex();
    // private System.Void ToggleUseWorldSpace()
    // Offset: 0x29A214C
    void ToggleUseWorldSpace();
    // public System.Void LockToY()
    // Offset: 0x29A2150
    void LockToY();
    // public UnityEngine.Bounds GetBounds()
    // Offset: 0x29A2154
    ::UnityEngine::Bounds GetBounds();
    // public System.Void Apply()
    // Offset: 0x29A18A8
    void Apply();
    // private System.Void OnDrawGizmos()
    // Offset: 0x29A2984
    void OnDrawGizmos();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x29A30BC
    void OnDrawGizmosSelected();
    // private System.Void OnDrawGizmos(System.Boolean selected)
    // Offset: 0x29A298C
    void OnDrawGizmos(bool selected);
    // public System.Void DisableLegacyMode()
    // Offset: 0x29A30C4
    void DisableLegacyMode();
    // public override System.Void OnPostScan()
    // Offset: 0x29A2084
    // Implemented from: Pathfinding.GraphModifier
    // Base method: System.Void GraphModifier::OnPostScan()
    void OnPostScan();
    // protected override System.Void Awake()
    // Offset: 0x29A3194
    // Implemented from: Pathfinding.GraphModifier
    // Base method: System.Void GraphModifier::Awake()
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x29A31C4
    // Implemented from: Pathfinding.GraphModifier
    // Base method: System.Void GraphModifier::.ctor()
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphUpdateScene* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GraphUpdateScene::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphUpdateScene*, creationType>()));
    }
  }; // Pathfinding.GraphUpdateScene
  #pragma pack(pop)
  static check_size<sizeof(GraphUpdateScene), 120 + sizeof(bool)> __Pathfinding_GraphUpdateSceneSizeCheck;
  static_assert(sizeof(GraphUpdateScene) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::InvertSettings
// Il2CppName: InvertSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::InvertSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "InvertSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::RecalcConvex
// Il2CppName: RecalcConvex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::RecalcConvex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "RecalcConvex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::ToggleUseWorldSpace
// Il2CppName: ToggleUseWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::ToggleUseWorldSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "ToggleUseWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::LockToY
// Il2CppName: LockToY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::LockToY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "LockToY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::GetBounds
// Il2CppName: GetBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::GetBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "GetBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::Apply)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)(bool)>(&Pathfinding::GraphUpdateScene::OnDrawGizmos)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::DisableLegacyMode
// Il2CppName: DisableLegacyMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::DisableLegacyMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "DisableLegacyMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::OnPostScan
// Il2CppName: OnPostScan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::OnPostScan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "OnPostScan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateScene::*)()>(&Pathfinding::GraphUpdateScene::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateScene*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateScene::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
