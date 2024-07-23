// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.Experimental.StyleValues
#include "UnityEngine/UIElements/Experimental/StyleValues.hpp"
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
  // Forward declaring type: EventCallback`1<TEventType>
  template<typename TEventType>
  class EventCallback_1;
  // Forward declaring type: GeometryChangedEvent
  class GeometryChangedEvent;
}
// Forward declaring namespace: UnityEngine::UIElements::Experimental
namespace UnityEngine::UIElements::Experimental {
  // Forward declaring type: ValueAnimation`1<T>
  template<typename T>
  class ValueAnimation_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ReusableCollectionItem
  class ReusableCollectionItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ReusableCollectionItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableCollectionItem*, "UnityEngine.UIElements", "ReusableCollectionItem");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ReusableCollectionItem
  // [TokenAttribute] Offset: FFFFFFFF
  class ReusableCollectionItem : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.UIElements.VisualElement <bindableElement>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::VisualElement* bindableElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues> <animator>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*) == 0x8);
    // private System.Int32 <index>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <id>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <isDragGhost>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool isDragGhost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDragGhost and: onGeometryChanged
    char __padding4[0x7] = {};
    // private System.Action`1<UnityEngine.UIElements.ReusableCollectionItem> onGeometryChanged
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* onGeometryChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*) == 0x8);
    // protected UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.GeometryChangedEvent> m_GeometryChangedEventCallback
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* m_GeometryChangedEventCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UIElements.VisualElement <bindableElement>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_$bindableElement$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues> <animator>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*& dyn_$animator$k__BackingField();
    // Get instance field reference: private System.Int32 <index>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$index$k__BackingField();
    // Get instance field reference: private System.Int32 <id>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$id$k__BackingField();
    // Get instance field reference: private System.Boolean <isDragGhost>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isDragGhost$k__BackingField();
    // Get instance field reference: private System.Action`1<UnityEngine.UIElements.ReusableCollectionItem> onGeometryChanged
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& dyn_onGeometryChanged();
    // Get instance field reference: protected UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.GeometryChangedEvent> m_GeometryChangedEventCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*& dyn_m_GeometryChangedEventCallback();
    // public UnityEngine.UIElements.VisualElement get_rootElement()
    // Offset: 0x55A0644
    ::UnityEngine::UIElements::VisualElement* get_rootElement();
    // public UnityEngine.UIElements.VisualElement get_bindableElement()
    // Offset: 0x55A064C
    ::UnityEngine::UIElements::VisualElement* get_bindableElement();
    // protected System.Void set_bindableElement(UnityEngine.UIElements.VisualElement value)
    // Offset: 0x55A0654
    void set_bindableElement(::UnityEngine::UIElements::VisualElement* value);
    // public UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues> get_animator()
    // Offset: 0x55A065C
    ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* get_animator();
    // public System.Void set_animator(UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues> value)
    // Offset: 0x55A0664
    void set_animator(::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* value);
    // public System.Int32 get_index()
    // Offset: 0x55A066C
    int get_index();
    // public System.Void set_index(System.Int32 value)
    // Offset: 0x55A0674
    void set_index(int value);
    // public System.Int32 get_id()
    // Offset: 0x55A067C
    int get_id();
    // public System.Void set_id(System.Int32 value)
    // Offset: 0x55A0684
    void set_id(int value);
    // System.Boolean get_isDragGhost()
    // Offset: 0x55A068C
    bool get_isDragGhost();
    // private System.Void set_isDragGhost(System.Boolean value)
    // Offset: 0x55A0694
    void set_isDragGhost(bool value);
    // public System.Void add_onGeometryChanged(System.Action`1<UnityEngine.UIElements.ReusableCollectionItem> value)
    // Offset: 0x55A06A0
    void add_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);
    // public System.Void remove_onGeometryChanged(System.Action`1<UnityEngine.UIElements.ReusableCollectionItem> value)
    // Offset: 0x55A0750
    void remove_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);
    // public System.Void .ctor()
    // Offset: 0x55A0800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReusableCollectionItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ReusableCollectionItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReusableCollectionItem*, creationType>()));
    }
    // public System.Void Init(UnityEngine.UIElements.VisualElement item)
    // Offset: 0x55A0898
    void Init(::UnityEngine::UIElements::VisualElement* item);
    // public System.Void PreAttachElement()
    // Offset: 0x55A08A0
    void PreAttachElement();
    // public System.Void DetachElement()
    // Offset: 0x55A095C
    void DetachElement();
    // public System.Void SetSelected(System.Boolean selected)
    // Offset: 0x55A0A68
    void SetSelected(bool selected);
    // public System.Void SetDragGhost(System.Boolean dragGhost)
    // Offset: 0x55A0B58
    void SetDragGhost(bool dragGhost);
    // protected System.Void OnGeometryChanged(UnityEngine.UIElements.GeometryChangedEvent evt)
    // Offset: 0x55A0CF8
    void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);
  }; // UnityEngine.UIElements.ReusableCollectionItem
  #pragma pack(pop)
  static check_size<sizeof(ReusableCollectionItem), 56 + sizeof(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*)> __UnityEngine_UIElements_ReusableCollectionItemSizeCheck;
  static_assert(sizeof(ReusableCollectionItem) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::get_rootElement
// Il2CppName: get_rootElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::ReusableCollectionItem::*)()>(&UnityEngine::UIElements::ReusableCollectionItem::get_rootElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "get_rootElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::get_bindableElement
// Il2CppName: get_bindableElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::ReusableCollectionItem::*)()>(&UnityEngine::UIElements::ReusableCollectionItem::get_bindableElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "get_bindableElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::set_bindableElement
// Il2CppName: set_bindableElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::ReusableCollectionItem::set_bindableElement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "set_bindableElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::get_animator
// Il2CppName: get_animator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* (UnityEngine::UIElements::ReusableCollectionItem::*)()>(&UnityEngine::UIElements::ReusableCollectionItem::get_animator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "get_animator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::set_animator
// Il2CppName: set_animator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*)>(&UnityEngine::UIElements::ReusableCollectionItem::set_animator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Experimental", "ValueAnimation`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Experimental", "StyleValues")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "set_animator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::get_index
// Il2CppName: get_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::ReusableCollectionItem::*)()>(&UnityEngine::UIElements::ReusableCollectionItem::get_index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "get_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::set_index
// Il2CppName: set_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(int)>(&UnityEngine::UIElements::ReusableCollectionItem::set_index)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "set_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::ReusableCollectionItem::*)()>(&UnityEngine::UIElements::ReusableCollectionItem::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(int)>(&UnityEngine::UIElements::ReusableCollectionItem::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::get_isDragGhost
// Il2CppName: get_isDragGhost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ReusableCollectionItem::*)()>(&UnityEngine::UIElements::ReusableCollectionItem::get_isDragGhost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "get_isDragGhost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::set_isDragGhost
// Il2CppName: set_isDragGhost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(bool)>(&UnityEngine::UIElements::ReusableCollectionItem::set_isDragGhost)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "set_isDragGhost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::add_onGeometryChanged
// Il2CppName: add_onGeometryChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*)>(&UnityEngine::UIElements::ReusableCollectionItem::add_onGeometryChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ReusableCollectionItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "add_onGeometryChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::remove_onGeometryChanged
// Il2CppName: remove_onGeometryChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*)>(&UnityEngine::UIElements::ReusableCollectionItem::remove_onGeometryChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ReusableCollectionItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "remove_onGeometryChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::ReusableCollectionItem::Init)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::PreAttachElement
// Il2CppName: PreAttachElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)()>(&UnityEngine::UIElements::ReusableCollectionItem::PreAttachElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "PreAttachElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::DetachElement
// Il2CppName: DetachElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)()>(&UnityEngine::UIElements::ReusableCollectionItem::DetachElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "DetachElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::SetSelected
// Il2CppName: SetSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(bool)>(&UnityEngine::UIElements::ReusableCollectionItem::SetSelected)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "SetSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::SetDragGhost
// Il2CppName: SetDragGhost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(bool)>(&UnityEngine::UIElements::ReusableCollectionItem::SetDragGhost)> {
  static const MethodInfo* get() {
    static auto* dragGhost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "SetDragGhost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dragGhost});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ReusableCollectionItem::OnGeometryChanged
// Il2CppName: OnGeometryChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ReusableCollectionItem::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&UnityEngine::UIElements::ReusableCollectionItem::OnGeometryChanged)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "GeometryChangedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ReusableCollectionItem*), "OnGeometryChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
