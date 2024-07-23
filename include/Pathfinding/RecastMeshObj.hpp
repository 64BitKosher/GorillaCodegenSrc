// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.VersionedMonoBehaviour
#include "Pathfinding/VersionedMonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: RecastBBTree
  class RecastBBTree;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: RecastMeshObj
  class RecastMeshObj;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RecastMeshObj);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RecastMeshObj*, "Pathfinding", "RecastMeshObj");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x46
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RecastMeshObj
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class RecastMeshObj : public ::Pathfinding::VersionedMonoBehaviour {
    public:
    public:
    // public UnityEngine.Bounds bounds
    // Size: 0x18
    // Offset: 0x24
    ::UnityEngine::Bounds bounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bounds) == 0x18);
    // public System.Boolean dynamic
    // Size: 0x1
    // Offset: 0x3C
    bool dynamic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dynamic and: area
    char __padding1[0x3] = {};
    // public System.Int32 area
    // Size: 0x4
    // Offset: 0x40
    int area;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _dynamic
    // Size: 0x1
    // Offset: 0x44
    bool dynamic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean registered
    // Size: 0x1
    // Offset: 0x45
    bool registered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static protected Pathfinding.RecastBBTree tree
    static ::Pathfinding::RecastBBTree* _get_tree();
    // Set static field: static protected Pathfinding.RecastBBTree tree
    static void _set_tree(::Pathfinding::RecastBBTree* value);
    // Get static field: static protected System.Collections.Generic.List`1<Pathfinding.RecastMeshObj> dynamicMeshObjs
    static ::System::Collections::Generic::List_1<::Pathfinding::RecastMeshObj*>* _get_dynamicMeshObjs();
    // Set static field: static protected System.Collections.Generic.List`1<Pathfinding.RecastMeshObj> dynamicMeshObjs
    static void _set_dynamicMeshObjs(::System::Collections::Generic::List_1<::Pathfinding::RecastMeshObj*>* value);
    // Get instance field reference: public UnityEngine.Bounds bounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Bounds& dyn_bounds();
    // Get instance field reference: public System.Boolean dynamic
    [[deprecated("Use field access instead!")]] bool& dyn_dynamic();
    // Get instance field reference: public System.Int32 area
    [[deprecated("Use field access instead!")]] int& dyn_area();
    // Get instance field reference: private System.Boolean _dynamic
    [[deprecated("Use field access instead!")]] bool& dyn__dynamic();
    // Get instance field reference: private System.Boolean registered
    [[deprecated("Use field access instead!")]] bool& dyn_registered();
    // static public System.Void GetAllInBounds(System.Collections.Generic.List`1<Pathfinding.RecastMeshObj> buffer, UnityEngine.Bounds bounds)
    // Offset: 0x29EDAC0
    static void GetAllInBounds(::System::Collections::Generic::List_1<::Pathfinding::RecastMeshObj*>* buffer, ::UnityEngine::Bounds bounds);
    // private System.Void OnEnable()
    // Offset: 0x29EE594
    void OnEnable();
    // private System.Void Register()
    // Offset: 0x29EE274
    void Register();
    // private System.Void RecalculateBounds()
    // Offset: 0x29EE050
    void RecalculateBounds();
    // public UnityEngine.Bounds GetBounds()
    // Offset: 0x29ED574
    ::UnityEngine::Bounds GetBounds();
    // public UnityEngine.MeshFilter GetMeshFilter()
    // Offset: 0x29EE5E0
    ::UnityEngine::MeshFilter* GetMeshFilter();
    // public UnityEngine.Collider GetCollider()
    // Offset: 0x29EE598
    ::UnityEngine::Collider* GetCollider();
    // private System.Void OnDisable()
    // Offset: 0x29EE628
    void OnDisable();
    // static private System.Void .cctor()
    // Offset: 0x29EE738
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x29EE720
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecastMeshObj* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RecastMeshObj::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecastMeshObj*, creationType>()));
    }
  }; // Pathfinding.RecastMeshObj
  #pragma pack(pop)
  static check_size<sizeof(RecastMeshObj), 69 + sizeof(bool)> __Pathfinding_RecastMeshObjSizeCheck;
  static_assert(sizeof(RecastMeshObj) == 0x46);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::GetAllInBounds
// Il2CppName: GetAllInBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::Pathfinding::RecastMeshObj*>*, ::UnityEngine::Bounds)>(&Pathfinding::RecastMeshObj::GetAllInBounds)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "RecastMeshObj")})->byval_arg;
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), "GetAllInBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bounds});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastMeshObj::*)()>(&Pathfinding::RecastMeshObj::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastMeshObj::*)()>(&Pathfinding::RecastMeshObj::Register)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::RecalculateBounds
// Il2CppName: RecalculateBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastMeshObj::*)()>(&Pathfinding::RecastMeshObj::RecalculateBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), "RecalculateBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::GetBounds
// Il2CppName: GetBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (Pathfinding::RecastMeshObj::*)()>(&Pathfinding::RecastMeshObj::GetBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), "GetBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::GetMeshFilter
// Il2CppName: GetMeshFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshFilter* (Pathfinding::RecastMeshObj::*)()>(&Pathfinding::RecastMeshObj::GetMeshFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), "GetMeshFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::GetCollider
// Il2CppName: GetCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Collider* (Pathfinding::RecastMeshObj::*)()>(&Pathfinding::RecastMeshObj::GetCollider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), "GetCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastMeshObj::*)()>(&Pathfinding::RecastMeshObj::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::RecastMeshObj::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastMeshObj*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastMeshObj::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!