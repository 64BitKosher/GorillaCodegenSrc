// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IReorderable
  class IReorderable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IReorderable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IReorderable*, "UnityEngine.UIElements", "IReorderable");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IReorderable
  // [TokenAttribute] Offset: FFFFFFFF
  class IReorderable {
    public:
    // public System.Boolean get_enableReordering()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_enableReordering();
    // public System.Void set_enableReordering(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_enableReordering(bool value);
  }; // UnityEngine.UIElements.IReorderable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IReorderable::get_enableReordering
// Il2CppName: get_enableReordering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IReorderable::*)()>(&UnityEngine::UIElements::IReorderable::get_enableReordering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IReorderable*), "get_enableReordering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IReorderable::set_enableReordering
// Il2CppName: set_enableReordering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IReorderable::*)(bool)>(&UnityEngine::UIElements::IReorderable::set_enableReordering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IReorderable*), "set_enableReordering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
