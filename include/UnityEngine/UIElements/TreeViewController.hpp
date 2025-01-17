// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseTreeViewController
#include "UnityEngine/UIElements/BaseTreeViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TreeView
  class TreeView;
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TreeViewController
  class TreeViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::TreeViewController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeViewController*, "UnityEngine.UIElements", "TreeViewController");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.TreeViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class TreeViewController : public ::UnityEngine::UIElements::BaseTreeViewController {
    public:
    // protected UnityEngine.UIElements.TreeView get_treeView()
    // Offset: 0x55A0248
    ::UnityEngine::UIElements::TreeView* get_treeView();
    // protected override UnityEngine.UIElements.VisualElement MakeItem()
    // Offset: 0x55A02C4
    // Implemented from: UnityEngine.UIElements.CollectionViewController
    // Base method: UnityEngine.UIElements.VisualElement CollectionViewController::MakeItem()
    ::UnityEngine::UIElements::VisualElement* MakeItem();
    // protected override System.Void BindItem(UnityEngine.UIElements.VisualElement element, System.Int32 index)
    // Offset: 0x55A03B0
    // Implemented from: UnityEngine.UIElements.CollectionViewController
    // Base method: System.Void CollectionViewController::BindItem(UnityEngine.UIElements.VisualElement element, System.Int32 index)
    void BindItem(::UnityEngine::UIElements::VisualElement* element, int index);
    // protected override System.Void UnbindItem(UnityEngine.UIElements.VisualElement element, System.Int32 index)
    // Offset: 0x55A0534
    // Implemented from: UnityEngine.UIElements.CollectionViewController
    // Base method: System.Void CollectionViewController::UnbindItem(UnityEngine.UIElements.VisualElement element, System.Int32 index)
    void UnbindItem(::UnityEngine::UIElements::VisualElement* element, int index);
    // protected override System.Void DestroyItem(UnityEngine.UIElements.VisualElement element)
    // Offset: 0x55A0584
    // Implemented from: UnityEngine.UIElements.CollectionViewController
    // Base method: System.Void CollectionViewController::DestroyItem(UnityEngine.UIElements.VisualElement element)
    void DestroyItem(::UnityEngine::UIElements::VisualElement* element);
    // protected System.Void .ctor()
    // Offset: 0x55A05C0
    // Implemented from: UnityEngine.UIElements.BaseTreeViewController
    // Base method: System.Void BaseTreeViewController::.ctor()
    // Base method: System.Void CollectionViewController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TreeViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TreeViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TreeViewController*, creationType>()));
    }
  }; // UnityEngine.UIElements.TreeViewController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewController::get_treeView
// Il2CppName: get_treeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TreeView* (UnityEngine::UIElements::TreeViewController::*)()>(&UnityEngine::UIElements::TreeViewController::get_treeView)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewController*), "get_treeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewController::MakeItem
// Il2CppName: MakeItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::TreeViewController::*)()>(&UnityEngine::UIElements::TreeViewController::MakeItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewController*), "MakeItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewController::BindItem
// Il2CppName: BindItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewController::*)(::UnityEngine::UIElements::VisualElement*, int)>(&UnityEngine::UIElements::TreeViewController::BindItem)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewController*), "BindItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, index});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewController::UnbindItem
// Il2CppName: UnbindItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewController::*)(::UnityEngine::UIElements::VisualElement*, int)>(&UnityEngine::UIElements::TreeViewController::UnbindItem)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewController*), "UnbindItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, index});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewController::DestroyItem
// Il2CppName: DestroyItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewController::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::TreeViewController::DestroyItem)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewController*), "DestroyItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
