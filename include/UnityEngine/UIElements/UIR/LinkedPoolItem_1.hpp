// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: LinkedPoolItem`1<T>
  template<typename T>
  class LinkedPoolItem_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::LinkedPoolItem_1, "UnityEngine.UIElements.UIR", "LinkedPoolItem`1");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.LinkedPoolItem`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class LinkedPoolItem_1 : public ::Il2CppObject {
    public:
    public:
    // T poolNext
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T poolNext;
    public:
    // Autogenerated instance field getter
    // Get instance field: T poolNext
    [[deprecated("Use field access instead!")]] T& dyn_poolNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPoolItem_1::dyn_poolNext");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "poolNext"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedPoolItem_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPoolItem_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedPoolItem_1<T>*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIR.LinkedPoolItem`1
  // Could not write size check! Type: UnityEngine.UIElements.UIR.LinkedPoolItem`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
