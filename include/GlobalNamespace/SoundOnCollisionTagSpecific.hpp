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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SoundOnCollisionTagSpecific
  class SoundOnCollisionTagSpecific;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SoundOnCollisionTagSpecific);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoundOnCollisionTagSpecific*, "", "SoundOnCollisionTagSpecific");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SoundOnCollisionTagSpecific
  // [TokenAttribute] Offset: FFFFFFFF
  class SoundOnCollisionTagSpecific : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String tagName
    // Size: 0x8
    // Offset: 0x20
    ::StringW tagName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single noiseCooldown
    // Size: 0x4
    // Offset: 0x28
    float noiseCooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single nextSound
    // Size: 0x4
    // Offset: 0x2C
    float nextSound;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public UnityEngine.AudioClip[] collisionSounds
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::AudioClip*> collisionSounds;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    public:
    // Get instance field reference: public System.String tagName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_tagName();
    // Get instance field reference: public System.Single noiseCooldown
    [[deprecated("Use field access instead!")]] float& dyn_noiseCooldown();
    // Get instance field reference: private System.Single nextSound
    [[deprecated("Use field access instead!")]] float& dyn_nextSound();
    // Get instance field reference: public UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: public UnityEngine.AudioClip[] collisionSounds
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_collisionSounds();
    // private System.Void OnTriggerEnter(UnityEngine.Collider collider)
    // Offset: 0x2895E38
    void OnTriggerEnter(::UnityEngine::Collider* collider);
    // public System.Void .ctor()
    // Offset: 0x2895EF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoundOnCollisionTagSpecific* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SoundOnCollisionTagSpecific::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoundOnCollisionTagSpecific*, creationType>()));
    }
  }; // SoundOnCollisionTagSpecific
  #pragma pack(pop)
  static check_size<sizeof(SoundOnCollisionTagSpecific), 56 + sizeof(::ArrayW<::UnityEngine::AudioClip*>)> __GlobalNamespace_SoundOnCollisionTagSpecificSizeCheck;
  static_assert(sizeof(SoundOnCollisionTagSpecific) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SoundOnCollisionTagSpecific::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoundOnCollisionTagSpecific::*)(::UnityEngine::Collider*)>(&GlobalNamespace::SoundOnCollisionTagSpecific::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoundOnCollisionTagSpecific*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoundOnCollisionTagSpecific::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
