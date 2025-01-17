// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Internal.PlayFabHttp
#include "PlayFab/Internal/PlayFabHttp.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::PlayFab::Internal::PlayFabHttp::ApiProcessingEvent_1, "PlayFab.Internal", "PlayFabHttp/ApiProcessingEvent`1");
// Type namespace: PlayFab.Internal
namespace PlayFab::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.Internal.PlayFabHttp/ApiProcessingEvent`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TEventArgs>
  class PlayFabHttp::ApiProcessingEvent_1 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabHttp::ApiProcessingEvent_1<TEventArgs>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::ApiProcessingEvent_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabHttp::ApiProcessingEvent_1<TEventArgs>*, creationType>(object, method)));
    }
    // public System.Void Invoke(TEventArgs e)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invoke(TEventArgs e) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::ApiProcessingEvent_1::Invoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::PlayFab::Internal::PlayFabHttp::ApiProcessingEvent_1<TEventArgs>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, e);
    }
    // public System.IAsyncResult BeginInvoke(TEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(TEventArgs e, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::ApiProcessingEvent_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::PlayFab::Internal::PlayFabHttp::ApiProcessingEvent_1<TEventArgs>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, e, callback, object);
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndInvoke(::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::ApiProcessingEvent_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::PlayFab::Internal::PlayFabHttp::ApiProcessingEvent_1<TEventArgs>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, result);
    }
  }; // PlayFab.Internal.PlayFabHttp/ApiProcessingEvent`1
  // Could not write size check! Type: PlayFab.Internal.PlayFabHttp/ApiProcessingEvent`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
