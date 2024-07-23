// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::Voice::Samples::TTSVoices
namespace Meta::Voice::Samples::TTSVoices {
}
// Forward declaring namespace: Meta::WitAi::TTS::Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Forward declaring type: TTSSpeaker
  class TTSSpeaker;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: InputField
  class InputField;
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Meta.Voice.Samples.TTSVoices
namespace Meta::Voice::Samples::TTSVoices {
  // Forward declaring type: TTSSpeakerInput
  class TTSSpeakerInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Samples::TTSVoices::TTSSpeakerInput);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*, "Meta.Voice.Samples.TTSVoices", "TTSSpeakerInput");
// Type namespace: Meta.Voice.Samples.TTSVoices
namespace Meta::Voice::Samples::TTSVoices {
  // Size: 0x7B
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Samples.TTSVoices.TTSSpeakerInput
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSSpeakerInput : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::$SpeakAsync$d__18
    class $SpeakAsync$d__18;
    public:
    // private Meta.WitAi.TTS.Utilities.TTSSpeaker _speaker
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::TTS::Utilities::TTSSpeaker* speaker;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker*) == 0x8);
    // private UnityEngine.UI.InputField _input
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::InputField* input;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::InputField*) == 0x8);
    // private UnityEngine.UI.Button _stopButton
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Button* stopButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _pauseButton
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Button* pauseButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _speakButton
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Button* speakButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Toggle _queueButton
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::UI::Toggle* queueButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _asyncToggle
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UI::Toggle* asyncToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.AudioClip _asyncClip
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::AudioClip* asyncClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.String _dateId
    // Size: 0x8
    // Offset: 0x60
    ::StringW dateId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] _queuedText
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::StringW> queuedText;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String _voice
    // Size: 0x8
    // Offset: 0x70
    ::StringW voice;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _loading
    // Size: 0x1
    // Offset: 0x78
    bool loading;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _speaking
    // Size: 0x1
    // Offset: 0x79
    bool speaking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _paused
    // Size: 0x1
    // Offset: 0x7A
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeaker _speaker
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeaker*& dyn__speaker();
    // Get instance field reference: private UnityEngine.UI.InputField _input
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::InputField*& dyn__input();
    // Get instance field reference: private UnityEngine.UI.Button _stopButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__stopButton();
    // Get instance field reference: private UnityEngine.UI.Button _pauseButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__pauseButton();
    // Get instance field reference: private UnityEngine.UI.Button _speakButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__speakButton();
    // Get instance field reference: private UnityEngine.UI.Toggle _queueButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__queueButton();
    // Get instance field reference: private UnityEngine.UI.Toggle _asyncToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__asyncToggle();
    // Get instance field reference: private UnityEngine.AudioClip _asyncClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__asyncClip();
    // Get instance field reference: private System.String _dateId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__dateId();
    // Get instance field reference: private System.String[] _queuedText
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__queuedText();
    // Get instance field reference: private System.String _voice
    [[deprecated("Use field access instead!")]] ::StringW& dyn__voice();
    // Get instance field reference: private System.Boolean _loading
    [[deprecated("Use field access instead!")]] bool& dyn__loading();
    // Get instance field reference: private System.Boolean _speaking
    [[deprecated("Use field access instead!")]] bool& dyn__speaking();
    // Get instance field reference: private System.Boolean _paused
    [[deprecated("Use field access instead!")]] bool& dyn__paused();
    // private System.Void OnEnable()
    // Offset: 0x4414F20
    void OnEnable();
    // private System.Void StopClick()
    // Offset: 0x4415180
    void StopClick();
    // private System.Void PauseClick()
    // Offset: 0x44151A4
    void PauseClick();
    // private System.Void SpeakClick()
    // Offset: 0x44151D4
    void SpeakClick();
    // private System.Collections.IEnumerator SpeakAsync(System.String phrase, System.Boolean queued)
    // Offset: 0x4415458
    ::System::Collections::IEnumerator* SpeakAsync(::StringW phrase, bool queued);
    // private System.String FormatText(System.String text)
    // Offset: 0x4415374
    ::StringW FormatText(::StringW text);
    // private System.Void OnDisable()
    // Offset: 0x4415514
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x44155FC
    void Update();
    // private System.Void RefreshStopButton()
    // Offset: 0x4415068
    void RefreshStopButton();
    // private System.Void RefreshPauseButton()
    // Offset: 0x44150D4
    void RefreshPauseButton();
    // public System.Void .ctor()
    // Offset: 0x4415768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSSpeakerInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSSpeakerInput*, creationType>()));
    }
  }; // Meta.Voice.Samples.TTSVoices.TTSSpeakerInput
  #pragma pack(pop)
  static check_size<sizeof(TTSSpeakerInput), 122 + sizeof(bool)> __Meta_Voice_Samples_TTSVoices_TTSSpeakerInputSizeCheck;
  static_assert(sizeof(TTSSpeakerInput) == 0x7B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::StopClick
// Il2CppName: StopClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::StopClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "StopClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::PauseClick
// Il2CppName: PauseClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::PauseClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "PauseClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::SpeakClick
// Il2CppName: SpeakClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::SpeakClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "SpeakClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::SpeakAsync
// Il2CppName: SpeakAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)(::StringW, bool)>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::SpeakAsync)> {
  static const MethodInfo* get() {
    static auto* phrase = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* queued = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "SpeakAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{phrase, queued});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::FormatText
// Il2CppName: FormatText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)(::StringW)>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::FormatText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "FormatText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::RefreshStopButton
// Il2CppName: RefreshStopButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::RefreshStopButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "RefreshStopButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::RefreshPauseButton
// Il2CppName: RefreshPauseButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::RefreshPauseButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerInput*), "RefreshPauseButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!