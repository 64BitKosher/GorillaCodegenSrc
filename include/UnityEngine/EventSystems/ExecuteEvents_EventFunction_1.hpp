// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine/EventSystems/ExecuteEvents.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::EventSystems::ExecuteEvents::EventFunction_1, "UnityEngine.EventSystems", "ExecuteEvents/EventFunction`1");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.EventSystems.ExecuteEvents/EventFunction`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1>
  class ExecuteEvents::EventFunction_1 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecuteEvents::EventFunction_1<T1>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::ExecuteEvents::EventFunction_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecuteEvents::EventFunction_1<T1>*, creationType>(object, method)));
    }
    // public System.Void Invoke(T1 handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::ExecuteEvents::EventFunction_1::Invoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<T1>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, handler, eventData);
    }
    // public System.IAsyncResult BeginInvoke(T1 handler, UnityEngine.EventSystems.BaseEventData eventData, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData* eventData, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::ExecuteEvents::EventFunction_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, handler, eventData, callback, object);
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndInvoke(::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::ExecuteEvents::EventFunction_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<T1>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, result);
    }
  }; // UnityEngine.EventSystems.ExecuteEvents/EventFunction`1
  // Could not write size check! Type: UnityEngine.EventSystems.ExecuteEvents/EventFunction`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
