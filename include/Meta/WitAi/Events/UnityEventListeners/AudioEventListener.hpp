// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Meta.WitAi.Interfaces.IAudioInputEvents
#include "Meta/WitAi/Interfaces/IAudioInputEvents.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Events
namespace Meta::WitAi::Events {
  // Forward declaring type: WitMicLevelChangedEvent
  class WitMicLevelChangedEvent;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Events.UnityEventListeners
namespace Meta::WitAi::Events::UnityEventListeners {
  // Forward declaring type: AudioEventListener
  class AudioEventListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener*, "Meta.WitAi.Events.UnityEventListeners", "AudioEventListener");
// Type namespace: Meta.WitAi.Events.UnityEventListeners
namespace Meta::WitAi::Events::UnityEventListeners {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Events.UnityEventListeners.AudioEventListener
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class AudioEventListener : public ::UnityEngine::MonoBehaviour/*, public ::Meta::WitAi::Interfaces::IAudioInputEvents*/ {
    public:
    public:
    // private Meta.WitAi.Events.WitMicLevelChangedEvent onMicAudioLevelChanged
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::Events::WitMicLevelChangedEvent* onMicAudioLevelChanged;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Events::WitMicLevelChangedEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent onMicStartedListening
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Events::UnityEvent* onMicStartedListening;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent onMicStoppedListening
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Events::UnityEvent* onMicStoppedListening;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private Meta.WitAi.Interfaces.IAudioInputEvents _events
    // Size: 0x8
    // Offset: 0x38
    ::Meta::WitAi::Interfaces::IAudioInputEvents* events;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Interfaces::IAudioInputEvents*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::Interfaces::IAudioInputEvents
    operator ::Meta::WitAi::Interfaces::IAudioInputEvents() noexcept {
      return *reinterpret_cast<::Meta::WitAi::Interfaces::IAudioInputEvents*>(this);
    }
    // Get instance field reference: private Meta.WitAi.Events.WitMicLevelChangedEvent onMicAudioLevelChanged
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Events::WitMicLevelChangedEvent*& dyn_onMicAudioLevelChanged();
    // Get instance field reference: private UnityEngine.Events.UnityEvent onMicStartedListening
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onMicStartedListening();
    // Get instance field reference: private UnityEngine.Events.UnityEvent onMicStoppedListening
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onMicStoppedListening();
    // Get instance field reference: private Meta.WitAi.Interfaces.IAudioInputEvents _events
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Interfaces::IAudioInputEvents*& dyn__events();
    // public Meta.WitAi.Events.WitMicLevelChangedEvent get_OnMicAudioLevelChanged()
    // Offset: 0x443C128
    ::Meta::WitAi::Events::WitMicLevelChangedEvent* get_OnMicAudioLevelChanged();
    // public UnityEngine.Events.UnityEvent get_OnMicStartedListening()
    // Offset: 0x443C130
    ::UnityEngine::Events::UnityEvent* get_OnMicStartedListening();
    // public UnityEngine.Events.UnityEvent get_OnMicStoppedListening()
    // Offset: 0x443C138
    ::UnityEngine::Events::UnityEvent* get_OnMicStoppedListening();
    // private Meta.WitAi.Interfaces.IAudioInputEvents get_AudioInputEvents()
    // Offset: 0x443C140
    ::Meta::WitAi::Interfaces::IAudioInputEvents* get_AudioInputEvents();
    // private System.Void OnEnable()
    // Offset: 0x443C220
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x443C4C8
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x443C770
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioEventListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::UnityEventListeners::AudioEventListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioEventListener*, creationType>()));
    }
  }; // Meta.WitAi.Events.UnityEventListeners.AudioEventListener
  #pragma pack(pop)
  static check_size<sizeof(AudioEventListener), 56 + sizeof(::Meta::WitAi::Interfaces::IAudioInputEvents*)> __Meta_WitAi_Events_UnityEventListeners_AudioEventListenerSizeCheck;
  static_assert(sizeof(AudioEventListener) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Events::UnityEventListeners::AudioEventListener::get_OnMicAudioLevelChanged
// Il2CppName: get_OnMicAudioLevelChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Events::WitMicLevelChangedEvent* (Meta::WitAi::Events::UnityEventListeners::AudioEventListener::*)()>(&Meta::WitAi::Events::UnityEventListeners::AudioEventListener::get_OnMicAudioLevelChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Events::UnityEventListeners::AudioEventListener*), "get_OnMicAudioLevelChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Events::UnityEventListeners::AudioEventListener::get_OnMicStartedListening
// Il2CppName: get_OnMicStartedListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Meta::WitAi::Events::UnityEventListeners::AudioEventListener::*)()>(&Meta::WitAi::Events::UnityEventListeners::AudioEventListener::get_OnMicStartedListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Events::UnityEventListeners::AudioEventListener*), "get_OnMicStartedListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Events::UnityEventListeners::AudioEventListener::get_OnMicStoppedListening
// Il2CppName: get_OnMicStoppedListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Meta::WitAi::Events::UnityEventListeners::AudioEventListener::*)()>(&Meta::WitAi::Events::UnityEventListeners::AudioEventListener::get_OnMicStoppedListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Events::UnityEventListeners::AudioEventListener*), "get_OnMicStoppedListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Events::UnityEventListeners::AudioEventListener::get_AudioInputEvents
// Il2CppName: get_AudioInputEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents* (Meta::WitAi::Events::UnityEventListeners::AudioEventListener::*)()>(&Meta::WitAi::Events::UnityEventListeners::AudioEventListener::get_AudioInputEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Events::UnityEventListeners::AudioEventListener*), "get_AudioInputEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Events::UnityEventListeners::AudioEventListener::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Events::UnityEventListeners::AudioEventListener::*)()>(&Meta::WitAi::Events::UnityEventListeners::AudioEventListener::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Events::UnityEventListeners::AudioEventListener*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Events::UnityEventListeners::AudioEventListener::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Events::UnityEventListeners::AudioEventListener::*)()>(&Meta::WitAi::Events::UnityEventListeners::AudioEventListener::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Events::UnityEventListeners::AudioEventListener*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Events::UnityEventListeners::AudioEventListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!