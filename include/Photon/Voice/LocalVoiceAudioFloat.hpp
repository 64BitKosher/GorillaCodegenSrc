// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.LocalVoiceAudio`1
#include "Photon/Voice/LocalVoiceAudio_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: VoiceClient
  class VoiceClient;
  // Forward declaring type: IEncoder
  class IEncoder;
  // Forward declaring type: IAudioDesc
  class IAudioDesc;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: LocalVoiceAudioFloat
  class LocalVoiceAudioFloat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::LocalVoiceAudioFloat);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::LocalVoiceAudioFloat*, "Photon.Voice", "LocalVoiceAudioFloat");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.LocalVoiceAudioFloat
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalVoiceAudioFloat : public ::Photon::Voice::LocalVoiceAudio_1<float> {
    public:
    // System.Void .ctor(Photon.Voice.VoiceClient voiceClient, Photon.Voice.IEncoder encoder, System.Byte id, Photon.Voice.VoiceInfo voiceInfo, Photon.Voice.IAudioDesc audioSourceDesc, System.Int32 channelId)
    // Offset: 0x4A68C88
    // Implemented from: Photon.Voice.LocalVoiceAudio`1
    // Base method: System.Void LocalVoiceAudio_1::.ctor(Photon.Voice.VoiceClient voiceClient, Photon.Voice.IEncoder encoder, System.Byte id, Photon.Voice.VoiceInfo voiceInfo, Photon.Voice.IAudioDesc audioSourceDesc, System.Int32 channelId)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalVoiceAudioFloat* New_ctor(::Photon::Voice::VoiceClient* voiceClient, ::Photon::Voice::IEncoder* encoder, uint8_t id, ::Photon::Voice::VoiceInfo voiceInfo, ::Photon::Voice::IAudioDesc* audioSourceDesc, int channelId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::LocalVoiceAudioFloat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalVoiceAudioFloat*, creationType>(voiceClient, encoder, id, voiceInfo, audioSourceDesc, channelId)));
    }
  }; // Photon.Voice.LocalVoiceAudioFloat
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::LocalVoiceAudioFloat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
