// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseVisualTreeUpdater
#include "UnityEngine/UIElements/BaseVisualTreeUpdater.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: Unity.Profiling.ProfilerMarker
#include "Unity/Profiling/ProfilerMarker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: VersionChangeType
  struct VersionChangeType;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UIRLayoutUpdater
  class UIRLayoutUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIRLayoutUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRLayoutUpdater*, "UnityEngine.UIElements", "UIRLayoutUpdater");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIRLayoutUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class UIRLayoutUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Rect,UnityEngine.UIElements.VisualElement>> changeEventsList
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEventsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*
    constexpr operator ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*() const noexcept {
      return changeEventsList;
    }
    // Get static field: static private readonly System.String s_Description
    static ::StringW _get_s_Description();
    // Set static field: static private readonly System.String s_Description
    static void _set_s_Description(::StringW value);
    // Get static field: static private readonly Unity.Profiling.ProfilerMarker s_ProfilerMarker
    static ::Unity::Profiling::ProfilerMarker _get_s_ProfilerMarker();
    // Set static field: static private readonly Unity.Profiling.ProfilerMarker s_ProfilerMarker
    static void _set_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);
    // Get instance field reference: private System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Rect,UnityEngine.UIElements.VisualElement>> changeEventsList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*& dyn_changeEventsList();
    // private System.Void UpdateSubTree(UnityEngine.UIElements.VisualElement ve, System.Boolean isDisplayed, System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Rect,UnityEngine.UIElements.VisualElement>> changeEvents)
    // Offset: 0x566CCF8
    void UpdateSubTree(::UnityEngine::UIElements::VisualElement* ve, bool isDisplayed, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents);
    // private System.Void DispatchChangeEvents(System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Rect,UnityEngine.UIElements.VisualElement>> changeEvents, System.Int32 currentLayoutPass)
    // Offset: 0x566D424
    void DispatchChangeEvents(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents, int currentLayoutPass);
    // static private System.Void .cctor()
    // Offset: 0x566D800
    static void _cctor();
    // public override Unity.Profiling.ProfilerMarker get_profilerMarker()
    // Offset: 0x566CA60
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: Unity.Profiling.ProfilerMarker BaseVisualTreeUpdater::get_profilerMarker()
    ::Unity::Profiling::ProfilerMarker get_profilerMarker();
    // public override System.Void OnVersionChanged(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.VersionChangeType versionChangeType)
    // Offset: 0x566CAB8
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: System.Void BaseVisualTreeUpdater::OnVersionChanged(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.VersionChangeType versionChangeType)
    void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);
    // public override System.Void Update()
    // Offset: 0x566CB00
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: System.Void BaseVisualTreeUpdater::Update()
    void Update();
    // public System.Void .ctor()
    // Offset: 0x566D778
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: System.Void BaseVisualTreeUpdater::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIRLayoutUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIRLayoutUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIRLayoutUpdater*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIRLayoutUpdater
  #pragma pack(pop)
  static check_size<sizeof(UIRLayoutUpdater), 32 + sizeof(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*)> __UnityEngine_UIElements_UIRLayoutUpdaterSizeCheck;
  static_assert(sizeof(UIRLayoutUpdater) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRLayoutUpdater::UpdateSubTree
// Il2CppName: UpdateSubTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRLayoutUpdater::*)(::UnityEngine::UIElements::VisualElement*, bool, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*)>(&UnityEngine::UIElements::UIRLayoutUpdater::UpdateSubTree)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* isDisplayed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* changeEvents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Rect"), ::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRLayoutUpdater*), "UpdateSubTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, isDisplayed, changeEvents});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRLayoutUpdater::DispatchChangeEvents
// Il2CppName: DispatchChangeEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRLayoutUpdater::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*, int)>(&UnityEngine::UIElements::UIRLayoutUpdater::DispatchChangeEvents)> {
  static const MethodInfo* get() {
    static auto* changeEvents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Rect"), ::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")})})->byval_arg;
    static auto* currentLayoutPass = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRLayoutUpdater*), "DispatchChangeEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{changeEvents, currentLayoutPass});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRLayoutUpdater::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIRLayoutUpdater::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRLayoutUpdater*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRLayoutUpdater::get_profilerMarker
// Il2CppName: get_profilerMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarker (UnityEngine::UIElements::UIRLayoutUpdater::*)()>(&UnityEngine::UIElements::UIRLayoutUpdater::get_profilerMarker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRLayoutUpdater*), "get_profilerMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRLayoutUpdater::OnVersionChanged
// Il2CppName: OnVersionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRLayoutUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::UIRLayoutUpdater::OnVersionChanged)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* versionChangeType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VersionChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRLayoutUpdater*), "OnVersionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, versionChangeType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRLayoutUpdater::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRLayoutUpdater::*)()>(&UnityEngine::UIElements::UIRLayoutUpdater::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRLayoutUpdater*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRLayoutUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!