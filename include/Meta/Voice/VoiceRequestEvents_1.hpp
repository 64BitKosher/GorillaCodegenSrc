// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.IVoiceRequestEvents`1
#include "Meta/Voice/IVoiceRequestEvents_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Completed forward declares
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: VoiceRequestEvents`1<TUnityEvent>
  template<typename TUnityEvent>
  class VoiceRequestEvents_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::Voice::VoiceRequestEvents_1, "Meta.Voice", "VoiceRequestEvents`1");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.Voice.VoiceRequestEvents`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TUnityEvent>
  class VoiceRequestEvents_1 : public ::Il2CppObject/*, public ::Meta::Voice::IVoiceRequestEvents_1<TUnityEvent>*/ {
    public:
    public:
    // private TUnityEvent _onStateChange
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onStateChange;
    // private TUnityEvent _onInit
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onInit;
    // private TUnityEvent _onSend
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onSend;
    // private TUnityEvent _onCancel
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onCancel;
    // private TUnityEvent _onFailed
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onFailed;
    // private TUnityEvent _onSuccess
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onSuccess;
    // private TUnityEvent _onComplete
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onComplete;
    // private TUnityEvent _onDownloadProgressChange
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onDownloadProgressChange;
    // private TUnityEvent _onUploadProgressChange
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TUnityEvent onUploadProgressChange;
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::IVoiceRequestEvents_1<TUnityEvent>
    operator ::Meta::Voice::IVoiceRequestEvents_1<TUnityEvent>() noexcept {
      return *reinterpret_cast<::Meta::Voice::IVoiceRequestEvents_1<TUnityEvent>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onStateChange
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onStateChange() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onStateChange");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onStateChange"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onInit
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onInit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onInit");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onInit"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onSend
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onSend() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onSend");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onSend"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onCancel
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onCancel() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onCancel");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onCancel"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onFailed
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onFailed() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onFailed");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onFailed"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onSuccess
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onSuccess() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onSuccess");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onSuccess"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onComplete
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onComplete() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onComplete");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onComplete"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onDownloadProgressChange
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onDownloadProgressChange() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onDownloadProgressChange");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onDownloadProgressChange"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TUnityEvent _onUploadProgressChange
    [[deprecated("Use field access instead!")]] TUnityEvent& dyn__onUploadProgressChange() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::dyn__onUploadProgressChange");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onUploadProgressChange"))->offset;
      return *reinterpret_cast<TUnityEvent*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TUnityEvent get_OnStateChange()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnStateChange() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnStateChange");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public TUnityEvent get_OnInit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnInit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnInit");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public TUnityEvent get_OnSend()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnSend() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnSend");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public TUnityEvent get_OnCancel()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnCancel() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnCancel");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public TUnityEvent get_OnFailed()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnFailed() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnFailed");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public TUnityEvent get_OnSuccess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnSuccess() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnSuccess");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public TUnityEvent get_OnComplete()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnComplete() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnComplete");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public TUnityEvent get_OnDownloadProgressChange()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnDownloadProgressChange() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnDownloadProgressChange");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public TUnityEvent get_OnUploadProgressChange()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TUnityEvent get_OnUploadProgressChange() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::get_OnUploadProgressChange");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TUnityEvent, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceRequestEvents_1<TUnityEvent>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequestEvents_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceRequestEvents_1<TUnityEvent>*, creationType>()));
    }
  }; // Meta.Voice.VoiceRequestEvents`1
  // Could not write size check! Type: Meta.Voice.VoiceRequestEvents`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
