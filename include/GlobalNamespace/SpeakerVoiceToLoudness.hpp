// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Photon.Voice.Unity.PlaybackDelaySettings
#include "Photon/Voice/Unity/PlaybackDelaySettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: IAudioOut`1<T>
  template<typename T>
  class IAudioOut_1;
}
// Forward declaring namespace: Photon::Voice::Unity
namespace Photon::Voice::Unity {
  // Forward declaring type: Speaker
  class Speaker;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SpeakerVoiceToLoudness
  class SpeakerVoiceToLoudness;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SpeakerVoiceToLoudness);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpeakerVoiceToLoudness*, "", "SpeakerVoiceToLoudness");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SpeakerVoiceToLoudness
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class SpeakerVoiceToLoudness : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SpeakerVoiceToLoudness::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    public:
    // private Photon.Voice.Unity.PlaybackDelaySettings playbackDelaySettings
    // Size: 0xC
    // Offset: 0x20
    ::Photon::Voice::Unity::PlaybackDelaySettings playbackDelaySettings;
    // Field size check
    static_assert(sizeof(::Photon::Voice::Unity::PlaybackDelaySettings) == 0xC);
    // public System.Single loudness
    // Size: 0x4
    // Offset: 0x2C
    float loudness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private Photon.Voice.Unity.PlaybackDelaySettings playbackDelaySettings
    [[deprecated("Use field access instead!")]] ::Photon::Voice::Unity::PlaybackDelaySettings& dyn_playbackDelaySettings();
    // Get instance field reference: public System.Single loudness
    [[deprecated("Use field access instead!")]] float& dyn_loudness();
    // private System.Void Awake()
    // Offset: 0x2895F04
    void Awake();
    // private System.Func`1<Photon.Voice.IAudioOut`1<System.Single>> GetVolumeTracking(Photon.Voice.Unity.Speaker speaker)
    // Offset: 0x2895F74
    ::System::Func_1<::Photon::Voice::IAudioOut_1<float>*>* GetVolumeTracking(::Photon::Voice::Unity::Speaker* speaker);
    // public System.Void .ctor()
    // Offset: 0x2896098
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpeakerVoiceToLoudness* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpeakerVoiceToLoudness::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpeakerVoiceToLoudness*, creationType>()));
    }
  }; // SpeakerVoiceToLoudness
  #pragma pack(pop)
  static check_size<sizeof(SpeakerVoiceToLoudness), 44 + sizeof(float)> __GlobalNamespace_SpeakerVoiceToLoudnessSizeCheck;
  static_assert(sizeof(SpeakerVoiceToLoudness) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpeakerVoiceToLoudness::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpeakerVoiceToLoudness::*)()>(&GlobalNamespace::SpeakerVoiceToLoudness::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpeakerVoiceToLoudness*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpeakerVoiceToLoudness::GetVolumeTracking
// Il2CppName: GetVolumeTracking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::Photon::Voice::IAudioOut_1<float>*>* (GlobalNamespace::SpeakerVoiceToLoudness::*)(::Photon::Voice::Unity::Speaker*)>(&GlobalNamespace::SpeakerVoiceToLoudness::GetVolumeTracking)> {
  static const MethodInfo* get() {
    static auto* speaker = &::il2cpp_utils::GetClassFromName("Photon.Voice.Unity", "Speaker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpeakerVoiceToLoudness*), "GetVolumeTracking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speaker});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpeakerVoiceToLoudness::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
