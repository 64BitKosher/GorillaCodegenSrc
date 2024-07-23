// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IObservable`1
#include "System/IObservable_1.hpp"
// Including type: System.IObserver`1
#include "System/IObserver_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Skipping declaration: Where because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: IDisposable
  class IDisposable;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: WhereObservable`1<TValue>
  template<typename TValue>
  class WhereObservable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::WhereObservable_1, "UnityEngine.InputSystem.Utilities", "WhereObservable`1");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Utilities.WhereObservable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class WhereObservable_1 : public ::Il2CppObject/*, public ::System::IObservable_1<TValue>*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::Utilities::WhereObservable_1::Where<TValue>
    class Where;
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.InputSystem.Utilities.WhereObservable`1/Where
    // [TokenAttribute] Offset: FFFFFFFF
    class Where : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public ::System::IObserver_1<TValue>*/ {
      public:
      using declaring_type = WhereObservable_1<TValue>*;
      static constexpr std::string_view NESTED_NAME = "Where";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private UnityEngine.InputSystem.Utilities.WhereObservable`1<TValue> m_Observable
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* m_Observable;
      // Field size check
      static_assert(sizeof(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*) == 0x8);
      // private readonly System.IObserver`1<TValue> m_Observer
      // Size: 0x8
      // Offset: 0x0
      ::System::IObserver_1<TValue>* m_Observer;
      // Field size check
      static_assert(sizeof(::System::IObserver_1<TValue>*) == 0x8);
      public:
      // Creating interface conversion operator: operator ::System::IObserver_1<TValue>
      operator ::System::IObserver_1<TValue>() noexcept {
        return *reinterpret_cast<::System::IObserver_1<TValue>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private UnityEngine.InputSystem.Utilities.WhereObservable`1<TValue> m_Observable
      [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*& dyn_m_Observable() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::Where::dyn_m_Observable");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Observable"))->offset;
        return *reinterpret_cast<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.IObserver`1<TValue> m_Observer
      [[deprecated("Use field access instead!")]] ::System::IObserver_1<TValue>*& dyn_m_Observer() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::Where::dyn_m_Observer");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Observer"))->offset;
        return *reinterpret_cast<::System::IObserver_1<TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(UnityEngine.InputSystem.Utilities.WhereObservable`1<TValue> observable, System.IObserver`1<TValue> observer)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename WhereObservable_1<TValue>::Where* New_ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* observable, ::System::IObserver_1<TValue>* observer) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::Where::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename WhereObservable_1<TValue>::Where*, creationType>(observable, observer)));
      }
      // public System.Void OnCompleted()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnCompleted() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::Where::OnCompleted");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::Where*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Void OnError(System.Exception error)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnError(::System::Exception* error) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::Where::OnError");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::Where*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, error);
      }
      // public System.Void OnNext(TValue evt)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnNext(TValue evt) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::Where::OnNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::Where*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt);
      }
    }; // UnityEngine.InputSystem.Utilities.WhereObservable`1/Where
    // Could not write size check! Type: UnityEngine.InputSystem.Utilities.WhereObservable`1/Where is generic, or has no fields that are valid for size checks!
    public:
    // private readonly System.IObservable`1<TValue> m_Source
    // Size: 0x8
    // Offset: 0x0
    ::System::IObservable_1<TValue>* m_Source;
    // Field size check
    static_assert(sizeof(::System::IObservable_1<TValue>*) == 0x8);
    // private readonly System.Func`2<TValue,System.Boolean> m_Predicate
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TValue, bool>* m_Predicate;
    // Field size check
    static_assert(sizeof(::System::Func_2<TValue, bool>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IObservable_1<TValue>
    operator ::System::IObservable_1<TValue>() noexcept {
      return *reinterpret_cast<::System::IObservable_1<TValue>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.IObservable`1<TValue> m_Source
    [[deprecated("Use field access instead!")]] ::System::IObservable_1<TValue>*& dyn_m_Source() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::dyn_m_Source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Source"))->offset;
      return *reinterpret_cast<::System::IObservable_1<TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<TValue,System.Boolean> m_Predicate
    [[deprecated("Use field access instead!")]] ::System::Func_2<TValue, bool>*& dyn_m_Predicate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::dyn_m_Predicate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Predicate"))->offset;
      return *reinterpret_cast<::System::Func_2<TValue, bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.IObservable`1<TValue> source, System.Func`2<TValue,System.Boolean> predicate)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WhereObservable_1<TValue>* New_ctor(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WhereObservable_1<TValue>*, creationType>(source, predicate)));
    }
    // public System.IDisposable Subscribe(System.IObserver`1<TValue> observer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IDisposable* Subscribe(::System::IObserver_1<TValue>* observer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::WhereObservable_1::Subscribe");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal__method, observer);
    }
  }; // UnityEngine.InputSystem.Utilities.WhereObservable`1
  // Could not write size check! Type: UnityEngine.InputSystem.Utilities.WhereObservable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"