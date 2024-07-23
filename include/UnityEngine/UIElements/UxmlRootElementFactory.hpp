// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UxmlFactory`2
#include "UnityEngine/UIElements/UxmlFactory_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: UxmlRootElementTraits
  class UxmlRootElementTraits;
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
  // Skipping declaration: CreationContext because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlRootElementFactory
  class UxmlRootElementFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UxmlRootElementFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlRootElementFactory*, "UnityEngine.UIElements", "UxmlRootElementFactory");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UxmlRootElementFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class UxmlRootElementFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UxmlRootElementTraits*> {
    public:
    // public override System.String get_uxmlName()
    // Offset: 0x56C4574
    // Implemented from: UnityEngine.UIElements.BaseUxmlFactory`2
    // Base method: System.String BaseUxmlFactory_2::get_uxmlName()
    ::StringW get_uxmlName();
    // public override System.String get_uxmlQualifiedName()
    // Offset: 0x56C45B4
    // Implemented from: UnityEngine.UIElements.BaseUxmlFactory`2
    // Base method: System.String BaseUxmlFactory_2::get_uxmlQualifiedName()
    ::StringW get_uxmlQualifiedName();
    // public override UnityEngine.UIElements.VisualElement Create(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0x56C4628
    // Implemented from: UnityEngine.UIElements.UxmlFactory`2
    // Base method: UnityEngine.UIElements.VisualElement UxmlFactory_2::Create(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);
    // public System.Void .ctor()
    // Offset: 0x56C4630
    // Implemented from: UnityEngine.UIElements.UxmlFactory`2
    // Base method: System.Void UxmlFactory_2::.ctor()
    // Base method: System.Void BaseUxmlFactory_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlRootElementFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlRootElementFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlRootElementFactory*, creationType>()));
    }
  }; // UnityEngine.UIElements.UxmlRootElementFactory
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlRootElementFactory::get_uxmlName
// Il2CppName: get_uxmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UxmlRootElementFactory::*)()>(&UnityEngine::UIElements::UxmlRootElementFactory::get_uxmlName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlRootElementFactory*), "get_uxmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlRootElementFactory::get_uxmlQualifiedName
// Il2CppName: get_uxmlQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UxmlRootElementFactory::*)()>(&UnityEngine::UIElements::UxmlRootElementFactory::get_uxmlQualifiedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlRootElementFactory*), "get_uxmlQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlRootElementFactory::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::UxmlRootElementFactory::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::UxmlRootElementFactory::Create)> {
  static const MethodInfo* get() {
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlRootElementFactory*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bag, cc});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlRootElementFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!