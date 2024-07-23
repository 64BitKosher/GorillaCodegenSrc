// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UxmlAsset
#include "UnityEngine/UIElements/UxmlAsset.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.UIElements.PickingMode
#include "UnityEngine/UIElements/PickingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: StyleSheet
  class StyleSheet;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElementAsset
  class VisualElementAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementAsset*, "UnityEngine.UIElements", "VisualElementAsset");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualElementAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class VisualElementAsset : public ::UnityEngine::UIElements::UxmlAsset/*, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    public:
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_RuleIndex
    // Size: 0x4
    // Offset: 0x38
    int m_RuleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_RuleIndex and: m_Text
    char __padding1[0x4] = {};
    // private System.String m_Text
    // Size: 0x8
    // Offset: 0x40
    ::StringW m_Text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.UIElements.PickingMode m_PickingMode
    // Size: 0x4
    // Offset: 0x48
    ::UnityEngine::UIElements::PickingMode m_PickingMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::PickingMode) == 0x4);
    // Padding between fields: m_PickingMode and: m_Classes
    char __padding3[0x4] = {};
    // private System.String[] m_Classes
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::StringW> m_Classes;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_StylesheetPaths
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::StringW>* m_StylesheetPaths;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> m_Stylesheets
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* m_Stylesheets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: private System.String m_Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Name();
    // Get instance field reference: private System.Int32 m_RuleIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_RuleIndex();
    // Get instance field reference: private System.String m_Text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Text();
    // Get instance field reference: private UnityEngine.UIElements.PickingMode m_PickingMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::PickingMode& dyn_m_PickingMode();
    // Get instance field reference: private System.String[] m_Classes
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_Classes();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_StylesheetPaths
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_m_StylesheetPaths();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> m_Stylesheets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*& dyn_m_Stylesheets();
    // public System.Int32 get_ruleIndex()
    // Offset: 0x56C8104
    int get_ruleIndex();
    // public System.String[] get_classes()
    // Offset: 0x56C810C
    ::ArrayW<::StringW> get_classes();
    // public System.Collections.Generic.List`1<System.String> get_stylesheetPaths()
    // Offset: 0x56C8114
    ::System::Collections::Generic::List_1<::StringW>* get_stylesheetPaths();
    // public System.Boolean get_hasStylesheetPaths()
    // Offset: 0x56C8198
    bool get_hasStylesheetPaths();
    // public System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> get_stylesheets()
    // Offset: 0x56C81A8
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* get_stylesheets();
    // public System.Boolean get_hasStylesheets()
    // Offset: 0x56C822C
    bool get_hasStylesheets();
    // public System.Void OnBeforeSerialize()
    // Offset: 0x56C823C
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x56C8240
    void OnAfterDeserialize();
  }; // UnityEngine.UIElements.VisualElementAsset
  #pragma pack(pop)
  static check_size<sizeof(VisualElementAsset), 96 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*)> __UnityEngine_UIElements_VisualElementAssetSizeCheck;
  static_assert(sizeof(VisualElementAsset) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementAsset::get_ruleIndex
// Il2CppName: get_ruleIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::VisualElementAsset::*)()>(&UnityEngine::UIElements::VisualElementAsset::get_ruleIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementAsset*), "get_ruleIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementAsset::get_classes
// Il2CppName: get_classes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::UIElements::VisualElementAsset::*)()>(&UnityEngine::UIElements::VisualElementAsset::get_classes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementAsset*), "get_classes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementAsset::get_stylesheetPaths
// Il2CppName: get_stylesheetPaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (UnityEngine::UIElements::VisualElementAsset::*)()>(&UnityEngine::UIElements::VisualElementAsset::get_stylesheetPaths)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementAsset*), "get_stylesheetPaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementAsset::get_hasStylesheetPaths
// Il2CppName: get_hasStylesheetPaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::VisualElementAsset::*)()>(&UnityEngine::UIElements::VisualElementAsset::get_hasStylesheetPaths)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementAsset*), "get_hasStylesheetPaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementAsset::get_stylesheets
// Il2CppName: get_stylesheets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* (UnityEngine::UIElements::VisualElementAsset::*)()>(&UnityEngine::UIElements::VisualElementAsset::get_stylesheets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementAsset*), "get_stylesheets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementAsset::get_hasStylesheets
// Il2CppName: get_hasStylesheets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::VisualElementAsset::*)()>(&UnityEngine::UIElements::VisualElementAsset::get_hasStylesheets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementAsset*), "get_hasStylesheets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementAsset::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualElementAsset::*)()>(&UnityEngine::UIElements::VisualElementAsset::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementAsset*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementAsset::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualElementAsset::*)()>(&UnityEngine::UIElements::VisualElementAsset::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementAsset*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
