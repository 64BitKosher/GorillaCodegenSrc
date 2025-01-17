// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Poly2Tri.FixedArray3`1
#include "Pathfinding/Poly2Tri/FixedArray3_1.hpp"
// Including type: Pathfinding.Poly2Tri.FixedBitArray3
#include "Pathfinding/Poly2Tri/FixedBitArray3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Poly2Tri::DelaunayTriangle);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Poly2Tri::DelaunayTriangle*, "Pathfinding.Poly2Tri", "DelaunayTriangle");
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // WARNING Size may be invalid!
  // Autogenerated type: Pathfinding.Poly2Tri.DelaunayTriangle
  // [TokenAttribute] Offset: FFFFFFFF
  class DelaunayTriangle : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.TriangulationPoint> Points
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*> Points;
    // public Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.DelaunayTriangle> Neighbors
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*> Neighbors;
    // public Pathfinding.Poly2Tri.FixedBitArray3 EdgeIsConstrained
    // Size: 0x3
    // Offset: 0x40
    ::Pathfinding::Poly2Tri::FixedBitArray3 EdgeIsConstrained;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::FixedBitArray3) == 0x3);
    // public Pathfinding.Poly2Tri.FixedBitArray3 EdgeIsDelaunay
    // Size: 0x3
    // Offset: 0x43
    ::Pathfinding::Poly2Tri::FixedBitArray3 EdgeIsDelaunay;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::FixedBitArray3) == 0x3);
    // private System.Boolean <IsInterior>k__BackingField
    // Size: 0x1
    // Offset: 0x46
    bool IsInterior;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.TriangulationPoint> Points
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*>& dyn_Points();
    // Get instance field reference: public Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.DelaunayTriangle> Neighbors
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>& dyn_Neighbors();
    // Get instance field reference: public Pathfinding.Poly2Tri.FixedBitArray3 EdgeIsConstrained
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::FixedBitArray3& dyn_EdgeIsConstrained();
    // Get instance field reference: public Pathfinding.Poly2Tri.FixedBitArray3 EdgeIsDelaunay
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::FixedBitArray3& dyn_EdgeIsDelaunay();
    // Get instance field reference: private System.Boolean <IsInterior>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsInterior$k__BackingField();
    // public System.Void .ctor(Pathfinding.Poly2Tri.TriangulationPoint p1, Pathfinding.Poly2Tri.TriangulationPoint p2, Pathfinding.Poly2Tri.TriangulationPoint p3)
    // Offset: 0x49C2DB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelaunayTriangle* New_ctor(::Pathfinding::Poly2Tri::TriangulationPoint* p1, ::Pathfinding::Poly2Tri::TriangulationPoint* p2, ::Pathfinding::Poly2Tri::TriangulationPoint* p3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Poly2Tri::DelaunayTriangle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelaunayTriangle*, creationType>(p1, p2, p3)));
    }
    // public System.Boolean get_IsInterior()
    // Offset: 0x49C2E54
    bool get_IsInterior();
    // public System.Void set_IsInterior(System.Boolean value)
    // Offset: 0x49C2E5C
    void set_IsInterior(bool value);
    // public System.Int32 IndexOf(Pathfinding.Poly2Tri.TriangulationPoint p)
    // Offset: 0x49C2E68
    int IndexOf(::Pathfinding::Poly2Tri::TriangulationPoint* p);
    // public System.Int32 IndexCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint p)
    // Offset: 0x49C2F14
    int IndexCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean Contains(Pathfinding.Poly2Tri.TriangulationPoint p)
    // Offset: 0x49C2F48
    bool Contains(::Pathfinding::Poly2Tri::TriangulationPoint* p);
    // private System.Void MarkNeighbor(Pathfinding.Poly2Tri.TriangulationPoint p1, Pathfinding.Poly2Tri.TriangulationPoint p2, Pathfinding.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x49C2FA0
    void MarkNeighbor(::Pathfinding::Poly2Tri::TriangulationPoint* p1, ::Pathfinding::Poly2Tri::TriangulationPoint* p2, ::Pathfinding::Poly2Tri::DelaunayTriangle* t);
    // public System.Void MarkNeighbor(Pathfinding.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x49C314C
    void MarkNeighbor(::Pathfinding::Poly2Tri::DelaunayTriangle* t);
    // public Pathfinding.Poly2Tri.TriangulationPoint OppositePoint(Pathfinding.Poly2Tri.DelaunayTriangle t, Pathfinding.Poly2Tri.TriangulationPoint p)
    // Offset: 0x49C3300
    ::Pathfinding::Poly2Tri::TriangulationPoint* OppositePoint(::Pathfinding::Poly2Tri::DelaunayTriangle* t, ::Pathfinding::Poly2Tri::TriangulationPoint* p);
    // public Pathfinding.Poly2Tri.DelaunayTriangle NeighborCWFrom(Pathfinding.Poly2Tri.TriangulationPoint point)
    // Offset: 0x49C33B4
    ::Pathfinding::Poly2Tri::DelaunayTriangle* NeighborCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint* point);
    // public Pathfinding.Poly2Tri.DelaunayTriangle NeighborCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint point)
    // Offset: 0x49C3454
    ::Pathfinding::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint* point);
    // public Pathfinding.Poly2Tri.DelaunayTriangle NeighborAcrossFrom(Pathfinding.Poly2Tri.TriangulationPoint point)
    // Offset: 0x49C34F4
    ::Pathfinding::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(::Pathfinding::Poly2Tri::TriangulationPoint* point);
    // public Pathfinding.Poly2Tri.TriangulationPoint PointCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint point)
    // Offset: 0x49C3574
    ::Pathfinding::Poly2Tri::TriangulationPoint* PointCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint* point);
    // public Pathfinding.Poly2Tri.TriangulationPoint PointCWFrom(Pathfinding.Poly2Tri.TriangulationPoint point)
    // Offset: 0x49C332C
    ::Pathfinding::Poly2Tri::TriangulationPoint* PointCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint* point);
    // private System.Void RotateCW()
    // Offset: 0x49C35FC
    void RotateCW();
    // public System.Void Legalize(Pathfinding.Poly2Tri.TriangulationPoint oPoint, Pathfinding.Poly2Tri.TriangulationPoint nPoint)
    // Offset: 0x49C36C8
    void Legalize(::Pathfinding::Poly2Tri::TriangulationPoint* oPoint, ::Pathfinding::Poly2Tri::TriangulationPoint* nPoint);
    // public System.Void MarkConstrainedEdge(System.Int32 index)
    // Offset: 0x49C3950
    void MarkConstrainedEdge(int index);
    // public System.Void MarkConstrainedEdge(Pathfinding.Poly2Tri.TriangulationPoint p, Pathfinding.Poly2Tri.TriangulationPoint q)
    // Offset: 0x49C39C4
    void MarkConstrainedEdge(::Pathfinding::Poly2Tri::TriangulationPoint* p, ::Pathfinding::Poly2Tri::TriangulationPoint* q);
    // public System.Int32 EdgeIndex(Pathfinding.Poly2Tri.TriangulationPoint p1, Pathfinding.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x49C3064
    int EdgeIndex(::Pathfinding::Poly2Tri::TriangulationPoint* p1, ::Pathfinding::Poly2Tri::TriangulationPoint* p2);
    // public System.Boolean GetConstrainedEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint p)
    // Offset: 0x49C39F4
    bool GetConstrainedEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetConstrainedEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint p)
    // Offset: 0x49C3A94
    bool GetConstrainedEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetConstrainedEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x49C3AD0
    void SetConstrainedEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetConstrainedEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x49C3B1C
    void SetConstrainedEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Boolean GetDelaunayEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint p)
    // Offset: 0x49C3B68
    bool GetDelaunayEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetDelaunayEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint p)
    // Offset: 0x49C3BA4
    bool GetDelaunayEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetDelaunayEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x49C3BE0
    void SetDelaunayEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetDelaunayEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x49C3C2C
    void SetDelaunayEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint* p, bool ce);
    // public override System.String ToString()
    // Offset: 0x49C3760
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Pathfinding.Poly2Tri.DelaunayTriangle
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::get_IsInterior
// Il2CppName: get_IsInterior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Poly2Tri::DelaunayTriangle::*)()>(&Pathfinding::Poly2Tri::DelaunayTriangle::get_IsInterior)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "get_IsInterior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::set_IsInterior
// Il2CppName: set_IsInterior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(bool)>(&Pathfinding::Poly2Tri::DelaunayTriangle::set_IsInterior)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "set_IsInterior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::IndexOf)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::IndexCCWFrom
// Il2CppName: IndexCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::IndexCCWFrom)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "IndexCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::Contains)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::MarkNeighbor
// Il2CppName: MarkNeighbor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "MarkNeighbor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2, t});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::MarkNeighbor
// Il2CppName: MarkNeighbor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "MarkNeighbor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::OppositePoint
// Il2CppName: OppositePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::OppositePoint)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "DelaunayTriangle")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "OppositePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::NeighborCWFrom
// Il2CppName: NeighborCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::DelaunayTriangle* (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::NeighborCWFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "NeighborCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::NeighborCCWFrom
// Il2CppName: NeighborCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::DelaunayTriangle* (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::NeighborCCWFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "NeighborCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom
// Il2CppName: NeighborAcrossFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::DelaunayTriangle* (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "NeighborAcrossFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::PointCCWFrom
// Il2CppName: PointCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::PointCCWFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "PointCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::PointCWFrom
// Il2CppName: PointCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::PointCWFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "PointCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::RotateCW
// Il2CppName: RotateCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)()>(&Pathfinding::Poly2Tri::DelaunayTriangle::RotateCW)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "RotateCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::Legalize
// Il2CppName: Legalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::Legalize)> {
  static const MethodInfo* get() {
    static auto* oPoint = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* nPoint = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "Legalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oPoint, nPoint});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge
// Il2CppName: MarkConstrainedEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(int)>(&Pathfinding::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "MarkConstrainedEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge
// Il2CppName: MarkConstrainedEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "MarkConstrainedEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, q});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::EdgeIndex
// Il2CppName: EdgeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::EdgeIndex)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "EdgeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW
// Il2CppName: GetConstrainedEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "GetConstrainedEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW
// Il2CppName: GetConstrainedEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "GetConstrainedEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW
// Il2CppName: SetConstrainedEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, bool)>(&Pathfinding::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* ce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "SetConstrainedEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ce});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW
// Il2CppName: SetConstrainedEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, bool)>(&Pathfinding::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* ce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "SetConstrainedEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ce});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW
// Il2CppName: GetDelaunayEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "GetDelaunayEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW
// Il2CppName: GetDelaunayEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "GetDelaunayEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW
// Il2CppName: SetDelaunayEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, bool)>(&Pathfinding::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* ce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "SetDelaunayEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ce});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW
// Il2CppName: SetDelaunayEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, bool)>(&Pathfinding::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* ce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "SetDelaunayEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ce});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DelaunayTriangle::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Pathfinding::Poly2Tri::DelaunayTriangle::*)()>(&Pathfinding::Poly2Tri::DelaunayTriangle::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::DelaunayTriangle*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
