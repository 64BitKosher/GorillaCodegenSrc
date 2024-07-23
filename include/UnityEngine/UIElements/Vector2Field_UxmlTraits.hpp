// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.Vector2Field
#include "UnityEngine/UIElements/Vector2Field.hpp"
// Including type: UnityEngine.UIElements.BaseField`1/UxmlTraits
#include "UnityEngine/UIElements/BaseField_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlFloatAttributeDescription
  class UxmlFloatAttributeDescription;
  // Skipping declaration: VisualElement because it is already included!
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
  // Skipping declaration: CreationContext because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Vector2Field::UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector2Field::UxmlTraits*, "UnityEngine.UIElements", "Vector2Field/UxmlTraits");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.Vector2Field/UxmlTraits
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector2Field::UxmlTraits : public ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Vector2>::UxmlTraits {
    public:
    public:
    // private UnityEngine.UIElements.UxmlFloatAttributeDescription m_XValue
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_XValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlFloatAttributeDescription*) == 0x8);
    // private UnityEngine.UIElements.UxmlFloatAttributeDescription m_YValue
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_YValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlFloatAttributeDescription*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UIElements.UxmlFloatAttributeDescription m_XValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& dyn_m_XValue();
    // Get instance field reference: private UnityEngine.UIElements.UxmlFloatAttributeDescription m_YValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& dyn_m_YValue();
    // public override System.Void Init(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0x55B16FC
    // Implemented from: UnityEngine.UIElements.BaseField`1/UxmlTraits
    // Base method: System.Void UxmlTraits::Init(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);
    // public System.Void .ctor()
    // Offset: 0x55B1860
    // Implemented from: UnityEngine.UIElements.BaseField`1/UxmlTraits
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void BaseUxmlTraits::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Field::UxmlTraits* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Vector2Field::UxmlTraits::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Field::UxmlTraits*, creationType>()));
    }
  }; // UnityEngine.UIElements.Vector2Field/UxmlTraits
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Vector2Field::UxmlTraits::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Vector2Field::UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::Vector2Field::UxmlTraits::Init)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Vector2Field::UxmlTraits*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, bag, cc});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Vector2Field::UxmlTraits::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
