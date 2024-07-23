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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
  // Forward declaring type: BaseAffordanceStateProvider
  class BaseAffordanceStateProvider;
  // Forward declaring type: AffordanceStateData
  struct AffordanceStateData;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
  // Forward declaring type: AudioAffordanceThemeDatumProperty
  class AudioAffordanceThemeDatumProperty;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: Unity::XR::CoreUtils::Bindings
namespace Unity::XR::CoreUtils::Bindings {
  // Forward declaring type: BindingsGroup
  class BindingsGroup;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio {
  // Forward declaring type: AudioAffordanceReceiver
  class AudioAffordanceReceiver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio", "AudioAffordanceReceiver");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class AudioAffordanceReceiver : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider m_AffordanceStateProvider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider* m_AffordanceStateProvider;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty m_AffordanceThemeDatum
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* m_AffordanceThemeDatum;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*) == 0x8);
    // private UnityEngine.AudioSource m_AudioSource
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioSource* m_AudioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private readonly Unity.XR.CoreUtils.Bindings.BindingsGroup m_BindingsGroup
    // Size: 0x8
    // Offset: 0x38
    ::Unity::XR::CoreUtils::Bindings::BindingsGroup* m_BindingsGroup;
    // Field size check
    static_assert(sizeof(::Unity::XR::CoreUtils::Bindings::BindingsGroup*) == 0x8);
    // private System.Byte m_LastAffordanceStateIndex
    // Size: 0x1
    // Offset: 0x40
    uint8_t m_LastAffordanceStateIndex;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider m_AffordanceStateProvider
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*& dyn_m_AffordanceStateProvider();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty m_AffordanceThemeDatum
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*& dyn_m_AffordanceThemeDatum();
    // Get instance field reference: private UnityEngine.AudioSource m_AudioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_m_AudioSource();
    // Get instance field reference: private readonly Unity.XR.CoreUtils.Bindings.BindingsGroup m_BindingsGroup
    [[deprecated("Use field access instead!")]] ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& dyn_m_BindingsGroup();
    // Get instance field reference: private System.Byte m_LastAffordanceStateIndex
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_LastAffordanceStateIndex();
    // public UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider get_affordanceStateProvider()
    // Offset: 0x544414C
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider* get_affordanceStateProvider();
    // public System.Void set_affordanceStateProvider(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider value)
    // Offset: 0x5444154
    void set_affordanceStateProvider(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider* value);
    // public UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty get_affordanceThemeDatum()
    // Offset: 0x544415C
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* get_affordanceThemeDatum();
    // public System.Void set_affordanceThemeDatum(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty value)
    // Offset: 0x5444164
    void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* value);
    // public UnityEngine.AudioSource get_audioSource()
    // Offset: 0x544416C
    ::UnityEngine::AudioSource* get_audioSource();
    // public System.Void set_audioSource(UnityEngine.AudioSource value)
    // Offset: 0x5444174
    void set_audioSource(::UnityEngine::AudioSource* value);
    // protected System.Void OnValidate()
    // Offset: 0x544417C
    void OnValidate();
    // protected System.Void Awake()
    // Offset: 0x544422C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x54442DC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x54444C4
    void OnDisable();
    // private System.Void OnAffordanceStateUpdated(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData affordanceStateData)
    // Offset: 0x54444E0
    void OnAffordanceStateUpdated(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData affordanceStateData);
    // private System.Void PlayAudioClip(UnityEngine.AudioClip clipToPlay)
    // Offset: 0x54445E8
    void PlayAudioClip(::UnityEngine::AudioClip* clipToPlay);
    // public System.Void .ctor()
    // Offset: 0x544467C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioAffordanceReceiver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioAffordanceReceiver*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver
  #pragma pack(pop)
  static check_size<sizeof(AudioAffordanceReceiver), 64 + sizeof(uint8_t)> __UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_Audio_AudioAffordanceReceiverSizeCheck;
  static_assert(sizeof(AudioAffordanceReceiver) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_affordanceStateProvider
// Il2CppName: get_affordanceStateProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_affordanceStateProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "get_affordanceStateProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_affordanceStateProvider
// Il2CppName: set_affordanceStateProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_affordanceStateProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "BaseAffordanceStateProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "set_affordanceStateProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_affordanceThemeDatum
// Il2CppName: get_affordanceThemeDatum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_affordanceThemeDatum)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "get_affordanceThemeDatum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_affordanceThemeDatum
// Il2CppName: set_affordanceThemeDatum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_affordanceThemeDatum)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio", "AudioAffordanceThemeDatumProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "set_affordanceThemeDatum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_audioSource
// Il2CppName: get_audioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSource* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_audioSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "get_audioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_audioSource
// Il2CppName: set_audioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::AudioSource*)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_audioSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "set_audioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnAffordanceStateUpdated
// Il2CppName: OnAffordanceStateUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnAffordanceStateUpdated)> {
  static const MethodInfo* get() {
    static auto* affordanceStateData = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "AffordanceStateData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "OnAffordanceStateUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{affordanceStateData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::PlayAudioClip
// Il2CppName: PlayAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::AudioClip*)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::PlayAudioClip)> {
  static const MethodInfo* get() {
    static auto* clipToPlay = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*), "PlayAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipToPlay});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!