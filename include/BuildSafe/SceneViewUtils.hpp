// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BuildSafe
namespace BuildSafe {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
}
// Completed forward declares
// Type namespace: BuildSafe
namespace BuildSafe {
  // Forward declaring type: SceneViewUtils
  class SceneViewUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BuildSafe::SceneViewUtils);
DEFINE_IL2CPP_ARG_TYPE(::BuildSafe::SceneViewUtils*, "BuildSafe", "SceneViewUtils");
// Type namespace: BuildSafe
namespace BuildSafe {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BuildSafe.SceneViewUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneViewUtils : public ::Il2CppObject {
    public:
    // Nested type: ::BuildSafe::SceneViewUtils::FuncRaycastWorld
    class FuncRaycastWorld;
    // Nested type: ::BuildSafe::SceneViewUtils::FuncPickClosestGameObject
    class FuncPickClosestGameObject;
    // Get static field: static public readonly BuildSafe.SceneViewUtils/FuncRaycastWorld RaycastWorld
    static ::BuildSafe::SceneViewUtils::FuncRaycastWorld* _get_RaycastWorld();
    // Set static field: static public readonly BuildSafe.SceneViewUtils/FuncRaycastWorld RaycastWorld
    static void _set_RaycastWorld(::BuildSafe::SceneViewUtils::FuncRaycastWorld* value);
    // static private System.Boolean RaycastWorldSafe(UnityEngine.Vector2 screenPos, out UnityEngine.RaycastHit hit)
    // Offset: 0x2816DA8
    static bool RaycastWorldSafe(::UnityEngine::Vector2 screenPos, ByRef<::UnityEngine::RaycastHit> hit);
    // static private System.Void .cctor()
    // Offset: 0x2816DBC
    static void _cctor();
  }; // BuildSafe.SceneViewUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BuildSafe::SceneViewUtils::RaycastWorldSafe
// Il2CppName: RaycastWorldSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector2, ByRef<::UnityEngine::RaycastHit>)>(&BuildSafe::SceneViewUtils::RaycastWorldSafe)> {
  static const MethodInfo* get() {
    static auto* screenPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneViewUtils*), "RaycastWorldSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenPos, hit});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneViewUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BuildSafe::SceneViewUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneViewUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
