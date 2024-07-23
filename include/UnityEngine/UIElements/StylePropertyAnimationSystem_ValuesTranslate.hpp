// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.StylePropertyAnimationSystem
#include "UnityEngine/UIElements/StylePropertyAnimationSystem.hpp"
// Including type: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1
#include "UnityEngine/UIElements/StylePropertyAnimationSystem_Values_1.hpp"
// Including type: UnityEngine.UIElements.Translate
#include "UnityEngine/UIElements/Translate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Forward declaring namespace: UnityEngine::UIElements::StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Skipping declaration: StylePropertyId because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTranslate");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate
  // [TokenAttribute] Offset: FFFFFFFF
  class StylePropertyAnimationSystem::ValuesTranslate : public ::UnityEngine::UIElements::StylePropertyAnimationSystem::Values_1<::UnityEngine::UIElements::Translate> {
    public:
    public:
    // private readonly System.Func`3<UnityEngine.UIElements.Translate,UnityEngine.UIElements.Translate,System.Boolean> <SameFunc>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* SameFunc;
    // Field size check
    static_assert(sizeof(::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*
    constexpr operator ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*() const noexcept {
      return SameFunc;
    }
    // Get instance field reference: private readonly System.Func`3<UnityEngine.UIElements.Translate,UnityEngine.UIElements.Translate,System.Boolean> <SameFunc>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*& dyn_$SameFunc$k__BackingField();
    // public System.Func`3<UnityEngine.UIElements.Translate,UnityEngine.UIElements.Translate,System.Boolean> get_SameFunc()
    // Offset: 0x56AEB0C
    ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* get_SameFunc();
    // static private System.Boolean IsSame(UnityEngine.UIElements.Translate a, UnityEngine.UIElements.Translate b)
    // Offset: 0x56AEB14
    static bool IsSame(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b);
    // protected System.Boolean ConvertUnits(UnityEngine.UIElements.VisualElement owner, UnityEngine.UIElements.StyleSheets.StylePropertyId prop, ref UnityEngine.UIElements.Translate a, ref UnityEngine.UIElements.Translate b)
    // Offset: 0x56AEB90
    bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<::UnityEngine::UIElements::Translate> a, ByRef<::UnityEngine::UIElements::Translate> b);
    // static private UnityEngine.UIElements.Translate Lerp(UnityEngine.UIElements.Translate a, UnityEngine.UIElements.Translate b, System.Single t)
    // Offset: 0x56AED64
    static ::UnityEngine::UIElements::Translate Lerp(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b, float t);
    // protected override System.Void UpdateComputedStyle()
    // Offset: 0x56AEBB0
    // Implemented from: UnityEngine.UIElements.StylePropertyAnimationSystem/Values
    // Base method: System.Void Values::UpdateComputedStyle()
    void UpdateComputedStyle();
    // protected override System.Void UpdateComputedStyle(System.Int32 i)
    // Offset: 0x56AEC98
    // Implemented from: UnityEngine.UIElements.StylePropertyAnimationSystem/Values
    // Base method: System.Void Values::UpdateComputedStyle(System.Int32 i)
    void UpdateComputedStyle(int i);
    // protected override System.Void UpdateValues()
    // Offset: 0x56AEDE0
    // Implemented from: UnityEngine.UIElements.StylePropertyAnimationSystem/Values
    // Base method: System.Void Values::UpdateValues()
    void UpdateValues();
    // public System.Void .ctor()
    // Offset: 0x56AEEB4
    // Implemented from: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1
    // Base method: System.Void Values_1::.ctor()
    // Base method: System.Void Values::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StylePropertyAnimationSystem::ValuesTranslate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StylePropertyAnimationSystem::ValuesTranslate*, creationType>()));
    }
  }; // UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::get_SameFunc
// Il2CppName: get_SameFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* (UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::*)()>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::get_SameFunc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate*), "get_SameFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::IsSame
// Il2CppName: IsSame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate)>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::IsSame)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Translate")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Translate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate*), "IsSame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::ConvertUnits
// Il2CppName: ConvertUnits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ByRef<::UnityEngine::UIElements::Translate>, ByRef<::UnityEngine::UIElements::Translate>)>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::ConvertUnits)> {
  static const MethodInfo* get() {
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "StylePropertyId")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Translate")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Translate")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate*), "ConvertUnits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owner, prop, a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Translate (*)(::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, float)>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::Lerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Translate")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Translate")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::UpdateComputedStyle
// Il2CppName: UpdateComputedStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::*)()>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::UpdateComputedStyle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate*), "UpdateComputedStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::UpdateComputedStyle
// Il2CppName: UpdateComputedStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::*)(int)>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::UpdateComputedStyle)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate*), "UpdateComputedStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::UpdateValues
// Il2CppName: UpdateValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::*)()>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::UpdateValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate*), "UpdateValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesTranslate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
