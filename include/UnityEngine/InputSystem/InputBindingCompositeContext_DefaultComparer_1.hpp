// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputBindingCompositeContext
#include "UnityEngine/InputSystem/InputBindingCompositeContext.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::InputBindingCompositeContext::DefaultComparer_1, "UnityEngine.InputSystem", "InputBindingCompositeContext/DefaultComparer`1");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputBindingCompositeContext/DefaultComparer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  struct InputBindingCompositeContext::DefaultComparer_1/*, public ::System::ValueType, public ::System::Collections::Generic::IComparer_1<TValue>*/ {
    public:
    // Creating value type constructor for type: DefaultComparer_1
    constexpr DefaultComparer_1() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<TValue>
    operator ::System::Collections::Generic::IComparer_1<TValue>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<TValue>*>(this);
    }
    // public System.Int32 Compare(TValue x, TValue y)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Compare(TValue x, TValue y) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingCompositeContext::DefaultComparer_1::Compare");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::UnityEngine::InputSystem::InputBindingCompositeContext::DefaultComparer_1<TValue>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, x, y);
    }
  }; // UnityEngine.InputSystem.InputBindingCompositeContext/DefaultComparer`1
  // Could not write size check! Type: UnityEngine.InputSystem.InputBindingCompositeContext/DefaultComparer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
