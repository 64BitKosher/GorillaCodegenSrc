// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionMap
#include "UnityEngine/InputSystem/InputActionMap.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.InputActionMap/BindingOverrideJson
#include "UnityEngine/InputSystem/InputActionMap_BindingOverrideJson.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap::BindingOverrideListJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideListJson");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputActionMap/BindingOverrideListJson
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputActionMap::BindingOverrideListJson/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionMap/BindingOverrideJson> bindings
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap::BindingOverrideJson>* bindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap::BindingOverrideJson>*) == 0x8);
    public:
    // Creating value type constructor for type: BindingOverrideListJson
    constexpr BindingOverrideListJson(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap::BindingOverrideJson>* bindings_ = {}) noexcept : bindings{bindings_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap::BindingOverrideJson>*
    constexpr operator ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap::BindingOverrideJson>*() const noexcept {
      return bindings;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionMap/BindingOverrideJson> bindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap::BindingOverrideJson>*& dyn_bindings();
  }; // UnityEngine.InputSystem.InputActionMap/BindingOverrideListJson
  #pragma pack(pop)
  static check_size<sizeof(InputActionMap::BindingOverrideListJson), 0 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap::BindingOverrideJson>*)> __UnityEngine_InputSystem_InputActionMap_BindingOverrideListJsonSizeCheck;
  static_assert(sizeof(InputActionMap::BindingOverrideListJson) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"