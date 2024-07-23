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
  // Skipping declaration: Select because it is already included!
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: SelectManyObservable`2<TSource, TResult>
  template<typename TSource, typename TResult>
  class SelectManyObservable_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2, "UnityEngine.InputSystem.Utilities", "SelectManyObservable`2");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Utilities.SelectManyObservable`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource, typename TResult>
  class SelectManyObservable_2 : public ::Il2CppObject/*, public ::System::IObservable_1<TResult>*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::Select<TSource, TResult>
    class Select;
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.InputSystem.Utilities.SelectManyObservable`2/Select
    // [TokenAttribute] Offset: FFFFFFFF
    class Select : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public ::System::IObserver_1<TSource>*/ {
      public:
      using declaring_type = SelectManyObservable_2<TSource, TResult>*;
      static constexpr std::string_view NESTED_NAME = "Select";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private UnityEngine.InputSystem.Utilities.SelectManyObservable`2<TSource,TResult> m_Observable
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* m_Observable;
      // Field size check
      static_assert(sizeof(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*) == 0x8);
      // private readonly System.IObserver`1<TResult> m_Observer
      // Size: 0x8
      // Offset: 0x0
      ::System::IObserver_1<TResult>* m_Observer;
      // Field size check
      static_assert(sizeof(::System::IObserver_1<TResult>*) == 0x8);
      public:
      // Creating interface conversion operator: operator ::System::IObserver_1<TSource>
      operator ::System::IObserver_1<TSource>() noexcept {
        return *reinterpret_cast<::System::IObserver_1<TSource>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private UnityEngine.InputSystem.Utilities.SelectManyObservable`2<TSource,TResult> m_Observable
      [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*& dyn_m_Observable() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::Select::dyn_m_Observable");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Observable"))->offset;
        return *reinterpret_cast<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.IObserver`1<TResult> m_Observer
      [[deprecated("Use field access instead!")]] ::System::IObserver_1<TResult>*& dyn_m_Observer() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::Select::dyn_m_Observer");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Observer"))->offset;
        return *reinterpret_cast<::System::IObserver_1<TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(UnityEngine.InputSystem.Utilities.SelectManyObservable`2<TSource,TResult> observable, System.IObserver`1<TResult> observer)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename SelectManyObservable_2<TSource, TResult>::Select* New_ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable, ::System::IObserver_1<TResult>* observer) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::Select::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename SelectManyObservable_2<TSource, TResult>::Select*, creationType>(observable, observer)));
      }
      // public System.Void OnCompleted()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnCompleted() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::Select::OnCompleted");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::Select*), -1)));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Void OnError(System.Exception error)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnError(::System::Exception* error) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::Select::OnError");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::Select*), -1)));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, error);
      }
      // public System.Void OnNext(TSource evt)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnNext(TSource evt) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::Select::OnNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::Select*), -1)));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt);
      }
    }; // UnityEngine.InputSystem.Utilities.SelectManyObservable`2/Select
    // Could not write size check! Type: UnityEngine.InputSystem.Utilities.SelectManyObservable`2/Select is generic, or has no fields that are valid for size checks!
    public:
    // private readonly System.IObservable`1<TSource> m_Source
    // Size: 0x8
    // Offset: 0x0
    ::System::IObservable_1<TSource>* m_Source;
    // Field size check
    static_assert(sizeof(::System::IObservable_1<TSource>*) == 0x8);
    // private readonly System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> m_Filter
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* m_Filter;
    // Field size check
    static_assert(sizeof(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IObservable_1<TResult>
    operator ::System::IObservable_1<TResult>() noexcept {
      return *reinterpret_cast<::System::IObservable_1<TResult>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.IObservable`1<TSource> m_Source
    [[deprecated("Use field access instead!")]] ::System::IObservable_1<TSource>*& dyn_m_Source() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::dyn_m_Source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Source"))->offset;
      return *reinterpret_cast<::System::IObservable_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> m_Filter
    [[deprecated("Use field access instead!")]] ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*& dyn_m_Filter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::dyn_m_Filter");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Filter"))->offset;
      return *reinterpret_cast<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.IObservable`1<TSource> source, System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> filter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectManyObservable_2<TSource, TResult>* New_ctor(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectManyObservable_2<TSource, TResult>*, creationType>(source, filter)));
    }
    // public System.IDisposable Subscribe(System.IObserver`1<TResult> observer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IDisposable* Subscribe(::System::IObserver_1<TResult>* observer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::SelectManyObservable_2::Subscribe");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal__method, observer);
    }
  }; // UnityEngine.InputSystem.Utilities.SelectManyObservable`2
  // Could not write size check! Type: UnityEngine.InputSystem.Utilities.SelectManyObservable`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"