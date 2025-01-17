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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BouncingBallLogic
  class BouncingBallLogic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BouncingBallLogic);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BouncingBallLogic*, "", "BouncingBallLogic");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6A
  #pragma pack(push, 1)
  // Autogenerated type: BouncingBallLogic
  // [TokenAttribute] Offset: FFFFFFFF
  class BouncingBallLogic : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BouncingBallLogic::$PlayPopCallback$d__18
    class $PlayPopCallback$d__18;
    public:
    // private System.Single TTL
    // Size: 0x4
    // Offset: 0x20
    float TTL;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: TTL and: pop
    char __padding0[0x4] = {};
    // private UnityEngine.AudioClip pop
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioClip* pop;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip bounce
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioClip* bounce;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip loadball
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AudioClip* loadball;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.Material visibleMat
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* visibleMat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material hiddenMat
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Material* hiddenMat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.Transform centerEyeCamera
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* centerEyeCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean isVisible
    // Size: 0x1
    // Offset: 0x60
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isVisible and: timer
    char __padding8[0x3] = {};
    // private System.Single timer
    // Size: 0x4
    // Offset: 0x64
    float timer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean isReleased
    // Size: 0x1
    // Offset: 0x68
    bool isReleased;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isReadyForDestroy
    // Size: 0x1
    // Offset: 0x69
    bool isReadyForDestroy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Single TTL
    [[deprecated("Use field access instead!")]] float& dyn_TTL();
    // Get instance field reference: private UnityEngine.AudioClip pop
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_pop();
    // Get instance field reference: private UnityEngine.AudioClip bounce
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_bounce();
    // Get instance field reference: private UnityEngine.AudioClip loadball
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_loadball();
    // Get instance field reference: private UnityEngine.Material visibleMat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_visibleMat();
    // Get instance field reference: private UnityEngine.Material hiddenMat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_hiddenMat();
    // Get instance field reference: private UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: private UnityEngine.Transform centerEyeCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_centerEyeCamera();
    // Get instance field reference: private System.Boolean isVisible
    [[deprecated("Use field access instead!")]] bool& dyn_isVisible();
    // Get instance field reference: private System.Single timer
    [[deprecated("Use field access instead!")]] float& dyn_timer();
    // Get instance field reference: private System.Boolean isReleased
    [[deprecated("Use field access instead!")]] bool& dyn_isReleased();
    // Get instance field reference: private System.Boolean isReadyForDestroy
    [[deprecated("Use field access instead!")]] bool& dyn_isReadyForDestroy();
    // private System.Void OnCollisionEnter()
    // Offset: 0x293CCE4
    void OnCollisionEnter();
    // private System.Void Start()
    // Offset: 0x293CD08
    void Start();
    // private System.Void Update()
    // Offset: 0x293CE10
    void Update();
    // private System.Void UpdateVisibility()
    // Offset: 0x293CEB4
    void UpdateVisibility();
    // private System.Void SetVisible(System.Boolean setVisible)
    // Offset: 0x293D1AC
    void SetVisible(bool setVisible);
    // public System.Void Release(UnityEngine.Vector3 pos, UnityEngine.Vector3 vel, UnityEngine.Vector3 angVel)
    // Offset: 0x293D250
    void Release(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 vel, ::UnityEngine::Vector3 angVel);
    // private System.Collections.IEnumerator PlayPopCallback(System.Single clipLength)
    // Offset: 0x293D130
    ::System::Collections::IEnumerator* PlayPopCallback(float clipLength);
    // public System.Void .ctor()
    // Offset: 0x293D38C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BouncingBallLogic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BouncingBallLogic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BouncingBallLogic*, creationType>()));
    }
  }; // BouncingBallLogic
  #pragma pack(pop)
  static check_size<sizeof(BouncingBallLogic), 105 + sizeof(bool)> __GlobalNamespace_BouncingBallLogicSizeCheck;
  static_assert(sizeof(BouncingBallLogic) == 0x6A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BouncingBallLogic::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BouncingBallLogic::*)()>(&GlobalNamespace::BouncingBallLogic::OnCollisionEnter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BouncingBallLogic*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BouncingBallLogic::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BouncingBallLogic::*)()>(&GlobalNamespace::BouncingBallLogic::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BouncingBallLogic*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BouncingBallLogic::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BouncingBallLogic::*)()>(&GlobalNamespace::BouncingBallLogic::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BouncingBallLogic*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BouncingBallLogic::UpdateVisibility
// Il2CppName: UpdateVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BouncingBallLogic::*)()>(&GlobalNamespace::BouncingBallLogic::UpdateVisibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BouncingBallLogic*), "UpdateVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BouncingBallLogic::SetVisible
// Il2CppName: SetVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BouncingBallLogic::*)(bool)>(&GlobalNamespace::BouncingBallLogic::SetVisible)> {
  static const MethodInfo* get() {
    static auto* setVisible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BouncingBallLogic*), "SetVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setVisible});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BouncingBallLogic::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BouncingBallLogic::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::BouncingBallLogic::Release)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* vel = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angVel = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BouncingBallLogic*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, vel, angVel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BouncingBallLogic::PlayPopCallback
// Il2CppName: PlayPopCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BouncingBallLogic::*)(float)>(&GlobalNamespace::BouncingBallLogic::PlayPopCallback)> {
  static const MethodInfo* get() {
    static auto* clipLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BouncingBallLogic*), "PlayPopCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipLength});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BouncingBallLogic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
