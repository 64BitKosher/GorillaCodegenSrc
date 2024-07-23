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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: ITransformProvider
  class ITransformProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::ITransformProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::ITransformProvider*, "UnityEngine.Animations.Rigging", "ITransformProvider");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.ITransformProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ITransformProvider {
    public:
    // public UnityEngine.Transform get_transform()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_transform();
    // public System.Void set_transform(UnityEngine.Transform value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_transform(::UnityEngine::Transform* value);
  }; // UnityEngine.Animations.Rigging.ITransformProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITransformProvider::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::ITransformProvider::*)()>(&UnityEngine::Animations::Rigging::ITransformProvider::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITransformProvider*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITransformProvider::set_transform
// Il2CppName: set_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::ITransformProvider::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::ITransformProvider::set_transform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITransformProvider*), "set_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
