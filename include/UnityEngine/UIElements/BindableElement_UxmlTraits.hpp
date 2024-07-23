// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BindableElement
#include "UnityEngine/UIElements/BindableElement.hpp"
// Including type: UnityEngine.UIElements.VisualElement/UxmlTraits
#include "UnityEngine/UIElements/VisualElement_UxmlTraits.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlStringAttributeDescription
  class UxmlStringAttributeDescription;
  // Skipping declaration: VisualElement because it is already included!
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
  // Forward declaring type: CreationContext
  struct CreationContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::BindableElement::UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindableElement::UxmlTraits*, "UnityEngine.UIElements", "BindableElement/UxmlTraits");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.BindableElement/UxmlTraits
  // [TokenAttribute] Offset: FFFFFFFF
  class BindableElement::UxmlTraits : public ::UnityEngine::UIElements::VisualElement::UxmlTraits {
    public:
    public:
    // private UnityEngine.UIElements.UxmlStringAttributeDescription m_PropertyPath
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_PropertyPath;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlStringAttributeDescription*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UIElements.UxmlStringAttributeDescription m_PropertyPath
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlStringAttributeDescription*& dyn_m_PropertyPath();
    // public System.Void .ctor()
    // Offset: 0x5593860
    // Implemented from: UnityEngine.UIElements.VisualElement/UxmlTraits
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void BaseUxmlTraits::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindableElement::UxmlTraits* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BindableElement::UxmlTraits::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindableElement::UxmlTraits*, creationType>()));
    }
    // public override System.Void Init(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0x55938F8
    // Implemented from: UnityEngine.UIElements.VisualElement/UxmlTraits
    // Base method: System.Void UxmlTraits::Init(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);
  }; // UnityEngine.UIElements.BindableElement/UxmlTraits
  #pragma pack(pop)
  static check_size<sizeof(BindableElement::UxmlTraits), 112 + sizeof(::UnityEngine::UIElements::UxmlStringAttributeDescription*)> __UnityEngine_UIElements_BindableElement_UxmlTraitsSizeCheck;
  static_assert(sizeof(BindableElement::UxmlTraits) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BindableElement::UxmlTraits::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::BindableElement::UxmlTraits::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BindableElement::UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::BindableElement::UxmlTraits::Init)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BindableElement::UxmlTraits*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, bag, cc});
  }
};
