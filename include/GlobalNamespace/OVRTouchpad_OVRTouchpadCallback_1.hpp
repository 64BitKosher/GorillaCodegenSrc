// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRTouchpad
#include "GlobalNamespace/OVRTouchpad.hpp"
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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1, "", "OVRTouchpad/OVRTouchpadCallback`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRTouchpad/OVRTouchpadCallback`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TouchEvent>
  class OVRTouchpad::OVRTouchpadCallback_1 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRTouchpad::OVRTouchpadCallback_1<TouchEvent>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRTouchpad::OVRTouchpadCallback_1<TouchEvent>*, creationType>(object, method)));
    }
    // public System.Void Invoke(TouchEvent arg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invoke(TouchEvent arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1::Invoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1<TouchEvent>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, arg);
    }
    // public System.IAsyncResult BeginInvoke(TouchEvent arg, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(TouchEvent arg, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1<TouchEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, arg, callback, object);
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndInvoke(::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1<TouchEvent>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, result);
    }
  }; // OVRTouchpad/OVRTouchpadCallback`1
  // Could not write size check! Type: OVRTouchpad/OVRTouchpadCallback`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
