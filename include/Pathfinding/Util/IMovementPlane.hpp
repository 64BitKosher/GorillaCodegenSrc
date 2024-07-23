// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Forward declaring type: IMovementPlane
  class IMovementPlane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Util::IMovementPlane);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Util::IMovementPlane*, "Pathfinding.Util", "IMovementPlane");
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Util.IMovementPlane
  // [TokenAttribute] Offset: FFFFFFFF
  class IMovementPlane {
    public:
    // public UnityEngine.Vector2 ToPlane(UnityEngine.Vector3 p)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector2 ToPlane(::UnityEngine::Vector3 p);
    // public UnityEngine.Vector2 ToPlane(UnityEngine.Vector3 p, out System.Single elevation)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector2 ToPlane(::UnityEngine::Vector3 p, ByRef<float> elevation);
    // public UnityEngine.Vector3 ToWorld(UnityEngine.Vector2 p, System.Single elevation)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 ToWorld(::UnityEngine::Vector2 p, float elevation);
  }; // Pathfinding.Util.IMovementPlane
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Util::IMovementPlane::ToPlane
// Il2CppName: ToPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Pathfinding::Util::IMovementPlane::*)(::UnityEngine::Vector3)>(&Pathfinding::Util::IMovementPlane::ToPlane)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::IMovementPlane*), "ToPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::IMovementPlane::ToPlane
// Il2CppName: ToPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Pathfinding::Util::IMovementPlane::*)(::UnityEngine::Vector3, ByRef<float>)>(&Pathfinding::Util::IMovementPlane::ToPlane)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* elevation = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::IMovementPlane*), "ToPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, elevation});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::IMovementPlane::ToWorld
// Il2CppName: ToWorld
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::Util::IMovementPlane::*)(::UnityEngine::Vector2, float)>(&Pathfinding::Util::IMovementPlane::ToWorld)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elevation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::IMovementPlane*), "ToWorld", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, elevation});
  }
};