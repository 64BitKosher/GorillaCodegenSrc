// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioClipAudioSource
#include "GlobalNamespace/AudioClipAudioSource.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0*, "", "AudioClipAudioSource/<>c__DisplayClass34_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipAudioSource/<>c__DisplayClass34_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioClipAudioSource::$$c__DisplayClass34_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String clipName
    // Size: 0x8
    // Offset: 0x10
    ::StringW clipName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return clipName;
    }
    // Get instance field reference: public System.String clipName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_clipName();
    // public System.Void .ctor()
    // Offset: 0x4424F40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipAudioSource::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipAudioSource::$$c__DisplayClass34_0*, creationType>()));
    }
    // System.Boolean <SetActiveClip>b__0(UnityEngine.AudioClip clip)
    // Offset: 0x4425148
    bool $SetActiveClip$b__0(::UnityEngine::AudioClip* clip);
  }; // AudioClipAudioSource/<>c__DisplayClass34_0
  #pragma pack(pop)
  static check_size<sizeof(AudioClipAudioSource::$$c__DisplayClass34_0), 16 + sizeof(::StringW)> __GlobalNamespace_AudioClipAudioSource_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(AudioClipAudioSource::$$c__DisplayClass34_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0::$SetActiveClip$b__0
// Il2CppName: <SetActiveClip>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0::*)(::UnityEngine::AudioClip*)>(&GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0::$SetActiveClip$b__0)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0*), "<SetActiveClip>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
