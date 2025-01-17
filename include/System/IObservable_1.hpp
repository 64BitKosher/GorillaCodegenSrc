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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
  // Forward declaring type: IObserver`1<T>
  template<typename T>
  class IObserver_1;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IObservable`1<T>
  template<typename T>
  class IObservable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IObservable_1, "System", "IObservable`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IObservable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IObservable_1 {
    public:
    // public System.IDisposable Subscribe(System.IObserver`1<T> observer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IDisposable* Subscribe(::System::IObserver_1<T>* observer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IObservable_1::Subscribe");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IObservable_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal__method, observer);
    }
  }; // System.IObservable`1
  // Could not write size check! Type: System.IObservable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
