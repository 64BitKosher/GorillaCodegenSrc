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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NodeLink
  class NodeLink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::NodeLink);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NodeLink*, "Pathfinding", "NodeLink");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x4E
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.NodeLink
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class NodeLink : public ::Pathfinding::GraphModifier {
    public:
    public:
    // public UnityEngine.Transform end
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* end;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single costFactor
    // Size: 0x4
    // Offset: 0x48
    float costFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean oneWay
    // Size: 0x1
    // Offset: 0x4C
    bool oneWay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean deleteConnection
    // Size: 0x1
    // Offset: 0x4D
    bool deleteConnection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform end
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_end();
    // Get instance field reference: public System.Single costFactor
    [[deprecated("Use field access instead!")]] float& dyn_costFactor();
    // Get instance field reference: public System.Boolean oneWay
    [[deprecated("Use field access instead!")]] bool& dyn_oneWay();
    // Get instance field reference: public System.Boolean deleteConnection
    [[deprecated("Use field access instead!")]] bool& dyn_deleteConnection();
    // public UnityEngine.Transform get_Start()
    // Offset: 0x29AEF38
    ::UnityEngine::Transform* get_Start();
    // public UnityEngine.Transform get_End()
    // Offset: 0x29AEF40
    ::UnityEngine::Transform* get_End();
    // public System.Void InternalOnPostScan()
    // Offset: 0x29AF068
    void InternalOnPostScan();
    // public System.Void Apply()
    // Offset: 0x29AF1CC
    void Apply();
    // public System.Void OnDrawGizmos()
    // Offset: 0x29AF4D4
    void OnDrawGizmos();
    // private System.Boolean <OnPostScan>b__8_0(System.Boolean force)
    // Offset: 0x29AF69C
    bool $OnPostScan$b__8_0(bool force);
    // private System.Boolean <OnGraphsPostUpdate>b__10_0(System.Boolean force)
    // Offset: 0x29AF6BC
    bool $OnGraphsPostUpdate$b__10_0(bool force);
    // public override System.Void OnPostScan()
    // Offset: 0x29AEF48
    // Implemented from: Pathfinding.GraphModifier
    // Base method: System.Void GraphModifier::OnPostScan()
    void OnPostScan();
    // public override System.Void OnGraphsPostUpdate()
    // Offset: 0x29AF0CC
    // Implemented from: Pathfinding.GraphModifier
    // Base method: System.Void GraphModifier::OnGraphsPostUpdate()
    void OnGraphsPostUpdate();
    // public System.Void .ctor()
    // Offset: 0x29AF63C
    // Implemented from: Pathfinding.GraphModifier
    // Base method: System.Void GraphModifier::.ctor()
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NodeLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::NodeLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NodeLink*, creationType>()));
    }
  }; // Pathfinding.NodeLink
  #pragma pack(pop)
  static check_size<sizeof(NodeLink), 77 + sizeof(bool)> __Pathfinding_NodeLinkSizeCheck;
  static_assert(sizeof(NodeLink) == 0x4E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NodeLink::get_Start
// Il2CppName: get_Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Pathfinding::NodeLink::*)()>(&Pathfinding::NodeLink::get_Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "get_Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::get_End
// Il2CppName: get_End
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Pathfinding::NodeLink::*)()>(&Pathfinding::NodeLink::get_End)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "get_End", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::InternalOnPostScan
// Il2CppName: InternalOnPostScan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NodeLink::*)()>(&Pathfinding::NodeLink::InternalOnPostScan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "InternalOnPostScan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NodeLink::*)()>(&Pathfinding::NodeLink::Apply)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NodeLink::*)()>(&Pathfinding::NodeLink::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::$OnPostScan$b__8_0
// Il2CppName: <OnPostScan>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::NodeLink::*)(bool)>(&Pathfinding::NodeLink::$OnPostScan$b__8_0)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "<OnPostScan>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::$OnGraphsPostUpdate$b__10_0
// Il2CppName: <OnGraphsPostUpdate>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::NodeLink::*)(bool)>(&Pathfinding::NodeLink::$OnGraphsPostUpdate$b__10_0)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "<OnGraphsPostUpdate>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::OnPostScan
// Il2CppName: OnPostScan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NodeLink::*)()>(&Pathfinding::NodeLink::OnPostScan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "OnPostScan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::OnGraphsPostUpdate
// Il2CppName: OnGraphsPostUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NodeLink::*)()>(&Pathfinding::NodeLink::OnGraphsPostUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NodeLink*), "OnGraphsPostUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NodeLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!