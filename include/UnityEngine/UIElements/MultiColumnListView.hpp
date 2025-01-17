// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseListView
#include "UnityEngine/UIElements/BaseListView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Columns
  class Columns;
  // Forward declaring type: SortColumnDescriptions
  class SortColumnDescriptions;
  // Forward declaring type: SortColumnDescription
  class SortColumnDescription;
  // Forward declaring type: ContextualMenuPopulateEvent
  class ContextualMenuPopulateEvent;
  // Forward declaring type: Column
  class Column;
  // Forward declaring type: MultiColumnListViewController
  class MultiColumnListViewController;
  // Forward declaring type: CollectionViewController
  class CollectionViewController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: MultiColumnListView
  class MultiColumnListView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::MultiColumnListView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MultiColumnListView*, "UnityEngine.UIElements", "MultiColumnListView");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.MultiColumnListView
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiColumnListView : public ::UnityEngine::UIElements::BaseListView {
    public:
    // Nested type: ::UnityEngine::UIElements::MultiColumnListView::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::MultiColumnListView::UxmlTraits
    class UxmlTraits;
    public:
    // private UnityEngine.UIElements.Columns m_Columns
    // Size: 0x8
    // Offset: 0x528
    ::UnityEngine::UIElements::Columns* m_Columns;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Columns*) == 0x8);
    // private System.Boolean m_SortingEnabled
    // Size: 0x1
    // Offset: 0x530
    bool m_SortingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.UIElements.SortColumnDescriptions m_SortColumnDescriptions
    // Size: 0x8
    // Offset: 0x538
    ::UnityEngine::UIElements::SortColumnDescriptions* m_SortColumnDescriptions;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::SortColumnDescriptions*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.SortColumnDescription> m_SortedColumns
    // Size: 0x8
    // Offset: 0x540
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortedColumns;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*) == 0x8);
    // private System.Action columnSortingChanged
    // Size: 0x8
    // Offset: 0x548
    ::System::Action* columnSortingChanged;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`2<UnityEngine.UIElements.ContextualMenuPopulateEvent,UnityEngine.UIElements.Column> headerContextMenuPopulateEvent
    // Size: 0x8
    // Offset: 0x550
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* headerContextMenuPopulateEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UIElements.Columns m_Columns
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Columns*& dyn_m_Columns();
    // Get instance field reference: private System.Boolean m_SortingEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_m_SortingEnabled();
    // Get instance field reference: private UnityEngine.UIElements.SortColumnDescriptions m_SortColumnDescriptions
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::SortColumnDescriptions*& dyn_m_SortColumnDescriptions();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.SortColumnDescription> m_SortedColumns
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& dyn_m_SortedColumns();
    // Get instance field reference: private System.Action columnSortingChanged
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_columnSortingChanged();
    // Get instance field reference: private System.Action`2<UnityEngine.UIElements.ContextualMenuPopulateEvent,UnityEngine.UIElements.Column> headerContextMenuPopulateEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*& dyn_headerContextMenuPopulateEvent();
    // public UnityEngine.UIElements.MultiColumnListViewController get_viewController()
    // Offset: 0x5621DA0
    ::UnityEngine::UIElements::MultiColumnListViewController* get_viewController();
    // public UnityEngine.UIElements.Columns get_columns()
    // Offset: 0x5621E24
    ::UnityEngine::UIElements::Columns* get_columns();
    // private System.Void set_columns(UnityEngine.UIElements.Columns value)
    // Offset: 0x5621E2C
    void set_columns(::UnityEngine::UIElements::Columns* value);
    // public UnityEngine.UIElements.SortColumnDescriptions get_sortColumnDescriptions()
    // Offset: 0x5621E98
    ::UnityEngine::UIElements::SortColumnDescriptions* get_sortColumnDescriptions();
    // private System.Void set_sortColumnDescriptions(UnityEngine.UIElements.SortColumnDescriptions value)
    // Offset: 0x5621EA0
    void set_sortColumnDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value);
    // public System.Void set_sortingEnabled(System.Boolean value)
    // Offset: 0x562200C
    void set_sortingEnabled(bool value);
    // public System.Void .ctor(UnityEngine.UIElements.Columns columns)
    // Offset: 0x56220C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiColumnListView* New_ctor(::UnityEngine::UIElements::Columns* columns) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::MultiColumnListView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiColumnListView*, creationType>(columns)));
    }
    // private System.Void RaiseColumnSortingChanged()
    // Offset: 0x5622518
    void RaiseColumnSortingChanged();
    // private System.Void RaiseHeaderContextMenuPopulate(UnityEngine.UIElements.ContextualMenuPopulateEvent evt, UnityEngine.UIElements.Column column)
    // Offset: 0x5622534
    void RaiseHeaderContextMenuPopulate(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt, ::UnityEngine::UIElements::Column* column);
    // public System.Void .ctor()
    // Offset: 0x562206C
    // Implemented from: UnityEngine.UIElements.BaseListView
    // Base method: System.Void BaseListView::.ctor()
    // Base method: System.Void BaseVerticalCollectionView::.ctor()
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiColumnListView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::MultiColumnListView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiColumnListView*, creationType>()));
    }
    // protected override UnityEngine.UIElements.CollectionViewController CreateViewController()
    // Offset: 0x562226C
    // Implemented from: UnityEngine.UIElements.BaseVerticalCollectionView
    // Base method: UnityEngine.UIElements.CollectionViewController BaseVerticalCollectionView::CreateViewController()
    ::UnityEngine::UIElements::CollectionViewController* CreateViewController();
    // public override System.Void SetViewController(UnityEngine.UIElements.CollectionViewController controller)
    // Offset: 0x56222E4
    // Implemented from: UnityEngine.UIElements.BaseListView
    // Base method: System.Void BaseListView::SetViewController(UnityEngine.UIElements.CollectionViewController controller)
    void SetViewController(::UnityEngine::UIElements::CollectionViewController* controller);
    // override System.Void CreateVirtualizationController()
    // Offset: 0x56224D0
    // Implemented from: UnityEngine.UIElements.BaseListView
    // Base method: System.Void BaseListView::CreateVirtualizationController()
    void CreateVirtualizationController();
  }; // UnityEngine.UIElements.MultiColumnListView
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::get_viewController
// Il2CppName: get_viewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MultiColumnListViewController* (UnityEngine::UIElements::MultiColumnListView::*)()>(&UnityEngine::UIElements::MultiColumnListView::get_viewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "get_viewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::get_columns
// Il2CppName: get_columns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Columns* (UnityEngine::UIElements::MultiColumnListView::*)()>(&UnityEngine::UIElements::MultiColumnListView::get_columns)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "get_columns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::set_columns
// Il2CppName: set_columns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MultiColumnListView::*)(::UnityEngine::UIElements::Columns*)>(&UnityEngine::UIElements::MultiColumnListView::set_columns)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Columns")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "set_columns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::get_sortColumnDescriptions
// Il2CppName: get_sortColumnDescriptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SortColumnDescriptions* (UnityEngine::UIElements::MultiColumnListView::*)()>(&UnityEngine::UIElements::MultiColumnListView::get_sortColumnDescriptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "get_sortColumnDescriptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::set_sortColumnDescriptions
// Il2CppName: set_sortColumnDescriptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MultiColumnListView::*)(::UnityEngine::UIElements::SortColumnDescriptions*)>(&UnityEngine::UIElements::MultiColumnListView::set_sortColumnDescriptions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "SortColumnDescriptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "set_sortColumnDescriptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::set_sortingEnabled
// Il2CppName: set_sortingEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MultiColumnListView::*)(bool)>(&UnityEngine::UIElements::MultiColumnListView::set_sortingEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "set_sortingEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::RaiseColumnSortingChanged
// Il2CppName: RaiseColumnSortingChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MultiColumnListView::*)()>(&UnityEngine::UIElements::MultiColumnListView::RaiseColumnSortingChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "RaiseColumnSortingChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::RaiseHeaderContextMenuPopulate
// Il2CppName: RaiseHeaderContextMenuPopulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MultiColumnListView::*)(::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*)>(&UnityEngine::UIElements::MultiColumnListView::RaiseHeaderContextMenuPopulate)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ContextualMenuPopulateEvent")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Column")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "RaiseHeaderContextMenuPopulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt, column});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::CreateViewController
// Il2CppName: CreateViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionViewController* (UnityEngine::UIElements::MultiColumnListView::*)()>(&UnityEngine::UIElements::MultiColumnListView::CreateViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "CreateViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::SetViewController
// Il2CppName: SetViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MultiColumnListView::*)(::UnityEngine::UIElements::CollectionViewController*)>(&UnityEngine::UIElements::MultiColumnListView::SetViewController)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CollectionViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "SetViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MultiColumnListView::CreateVirtualizationController
// Il2CppName: CreateVirtualizationController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MultiColumnListView::*)()>(&UnityEngine::UIElements::MultiColumnListView::CreateVirtualizationController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MultiColumnListView*), "CreateVirtualizationController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
