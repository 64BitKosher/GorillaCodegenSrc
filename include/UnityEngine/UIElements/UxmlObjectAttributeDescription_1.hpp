// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.CreationContext
#include "UnityEngine/UIElements/CreationContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlObjectAttributeDescription`1<T>
  template<typename T>
  class UxmlObjectAttributeDescription_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1, "UnityEngine.UIElements", "UxmlObjectAttributeDescription`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UxmlObjectAttributeDescription`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class UxmlObjectAttributeDescription_1 : public ::Il2CppObject {
    public:
    public:
    // private T <defaultValue>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T defaultValue;
    public:
    // Autogenerated instance field getter
    // Get instance field: private T <defaultValue>k__BackingField
    [[deprecated("Use field access instead!")]] T& dyn_$defaultValue$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlObjectAttributeDescription_1::dyn_$defaultValue$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<defaultValue>k__BackingField"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_defaultValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_defaultValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlObjectAttributeDescription_1::get_defaultValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_defaultValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T GetValueFromBag(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlObjectAttributeDescription_1::GetValueFromBag");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, bag, cc);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlObjectAttributeDescription_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlObjectAttributeDescription_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlObjectAttributeDescription_1<T>*, creationType>()));
    }
  }; // UnityEngine.UIElements.UxmlObjectAttributeDescription`1
  // Could not write size check! Type: UnityEngine.UIElements.UxmlObjectAttributeDescription`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
