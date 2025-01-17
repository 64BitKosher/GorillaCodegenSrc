// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.IntPoint
#include "UnityEngine/Rendering/Universal/IntPoint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: TEdge
  class TEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: IntersectNode
  class IntersectNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IntersectNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IntersectNode*, "UnityEngine.Rendering.Universal", "IntersectNode");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.IntersectNode
  // [TokenAttribute] Offset: FFFFFFFF
  class IntersectNode : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Rendering.Universal.TEdge Edge1
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::TEdge* Edge1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    // UnityEngine.Rendering.Universal.TEdge Edge2
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::Universal::TEdge* Edge2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    // UnityEngine.Rendering.Universal.IntPoint Pt
    // Size: 0x30
    // Offset: 0x20
    ::UnityEngine::Rendering::Universal::IntPoint Pt;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::IntPoint) == 0x30);
    public:
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge Edge1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_Edge1();
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge Edge2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_Edge2();
    // Get instance field reference: UnityEngine.Rendering.Universal.IntPoint Pt
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::IntPoint& dyn_Pt();
    // public System.Void .ctor()
    // Offset: 0x526CDD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntersectNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::IntersectNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntersectNode*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.IntersectNode
  #pragma pack(pop)
  static check_size<sizeof(IntersectNode), 32 + sizeof(::UnityEngine::Rendering::Universal::IntPoint)> __UnityEngine_Rendering_Universal_IntersectNodeSizeCheck;
  static_assert(sizeof(IntersectNode) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::IntersectNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
