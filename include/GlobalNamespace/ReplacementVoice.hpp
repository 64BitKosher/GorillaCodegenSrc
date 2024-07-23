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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReplacementVoice
  class ReplacementVoice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ReplacementVoice);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReplacementVoice*, "", "ReplacementVoice");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ReplacementVoice
  // [TokenAttribute] Offset: FFFFFFFF
  class ReplacementVoice : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.AudioSource replacementVoiceSource
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* replacementVoiceSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public UnityEngine.AudioClip[] replacementVoiceClips
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::AudioClip*> replacementVoiceClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // public UnityEngine.AudioClip[] replacementVoiceClipsLoud
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::AudioClip*> replacementVoiceClipsLoud;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // public System.Single loudReplacementVoiceThreshold
    // Size: 0x4
    // Offset: 0x38
    float loudReplacementVoiceThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: loudReplacementVoiceThreshold and: myVRRig
    char __padding3[0x4] = {};
    // public VRRig myVRRig
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::VRRig* myVRRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // public System.Single normalVolume
    // Size: 0x4
    // Offset: 0x48
    float normalVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loudVolume
    // Size: 0x4
    // Offset: 0x4C
    float loudVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.AudioSource replacementVoiceSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_replacementVoiceSource();
    // Get instance field reference: public UnityEngine.AudioClip[] replacementVoiceClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_replacementVoiceClips();
    // Get instance field reference: public UnityEngine.AudioClip[] replacementVoiceClipsLoud
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_replacementVoiceClipsLoud();
    // Get instance field reference: public System.Single loudReplacementVoiceThreshold
    [[deprecated("Use field access instead!")]] float& dyn_loudReplacementVoiceThreshold();
    // Get instance field reference: public VRRig myVRRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_myVRRig();
    // Get instance field reference: public System.Single normalVolume
    [[deprecated("Use field access instead!")]] float& dyn_normalVolume();
    // Get instance field reference: public System.Single loudVolume
    [[deprecated("Use field access instead!")]] float& dyn_loudVolume();
    // public System.Void InvokeUpdate()
    // Offset: 0x272F62C
    void InvokeUpdate();
    // public System.Void .ctor()
    // Offset: 0x272F820
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReplacementVoice* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ReplacementVoice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReplacementVoice*, creationType>()));
    }
  }; // ReplacementVoice
  #pragma pack(pop)
  static check_size<sizeof(ReplacementVoice), 76 + sizeof(float)> __GlobalNamespace_ReplacementVoiceSizeCheck;
  static_assert(sizeof(ReplacementVoice) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReplacementVoice::InvokeUpdate
// Il2CppName: InvokeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReplacementVoice::*)()>(&GlobalNamespace::ReplacementVoice::InvokeUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReplacementVoice*), "InvokeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReplacementVoice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!