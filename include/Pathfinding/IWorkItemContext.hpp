// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NavGraph
  class NavGraph;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IWorkItemContext
  class IWorkItemContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::IWorkItemContext);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::IWorkItemContext*, "Pathfinding", "IWorkItemContext");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.IWorkItemContext
  // [TokenAttribute] Offset: FFFFFFFF
  class IWorkItemContext {
    public:
    // public System.Void QueueFloodFill()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void QueueFloodFill();
    // public System.Void EnsureValidFloodFill()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EnsureValidFloodFill();
    // public System.Void SetGraphDirty(Pathfinding.NavGraph graph)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetGraphDirty(::Pathfinding::NavGraph* graph);
  }; // Pathfinding.IWorkItemContext
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::IWorkItemContext::QueueFloodFill
// Il2CppName: QueueFloodFill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::IWorkItemContext::*)()>(&Pathfinding::IWorkItemContext::QueueFloodFill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IWorkItemContext*), "QueueFloodFill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IWorkItemContext::EnsureValidFloodFill
// Il2CppName: EnsureValidFloodFill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::IWorkItemContext::*)()>(&Pathfinding::IWorkItemContext::EnsureValidFloodFill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IWorkItemContext*), "EnsureValidFloodFill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IWorkItemContext::SetGraphDirty
// Il2CppName: SetGraphDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::IWorkItemContext::*)(::Pathfinding::NavGraph*)>(&Pathfinding::IWorkItemContext::SetGraphDirty)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "NavGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IWorkItemContext*), "SetGraphDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph});
  }
};