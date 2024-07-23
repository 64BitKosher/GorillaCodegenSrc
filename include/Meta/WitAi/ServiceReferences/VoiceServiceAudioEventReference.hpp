// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.ServiceReferences.AudioInputServiceReference
#include "Meta/WitAi/ServiceReferences/AudioInputServiceReference.hpp"
// Including type: Meta.WitAi.Utilities.VoiceServiceReference
#include "Meta/WitAi/Utilities/VoiceServiceReference.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Interfaces
namespace Meta::WitAi::Interfaces {
  // Forward declaring type: IAudioInputEvents
  class IAudioInputEvents;
}
// Completed forward declares
// Type namespace: Meta.WitAi.ServiceReferences
namespace Meta::WitAi::ServiceReferences {
  // Forward declaring type: VoiceServiceAudioEventReference
  class VoiceServiceAudioEventReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*, "Meta.WitAi.ServiceReferences", "VoiceServiceAudioEventReference");
// Type namespace: Meta.WitAi.ServiceReferences
namespace Meta::WitAi::ServiceReferences {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.ServiceReferences.VoiceServiceAudioEventReference
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceServiceAudioEventReference : public ::Meta::WitAi::ServiceReferences::AudioInputServiceReference {
    public:
    public:
    // private Meta.WitAi.Utilities.VoiceServiceReference _voiceServiceReference
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::Utilities::VoiceServiceReference voiceServiceReference;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Utilities::VoiceServiceReference) == 0x8);
    public:
    // Get instance field reference: private Meta.WitAi.Utilities.VoiceServiceReference _voiceServiceReference
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Utilities::VoiceServiceReference& dyn__voiceServiceReference();
    // public override Meta.WitAi.Interfaces.IAudioInputEvents get_AudioEvents()
    // Offset: 0x44378B4
    // Implemented from: Meta.WitAi.ServiceReferences.AudioInputServiceReference
    // Base method: Meta.WitAi.Interfaces.IAudioInputEvents AudioInputServiceReference::get_AudioEvents()
    ::Meta::WitAi::Interfaces::IAudioInputEvents* get_AudioEvents();
    // public System.Void .ctor()
    // Offset: 0x44378DC
    // Implemented from: Meta.WitAi.ServiceReferences.AudioInputServiceReference
    // Base method: System.Void AudioInputServiceReference::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceServiceAudioEventReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceServiceAudioEventReference*, creationType>()));
    }
  }; // Meta.WitAi.ServiceReferences.VoiceServiceAudioEventReference
  #pragma pack(pop)
  static check_size<sizeof(VoiceServiceAudioEventReference), 32 + sizeof(::Meta::WitAi::Utilities::VoiceServiceReference)> __Meta_WitAi_ServiceReferences_VoiceServiceAudioEventReferenceSizeCheck;
  static_assert(sizeof(VoiceServiceAudioEventReference) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::get_AudioEvents
// Il2CppName: get_AudioEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents* (Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::*)()>(&Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::get_AudioEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*), "get_AudioEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
