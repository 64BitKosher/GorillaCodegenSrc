// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
#include "UnityEngine/UIElements/TypedUxmlAttributeDescription_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
  // Skipping declaration: CreationContext because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlDoubleAttributeDescription
  class UxmlDoubleAttributeDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UxmlDoubleAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlDoubleAttributeDescription*, "UnityEngine.UIElements", "UxmlDoubleAttributeDescription");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UxmlDoubleAttributeDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class UxmlDoubleAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<double> {
    public:
    // Nested type: ::UnityEngine::UIElements::UxmlDoubleAttributeDescription::$$c
    class $$c;
    // public System.Double GetValueFromBag(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0x56C5A6C
    double GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);
    // static private System.Double ConvertValueToDouble(System.String v, System.Double defaultValue)
    // Offset: 0x56C5BC0
    static double ConvertValueToDouble(::StringW v, double defaultValue);
    // public System.Void .ctor()
    // Offset: 0x56C59C0
    // Implemented from: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
    // Base method: System.Void TypedUxmlAttributeDescription_1::.ctor()
    // Base method: System.Void UxmlAttributeDescription::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlDoubleAttributeDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlDoubleAttributeDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlDoubleAttributeDescription*, creationType>()));
    }
  }; // UnityEngine.UIElements.UxmlDoubleAttributeDescription
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlDoubleAttributeDescription::GetValueFromBag
// Il2CppName: GetValueFromBag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::UIElements::UxmlDoubleAttributeDescription::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::UxmlDoubleAttributeDescription::GetValueFromBag)> {
  static const MethodInfo* get() {
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlDoubleAttributeDescription*), "GetValueFromBag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bag, cc});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlDoubleAttributeDescription::ConvertValueToDouble
// Il2CppName: ConvertValueToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::StringW, double)>(&UnityEngine::UIElements::UxmlDoubleAttributeDescription::ConvertValueToDouble)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlDoubleAttributeDescription*), "ConvertValueToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlDoubleAttributeDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
