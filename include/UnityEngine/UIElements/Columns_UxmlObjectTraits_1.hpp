// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.Columns
#include "UnityEngine/UIElements/Columns.hpp"
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
  // Forward declaring type: UxmlStringAttributeDescription
  class UxmlStringAttributeDescription;
  // Forward declaring type: UxmlEnumAttributeDescription`1<T>
  template<typename T>
  class UxmlEnumAttributeDescription_1;
  // Forward declaring type: UxmlBoolAttributeDescription
  class UxmlBoolAttributeDescription;
  // Forward declaring type: UxmlObjectListAttributeDescription`1<T>
  template<typename T>
  class UxmlObjectListAttributeDescription_1;
  // Forward declaring type: Column
  class Column;
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Columns::UxmlObjectTraits_1, "UnityEngine.UIElements", "Columns/UxmlObjectTraits`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.Columns/UxmlObjectTraits`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Columns::UxmlObjectTraits_1 : public ::UnityEngine::UIElements::UxmlObjectTraits_1<T> {
    public:
    public:
    // private readonly UnityEngine.UIElements.UxmlStringAttributeDescription m_PrimaryColumnName
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_PrimaryColumnName;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlStringAttributeDescription*) == 0x8);
    // private readonly UnityEngine.UIElements.UxmlEnumAttributeDescription`1<UnityEngine.UIElements.Columns/StretchMode> m_StretchMode
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns::StretchMode>* m_StretchMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns::StretchMode>*) == 0x8);
    // private readonly UnityEngine.UIElements.UxmlBoolAttributeDescription m_Reorderable
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Reorderable;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlBoolAttributeDescription*) == 0x8);
    // private readonly UnityEngine.UIElements.UxmlBoolAttributeDescription m_Resizable
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Resizable;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlBoolAttributeDescription*) == 0x8);
    // private readonly UnityEngine.UIElements.UxmlBoolAttributeDescription m_ResizePreview
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ResizePreview;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlBoolAttributeDescription*) == 0x8);
    // private readonly UnityEngine.UIElements.UxmlObjectListAttributeDescription`1<UnityEngine.UIElements.Column> m_Columns
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>* m_Columns;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>*) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.UxmlStringAttributeDescription m_PrimaryColumnName
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlStringAttributeDescription*& dyn_m_PrimaryColumnName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::UxmlObjectTraits_1::dyn_m_PrimaryColumnName");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_PrimaryColumnName"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlStringAttributeDescription**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.UxmlEnumAttributeDescription`1<UnityEngine.UIElements.Columns/StretchMode> m_StretchMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns::StretchMode>*& dyn_m_StretchMode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::UxmlObjectTraits_1::dyn_m_StretchMode");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_StretchMode"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns::StretchMode>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.UxmlBoolAttributeDescription m_Reorderable
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& dyn_m_Reorderable() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::UxmlObjectTraits_1::dyn_m_Reorderable");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Reorderable"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlBoolAttributeDescription**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.UxmlBoolAttributeDescription m_Resizable
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& dyn_m_Resizable() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::UxmlObjectTraits_1::dyn_m_Resizable");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Resizable"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlBoolAttributeDescription**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.UxmlBoolAttributeDescription m_ResizePreview
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& dyn_m_ResizePreview() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::UxmlObjectTraits_1::dyn_m_ResizePreview");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ResizePreview"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlBoolAttributeDescription**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.UxmlObjectListAttributeDescription`1<UnityEngine.UIElements.Column> m_Columns
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>*& dyn_m_Columns() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::UxmlObjectTraits_1::dyn_m_Columns");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Columns"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public override System.Void Init(ref T obj, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.UxmlObjectTraits`1
    // Base method: System.Void UxmlObjectTraits_1::Init(ref T obj, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    void Init(ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::UxmlObjectTraits_1::Init");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::UxmlObjectTraits_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(obj), bag, cc);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.UxmlObjectTraits`1
    // Base method: System.Void UxmlObjectTraits_1::.ctor()
    // Base method: System.Void BaseUxmlTraits::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Columns::UxmlObjectTraits_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::UxmlObjectTraits_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Columns::UxmlObjectTraits_1<T>*, creationType>()));
    }
  }; // UnityEngine.UIElements.Columns/UxmlObjectTraits`1
  // Could not write size check! Type: UnityEngine.UIElements.Columns/UxmlObjectTraits`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
