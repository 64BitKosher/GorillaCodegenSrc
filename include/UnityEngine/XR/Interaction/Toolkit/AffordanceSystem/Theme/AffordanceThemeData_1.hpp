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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
  // Forward declaring type: AffordanceThemeData`1<T>
  template<typename T>
  class AffordanceThemeData_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme", "AffordanceThemeData`1");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AffordanceThemeData_1 : public ::Il2CppObject {
    public:
    public:
    // public System.String stateName
    // Size: 0x8
    // Offset: 0x0
    ::StringW stateName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public T animationStateStartValue
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T animationStateStartValue;
    // public T animationStateEndValue
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T animationStateEndValue;
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.String stateName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_stateName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1::dyn_stateName");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "stateName"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T animationStateStartValue
    [[deprecated("Use field access instead!")]] T& dyn_animationStateStartValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1::dyn_animationStateStartValue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "animationStateStartValue"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T animationStateEndValue
    [[deprecated("Use field access instead!")]] T& dyn_animationStateEndValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1::dyn_animationStateEndValue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "animationStateEndValue"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AffordanceThemeData_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AffordanceThemeData_1<T>*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1
  // Could not write size check! Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
