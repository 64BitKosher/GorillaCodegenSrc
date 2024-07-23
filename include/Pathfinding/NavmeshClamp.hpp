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
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NavmeshClamp
  class NavmeshClamp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::NavmeshClamp);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NavmeshClamp*, "Pathfinding", "NavmeshClamp");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.NavmeshClamp
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class NavmeshClamp : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Pathfinding.GraphNode prevNode
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::GraphNode* prevNode;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    // private UnityEngine.Vector3 prevPos
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 prevPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private Pathfinding.GraphNode prevNode
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_prevNode();
    // Get instance field reference: private UnityEngine.Vector3 prevPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_prevPos();
    // private System.Void LateUpdate()
    // Offset: 0x29BBFEC
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x29BC448
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavmeshClamp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::NavmeshClamp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavmeshClamp*, creationType>()));
    }
  }; // Pathfinding.NavmeshClamp
  #pragma pack(pop)
  static check_size<sizeof(NavmeshClamp), 40 + sizeof(::UnityEngine::Vector3)> __Pathfinding_NavmeshClampSizeCheck;
  static_assert(sizeof(NavmeshClamp) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NavmeshClamp::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavmeshClamp::*)()>(&Pathfinding::NavmeshClamp::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavmeshClamp*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavmeshClamp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
