// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IGroupBoxOption
  class IGroupBoxOption;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IGroupBoxOption);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupBoxOption*, "UnityEngine.UIElements", "IGroupBoxOption");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IGroupBoxOption
  // [TokenAttribute] Offset: FFFFFFFF
  class IGroupBoxOption {
    public:
    // public System.Void SetSelected(System.Boolean selected)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetSelected(bool selected);
  }; // UnityEngine.UIElements.IGroupBoxOption
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IGroupBoxOption::SetSelected
// Il2CppName: SetSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IGroupBoxOption::*)(bool)>(&UnityEngine::UIElements::IGroupBoxOption::SetSelected)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IGroupBoxOption*), "SetSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
