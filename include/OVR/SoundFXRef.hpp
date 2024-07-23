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
// Forward declaring namespace: OVR
namespace OVR {
  // Forward declaring type: SoundFX
  class SoundFX;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: SoundFXRef
  class SoundFXRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::SoundFXRef);
DEFINE_IL2CPP_ARG_TYPE(::OVR::SoundFXRef*, "OVR", "SoundFXRef");
// Type namespace: OVR
namespace OVR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVR.SoundFXRef
  // [TokenAttribute] Offset: FFFFFFFF
  class SoundFXRef : public ::Il2CppObject {
    public:
    public:
    // public System.String soundFXName
    // Size: 0x8
    // Offset: 0x10
    ::StringW soundFXName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean initialized
    // Size: 0x1
    // Offset: 0x18
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: soundFXCached
    char __padding1[0x7] = {};
    // private OVR.SoundFX soundFXCached
    // Size: 0x8
    // Offset: 0x20
    ::OVR::SoundFX* soundFXCached;
    // Field size check
    static_assert(sizeof(::OVR::SoundFX*) == 0x8);
    public:
    // Get instance field reference: public System.String soundFXName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_soundFXName();
    // Get instance field reference: private System.Boolean initialized
    [[deprecated("Use field access instead!")]] bool& dyn_initialized();
    // Get instance field reference: private OVR.SoundFX soundFXCached
    [[deprecated("Use field access instead!")]] ::OVR::SoundFX*& dyn_soundFXCached();
    // public OVR.SoundFX get_soundFX()
    // Offset: 0x47700BC
    ::OVR::SoundFX* get_soundFX();
    // public System.String get_name()
    // Offset: 0x47701B0
    ::StringW get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x47701B8
    void set_name(::StringW value);
    // private System.Void Init()
    // Offset: 0x47700E0
    void Init();
    // public System.Int32 get_Length()
    // Offset: 0x47701D4
    int get_Length();
    // public System.Boolean get_IsValid()
    // Offset: 0x477020C
    bool get_IsValid();
    // public UnityEngine.AudioClip GetClip()
    // Offset: 0x4770238
    ::UnityEngine::AudioClip* GetClip();
    // public System.Single GetClipLength(System.Int32 idx)
    // Offset: 0x4770264
    float GetClipLength(int idx);
    // public System.Int32 PlaySound(System.Single delaySecs)
    // Offset: 0x47702A0
    int PlaySound(float delaySecs);
    // public System.Int32 PlaySoundAt(UnityEngine.Vector3 pos, System.Single delaySecs, System.Single volume, System.Single pitchMultiplier)
    // Offset: 0x4767E84
    int PlaySoundAt(::UnityEngine::Vector3 pos, float delaySecs, float volume, float pitchMultiplier);
    // public System.Void SetOnFinished(System.Action onFinished)
    // Offset: 0x47702DC
    void SetOnFinished(::System::Action* onFinished);
    // public System.Void SetOnFinished(System.Action`1<System.Object> onFinished, System.Object obj)
    // Offset: 0x4770318
    void SetOnFinished(::System::Action_1<::Il2CppObject*>* onFinished, ::Il2CppObject* obj);
    // public System.Boolean StopSound()
    // Offset: 0x477035C
    bool StopSound();
    // public System.Void AttachToParent(UnityEngine.Transform parent)
    // Offset: 0x4770388
    void AttachToParent(::UnityEngine::Transform* parent);
    // public System.Void DetachFromParent()
    // Offset: 0x47703C4
    void DetachFromParent();
    // public System.Void .ctor()
    // Offset: 0x47703F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoundFXRef* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::SoundFXRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoundFXRef*, creationType>()));
    }
  }; // OVR.SoundFXRef
  #pragma pack(pop)
  static check_size<sizeof(SoundFXRef), 32 + sizeof(::OVR::SoundFX*)> __OVR_SoundFXRefSizeCheck;
  static_assert(sizeof(SoundFXRef) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::SoundFXRef::get_soundFX
// Il2CppName: get_soundFX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::SoundFX* (OVR::SoundFXRef::*)()>(&OVR::SoundFXRef::get_soundFX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "get_soundFX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::SoundFXRef::*)()>(&OVR::SoundFXRef::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFXRef::*)(::StringW)>(&OVR::SoundFXRef::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFXRef::*)()>(&OVR::SoundFXRef::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::SoundFXRef::*)()>(&OVR::SoundFXRef::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundFXRef::*)()>(&OVR::SoundFXRef::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::GetClip
// Il2CppName: GetClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (OVR::SoundFXRef::*)()>(&OVR::SoundFXRef::GetClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "GetClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::GetClipLength
// Il2CppName: GetClipLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundFXRef::*)(int)>(&OVR::SoundFXRef::GetClipLength)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "GetClipLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::PlaySound
// Il2CppName: PlaySound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::SoundFXRef::*)(float)>(&OVR::SoundFXRef::PlaySound)> {
  static const MethodInfo* get() {
    static auto* delaySecs = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "PlaySound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delaySecs});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::PlaySoundAt
// Il2CppName: PlaySoundAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::SoundFXRef::*)(::UnityEngine::Vector3, float, float, float)>(&OVR::SoundFXRef::PlaySoundAt)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* delaySecs = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pitchMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "PlaySoundAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, delaySecs, volume, pitchMultiplier});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::SetOnFinished
// Il2CppName: SetOnFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFXRef::*)(::System::Action*)>(&OVR::SoundFXRef::SetOnFinished)> {
  static const MethodInfo* get() {
    static auto* onFinished = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "SetOnFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onFinished});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::SetOnFinished
// Il2CppName: SetOnFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFXRef::*)(::System::Action_1<::Il2CppObject*>*, ::Il2CppObject*)>(&OVR::SoundFXRef::SetOnFinished)> {
  static const MethodInfo* get() {
    static auto* onFinished = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "SetOnFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onFinished, obj});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::StopSound
// Il2CppName: StopSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundFXRef::*)()>(&OVR::SoundFXRef::StopSound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "StopSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::AttachToParent
// Il2CppName: AttachToParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFXRef::*)(::UnityEngine::Transform*)>(&OVR::SoundFXRef::AttachToParent)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "AttachToParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::DetachFromParent
// Il2CppName: DetachFromParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFXRef::*)()>(&OVR::SoundFXRef::DetachFromParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFXRef*), "DetachFromParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFXRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
