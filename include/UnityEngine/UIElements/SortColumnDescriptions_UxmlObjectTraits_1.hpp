// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.SortColumnDescriptions
#include "UnityEngine/UIElements/SortColumnDescriptions.hpp"
// Including type: UnityEngine.UIElements.UxmlObjectTraits`1
#include "UnityEngine/UIElements/UxmlObjectTraits_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlObjectListAttributeDescription`1<T>
  template<typename T>
  class UxmlObjectListAttributeDescription_1;
  // Forward declaring type: SortColumnDescription
  class SortColumnDescription;
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::SortColumnDescriptions::UxmlObjectTraits_1, "UnityEngine.UIElements", "SortColumnDescriptions/UxmlObjectTraits`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.SortColumnDescriptions/UxmlObjectTraits`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class SortColumnDescriptions::UxmlObjectTraits_1 : public ::UnityEngine::UIElements::UxmlObjectTraits_1<T> {
    public:
    public:
    // private readonly UnityEngine.UIElements.UxmlObjectListAttributeDescription`1<UnityEngine.UIElements.SortColumnDescription> m_SortColumnDescriptions
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortColumnDescriptions;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.UxmlObjectListAttributeDescription`1<UnityEngine.UIElements.SortColumnDescription> m_SortColumnDescriptions
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*& dyn_m_SortColumnDescriptions() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::SortColumnDescriptions::UxmlObjectTraits_1::dyn_m_SortColumnDescriptions");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_SortColumnDescriptions"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public override System.Void Init(ref T obj, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.UxmlObjectTraits`1
    // Base method: System.Void UxmlObjectTraits_1::Init(ref T obj, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    void Init(ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::SortColumnDescriptions::UxmlObjectTraits_1::Init");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::UxmlObjectTraits_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(obj), bag, cc);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.UxmlObjectTraits`1
    // Base method: System.Void UxmlObjectTraits_1::.ctor()
    // Base method: System.Void BaseUxmlTraits::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortColumnDescriptions::UxmlObjectTraits_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::SortColumnDescriptions::UxmlObjectTraits_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortColumnDescriptions::UxmlObjectTraits_1<T>*, creationType>()));
    }
  }; // UnityEngine.UIElements.SortColumnDescriptions/UxmlObjectTraits`1
  // Could not write size check! Type: UnityEngine.UIElements.SortColumnDescriptions/UxmlObjectTraits`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
