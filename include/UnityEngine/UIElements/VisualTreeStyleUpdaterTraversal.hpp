// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.HierarchyTraversal
#include "UnityEngine/UIElements/StyleSheets/HierarchyTraversal.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.SelectorMatchRecord
#include "UnityEngine/UIElements/StyleSheets/SelectorMatchRecord.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.StylePropertyId
#include "UnityEngine/UIElements/StyleSheets/StylePropertyId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleVariableContext
  class StyleVariableContext;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: StyleMatchingContext
  class StyleMatchingContext;
  // Forward declaring type: VersionChangeType
  struct VersionChangeType;
  // Forward declaring type: ComputedStyle
  struct ComputedStyle;
  // Forward declaring type: StyleSheet
  class StyleSheet;
  // Forward declaring type: StyleRule
  class StyleRule;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UIElements::StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Forward declaring type: StylePropertyReader
  class StylePropertyReader;
  // Forward declaring type: MatchResultInfo
  struct MatchResultInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualTreeStyleUpdaterTraversal
  class VisualTreeStyleUpdaterTraversal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*, "UnityEngine.UIElements", "VisualTreeStyleUpdaterTraversal");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualTreeStyleUpdaterTraversal
  // [TokenAttribute] Offset: FFFFFFFF
  class VisualTreeStyleUpdaterTraversal : public ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal {
    public:
    // Nested type: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::$$c
    class $$c;
    public:
    // private UnityEngine.UIElements.StyleVariableContext m_ProcessVarContext
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::StyleVariableContext* m_ProcessVarContext;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleVariableContext*) == 0x8);
    // private System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> m_UpdateList
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_UpdateList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> m_ParentList
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_ParentList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.SelectorMatchRecord> m_TempMatchResults
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* m_TempMatchResults;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*) == 0x8);
    // private System.Single <currentPixelsPerPoint>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    float currentPixelsPerPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: currentPixelsPerPoint and: m_StyleMatchingContext
    char __padding4[0x4] = {};
    // private UnityEngine.UIElements.StyleMatchingContext m_StyleMatchingContext
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UIElements::StyleMatchingContext* m_StyleMatchingContext;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleMatchingContext*) == 0x8);
    // private UnityEngine.UIElements.StyleSheets.StylePropertyReader m_StylePropertyReader
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* m_StylePropertyReader;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyId> m_AnimatedProperties
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* m_AnimatedProperties;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UIElements.StyleVariableContext m_ProcessVarContext
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleVariableContext*& dyn_m_ProcessVarContext();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> m_UpdateList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& dyn_m_UpdateList();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> m_ParentList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& dyn_m_ParentList();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.SelectorMatchRecord> m_TempMatchResults
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*& dyn_m_TempMatchResults();
    // Get instance field reference: private System.Single <currentPixelsPerPoint>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$currentPixelsPerPoint$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.StyleMatchingContext m_StyleMatchingContext
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleMatchingContext*& dyn_m_StyleMatchingContext();
    // Get instance field reference: private UnityEngine.UIElements.StyleSheets.StylePropertyReader m_StylePropertyReader
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*& dyn_m_StylePropertyReader();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyId> m_AnimatedProperties
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*& dyn_m_AnimatedProperties();
    // private System.Single get_currentPixelsPerPoint()
    // Offset: 0x55C71D8
    float get_currentPixelsPerPoint();
    // private System.Void set_currentPixelsPerPoint(System.Single value)
    // Offset: 0x55C71E0
    void set_currentPixelsPerPoint(float value);
    // public System.Void PrepareTraversal(System.Single pixelsPerPoint)
    // Offset: 0x55C6ACC
    void PrepareTraversal(float pixelsPerPoint);
    // public System.Void AddChangedElement(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.VersionChangeType versionChangeType)
    // Offset: 0x55C625C
    void AddChangedElement(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);
    // public System.Void Clear()
    // Offset: 0x55C66F4
    void Clear();
    // private System.Void PropagateToChildren(UnityEngine.UIElements.VisualElement ve)
    // Offset: 0x55C71E8
    void PropagateToChildren(::UnityEngine::UIElements::VisualElement* ve);
    // private System.Void PropagateToParents(UnityEngine.UIElements.VisualElement ve)
    // Offset: 0x55C72B8
    void PropagateToParents(::UnityEngine::UIElements::VisualElement* ve);
    // static private System.Void OnProcessMatchResult(UnityEngine.UIElements.VisualElement current, UnityEngine.UIElements.StyleSheets.MatchResultInfo info)
    // Offset: 0x55C735C
    static void OnProcessMatchResult(::UnityEngine::UIElements::VisualElement* current, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo info);
    // private System.Void ProcessTransitions(UnityEngine.UIElements.VisualElement element, ref UnityEngine.UIElements.ComputedStyle oldStyle, ref UnityEngine.UIElements.ComputedStyle newStyle)
    // Offset: 0x55C8268
    void ProcessTransitions(::UnityEngine::UIElements::VisualElement* element, ByRef<::UnityEngine::UIElements::ComputedStyle> oldStyle, ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle);
    // private System.Void ForceUpdateTransitions(UnityEngine.UIElements.VisualElement element)
    // Offset: 0x55C833C
    void ForceUpdateTransitions(::UnityEngine::UIElements::VisualElement* element);
    // System.Void CancelAnimationsWithNoTransitionProperty(UnityEngine.UIElements.VisualElement element, ref UnityEngine.UIElements.ComputedStyle newStyle)
    // Offset: 0x55C6798
    void CancelAnimationsWithNoTransitionProperty(::UnityEngine::UIElements::VisualElement* element, ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle);
    // protected System.Boolean ShouldSkipElement(UnityEngine.UIElements.VisualElement element)
    // Offset: 0x55C7A18
    bool ShouldSkipElement(::UnityEngine::UIElements::VisualElement* element);
    // private UnityEngine.UIElements.ComputedStyle ProcessMatchedRules(UnityEngine.UIElements.VisualElement element, System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.SelectorMatchRecord> matchingSelectors)
    // Offset: 0x55C7A9C
    ::UnityEngine::UIElements::ComputedStyle ProcessMatchedRules(::UnityEngine::UIElements::VisualElement* element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchingSelectors);
    // private System.Void ProcessMatchedVariables(UnityEngine.UIElements.StyleSheet sheet, UnityEngine.UIElements.StyleRule rule)
    // Offset: 0x55C85D0
    void ProcessMatchedVariables(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule);
    // public override System.Void TraverseRecursive(UnityEngine.UIElements.VisualElement element, System.Int32 depth)
    // Offset: 0x55C738C
    // Implemented from: UnityEngine.UIElements.StyleSheets.HierarchyTraversal
    // Base method: System.Void HierarchyTraversal::TraverseRecursive(UnityEngine.UIElements.VisualElement element, System.Int32 depth)
    void TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int depth);
    // public System.Void .ctor()
    // Offset: 0x55C6BBC
    // Implemented from: UnityEngine.UIElements.StyleSheets.HierarchyTraversal
    // Base method: System.Void HierarchyTraversal::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualTreeStyleUpdaterTraversal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualTreeStyleUpdaterTraversal*, creationType>()));
    }
  }; // UnityEngine.UIElements.VisualTreeStyleUpdaterTraversal
  #pragma pack(pop)
  static check_size<sizeof(VisualTreeStyleUpdaterTraversal), 72 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*)> __UnityEngine_UIElements_VisualTreeStyleUpdaterTraversalSizeCheck;
  static_assert(sizeof(VisualTreeStyleUpdaterTraversal) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::get_currentPixelsPerPoint
// Il2CppName: get_currentPixelsPerPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::get_currentPixelsPerPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "get_currentPixelsPerPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::set_currentPixelsPerPoint
// Il2CppName: set_currentPixelsPerPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(float)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::set_currentPixelsPerPoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "set_currentPixelsPerPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PrepareTraversal
// Il2CppName: PrepareTraversal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(float)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PrepareTraversal)> {
  static const MethodInfo* get() {
    static auto* pixelsPerPoint = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "PrepareTraversal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixelsPerPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::AddChangedElement
// Il2CppName: AddChangedElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::AddChangedElement)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* versionChangeType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VersionChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "AddChangedElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, versionChangeType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToChildren
// Il2CppName: PropagateToChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToChildren)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "PropagateToChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToParents
// Il2CppName: PropagateToParents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToParents)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "PropagateToParents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::OnProcessMatchResult
// Il2CppName: OnProcessMatchResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::OnProcessMatchResult)> {
  static const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "MatchResultInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "OnProcessMatchResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessTransitions
// Il2CppName: ProcessTransitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::UIElements::ComputedStyle>, ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessTransitions)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* oldStyle = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    static auto* newStyle = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "ProcessTransitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, oldStyle, newStyle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ForceUpdateTransitions
// Il2CppName: ForceUpdateTransitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ForceUpdateTransitions)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "ForceUpdateTransitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::CancelAnimationsWithNoTransitionProperty
// Il2CppName: CancelAnimationsWithNoTransitionProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::CancelAnimationsWithNoTransitionProperty)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* newStyle = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "CancelAnimationsWithNoTransitionProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, newStyle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ShouldSkipElement
// Il2CppName: ShouldSkipElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ShouldSkipElement)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "ShouldSkipElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedRules
// Il2CppName: ProcessMatchedRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ComputedStyle (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedRules)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* matchingSelectors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "SelectorMatchRecord")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "ProcessMatchedRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, matchingSelectors});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedVariables
// Il2CppName: ProcessMatchedVariables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleRule*)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedVariables)> {
  static const MethodInfo* get() {
    static auto* sheet = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleSheet")->byval_arg;
    static auto* rule = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleRule")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "ProcessMatchedVariables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sheet, rule});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::TraverseRecursive
// Il2CppName: TraverseRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*, int)>(&UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::TraverseRecursive)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*), "TraverseRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, depth});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
