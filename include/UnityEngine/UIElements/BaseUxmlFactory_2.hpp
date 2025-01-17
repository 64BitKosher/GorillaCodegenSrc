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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BaseUxmlTraits
  class BaseUxmlTraits;
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BaseUxmlFactory`2<TCreatedType, TTraits>
  template<typename TCreatedType, typename TTraits>
  class BaseUxmlFactory_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseUxmlFactory_2, "UnityEngine.UIElements", "BaseUxmlFactory`2");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.BaseUxmlFactory`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TCreatedType, typename TTraits>
  class BaseUxmlFactory_2 : public ::Il2CppObject {
    public:
    public:
    // TTraits m_Traits
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TTraits m_Traits;
    public:
    // Autogenerated instance field getter
    // Get instance field: TTraits m_Traits
    [[deprecated("Use field access instead!")]] TTraits& dyn_m_Traits() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseUxmlFactory_2::dyn_m_Traits");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Traits"))->offset;
      return *reinterpret_cast<TTraits*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseUxmlFactory_2<TCreatedType, TTraits>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseUxmlFactory_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseUxmlFactory_2<TCreatedType, TTraits>*, creationType>()));
    }
    // public System.String get_uxmlName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_uxmlName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseUxmlFactory_2::get_uxmlName");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.String get_uxmlNamespace()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_uxmlNamespace() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseUxmlFactory_2::get_uxmlNamespace");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.String get_uxmlQualifiedName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_uxmlQualifiedName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseUxmlFactory_2::get_uxmlQualifiedName");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Type get_uxmlType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_uxmlType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseUxmlFactory_2::get_uxmlType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Type*, false>(this, ___internal__method);
    }
    // public System.Boolean AcceptsAttributeBag(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseUxmlFactory_2::AcceptsAttributeBag");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, bag, cc);
    }
  }; // UnityEngine.UIElements.BaseUxmlFactory`2
  // Could not write size check! Type: UnityEngine.UIElements.BaseUxmlFactory`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
