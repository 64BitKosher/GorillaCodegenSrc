// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
  // Forward declaring type: AudioAffordanceThemeData
  class AudioAffordanceThemeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio", "AudioAffordanceThemeData");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioAffordanceThemeData : public ::Il2CppObject {
    public:
    public:
    // public System.String stateName
    // Size: 0x8
    // Offset: 0x10
    ::StringW stateName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.AudioClip stateEntered
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioClip* stateEntered;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // public UnityEngine.AudioClip stateExited
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioClip* stateExited;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    public:
    // Get instance field reference: public System.String stateName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_stateName();
    // Get instance field reference: public UnityEngine.AudioClip stateEntered
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_stateEntered();
    // Get instance field reference: public UnityEngine.AudioClip stateExited
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_stateExited();
    // public System.Void .ctor()
    // Offset: 0x543D2E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioAffordanceThemeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioAffordanceThemeData*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData
  #pragma pack(pop)
  static check_size<sizeof(AudioAffordanceThemeData), 32 + sizeof(::UnityEngine::AudioClip*)> __UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Audio_AudioAffordanceThemeDataSizeCheck;
  static_assert(sizeof(AudioAffordanceThemeData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
