// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: LagCompensationUtils
  class LagCompensationUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::LagCompensationUtils);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::LagCompensationUtils*, "Fusion", "LagCompensationUtils");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.LagCompensationUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class LagCompensationUtils : public ::Il2CppObject {
    public:
    // Nested type: ::Fusion::LagCompensationUtils::CustomPlanesBox
    struct CustomPlanesBox;
    // Nested type: ::Fusion::LagCompensationUtils::CustomPlane
    struct CustomPlane;
    // Nested type: ::Fusion::LagCompensationUtils::CustomEdgesBox
    struct CustomEdgesBox;
    // Nested type: ::Fusion::LagCompensationUtils::CustomLine
    struct CustomLine;
    // Nested type: ::Fusion::LagCompensationUtils::RotationMatrix
    struct RotationMatrix;
    // Nested type: ::Fusion::LagCompensationUtils::BoxNarrowData
    struct BoxNarrowData;
    // Nested type: ::Fusion::LagCompensationUtils::ContactData
    struct ContactData;
    // static field const value: static private System.Single ALLOWED_DOT_DIFF
    static constexpr const float ALLOWED_DOT_DIFF = 0.975;
    // Get static field: static private System.Single ALLOWED_DOT_DIFF
    static float _get_ALLOWED_DOT_DIFF();
    // Set static field: static private System.Single ALLOWED_DOT_DIFF
    static void _set_ALLOWED_DOT_DIFF(float value);
    // static field const value: static private System.Single EXTENTS_EXPANSION_MULTIPLIER
    static constexpr const float EXTENTS_EXPANSION_MULTIPLIER = 1.025;
    // Get static field: static private System.Single EXTENTS_EXPANSION_MULTIPLIER
    static float _get_EXTENTS_EXPANSION_MULTIPLIER();
    // Set static field: static private System.Single EXTENTS_EXPANSION_MULTIPLIER
    static void _set_EXTENTS_EXPANSION_MULTIPLIER(float value);
    // static field const value: static private System.Single MIN_CROSS_THRESHOLD
    static constexpr const float MIN_CROSS_THRESHOLD = 0.0001;
    // Get static field: static private System.Single MIN_CROSS_THRESHOLD
    static float _get_MIN_CROSS_THRESHOLD();
    // Set static field: static private System.Single MIN_CROSS_THRESHOLD
    static void _set_MIN_CROSS_THRESHOLD(float value);
    // static System.Boolean NarrowBoxBox(ref Fusion.LagCompensationUtils/BoxNarrowData aNarrow, ref Fusion.LagCompensationUtils/BoxNarrowData bNarrow, System.Boolean detailedManifold, out UnityEngine.Vector3 hitPoint, out UnityEngine.Vector3 normal)
    // Offset: 0x2B3752C
    static bool NarrowBoxBox(ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> aNarrow, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> bNarrow, bool detailedManifold, ByRef<::UnityEngine::Vector3> hitPoint, ByRef<::UnityEngine::Vector3> normal);
    // static private Fusion.LagCompensationUtils/CustomEdgesBox GetEdgesBox(Fusion.LagCompensationUtils/CustomEdgesBox edges, ref UnityEngine.Vector3 translation)
    // Offset: 0x2B383A0
    static ::Fusion::LagCompensationUtils::CustomEdgesBox GetEdgesBox(::Fusion::LagCompensationUtils::CustomEdgesBox edges, ByRef<::UnityEngine::Vector3> translation);
    // static private Fusion.LagCompensationUtils/CustomPlanesBox GetPlanesBox(Fusion.LagCompensationUtils/CustomPlanesBox planes, ref UnityEngine.Vector3 translation)
    // Offset: 0x2B382CC
    static ::Fusion::LagCompensationUtils::CustomPlanesBox GetPlanesBox(::Fusion::LagCompensationUtils::CustomPlanesBox planes, ByRef<::UnityEngine::Vector3> translation);
    // static private System.Boolean GetHitPoint(ref Fusion.LagCompensationUtils/CustomPlanesBox planesA, ref Fusion.LagCompensationUtils/CustomPlanesBox planesB, ref Fusion.LagCompensationUtils/CustomEdgesBox edgesA, ref Fusion.LagCompensationUtils/CustomEdgesBox edgesB, ref Fusion.LagCompensationUtils/BoxNarrowData boxNarrowA, ref Fusion.LagCompensationUtils/BoxNarrowData boxNarrowB, ref UnityEngine.Vector3 boxAToBoxBOffset, System.Boolean computeDetailedInfo, out UnityEngine.Vector3 contactPoint)
    // Offset: 0x2B384B4
    static bool GetHitPoint(ByRef<::Fusion::LagCompensationUtils::CustomPlanesBox> planesA, ByRef<::Fusion::LagCompensationUtils::CustomPlanesBox> planesB, ByRef<::Fusion::LagCompensationUtils::CustomEdgesBox> edgesA, ByRef<::Fusion::LagCompensationUtils::CustomEdgesBox> edgesB, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> boxNarrowA, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> boxNarrowB, ByRef<::UnityEngine::Vector3> boxAToBoxBOffset, bool computeDetailedInfo, ByRef<::UnityEngine::Vector3> contactPoint);
    // static private System.Void GetContactPointPlaneEdge(ref Fusion.LagCompensationUtils/CustomPlanesBox planes, ref Fusion.LagCompensationUtils/CustomEdgesBox edges, ref Fusion.LagCompensationUtils/BoxNarrowData boxNarrow, ref UnityEngine.Vector3 offset, ref UnityEngine.Vector3 boxAPosition, System.Boolean detailedManifold, ref System.Int32 cpCount, ref UnityEngine.Vector3 contactPoint)
    // Offset: 0x2B38604
    static void GetContactPointPlaneEdge(ByRef<::Fusion::LagCompensationUtils::CustomPlanesBox> planes, ByRef<::Fusion::LagCompensationUtils::CustomEdgesBox> edges, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> boxNarrow, ByRef<::UnityEngine::Vector3> offset, ByRef<::UnityEngine::Vector3> boxAPosition, bool detailedManifold, ByRef<int> cpCount, ByRef<::UnityEngine::Vector3> contactPoint);
    // static private System.Boolean ClipToPlane(ref Fusion.LagCompensationUtils/CustomPlane plane, ref UnityEngine.Vector3 lineStart, ref UnityEngine.Vector3 lineEnd, ref UnityEngine.Vector3 intersection)
    // Offset: 0x2B3ABB8
    static bool ClipToPlane(ByRef<::Fusion::LagCompensationUtils::CustomPlane> plane, ByRef<::UnityEngine::Vector3> lineStart, ByRef<::UnityEngine::Vector3> lineEnd, ByRef<::UnityEngine::Vector3> intersection);
    // static private System.Boolean BoxInAABB(ref Fusion.LagCompensationUtils/CustomEdgesBox boxEdges, ref Fusion.LagCompensationUtils/BoxNarrowData boxNarrow, ref UnityEngine.Vector3 offset)
    // Offset: 0x2B3AA80
    static bool BoxInAABB(ByRef<::Fusion::LagCompensationUtils::CustomEdgesBox> boxEdges, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> boxNarrow, ByRef<::UnityEngine::Vector3> offset);
    // static private System.Boolean PointInAABB(UnityEngine.Vector3 point, ref Fusion.LagCompensationUtils/BoxNarrowData boxNarrow, ref UnityEngine.Vector3 max, ref UnityEngine.Vector3 offset)
    // Offset: 0x2B3AC6C
    static bool PointInAABB(::UnityEngine::Vector3 point, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> boxNarrow, ByRef<::UnityEngine::Vector3> max, ByRef<::UnityEngine::Vector3> offset);
    // static public System.Boolean LocalAABBSphereIntersection(UnityEngine.Vector3 aabbExtents, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x2B343E0
    static bool LocalAABBSphereIntersection(::UnityEngine::Vector3 aabbExtents, ::UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // static public System.Boolean LocalAABBSphereContact(UnityEngine.Vector3 aabbExtents, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius, out Fusion.LagCompensationUtils/ContactData contact)
    // Offset: 0x2B3ACE8
    static bool LocalAABBSphereContact(::UnityEngine::Vector3 aabbExtents, ::UnityEngine::Vector3 sphereCenter, float sphereRadius, ByRef<::Fusion::LagCompensationUtils::ContactData> contact);
    // static System.Boolean SphereSphere(UnityEngine.Vector3 centerA, System.Single radiusA, UnityEngine.Vector3 centerB, System.Single radiusB, out UnityEngine.Vector3 intersection, out UnityEngine.Vector3 normal)
    // Offset: 0x2B3AF3C
    static bool SphereSphere(::UnityEngine::Vector3 centerA, float radiusA, ::UnityEngine::Vector3 centerB, float radiusB, ByRef<::UnityEngine::Vector3> intersection, ByRef<::UnityEngine::Vector3> normal);
    // static System.Boolean RayAABB(ref UnityEngine.Vector3 minB, ref UnityEngine.Vector3 maxB, ref UnityEngine.Vector3 origin, ref UnityEngine.Vector3 dir, System.Single sqrMaxdistance, out UnityEngine.Vector3 point, out UnityEngine.Vector3 normal, out System.Single distance)
    // Offset: 0x2B3B050
    static bool RayAABB(ByRef<::UnityEngine::Vector3> minB, ByRef<::UnityEngine::Vector3> maxB, ByRef<::UnityEngine::Vector3> origin, ByRef<::UnityEngine::Vector3> dir, float sqrMaxdistance, ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> normal, ByRef<float> distance);
    // static System.Boolean RaySphereIntersection(UnityEngine.Vector3 p1, UnityEngine.Vector3 dir, System.Single length, UnityEngine.Vector3 center, System.Single radius, out UnityEngine.Vector3 hitPoint, out UnityEngine.Vector3 normal, out System.Single distance)
    // Offset: 0x2B3B454
    static bool RaySphereIntersection(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 dir, float length, ::UnityEngine::Vector3 center, float radius, ByRef<::UnityEngine::Vector3> hitPoint, ByRef<::UnityEngine::Vector3> normal, ByRef<float> distance);
  }; // Fusion.LagCompensationUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::NarrowBoxBox
// Il2CppName: NarrowBoxBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, bool, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::NarrowBoxBox)> {
  static const MethodInfo* get() {
    static auto* aNarrow = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* bNarrow = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* detailedManifold = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "NarrowBoxBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aNarrow, bNarrow, detailedManifold, hitPoint, normal});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::GetEdgesBox
// Il2CppName: GetEdgesBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::LagCompensationUtils::CustomEdgesBox (*)(::Fusion::LagCompensationUtils::CustomEdgesBox, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::GetEdgesBox)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomEdgesBox")->byval_arg;
    static auto* translation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "GetEdgesBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, translation});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::GetPlanesBox
// Il2CppName: GetPlanesBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::LagCompensationUtils::CustomPlanesBox (*)(::Fusion::LagCompensationUtils::CustomPlanesBox, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::GetPlanesBox)> {
  static const MethodInfo* get() {
    static auto* planes = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomPlanesBox")->byval_arg;
    static auto* translation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "GetPlanesBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planes, translation});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::GetHitPoint
// Il2CppName: GetHitPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Fusion::LagCompensationUtils::CustomPlanesBox>, ByRef<::Fusion::LagCompensationUtils::CustomPlanesBox>, ByRef<::Fusion::LagCompensationUtils::CustomEdgesBox>, ByRef<::Fusion::LagCompensationUtils::CustomEdgesBox>, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, ByRef<::UnityEngine::Vector3>, bool, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::GetHitPoint)> {
  static const MethodInfo* get() {
    static auto* planesA = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomPlanesBox")->this_arg;
    static auto* planesB = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomPlanesBox")->this_arg;
    static auto* edgesA = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomEdgesBox")->this_arg;
    static auto* edgesB = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomEdgesBox")->this_arg;
    static auto* boxNarrowA = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* boxNarrowB = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* boxAToBoxBOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* computeDetailedInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* contactPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "GetHitPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planesA, planesB, edgesA, edgesB, boxNarrowA, boxNarrowB, boxAToBoxBOffset, computeDetailedInfo, contactPoint});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::GetContactPointPlaneEdge
// Il2CppName: GetContactPointPlaneEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Fusion::LagCompensationUtils::CustomPlanesBox>, ByRef<::Fusion::LagCompensationUtils::CustomEdgesBox>, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, bool, ByRef<int>, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::GetContactPointPlaneEdge)> {
  static const MethodInfo* get() {
    static auto* planes = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomPlanesBox")->this_arg;
    static auto* edges = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomEdgesBox")->this_arg;
    static auto* boxNarrow = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* boxAPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* detailedManifold = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cpCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* contactPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "GetContactPointPlaneEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planes, edges, boxNarrow, offset, boxAPosition, detailedManifold, cpCount, contactPoint});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::ClipToPlane
// Il2CppName: ClipToPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Fusion::LagCompensationUtils::CustomPlane>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::ClipToPlane)> {
  static const MethodInfo* get() {
    static auto* plane = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomPlane")->this_arg;
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* intersection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "ClipToPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plane, lineStart, lineEnd, intersection});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::BoxInAABB
// Il2CppName: BoxInAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Fusion::LagCompensationUtils::CustomEdgesBox>, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::BoxInAABB)> {
  static const MethodInfo* get() {
    static auto* boxEdges = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/CustomEdgesBox")->this_arg;
    static auto* boxNarrow = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "BoxInAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boxEdges, boxNarrow, offset});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::PointInAABB
// Il2CppName: PointInAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::PointInAABB)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* boxNarrow = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "PointInAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, boxNarrow, max, offset});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::LocalAABBSphereIntersection
// Il2CppName: LocalAABBSphereIntersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Fusion::LagCompensationUtils::LocalAABBSphereIntersection)> {
  static const MethodInfo* get() {
    static auto* aabbExtents = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "LocalAABBSphereIntersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aabbExtents, sphereCenter, sphereRadius});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::LocalAABBSphereContact
// Il2CppName: LocalAABBSphereContact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ByRef<::Fusion::LagCompensationUtils::ContactData>)>(&Fusion::LagCompensationUtils::LocalAABBSphereContact)> {
  static const MethodInfo* get() {
    static auto* aabbExtents = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contact = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/ContactData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "LocalAABBSphereContact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aabbExtents, sphereCenter, sphereRadius, contact});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::SphereSphere
// Il2CppName: SphereSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&Fusion::LagCompensationUtils::SphereSphere)> {
  static const MethodInfo* get() {
    static auto* centerA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusA = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* centerB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* intersection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "SphereSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerA, radiusA, centerB, radiusB, intersection, normal});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::RayAABB
// Il2CppName: RayAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&Fusion::LagCompensationUtils::RayAABB)> {
  static const MethodInfo* get() {
    static auto* minB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* maxB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* dir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* sqrMaxdistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "RayAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minB, maxB, origin, dir, sqrMaxdistance, point, normal, distance});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationUtils::RaySphereIntersection
// Il2CppName: RaySphereIntersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&Fusion::LagCompensationUtils::RaySphereIntersection)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* dir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationUtils*), "RaySphereIntersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, dir, length, center, radius, hitPoint, normal, distance});
  }
};
