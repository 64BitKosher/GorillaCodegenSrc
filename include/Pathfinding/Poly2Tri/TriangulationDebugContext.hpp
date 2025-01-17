// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
}
// Completed forward declares
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: TriangulationDebugContext
  class TriangulationDebugContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Poly2Tri::TriangulationDebugContext);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Poly2Tri::TriangulationDebugContext*, "Pathfinding.Poly2Tri", "TriangulationDebugContext");
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Poly2Tri.TriangulationDebugContext
  // [TokenAttribute] Offset: FFFFFFFF
  class TriangulationDebugContext : public ::Il2CppObject {
    public:
    public:
    // protected Pathfinding.Poly2Tri.TriangulationContext _tcx
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::Poly2Tri::TriangulationContext* tcx;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::TriangulationContext*) == 0x8);
    public:
    // Creating conversion operator: operator ::Pathfinding::Poly2Tri::TriangulationContext*
    constexpr operator ::Pathfinding::Poly2Tri::TriangulationContext*() const noexcept {
      return tcx;
    }
    // Get instance field reference: protected Pathfinding.Poly2Tri.TriangulationContext _tcx
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::TriangulationContext*& dyn__tcx();
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear();
  }; // Pathfinding.Poly2Tri.TriangulationDebugContext
  #pragma pack(pop)
  static check_size<sizeof(TriangulationDebugContext), 16 + sizeof(::Pathfinding::Poly2Tri::TriangulationContext*)> __Pathfinding_Poly2Tri_TriangulationDebugContextSizeCheck;
  static_assert(sizeof(TriangulationDebugContext) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationDebugContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::TriangulationDebugContext::*)()>(&Pathfinding::Poly2Tri::TriangulationDebugContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationDebugContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
