// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Light
  class Light;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ComponentUtility
  class ComponentUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ComponentUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ComponentUtility*, "UnityEngine.Rendering.Universal", "ComponentUtility");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ComponentUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class ComponentUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean IsUniversalCamera(UnityEngine.Camera camera)
    // Offset: 0x5291BCC
    static bool IsUniversalCamera(::UnityEngine::Camera* camera);
    // static public System.Boolean IsUniversalLight(UnityEngine.Light light)
    // Offset: 0x5291C58
    static bool IsUniversalLight(::UnityEngine::Light* light);
  }; // UnityEngine.Rendering.Universal.ComponentUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalCamera
// Il2CppName: IsUniversalCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*)>(&UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalCamera)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ComponentUtility*), "IsUniversalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalLight
// Il2CppName: IsUniversalLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Light*)>(&UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalLight)> {
  static const MethodInfo* get() {
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine", "Light")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ComponentUtility*), "IsUniversalLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{light});
  }
};
