// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InlinedArray`1
#include "UnityEngine/InputSystem/Utilities/InlinedArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: CallbackArray`1<TDelegate>
  template<typename TDelegate>
  struct CallbackArray_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::CallbackArray_1, "UnityEngine.InputSystem.Utilities", "CallbackArray`1");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Utilities.CallbackArray`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename TDelegate>
  struct CallbackArray_1/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Boolean m_CannotMutateCallbacksArray
    // Size: 0x1
    // Offset: 0x0
    bool m_CannotMutateCallbacksArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> m_Callbacks
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_Callbacks;
    // private UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> m_CallbacksToAdd
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToAdd;
    // private UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> m_CallbacksToRemove
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToRemove;
    public:
    // Creating value type constructor for type: CallbackArray_1
    constexpr CallbackArray_1(bool m_CannotMutateCallbacksArray_ = {}, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_Callbacks_ = {}, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToAdd_ = {}, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToRemove_ = {}) noexcept : m_CannotMutateCallbacksArray{m_CannotMutateCallbacksArray_}, m_Callbacks{m_Callbacks_}, m_CallbacksToAdd{m_CallbacksToAdd_}, m_CallbacksToRemove{m_CallbacksToRemove_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_CannotMutateCallbacksArray
    [[deprecated("Use field access instead!")]] bool& dyn_m_CannotMutateCallbacksArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::dyn_m_CannotMutateCallbacksArray");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CannotMutateCallbacksArray"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> m_Callbacks
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>& dyn_m_Callbacks() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::dyn_m_Callbacks");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Callbacks"))->offset;
      return *reinterpret_cast<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> m_CallbacksToAdd
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>& dyn_m_CallbacksToAdd() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::dyn_m_CallbacksToAdd");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CallbacksToAdd"))->offset;
      return *reinterpret_cast<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> m_CallbacksToRemove
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>& dyn_m_CallbacksToRemove() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::dyn_m_CallbacksToRemove");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CallbacksToRemove"))->offset;
      return *reinterpret_cast<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::get_length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public TDelegate get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TDelegate get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<TDelegate, false>(this, ___internal__method, index);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void AddCallback(TDelegate dlg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddCallback(TDelegate dlg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::AddCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "AddCallback", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dlg)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, dlg);
    }
    // public System.Void RemoveCallback(TDelegate dlg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveCallback(TDelegate dlg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::RemoveCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "RemoveCallback", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dlg)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, dlg);
    }
    // public System.Void LockForChanges()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void LockForChanges() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::LockForChanges");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "LockForChanges", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void UnlockForChanges()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnlockForChanges() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::CallbackArray_1::UnlockForChanges");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "UnlockForChanges", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // UnityEngine.InputSystem.Utilities.CallbackArray`1
  // Could not write size check! Type: UnityEngine.InputSystem.Utilities.CallbackArray`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
