// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Collider2D
#include "UnityEngine/Collider2D.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CompositeCollider2D
  class CompositeCollider2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CompositeCollider2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CompositeCollider2D*, "UnityEngine", "CompositeCollider2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CompositeCollider2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class CompositeCollider2D : public ::UnityEngine::Collider2D {
    public:
    // public System.Int32 get_pathCount()
    // Offset: 0x5527824
    int get_pathCount();
    // public System.Int32 get_pointCount()
    // Offset: 0x5527860
    int get_pointCount();
    // public System.Int32 GetPath(System.Int32 index, UnityEngine.Vector2[] points)
    // Offset: 0x552789C
    int GetPath(int index, ::ArrayW<::UnityEngine::Vector2> points);
    // private System.Int32 GetPathArray_Internal(System.Int32 index, UnityEngine.Vector2[] points)
    // Offset: 0x5527A20
    int GetPathArray_Internal(int index, ::ArrayW<::UnityEngine::Vector2> points);
  }; // UnityEngine.CompositeCollider2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CompositeCollider2D::get_pathCount
// Il2CppName: get_pathCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CompositeCollider2D::*)()>(&UnityEngine::CompositeCollider2D::get_pathCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CompositeCollider2D*), "get_pathCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CompositeCollider2D::get_pointCount
// Il2CppName: get_pointCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CompositeCollider2D::*)()>(&UnityEngine::CompositeCollider2D::get_pointCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CompositeCollider2D*), "get_pointCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CompositeCollider2D::GetPath
// Il2CppName: GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CompositeCollider2D::*)(int, ::ArrayW<::UnityEngine::Vector2>)>(&UnityEngine::CompositeCollider2D::GetPath)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CompositeCollider2D*), "GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, points});
  }
};
// Writing MetadataGetter for method: UnityEngine::CompositeCollider2D::GetPathArray_Internal
// Il2CppName: GetPathArray_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CompositeCollider2D::*)(int, ::ArrayW<::UnityEngine::Vector2>)>(&UnityEngine::CompositeCollider2D::GetPathArray_Internal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CompositeCollider2D*), "GetPathArray_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, points});
  }
};