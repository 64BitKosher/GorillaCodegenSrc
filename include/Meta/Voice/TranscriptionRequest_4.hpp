// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.VoiceRequest`4
#include "Meta/Voice/VoiceRequest_4.hpp"
// Including type: Meta.Voice.ITranscriptionRequest`4
#include "Meta/Voice/ITranscriptionRequest_4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Forward declaring namespace: Meta::Voice
namespace Meta::Voice {
  // Forward declaring type: ITranscriptionRequestOptions
  class ITranscriptionRequestOptions;
  // Forward declaring type: TranscriptionRequestEvents`1<TUnityEvent>
  template<typename TUnityEvent>
  class TranscriptionRequestEvents_1;
  // Forward declaring type: ITranscriptionRequestResults
  class ITranscriptionRequestResults;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: TranscriptionRequest`4<TUnityEvent, TOptions, TEvents, TResults>
  template<typename TUnityEvent, typename TOptions, typename TEvents, typename TResults>
  class TranscriptionRequest_4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::Voice::TranscriptionRequest_4, "Meta.Voice", "TranscriptionRequest`4");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.Voice.TranscriptionRequest`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TUnityEvent, typename TOptions, typename TEvents, typename TResults>
  class TranscriptionRequest_4 : public ::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>/*, public ::Meta::Voice::ITranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*/ {
    public:
    public:
    // private Meta.Voice.VoiceAudioInputState <AudioInputState>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    ::Meta::Voice::VoiceAudioInputState AudioInputState;
    // Field size check
    static_assert(sizeof(::Meta::Voice::VoiceAudioInputState) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::ITranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>
    operator ::Meta::Voice::ITranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>() noexcept {
      return *reinterpret_cast<::Meta::Voice::ITranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*>(this);
    }
    // Creating conversion operator: operator ::Meta::Voice::VoiceAudioInputState
    constexpr operator ::Meta::Voice::VoiceAudioInputState() const noexcept {
      return AudioInputState;
    }
    // Autogenerated instance field getter
    // Get instance field: private Meta.Voice.VoiceAudioInputState <AudioInputState>k__BackingField
    [[deprecated("Use field access instead!")]] ::Meta::Voice::VoiceAudioInputState& dyn_$AudioInputState$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::dyn_$AudioInputState$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<AudioInputState>k__BackingField"))->offset;
      return *reinterpret_cast<::Meta::Voice::VoiceAudioInputState*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Meta.Voice.VoiceAudioInputState get_AudioInputState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::Voice::VoiceAudioInputState get_AudioInputState() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::get_AudioInputState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::Meta::Voice::VoiceAudioInputState, false>(this, ___internal__method);
    }
    // private System.Void set_AudioInputState(Meta.Voice.VoiceAudioInputState value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_AudioInputState(::Meta::Voice::VoiceAudioInputState value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::set_AudioInputState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_AudioInputState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Boolean get_IsAudioInputActivated()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsAudioInputActivated() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::get_IsAudioInputActivated");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsListening()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsListening() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::get_IsListening");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_CanActivateAudio()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanActivateAudio() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::get_CanActivateAudio");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_CanDeactivateAudio()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanDeactivateAudio() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::get_CanDeactivateAudio");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // protected System.Void SetAudioInputState(Meta.Voice.VoiceAudioInputState newAudioInputState)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetAudioInputState(::Meta::Voice::VoiceAudioInputState newAudioInputState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::SetAudioInputState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newAudioInputState);
    }
    // public System.String get_Transcription()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Transcription() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::get_Transcription");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Transcription", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsFinalTranscription()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsFinalTranscription() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::get_IsFinalTranscription");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsFinalTranscription", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.String[] get_FinalTranscriptions()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::StringW> get_FinalTranscriptions() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::get_FinalTranscriptions");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_FinalTranscriptions", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<::StringW>, false>(this, ___internal__method);
    }
    // protected System.Void ApplyTranscription(System.String newTranscription, System.Boolean newIsFinal)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ApplyTranscription(::StringW newTranscription, bool newIsFinal) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::ApplyTranscription");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newTranscription, newIsFinal);
    }
    // protected System.Void OnTranscriptionChanged()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnTranscriptionChanged() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::OnTranscriptionChanged");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.String GetActivateAudioError()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetActivateAudioError() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::GetActivateAudioError");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Void ActivateAudio()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ActivateAudio() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::ActivateAudio");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnAudioActivation()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnAudioActivation() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::OnAudioActivation");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void HandleAudioActivation()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleAudioActivation() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::HandleAudioActivation");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnStartListening()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnStartListening() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::OnStartListening");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void DeactivateAudio()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DeactivateAudio() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::DeactivateAudio");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnAudioDeactivation()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnAudioDeactivation() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::OnAudioDeactivation");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void HandleAudioDeactivation()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleAudioDeactivation() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::HandleAudioDeactivation");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnStopListening()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnStopListening() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::OnStopListening");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void .ctor(TOptions newOptions, TEvents newEvents)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Meta.Voice.VoiceRequest`4
    // Base method: System.Void VoiceRequest_4::.ctor(TOptions newOptions, TEvents newEvents)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>* New_ctor(TOptions newOptions, TEvents newEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TranscriptionRequest_4<TUnityEvent, TOptions, TEvents, TResults>*, creationType>(newOptions, newEvents)));
    }
    // protected override System.Void AppendLogData(System.Text.StringBuilder log, System.Boolean warning)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Meta.Voice.VoiceRequest`4
    // Base method: System.Void VoiceRequest_4::AppendLogData(System.Text.StringBuilder log, System.Boolean warning)
    void AppendLogData(::System::Text::StringBuilder* log, bool warning) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::AppendLogData");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, log, warning);
    }
    // public override System.Void Send()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Meta.Voice.VoiceRequest`4
    // Base method: System.Void VoiceRequest_4::Send()
    void Send() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::Send");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected override System.Void OnSuccess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Meta.Voice.VoiceRequest`4
    // Base method: System.Void VoiceRequest_4::OnSuccess()
    void OnSuccess() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::OnSuccess");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public override System.Void Cancel(System.String reason)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Meta.Voice.VoiceRequest`4
    // Base method: System.Void VoiceRequest_4::Cancel(System.String reason)
    void Cancel(::StringW reason) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequest_4::Cancel");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, reason);
    }
  }; // Meta.Voice.TranscriptionRequest`4
  // Could not write size check! Type: Meta.Voice.TranscriptionRequest`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
