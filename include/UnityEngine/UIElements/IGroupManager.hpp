// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IGroupBox
  class IGroupBox;
  // Forward declaring type: IGroupBoxOption
  class IGroupBoxOption;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IGroupManager
  class IGroupManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IGroupManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupManager*, "UnityEngine.UIElements", "IGroupManager");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IGroupManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IGroupManager {
    public:
    // public System.Void Init(UnityEngine.UIElements.IGroupBox groupBox)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Init(::UnityEngine::UIElements::IGroupBox* groupBox);
    // public System.Void OnOptionSelectionChanged(UnityEngine.UIElements.IGroupBoxOption selectedOption)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption* selectedOption);
    // public System.Void RegisterOption(UnityEngine.UIElements.IGroupBoxOption option)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption* option);
    // public System.Void UnregisterOption(UnityEngine.UIElements.IGroupBoxOption option)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption* option);
  }; // UnityEngine.UIElements.IGroupManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IGroupManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IGroupManager::*)(::UnityEngine::UIElements::IGroupBox*)>(&UnityEngine::UIElements::IGroupManager::Init)> {
  static const MethodInfo* get() {
    static auto* groupBox = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBox")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IGroupManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupBox});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IGroupManager::OnOptionSelectionChanged
// Il2CppName: OnOptionSelectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&UnityEngine::UIElements::IGroupManager::OnOptionSelectionChanged)> {
  static const MethodInfo* get() {
    static auto* selectedOption = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBoxOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IGroupManager*), "OnOptionSelectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedOption});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IGroupManager::RegisterOption
// Il2CppName: RegisterOption
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&UnityEngine::UIElements::IGroupManager::RegisterOption)> {
  static const MethodInfo* get() {
    static auto* option = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBoxOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IGroupManager*), "RegisterOption", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{option});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IGroupManager::UnregisterOption
// Il2CppName: UnregisterOption
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&UnityEngine::UIElements::IGroupManager::UnregisterOption)> {
  static const MethodInfo* get() {
    static auto* option = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBoxOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IGroupManager*), "UnregisterOption", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{option});
  }
};
