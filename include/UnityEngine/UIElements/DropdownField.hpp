// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.PopupField`1
#include "UnityEngine/UIElements/PopupField_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DropdownField
  class DropdownField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::DropdownField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownField*, "UnityEngine.UIElements", "DropdownField");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.DropdownField
  // [TokenAttribute] Offset: FFFFFFFF
  class DropdownField : public ::UnityEngine::UIElements::PopupField_1<::StringW> {
    public:
    // Nested type: ::UnityEngine::UIElements::DropdownField::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::DropdownField::UxmlTraits
    class UxmlTraits;
    // public System.Void .ctor()
    // Offset: 0x55B4E0C
    // Implemented from: UnityEngine.UIElements.BindableElement
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DropdownField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DropdownField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DropdownField*, creationType>()));
    }
    // public System.Void .ctor(System.String label)
    // Offset: 0x55B4E14
    // Implemented from: UnityEngine.UIElements.PopupField`1
    // Base method: System.Void PopupField_1::.ctor(System.String label)
    // Base method: System.Void BasePopupField_2::.ctor(System.String label)
    // Base method: System.Void BaseField_1::.ctor(System.String label)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DropdownField* New_ctor(::StringW label) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DropdownField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DropdownField*, creationType>(label)));
    }
  }; // UnityEngine.UIElements.DropdownField
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::DropdownField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::DropdownField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
