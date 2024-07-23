// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.UIElements.Hashes
#include "UnityEngine/UIElements/Hashes.hpp"
// Including type: UnityEngine.UIElements.StyleSelectorPart
#include "UnityEngine/UIElements/StyleSelectorPart.hpp"
// Including type: UnityEngine.UIElements.PseudoStates
#include "UnityEngine/UIElements/PseudoStates.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleRule
  class StyleRule;
  // Forward declaring type: StyleSelector
  class StyleSelector;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleComplexSelector
  class StyleComplexSelector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::StyleComplexSelector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleComplexSelector*, "UnityEngine.UIElements", "StyleComplexSelector");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleComplexSelector
  // [TokenAttribute] Offset: FFFFFFFF
  class StyleComplexSelector : public ::Il2CppObject/*, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::StyleComplexSelector::PseudoStateData
    struct PseudoStateData;
    // Nested type: ::UnityEngine::UIElements::StyleComplexSelector::$$c
    class $$c;
    // Size: 0x5
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
    // [TokenAttribute] Offset: FFFFFFFF
    struct PseudoStateData/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly UnityEngine.UIElements.PseudoStates state
      // Size: 0x4
      // Offset: 0x0
      ::UnityEngine::UIElements::PseudoStates state;
      // Field size check
      static_assert(sizeof(::UnityEngine::UIElements::PseudoStates) == 0x4);
      // public readonly System.Boolean negate
      // Size: 0x1
      // Offset: 0x4
      bool negate;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: PseudoStateData
      constexpr PseudoStateData(::UnityEngine::UIElements::PseudoStates state_ = {}, bool negate_ = {}) noexcept : state{state_}, negate{negate_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly UnityEngine.UIElements.PseudoStates state
      [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::PseudoStates& dyn_state();
      // Get instance field reference: public readonly System.Boolean negate
      [[deprecated("Use field access instead!")]] bool& dyn_negate();
      // public System.Void .ctor(UnityEngine.UIElements.PseudoStates state, System.Boolean negate)
      // Offset: 0x56B03E8
      // ABORTED: conflicts with another method.  PseudoStateData(::UnityEngine::UIElements::PseudoStates state, bool negate);
    }; // UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
    #pragma pack(pop)
    static check_size<sizeof(StyleComplexSelector::PseudoStateData), 4 + sizeof(bool)> __UnityEngine_UIElements_StyleComplexSelector_PseudoStateDataSizeCheck;
    static_assert(sizeof(StyleComplexSelector::PseudoStateData) == 0x5);
    public:
    // public UnityEngine.UIElements.Hashes ancestorHashes
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::UIElements::Hashes ancestorHashes;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Hashes) == 0x4);
    // Padding between fields: ancestorHashes and: m_Specificity
    char __padding0[0xC] = {};
    // private System.Int32 m_Specificity
    // Size: 0x4
    // Offset: 0x20
    int m_Specificity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Specificity and: rule
    char __padding1[0x4] = {};
    // private UnityEngine.UIElements.StyleRule <rule>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UIElements::StyleRule* rule;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleRule*) == 0x8);
    // private System.Boolean m_isSimple
    // Size: 0x1
    // Offset: 0x30
    bool m_isSimple;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isSimple and: m_Selectors
    char __padding3[0x7] = {};
    // private UnityEngine.UIElements.StyleSelector[] m_Selectors
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::UIElements::StyleSelector*> m_Selectors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::UIElements::StyleSelector*>) == 0x8);
    // System.Int32 ruleIndex
    // Size: 0x4
    // Offset: 0x40
    int ruleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ruleIndex and: nextInTable
    char __padding5[0x4] = {};
    // UnityEngine.UIElements.StyleComplexSelector nextInTable
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::UIElements::StyleComplexSelector* nextInTable;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleComplexSelector*) == 0x8);
    // System.Int32 orderInStyleSheet
    // Size: 0x4
    // Offset: 0x50
    int orderInStyleSheet;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData> s_PseudoStates
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector::PseudoStateData>* _get_s_PseudoStates();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData> s_PseudoStates
    static void _set_s_PseudoStates(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector::PseudoStateData>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart> m_HashList
    static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* _get_m_HashList();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart> m_HashList
    static void _set_m_HashList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* value);
    // Get instance field reference: public UnityEngine.UIElements.Hashes ancestorHashes
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Hashes& dyn_ancestorHashes();
    // Get instance field reference: private System.Int32 m_Specificity
    [[deprecated("Use field access instead!")]] int& dyn_m_Specificity();
    // Get instance field reference: private UnityEngine.UIElements.StyleRule <rule>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleRule*& dyn_$rule$k__BackingField();
    // Get instance field reference: private System.Boolean m_isSimple
    [[deprecated("Use field access instead!")]] bool& dyn_m_isSimple();
    // Get instance field reference: private UnityEngine.UIElements.StyleSelector[] m_Selectors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::UIElements::StyleSelector*>& dyn_m_Selectors();
    // Get instance field reference: System.Int32 ruleIndex
    [[deprecated("Use field access instead!")]] int& dyn_ruleIndex();
    // Get instance field reference: UnityEngine.UIElements.StyleComplexSelector nextInTable
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleComplexSelector*& dyn_nextInTable();
    // Get instance field reference: System.Int32 orderInStyleSheet
    [[deprecated("Use field access instead!")]] int& dyn_orderInStyleSheet();
    // public System.Int32 get_specificity()
    // Offset: 0x56AFE7C
    int get_specificity();
    // public UnityEngine.UIElements.StyleRule get_rule()
    // Offset: 0x56AFE84
    ::UnityEngine::UIElements::StyleRule* get_rule();
    // System.Void set_rule(UnityEngine.UIElements.StyleRule value)
    // Offset: 0x56AFE8C
    void set_rule(::UnityEngine::UIElements::StyleRule* value);
    // public System.Boolean get_isSimple()
    // Offset: 0x56AFE94
    bool get_isSimple();
    // public UnityEngine.UIElements.StyleSelector[] get_selectors()
    // Offset: 0x56AFE9C
    ::ArrayW<::UnityEngine::UIElements::StyleSelector*> get_selectors();
    // System.Void set_selectors(UnityEngine.UIElements.StyleSelector[] value)
    // Offset: 0x56AFEA4
    void set_selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*> value);
    // public System.Void OnBeforeSerialize()
    // Offset: 0x56AFEE8
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x56AFEEC
    void OnAfterDeserialize();
    // System.Void CachePseudoStateMasks()
    // Offset: 0x56AFF14
    void CachePseudoStateMasks();
    // static private System.Int32 StyleSelectorPartCompare(UnityEngine.UIElements.StyleSelectorPart x, UnityEngine.UIElements.StyleSelectorPart y)
    // Offset: 0x56B0588
    static int StyleSelectorPartCompare(::UnityEngine::UIElements::StyleSelectorPart x, ::UnityEngine::UIElements::StyleSelectorPart y);
    // System.Void CalculateHashes()
    // Offset: 0x56B05D4
    void CalculateHashes();
    // public System.Void .ctor()
    // Offset: 0x56B0A98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StyleComplexSelector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::StyleComplexSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StyleComplexSelector*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x56B0AA0
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x56B0410
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.StyleComplexSelector
  #pragma pack(pop)
  static check_size<sizeof(StyleComplexSelector), 80 + sizeof(int)> __UnityEngine_UIElements_StyleComplexSelectorSizeCheck;
  static_assert(sizeof(StyleComplexSelector) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleComplexSelector::PseudoStateData, "UnityEngine.UIElements", "StyleComplexSelector/PseudoStateData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::get_specificity
// Il2CppName: get_specificity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::get_specificity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "get_specificity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::get_rule
// Il2CppName: get_rule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleRule* (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::get_rule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "get_rule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::set_rule
// Il2CppName: set_rule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleComplexSelector::*)(::UnityEngine::UIElements::StyleRule*)>(&UnityEngine::UIElements::StyleComplexSelector::set_rule)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleRule")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "set_rule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::get_isSimple
// Il2CppName: get_isSimple
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::get_isSimple)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "get_isSimple", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::get_selectors
// Il2CppName: get_selectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleSelector*> (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::get_selectors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "get_selectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::set_selectors
// Il2CppName: set_selectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleComplexSelector::*)(::ArrayW<::UnityEngine::UIElements::StyleSelector*>)>(&UnityEngine::UIElements::StyleComplexSelector::set_selectors)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleSelector"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "set_selectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::CachePseudoStateMasks
// Il2CppName: CachePseudoStateMasks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::CachePseudoStateMasks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "CachePseudoStateMasks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::StyleSelectorPartCompare
// Il2CppName: StyleSelectorPartCompare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::UIElements::StyleSelectorPart, ::UnityEngine::UIElements::StyleSelectorPart)>(&UnityEngine::UIElements::StyleComplexSelector::StyleSelectorPartCompare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleSelectorPart")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleSelectorPart")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "StyleSelectorPartCompare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::CalculateHashes
// Il2CppName: CalculateHashes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::CalculateHashes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "CalculateHashes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::StyleComplexSelector::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleComplexSelector::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StyleComplexSelector::*)()>(&UnityEngine::UIElements::StyleComplexSelector::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleComplexSelector*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
