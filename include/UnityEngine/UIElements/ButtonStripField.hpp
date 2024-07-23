// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseField`1
#include "UnityEngine/UIElements/BaseField_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ButtonStripField
  class ButtonStripField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ButtonStripField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ButtonStripField*, "UnityEngine.UIElements", "ButtonStripField");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.ButtonStripField
  // [TokenAttribute] Offset: FFFFFFFF
  class ButtonStripField : public ::UnityEngine::UIElements::BaseField_1<int> {
    public:
    // Nested type: ::UnityEngine::UIElements::ButtonStripField::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::ButtonStripField::UxmlTraits
    class UxmlTraits;
    public:
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.Button> m_Buttons
    // Size: 0x8
    // Offset: 0x428
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* m_Buttons;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*
    constexpr operator ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*() const noexcept {
      return m_Buttons;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.Button> m_Buttons
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*& dyn_m_Buttons();
    // public System.Void SetValueWithoutNotify(System.Int32 newValue)
    // Offset: 0x55AF3F0
    void SetValueWithoutNotify(int newValue);
    // private System.Void RefreshButtonsState()
    // Offset: 0x55AF474
    void RefreshButtonsState();
    // public System.Void .ctor()
    // Offset: 0x55AF32C
    // Implemented from: UnityEngine.UIElements.BindableElement
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonStripField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ButtonStripField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonStripField*, creationType>()));
    }
  }; // UnityEngine.UIElements.ButtonStripField
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ButtonStripField::SetValueWithoutNotify
// Il2CppName: SetValueWithoutNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ButtonStripField::*)(int)>(&UnityEngine::UIElements::ButtonStripField::SetValueWithoutNotify)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ButtonStripField*), "SetValueWithoutNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ButtonStripField::RefreshButtonsState
// Il2CppName: RefreshButtonsState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ButtonStripField::*)()>(&UnityEngine::UIElements::ButtonStripField::RefreshButtonsState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ButtonStripField*), "RefreshButtonsState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ButtonStripField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
