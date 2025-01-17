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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HotPepperFace
  class HotPepperFace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HotPepperFace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HotPepperFace*, "", "HotPepperFace");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: HotPepperFace
  // [TokenAttribute] Offset: FFFFFFFF
  class HotPepperFace : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject _faceMesh
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* faceMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.ParticleSystem _fireFX
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::ParticleSystem* fireFX;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.AudioSource _flameSpeaker
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioSource* flameSpeaker;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioSource _breathSpeaker
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AudioSource* breathSpeaker;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single _effectLength
    // Size: 0x4
    // Offset: 0x40
    float effectLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: effectLength and: thermalSourceVolume
    char __padding4[0x4] = {};
    // private UnityEngine.GameObject _thermalSourceVolume
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::GameObject* thermalSourceVolume;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject _faceMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__faceMesh();
    // Get instance field reference: private UnityEngine.ParticleSystem _fireFX
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__fireFX();
    // Get instance field reference: private UnityEngine.AudioSource _flameSpeaker
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__flameSpeaker();
    // Get instance field reference: private UnityEngine.AudioSource _breathSpeaker
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__breathSpeaker();
    // Get instance field reference: private System.Single _effectLength
    [[deprecated("Use field access instead!")]] float& dyn__effectLength();
    // Get instance field reference: private UnityEngine.GameObject _thermalSourceVolume
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__thermalSourceVolume();
    // public System.Void PlayFX(System.Single delay)
    // Offset: 0x26D5E68
    void PlayFX(float delay);
    // public System.Void PlayFX()
    // Offset: 0x26D5EE8
    void PlayFX();
    // public System.Void StopFX()
    // Offset: 0x26D5F94
    void StopFX();
    // public System.Void .ctor()
    // Offset: 0x26D5FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HotPepperFace* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HotPepperFace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HotPepperFace*, creationType>()));
    }
  }; // HotPepperFace
  #pragma pack(pop)
  static check_size<sizeof(HotPepperFace), 72 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_HotPepperFaceSizeCheck;
  static_assert(sizeof(HotPepperFace) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HotPepperFace::PlayFX
// Il2CppName: PlayFX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HotPepperFace::*)(float)>(&GlobalNamespace::HotPepperFace::PlayFX)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HotPepperFace*), "PlayFX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HotPepperFace::PlayFX
// Il2CppName: PlayFX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HotPepperFace::*)()>(&GlobalNamespace::HotPepperFace::PlayFX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HotPepperFace*), "PlayFX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HotPepperFace::StopFX
// Il2CppName: StopFX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HotPepperFace::*)()>(&GlobalNamespace::HotPepperFace::StopFX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HotPepperFace*), "StopFX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HotPepperFace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
