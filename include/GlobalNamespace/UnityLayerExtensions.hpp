// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UnityLayer
  struct UnityLayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UnityLayerExtensions
  class UnityLayerExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UnityLayerExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityLayerExtensions*, "", "UnityLayerExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityLayerExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class UnityLayerExtensions : public ::Il2CppObject {
    public:
    // static public System.Int32 ToLayerMask(UnityLayer self)
    // Offset: 0x2898B70
    static int ToLayerMask(::GlobalNamespace::UnityLayer self);
    // static public System.Int32 ToLayerIndex(UnityLayer self)
    // Offset: 0x2898B7C
    static int ToLayerIndex(::GlobalNamespace::UnityLayer self);
    // static public System.Boolean IsOnLayer(UnityEngine.GameObject obj, UnityLayer layer)
    // Offset: 0x2898B80
    static bool IsOnLayer(::UnityEngine::GameObject* obj, ::GlobalNamespace::UnityLayer layer);
    // static public System.Void SetLayer(UnityEngine.GameObject obj, UnityLayer layer)
    // Offset: 0x2898BA8
    static void SetLayer(::UnityEngine::GameObject* obj, ::GlobalNamespace::UnityLayer layer);
  }; // UnityLayerExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnityLayerExtensions::ToLayerMask
// Il2CppName: ToLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GlobalNamespace::UnityLayer)>(&GlobalNamespace::UnityLayerExtensions::ToLayerMask)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("", "UnityLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnityLayerExtensions*), "ToLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnityLayerExtensions::ToLayerIndex
// Il2CppName: ToLayerIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GlobalNamespace::UnityLayer)>(&GlobalNamespace::UnityLayerExtensions::ToLayerIndex)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("", "UnityLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnityLayerExtensions*), "ToLayerIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnityLayerExtensions::IsOnLayer
// Il2CppName: IsOnLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*, ::GlobalNamespace::UnityLayer)>(&GlobalNamespace::UnityLayerExtensions::IsOnLayer)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("", "UnityLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnityLayerExtensions*), "IsOnLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, layer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnityLayerExtensions::SetLayer
// Il2CppName: SetLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::GlobalNamespace::UnityLayer)>(&GlobalNamespace::UnityLayerExtensions::SetLayer)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("", "UnityLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnityLayerExtensions*), "SetLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, layer});
  }
};
