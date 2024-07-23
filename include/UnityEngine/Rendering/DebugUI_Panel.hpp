// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugUI
#include "UnityEngine/Rendering/DebugUI.hpp"
// Including type: UnityEngine.Rendering.DebugUI/IContainer
#include "UnityEngine/Rendering/DebugUI_IContainer.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: UnityEngine.Rendering.DebugUI/Flags
#include "UnityEngine/Rendering/DebugUI_Flags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ObservableList`1<T>
  template<typename T>
  class ObservableList_1;
  // Forward declaring type: ListChangedEventArgs`1<T>
  template<typename T>
  class ListChangedEventArgs_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI::Panel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI::Panel*, "UnityEngine.Rendering", "DebugUI/Panel");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DebugUI/Panel
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUI::Panel : public ::Il2CppObject/*, public ::UnityEngine::Rendering::DebugUI::IContainer, public ::System::IComparable_1<::UnityEngine::Rendering::DebugUI::Panel*>*/ {
    public:
    // Nested type: ::UnityEngine::Rendering::DebugUI::Panel::$$c
    class $$c;
    public:
    // private UnityEngine.Rendering.DebugUI/Flags <flags>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::Rendering::DebugUI::Flags flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DebugUI::Flags) == 0x4);
    // Padding between fields: flags and: displayName
    char __padding0[0x4] = {};
    // private System.String <displayName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <groupIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int groupIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: groupIndex and: children
    char __padding2[0x4] = {};
    // private UnityEngine.Rendering.ObservableList`1<UnityEngine.Rendering.DebugUI/Widget> <children>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>* children;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>*) == 0x8);
    // private System.Action`1<UnityEngine.Rendering.DebugUI/Panel> onSetDirty
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>* onSetDirty;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::DebugUI::IContainer
    operator ::UnityEngine::Rendering::DebugUI::IContainer() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::DebugUI::IContainer*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::UnityEngine::Rendering::DebugUI::Panel*>
    operator ::System::IComparable_1<::UnityEngine::Rendering::DebugUI::Panel*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::UnityEngine::Rendering::DebugUI::Panel*>*>(this);
    }
    // Get instance field reference: private UnityEngine.Rendering.DebugUI/Flags <flags>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DebugUI::Flags& dyn_$flags$k__BackingField();
    // Get instance field reference: private System.String <displayName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$displayName$k__BackingField();
    // Get instance field reference: private System.Int32 <groupIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$groupIndex$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.ObservableList`1<UnityEngine.Rendering.DebugUI/Widget> <children>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>*& dyn_$children$k__BackingField();
    // Get instance field reference: private System.Action`1<UnityEngine.Rendering.DebugUI/Panel> onSetDirty
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>*& dyn_onSetDirty();
    // public UnityEngine.Rendering.DebugUI/Flags get_flags()
    // Offset: 0x524AC7C
    ::UnityEngine::Rendering::DebugUI::Flags get_flags();
    // public System.Void set_flags(UnityEngine.Rendering.DebugUI/Flags value)
    // Offset: 0x524AC84
    void set_flags(::UnityEngine::Rendering::DebugUI::Flags value);
    // public System.String get_displayName()
    // Offset: 0x524AC8C
    ::StringW get_displayName();
    // public System.Void set_displayName(System.String value)
    // Offset: 0x524AC94
    void set_displayName(::StringW value);
    // public System.Int32 get_groupIndex()
    // Offset: 0x524AC9C
    int get_groupIndex();
    // public System.Void set_groupIndex(System.Int32 value)
    // Offset: 0x524ACA4
    void set_groupIndex(int value);
    // public System.String get_queryPath()
    // Offset: 0x524ACAC
    ::StringW get_queryPath();
    // public System.Boolean get_isEditorOnly()
    // Offset: 0x524ACB4
    bool get_isEditorOnly();
    // public UnityEngine.Rendering.ObservableList`1<UnityEngine.Rendering.DebugUI/Widget> get_children()
    // Offset: 0x524ACC0
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>* get_children();
    // private System.Void set_children(UnityEngine.Rendering.ObservableList`1<UnityEngine.Rendering.DebugUI/Widget> value)
    // Offset: 0x524ACC8
    void set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>* value);
    // public System.Void add_onSetDirty(System.Action`1<UnityEngine.Rendering.DebugUI/Panel> value)
    // Offset: 0x52487A0
    void add_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>* value);
    // public System.Void remove_onSetDirty(System.Action`1<UnityEngine.Rendering.DebugUI/Panel> value)
    // Offset: 0x524848C
    void remove_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>* value);
    // public System.Void .ctor()
    // Offset: 0x52485AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUI::Panel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugUI::Panel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUI::Panel*, creationType>()));
    }
    // protected System.Void OnItemAdded(UnityEngine.Rendering.ObservableList`1<UnityEngine.Rendering.DebugUI/Widget> sender, UnityEngine.Rendering.ListChangedEventArgs`1<UnityEngine.Rendering.DebugUI/Widget> e)
    // Offset: 0x524ACD0
    void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>* sender, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI::Widget*>* e);
    // protected System.Void OnItemRemoved(UnityEngine.Rendering.ObservableList`1<UnityEngine.Rendering.DebugUI/Widget> sender, UnityEngine.Rendering.ListChangedEventArgs`1<UnityEngine.Rendering.DebugUI/Widget> e)
    // Offset: 0x524AD28
    void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>* sender, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI::Widget*>* e);
    // public System.Void SetDirty()
    // Offset: 0x524994C
    void SetDirty();
    // private System.Int32 System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo(UnityEngine.Rendering.DebugUI/Panel other)
    // Offset: 0x524AE60
    int System_IComparable$UnityEngine_Rendering_DebugUI_Panel$_CompareTo(::UnityEngine::Rendering::DebugUI::Panel* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x524AD80
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.DebugUI/Panel
  #pragma pack(pop)
  static check_size<sizeof(DebugUI::Panel), 48 + sizeof(::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>*)> __UnityEngine_Rendering_DebugUI_PanelSizeCheck;
  static_assert(sizeof(DebugUI::Panel) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::get_flags
// Il2CppName: get_flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DebugUI::Flags (UnityEngine::Rendering::DebugUI::Panel::*)()>(&UnityEngine::Rendering::DebugUI::Panel::get_flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "get_flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::set_flags
// Il2CppName: set_flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)(::UnityEngine::Rendering::DebugUI::Flags)>(&UnityEngine::Rendering::DebugUI::Panel::set_flags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Flags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "set_flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::get_displayName
// Il2CppName: get_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::DebugUI::Panel::*)()>(&UnityEngine::Rendering::DebugUI::Panel::get_displayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "get_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::set_displayName
// Il2CppName: set_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)(::StringW)>(&UnityEngine::Rendering::DebugUI::Panel::set_displayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "set_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::get_groupIndex
// Il2CppName: get_groupIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::DebugUI::Panel::*)()>(&UnityEngine::Rendering::DebugUI::Panel::get_groupIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "get_groupIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::set_groupIndex
// Il2CppName: set_groupIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)(int)>(&UnityEngine::Rendering::DebugUI::Panel::set_groupIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "set_groupIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::get_queryPath
// Il2CppName: get_queryPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::DebugUI::Panel::*)()>(&UnityEngine::Rendering::DebugUI::Panel::get_queryPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "get_queryPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::get_isEditorOnly
// Il2CppName: get_isEditorOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::DebugUI::Panel::*)()>(&UnityEngine::Rendering::DebugUI::Panel::get_isEditorOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "get_isEditorOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::get_children
// Il2CppName: get_children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>* (UnityEngine::Rendering::DebugUI::Panel::*)()>(&UnityEngine::Rendering::DebugUI::Panel::get_children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "get_children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::set_children
// Il2CppName: set_children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>*)>(&UnityEngine::Rendering::DebugUI::Panel::set_children)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ObservableList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Widget")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "set_children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::add_onSetDirty
// Il2CppName: add_onSetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)(::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>*)>(&UnityEngine::Rendering::DebugUI::Panel::add_onSetDirty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Panel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "add_onSetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::remove_onSetDirty
// Il2CppName: remove_onSetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)(::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>*)>(&UnityEngine::Rendering::DebugUI::Panel::remove_onSetDirty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Panel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "remove_onSetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::OnItemAdded
// Il2CppName: OnItemAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI::Widget*>*)>(&UnityEngine::Rendering::DebugUI::Panel::OnItemAdded)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ObservableList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Widget")})->byval_arg;
    static auto* e = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ListChangedEventArgs`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Widget")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "OnItemAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::OnItemRemoved
// Il2CppName: OnItemRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI::Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI::Widget*>*)>(&UnityEngine::Rendering::DebugUI::Panel::OnItemRemoved)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ObservableList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Widget")})->byval_arg;
    static auto* e = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ListChangedEventArgs`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Widget")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "OnItemRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::SetDirty
// Il2CppName: SetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::*)()>(&UnityEngine::Rendering::DebugUI::Panel::SetDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "SetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::System_IComparable$UnityEngine_Rendering_DebugUI_Panel$_CompareTo
// Il2CppName: System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::DebugUI::Panel::*)(::UnityEngine::Rendering::DebugUI::Panel*)>(&UnityEngine::Rendering::DebugUI::Panel::System_IComparable$UnityEngine_Rendering_DebugUI_Panel$_CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Panel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::DebugUI::Panel::*)()>(&UnityEngine::Rendering::DebugUI::Panel::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
