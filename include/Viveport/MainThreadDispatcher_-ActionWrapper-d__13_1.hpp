// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.MainThreadDispatcher
#include "Viveport/MainThreadDispatcher.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1, "Viveport", "MainThreadDispatcher/<ActionWrapper>d__13`1");
// Type namespace: Viveport
namespace Viveport {
  // WARNING Size may be invalid!
  // Autogenerated type: Viveport.MainThreadDispatcher/<ActionWrapper>d__13`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T1>
  class MainThreadDispatcher::$ActionWrapper$d__13_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Action`1<T1> action
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T1>* action;
    // Field size check
    static_assert(sizeof(::System::Action_1<T1>*) == 0x8);
    // public T1 param1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 param1;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::dyn_$$1__state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::dyn_$$2__current");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<T1> action
    [[deprecated("Use field access instead!")]] ::System::Action_1<T1>*& dyn_action() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::dyn_action");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "action"))->offset;
      return *reinterpret_cast<::System::Action_1<T1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T1 param1
    [[deprecated("Use field access instead!")]] T1& dyn_param1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::dyn_param1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "param1"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainThreadDispatcher::$ActionWrapper$d__13_1<T1>* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainThreadDispatcher::$ActionWrapper$d__13_1<T1>*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_IDisposable_Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::System.IDisposable.Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1<T1>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Boolean MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::System.Collections.Generic.IEnumerator<System.Object>.get_Current");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1<T1>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Viveport::MainThreadDispatcher::$ActionWrapper$d__13_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
  }; // Viveport.MainThreadDispatcher/<ActionWrapper>d__13`1
  // Could not write size check! Type: Viveport.MainThreadDispatcher/<ActionWrapper>d__13`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
