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
  // Forward declaring type: UxmlUnsignedIntAttributeDescription
  class UxmlUnsignedIntAttributeDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription*, "UnityEngine.UIElements", "UxmlUnsignedIntAttributeDescription");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UxmlUnsignedIntAttributeDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class UxmlUnsignedIntAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<uint> {
    public:
    // Nested type: ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription::$$c
    class $$c;
    // public System.UInt32 GetValueFromBag(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0x56C6214
    uint GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);
    // static private System.UInt32 ConvertValueToUInt(System.String v, System.UInt32 defaultValue)
    // Offset: 0x56C6368
    static uint ConvertValueToUInt(::StringW v, uint defaultValue);
    // public System.Void .ctor()
    // Offset: 0x56C6168
    // Implemented from: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
    // Base method: System.Void TypedUxmlAttributeDescription_1::.ctor()
    // Base method: System.Void UxmlAttributeDescription::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlUnsignedIntAttributeDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlUnsignedIntAttributeDescription*, creationType>()));
    }
  }; // UnityEngine.UIElements.UxmlUnsignedIntAttributeDescription
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription::GetValueFromBag
// Il2CppName: GetValueFromBag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription::GetValueFromBag)> {
  static const MethodInfo* get() {
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription*), "GetValueFromBag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bag, cc});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription::ConvertValueToUInt
// Il2CppName: ConvertValueToUInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::StringW, uint)>(&UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription::ConvertValueToUInt)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription*), "ConvertValueToUInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
