// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioPlayableGraphExtensions
  class AudioPlayableGraphExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Audio::AudioPlayableGraphExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableGraphExtensions*, "UnityEngine.Audio", "AudioPlayableGraphExtensions");
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Audio.AudioPlayableGraphExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class AudioPlayableGraphExtensions : public ::Il2CppObject {
    public:
    // static System.Boolean InternalCreateAudioOutput(ref UnityEngine.Playables.PlayableGraph graph, System.String name, out UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x54770BC
    static bool InternalCreateAudioOutput(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name, ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);
  }; // UnityEngine.Audio.AudioPlayableGraphExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableGraphExtensions::InternalCreateAudioOutput
// Il2CppName: InternalCreateAudioOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Playables::PlayableGraph>, ::StringW, ByRef<::UnityEngine::Playables::PlayableOutputHandle>)>(&UnityEngine::Audio::AudioPlayableGraphExtensions::InternalCreateAudioOutput)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableGraphExtensions*), "InternalCreateAudioOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name, handle});
  }
};
