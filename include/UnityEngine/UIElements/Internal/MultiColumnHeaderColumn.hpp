// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualElement
#include "UnityEngine/UIElements/VisualElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::Internal
namespace UnityEngine::UIElements::Internal {
  // Forward declaring type: MultiColumnHeaderColumnSortIndicator
  class MultiColumnHeaderColumnSortIndicator;
  // Forward declaring type: ColumnMover
  class ColumnMover;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IVisualElementScheduledItem
  class IVisualElementScheduledItem;
  // Forward declaring type: Clickable
  class Clickable;
  // Forward declaring type: Column
  class Column;
  // Forward declaring type: ColumnDataType
  struct ColumnDataType;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.Internal
namespace UnityEngine::UIElements::Internal {
  // Forward declaring type: MultiColumnHeaderColumn
  class MultiColumnHeaderColumn;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*, "UnityEngine.UIElements.Internal", "MultiColumnHeaderColumn");
// Type namespace: UnityEngine.UIElements.Internal
namespace UnityEngine::UIElements::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.Internal.MultiColumnHeaderColumn
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiColumnHeaderColumn : public ::UnityEngine::UIElements::VisualElement {
    public:
    public:
    // private UnityEngine.UIElements.VisualElement m_ContentContainer
    // Size: 0x8
    // Offset: 0x3C0
    ::UnityEngine::UIElements::VisualElement* m_ContentContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualElement m_Content
    // Size: 0x8
    // Offset: 0x3C8
    ::UnityEngine::UIElements::VisualElement* m_Content;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.Internal.MultiColumnHeaderColumnSortIndicator m_SortIndicatorContainer
    // Size: 0x8
    // Offset: 0x3D0
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* m_SortIndicatorContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*) == 0x8);
    // private UnityEngine.UIElements.IVisualElementScheduledItem m_ScheduledHeaderTemplateUpdate
    // Size: 0x8
    // Offset: 0x3D8
    ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ScheduledHeaderTemplateUpdate;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::IVisualElementScheduledItem*) == 0x8);
    // private UnityEngine.UIElements.Clickable <clickable>k__BackingField
    // Size: 0x8
    // Offset: 0x3E0
    ::UnityEngine::UIElements::Clickable* clickable;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Clickable*) == 0x8);
    // private UnityEngine.UIElements.Internal.ColumnMover <mover>k__BackingField
    // Size: 0x8
    // Offset: 0x3E8
    ::UnityEngine::UIElements::Internal::ColumnMover* mover;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Internal::ColumnMover*) == 0x8);
    // private UnityEngine.UIElements.Column <column>k__BackingField
    // Size: 0x8
    // Offset: 0x3F0
    ::UnityEngine::UIElements::Column* column;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Column*) == 0x8);
    public:
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static public readonly System.String sortableUssClassName
    static ::StringW _get_sortableUssClassName();
    // Set static field: static public readonly System.String sortableUssClassName
    static void _set_sortableUssClassName(::StringW value);
    // Get static field: static public readonly System.String sortedAscendingUssClassName
    static ::StringW _get_sortedAscendingUssClassName();
    // Set static field: static public readonly System.String sortedAscendingUssClassName
    static void _set_sortedAscendingUssClassName(::StringW value);
    // Get static field: static public readonly System.String sortedDescendingUssClassName
    static ::StringW _get_sortedDescendingUssClassName();
    // Set static field: static public readonly System.String sortedDescendingUssClassName
    static void _set_sortedDescendingUssClassName(::StringW value);
    // Get static field: static public readonly System.String movingUssClassName
    static ::StringW _get_movingUssClassName();
    // Set static field: static public readonly System.String movingUssClassName
    static void _set_movingUssClassName(::StringW value);
    // Get static field: static public readonly System.String contentContainerUssClassName
    static ::StringW _get_contentContainerUssClassName();
    // Set static field: static public readonly System.String contentContainerUssClassName
    static void _set_contentContainerUssClassName(::StringW value);
    // Get static field: static public readonly System.String contentUssClassName
    static ::StringW _get_contentUssClassName();
    // Set static field: static public readonly System.String contentUssClassName
    static void _set_contentUssClassName(::StringW value);
    // Get static field: static public readonly System.String defaultContentUssClassName
    static ::StringW _get_defaultContentUssClassName();
    // Set static field: static public readonly System.String defaultContentUssClassName
    static void _set_defaultContentUssClassName(::StringW value);
    // Get static field: static public readonly System.String hasIconUssClassName
    static ::StringW _get_hasIconUssClassName();
    // Set static field: static public readonly System.String hasIconUssClassName
    static void _set_hasIconUssClassName(::StringW value);
    // Get static field: static public readonly System.String hasTitleUssClassName
    static ::StringW _get_hasTitleUssClassName();
    // Set static field: static public readonly System.String hasTitleUssClassName
    static void _set_hasTitleUssClassName(::StringW value);
    // Get static field: static public readonly System.String titleUssClassName
    static ::StringW _get_titleUssClassName();
    // Set static field: static public readonly System.String titleUssClassName
    static void _set_titleUssClassName(::StringW value);
    // Get static field: static public readonly System.String iconElementName
    static ::StringW _get_iconElementName();
    // Set static field: static public readonly System.String iconElementName
    static void _set_iconElementName(::StringW value);
    // Get static field: static public readonly System.String titleElementName
    static ::StringW _get_titleElementName();
    // Set static field: static public readonly System.String titleElementName
    static void _set_titleElementName(::StringW value);
    // Get static field: static private readonly System.String s_BoundVEPropertyName
    static ::StringW _get_s_BoundVEPropertyName();
    // Set static field: static private readonly System.String s_BoundVEPropertyName
    static void _set_s_BoundVEPropertyName(::StringW value);
    // Get static field: static private readonly System.String s_BindingCallbackVEPropertyName
    static ::StringW _get_s_BindingCallbackVEPropertyName();
    // Set static field: static private readonly System.String s_BindingCallbackVEPropertyName
    static void _set_s_BindingCallbackVEPropertyName(::StringW value);
    // Get static field: static private readonly System.String s_UnbindingCallbackVEPropertyName
    static ::StringW _get_s_UnbindingCallbackVEPropertyName();
    // Set static field: static private readonly System.String s_UnbindingCallbackVEPropertyName
    static void _set_s_UnbindingCallbackVEPropertyName(::StringW value);
    // Get static field: static private readonly System.String s_DestroyCallbackVEPropertyName
    static ::StringW _get_s_DestroyCallbackVEPropertyName();
    // Set static field: static private readonly System.String s_DestroyCallbackVEPropertyName
    static void _set_s_DestroyCallbackVEPropertyName(::StringW value);
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_ContentContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_ContentContainer();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_Content
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_Content();
    // Get instance field reference: private UnityEngine.UIElements.Internal.MultiColumnHeaderColumnSortIndicator m_SortIndicatorContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*& dyn_m_SortIndicatorContainer();
    // Get instance field reference: private UnityEngine.UIElements.IVisualElementScheduledItem m_ScheduledHeaderTemplateUpdate
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IVisualElementScheduledItem*& dyn_m_ScheduledHeaderTemplateUpdate();
    // Get instance field reference: private UnityEngine.UIElements.Clickable <clickable>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Clickable*& dyn_$clickable$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.Internal.ColumnMover <mover>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Internal::ColumnMover*& dyn_$mover$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.Column <column>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Column*& dyn_$column$k__BackingField();
    // public UnityEngine.UIElements.Clickable get_clickable()
    // Offset: 0x5610C0C
    ::UnityEngine::UIElements::Clickable* get_clickable();
    // private System.Void set_clickable(UnityEngine.UIElements.Clickable value)
    // Offset: 0x5610C14
    void set_clickable(::UnityEngine::UIElements::Clickable* value);
    // public UnityEngine.UIElements.Internal.ColumnMover get_mover()
    // Offset: 0x5610C24
    ::UnityEngine::UIElements::Internal::ColumnMover* get_mover();
    // private System.Void set_mover(UnityEngine.UIElements.Internal.ColumnMover value)
    // Offset: 0x5610C2C
    void set_mover(::UnityEngine::UIElements::Internal::ColumnMover* value);
    // public System.Void set_sortOrderLabel(System.String value)
    // Offset: 0x560F264
    void set_sortOrderLabel(::StringW value);
    // public UnityEngine.UIElements.Column get_column()
    // Offset: 0x5610C3C
    ::UnityEngine::UIElements::Column* get_column();
    // public System.Void set_column(UnityEngine.UIElements.Column value)
    // Offset: 0x5610C44
    void set_column(::UnityEngine::UIElements::Column* value);
    // public UnityEngine.UIElements.VisualElement get_content()
    // Offset: 0x5610C54
    ::UnityEngine::UIElements::VisualElement* get_content();
    // public System.Void set_content(UnityEngine.UIElements.VisualElement value)
    // Offset: 0x5610C5C
    void set_content(::UnityEngine::UIElements::VisualElement* value);
    // private System.Boolean get_isContentBound()
    // Offset: 0x5610E1C
    bool get_isContentBound();
    // private System.Void set_isContentBound(System.Boolean value)
    // Offset: 0x5610EE8
    void set_isContentBound(bool value);
    // public System.Void .ctor(UnityEngine.UIElements.Column column)
    // Offset: 0x560C8F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiColumnHeaderColumn* New_ctor(::UnityEngine::UIElements::Column* column) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiColumnHeaderColumn*, creationType>(column)));
    }
    // private System.Void InitManipulators()
    // Offset: 0x5611288
    void InitManipulators();
    // private System.Void UpdateDataFromColumn()
    // Offset: 0x56114E0
    void UpdateDataFromColumn();
    // private System.Void BindHeaderContent()
    // Offset: 0x56115EC
    void BindHeaderContent();
    // private System.Void UnbindHeaderContent()
    // Offset: 0x5611514
    void UnbindHeaderContent();
    // private System.Void DestroyHeaderContent()
    // Offset: 0x5610D54
    void DestroyHeaderContent();
    // private UnityEngine.UIElements.VisualElement CreateDefaultHeaderContent()
    // Offset: 0x56116C4
    ::UnityEngine::UIElements::VisualElement* CreateDefaultHeaderContent();
    // private System.Void DefaultBindHeaderContent(UnityEngine.UIElements.VisualElement ve)
    // Offset: 0x5611834
    void DefaultBindHeaderContent(::UnityEngine::UIElements::VisualElement* ve);
    // private System.Void UpdateHeaderTemplate()
    // Offset: 0x5610FA8
    void UpdateHeaderTemplate();
    // private System.Void UpdateGeometryFromColumn()
    // Offset: 0x5611188
    void UpdateGeometryFromColumn();
    // private System.Void <.ctor>b__45_0(UnityEngine.UIElements.Column c, UnityEngine.UIElements.ColumnDataType role)
    // Offset: 0x5611FD4
    void $_ctor$b__45_0(::UnityEngine::UIElements::Column* c, ::UnityEngine::UIElements::ColumnDataType role);
    // private System.Void <.ctor>b__45_1(UnityEngine.UIElements.Column c)
    // Offset: 0x5612178
    void $_ctor$b__45_1(::UnityEngine::UIElements::Column* c);
    // private System.Void <InitManipulators>b__46_0(UnityEngine.UIElements.Internal.ColumnMover mv)
    // Offset: 0x561217C
    void $InitManipulators$b__46_0(::UnityEngine::UIElements::Internal::ColumnMover* mv);
    // static private System.Void .cctor()
    // Offset: 0x5611B78
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.Internal.MultiColumnHeaderColumn
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_clickable
// Il2CppName: get_clickable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Clickable* (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_clickable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "get_clickable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_clickable
// Il2CppName: set_clickable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Clickable*)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_clickable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Clickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "set_clickable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_mover
// Il2CppName: get_mover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Internal::ColumnMover* (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_mover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "get_mover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_mover
// Il2CppName: set_mover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Internal::ColumnMover*)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_mover)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Internal", "ColumnMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "set_mover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_sortOrderLabel
// Il2CppName: set_sortOrderLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::StringW)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_sortOrderLabel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "set_sortOrderLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_column
// Il2CppName: get_column
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Column* (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_column)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "get_column", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_column
// Il2CppName: set_column
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Column*)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_column)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Column")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "set_column", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_content
// Il2CppName: get_content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_content)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "get_content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_content
// Il2CppName: set_content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_content)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "set_content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_isContentBound
// Il2CppName: get_isContentBound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_isContentBound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "get_isContentBound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_isContentBound
// Il2CppName: set_isContentBound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(bool)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_isContentBound)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "set_isContentBound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::InitManipulators
// Il2CppName: InitManipulators
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::InitManipulators)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "InitManipulators", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateDataFromColumn
// Il2CppName: UpdateDataFromColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateDataFromColumn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "UpdateDataFromColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::BindHeaderContent
// Il2CppName: BindHeaderContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::BindHeaderContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "BindHeaderContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UnbindHeaderContent
// Il2CppName: UnbindHeaderContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UnbindHeaderContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "UnbindHeaderContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::DestroyHeaderContent
// Il2CppName: DestroyHeaderContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::DestroyHeaderContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "DestroyHeaderContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::CreateDefaultHeaderContent
// Il2CppName: CreateDefaultHeaderContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::CreateDefaultHeaderContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "CreateDefaultHeaderContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::DefaultBindHeaderContent
// Il2CppName: DefaultBindHeaderContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::DefaultBindHeaderContent)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "DefaultBindHeaderContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateHeaderTemplate
// Il2CppName: UpdateHeaderTemplate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateHeaderTemplate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "UpdateHeaderTemplate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateGeometryFromColumn
// Il2CppName: UpdateGeometryFromColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateGeometryFromColumn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "UpdateGeometryFromColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::$_ctor$b__45_0
// Il2CppName: <.ctor>b__45_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::$_ctor$b__45_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Column")->byval_arg;
    static auto* role = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ColumnDataType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "<.ctor>b__45_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, role});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::$_ctor$b__45_1
// Il2CppName: <.ctor>b__45_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Column*)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::$_ctor$b__45_1)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Column")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "<.ctor>b__45_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::$InitManipulators$b__46_0
// Il2CppName: <InitManipulators>b__46_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Internal::ColumnMover*)>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::$InitManipulators$b__46_0)> {
  static const MethodInfo* get() {
    static auto* mv = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Internal", "ColumnMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), "<InitManipulators>b__46_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mv});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
