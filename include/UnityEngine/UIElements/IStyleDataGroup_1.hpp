// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IStyleDataGroup`1<T>
  template<typename T>
  class IStyleDataGroup_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IStyleDataGroup_1, "UnityEngine.UIElements", "IStyleDataGroup`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.IStyleDataGroup`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IStyleDataGroup_1 {
    public:
    // public T Copy()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Copy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::IStyleDataGroup_1::Copy");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::IStyleDataGroup_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void CopyFrom(ref T other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyFrom(ByRef<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::IStyleDataGroup_1::CopyFrom");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::IStyleDataGroup_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(other));
    }
  }; // UnityEngine.UIElements.IStyleDataGroup`1
  // Could not write size check! Type: UnityEngine.UIElements.IStyleDataGroup`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
