// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::Voice::Audio
namespace Meta::Voice::Audio {
  // Forward declaring type: IAudioClipStream
  class IAudioClipStream;
  // Forward declaring type: IAudioPlayer
  class IAudioPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Meta.Voice.Audio
namespace Meta::Voice::Audio {
  // Forward declaring type: IAudioSystem
  class IAudioSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Audio::IAudioSystem);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Audio::IAudioSystem*, "Meta.Voice.Audio", "IAudioSystem");
// Type namespace: Meta.Voice.Audio
namespace Meta::Voice::Audio {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Audio.IAudioSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class IAudioSystem {
    public:
    // public Meta.Voice.Audio.IAudioClipStream GetAudioClipStream(System.Int32 channels, System.Int32 sampleRate)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::Voice::Audio::IAudioClipStream* GetAudioClipStream(int channels, int sampleRate);
    // public Meta.Voice.Audio.IAudioPlayer GetAudioPlayer(UnityEngine.GameObject root)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::Voice::Audio::IAudioPlayer* GetAudioPlayer(::UnityEngine::GameObject* root);
  }; // Meta.Voice.Audio.IAudioSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Audio::IAudioSystem::GetAudioClipStream
// Il2CppName: GetAudioClipStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::Voice::Audio::IAudioClipStream* (Meta::Voice::Audio::IAudioSystem::*)(int, int)>(&Meta::Voice::Audio::IAudioSystem::GetAudioClipStream)> {
  static const MethodInfo* get() {
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::IAudioSystem*), "GetAudioClipStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channels, sampleRate});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::IAudioSystem::GetAudioPlayer
// Il2CppName: GetAudioPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::Voice::Audio::IAudioPlayer* (Meta::Voice::Audio::IAudioSystem::*)(::UnityEngine::GameObject*)>(&Meta::Voice::Audio::IAudioSystem::GetAudioPlayer)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::IAudioSystem*), "GetAudioPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};