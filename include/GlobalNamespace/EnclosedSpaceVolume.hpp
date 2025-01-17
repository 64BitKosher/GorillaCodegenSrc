// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTriggerBox
#include "GlobalNamespace/GorillaTriggerBox.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnclosedSpaceVolume
  class EnclosedSpaceVolume;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnclosedSpaceVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnclosedSpaceVolume*, "", "EnclosedSpaceVolume");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: EnclosedSpaceVolume
  // [TokenAttribute] Offset: FFFFFFFF
  class EnclosedSpaceVolume : public ::GlobalNamespace::GorillaTriggerBox {
    public:
    public:
    // public UnityEngine.AudioSource audioSourceInside
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioSource* audioSourceInside;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public UnityEngine.AudioSource audioSourceOutside
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioSource* audioSourceOutside;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public System.Single loudVolume
    // Size: 0x4
    // Offset: 0x38
    float loudVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single quietVolume
    // Size: 0x4
    // Offset: 0x3C
    float quietVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.AudioSource audioSourceInside
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSourceInside();
    // Get instance field reference: public UnityEngine.AudioSource audioSourceOutside
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSourceOutside();
    // Get instance field reference: public System.Single loudVolume
    [[deprecated("Use field access instead!")]] float& dyn_loudVolume();
    // Get instance field reference: public System.Single quietVolume
    [[deprecated("Use field access instead!")]] float& dyn_quietVolume();
    // private System.Void Awake()
    // Offset: 0x26F30CC
    void Awake();
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x26F3104
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x26F31D8
    void OnTriggerExit(::UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x26F32AC
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnclosedSpaceVolume* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnclosedSpaceVolume::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnclosedSpaceVolume*, creationType>()));
    }
  }; // EnclosedSpaceVolume
  #pragma pack(pop)
  static check_size<sizeof(EnclosedSpaceVolume), 60 + sizeof(float)> __GlobalNamespace_EnclosedSpaceVolumeSizeCheck;
  static_assert(sizeof(EnclosedSpaceVolume) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnclosedSpaceVolume::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnclosedSpaceVolume::*)()>(&GlobalNamespace::EnclosedSpaceVolume::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnclosedSpaceVolume*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnclosedSpaceVolume::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnclosedSpaceVolume::*)(::UnityEngine::Collider*)>(&GlobalNamespace::EnclosedSpaceVolume::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnclosedSpaceVolume*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnclosedSpaceVolume::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnclosedSpaceVolume::*)(::UnityEngine::Collider*)>(&GlobalNamespace::EnclosedSpaceVolume::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnclosedSpaceVolume*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnclosedSpaceVolume::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
