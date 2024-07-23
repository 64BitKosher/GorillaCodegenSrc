// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.ReusableCollectionItem
#include "UnityEngine/UIElements/ReusableCollectionItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ReusableListViewItem
  class ReusableListViewItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ReusableListViewItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableListViewItem*, "UnityEngine.UIElements", "ReusableListViewItem");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ReusableListViewItem
  // [TokenAttribute] Offset: FFFFFFFF
  class ReusableListViewItem : public ::UnityEngine::UIElements::ReusableCollectionItem {
    public:
    public:
    // private UnityEngine.UIElements.VisualElement m_Container
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UIElements::VisualElement* m_Container;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualElement m_DragHandle
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::UIElements::VisualElement* m_DragHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualElement m_ItemContainer
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UIElements::VisualElement* m_ItemContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_Container
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_Container();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_DragHandle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_DragHandle();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_ItemContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_ItemContainer();
    // public System.Void Init(UnityEngine.UIElements.VisualElement item, System.Boolean usesAnimatedDragger)
    // Offset: 0x55989CC
    void Init(::UnityEngine::UIElements::VisualElement* item, bool usesAnimatedDragger);
    // protected System.Void UpdateHierarchy(UnityEngine.UIElements.VisualElement root, UnityEngine.UIElements.VisualElement item, System.Boolean usesAnimatedDragger)
    // Offset: 0x55A0D30
    void UpdateHierarchy(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::VisualElement* item, bool usesAnimatedDragger);
    // public System.Void UpdateDragHandle(System.Boolean needsDragHandle)
    // Offset: 0x5598FD0
    void UpdateDragHandle(bool needsDragHandle);
    // public override UnityEngine.UIElements.VisualElement get_rootElement()
    // Offset: 0x55A0D18
    // Implemented from: UnityEngine.UIElements.ReusableCollectionItem
    // Base method: UnityEngine.UIElements.VisualElement ReusableCollectionItem::get_rootElement()
    ::UnityEngine::UIElements::VisualElement* get_rootElement();
    // public override System.Void PreAttachElement()
    // Offset: 0x55A0FE0
    // Implemented from: UnityEngine.UIElements.ReusableCollectionItem
    // Base method: System.Void ReusableCollectionItem::PreAttachElement()
    void PreAttachElement();
    // public override System.Void DetachElement()
    // Offset: 0x55A106C
    // Implemented from: UnityEngine.UIElements.ReusableCollectionItem
    // Base method: System.Void ReusableCollectionItem::DetachElement()
    void DetachElement();
    // public override System.Void SetDragGhost(System.Boolean dragGhost)
    // Offset: 0x55A10F8
    // Implemented from: UnityEngine.UIElements.ReusableCollectionItem
    // Base method: System.Void ReusableCollectionItem::SetDragGhost(System.Boolean dragGhost)
    void SetDragGhost(bool dragGhost);
    // public System.Void .ctor()
    // Offset: 0x55A11F4
    // Implemented from: UnityEngine.UIElements.ReusableCollectionItem
    // Base method: System.Void ReusableCollectionItem::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReusableListViewItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ReusableListViewItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReusableListViewItem*, creationType>()));
    }
  }; // UnityEngine.UIElements.ReusableListViewItem
  #pragma pack(pop)
  static check_size<sizeof(ReusableListViewItem), 80 + sizeof(::UnityEngine::UIElements::VisualElement*)> __UnityEngine_UIElements_ReusableListViewItemSizeCheck;
  static_assert(sizeof(ReusableListViewItem) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableListViewItem::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableListViewItem::*)(::UnityEngine::UIElements::VisualElement*, bool)>(&UnityEngine::UIElements::ReusableListViewItem::Init)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* usesAnimatedDragger = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableListViewItem*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item, usesAnimatedDragger});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableListViewItem::UpdateHierarchy
// Il2CppName: UpdateHierarchy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableListViewItem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, bool)>(&UnityEngine::UIElements::ReusableListViewItem::UpdateHierarchy)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* usesAnimatedDragger = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableListViewItem*), "UpdateHierarchy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root, item, usesAnimatedDragger});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableListViewItem::UpdateDragHandle
// Il2CppName: UpdateDragHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableListViewItem::*)(bool)>(&UnityEngine::UIElements::ReusableListViewItem::UpdateDragHandle)> {
  static const MethodInfo* get() {
    static auto* needsDragHandle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableListViewItem*), "UpdateDragHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{needsDragHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableListViewItem::get_rootElement
// Il2CppName: get_rootElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::ReusableListViewItem::*)()>(&UnityEngine::UIElements::ReusableListViewItem::get_rootElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableListViewItem*), "get_rootElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableListViewItem::PreAttachElement
// Il2CppName: PreAttachElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableListViewItem::*)()>(&UnityEngine::UIElements::ReusableListViewItem::PreAttachElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableListViewItem*), "PreAttachElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableListViewItem::DetachElement
// Il2CppName: DetachElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableListViewItem::*)()>(&UnityEngine::UIElements::ReusableListViewItem::DetachElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableListViewItem*), "DetachElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableListViewItem::SetDragGhost
// Il2CppName: SetDragGhost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableListViewItem::*)(bool)>(&UnityEngine::UIElements::ReusableListViewItem::SetDragGhost)> {
  static const MethodInfo* get() {
    static auto* dragGhost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableListViewItem*), "SetDragGhost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dragGhost});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableListViewItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
