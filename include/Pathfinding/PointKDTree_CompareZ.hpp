// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.PointKDTree
#include "Pathfinding/PointKDTree.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::PointKDTree::CompareZ);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::PointKDTree::CompareZ*, "Pathfinding", "PointKDTree/CompareZ");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.PointKDTree/CompareZ
  // [TokenAttribute] Offset: FFFFFFFF
  class PointKDTree::CompareZ : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>
    operator ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>(this);
    }
    // public System.Int32 Compare(Pathfinding.GraphNode lhs, Pathfinding.GraphNode rhs)
    // Offset: 0x29ED1E4
    int Compare(::Pathfinding::GraphNode* lhs, ::Pathfinding::GraphNode* rhs);
    // public System.Void .ctor()
    // Offset: 0x29ED18C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointKDTree::CompareZ* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::PointKDTree::CompareZ::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointKDTree::CompareZ*, creationType>()));
    }
  }; // Pathfinding.PointKDTree/CompareZ
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::PointKDTree::CompareZ::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::PointKDTree::CompareZ::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*)>(&Pathfinding::PointKDTree::CompareZ::Compare)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree::CompareZ*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::CompareZ::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
