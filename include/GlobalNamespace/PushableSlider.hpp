// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PushableSlider
  class PushableSlider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PushableSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PushableSlider*, "", "PushableSlider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: PushableSlider
  // [TokenAttribute] Offset: FFFFFFFF
  class PushableSlider : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single farPushDist
    // Size: 0x4
    // Offset: 0x20
    float farPushDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single maxXOffset
    // Size: 0x4
    // Offset: 0x24
    float maxXOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single minXOffset
    // Size: 0x4
    // Offset: 0x28
    float minXOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Matrix4x4 localSpace
    // Size: 0x40
    // Offset: 0x2C
    ::UnityEngine::Matrix4x4 localSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Vector3 startingPos
    // Size: 0xC
    // Offset: 0x6C
    ::UnityEngine::Vector3 startingPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private System.Single farPushDist
    [[deprecated("Use field access instead!")]] float& dyn_farPushDist();
    // Get instance field reference: private System.Single maxXOffset
    [[deprecated("Use field access instead!")]] float& dyn_maxXOffset();
    // Get instance field reference: private System.Single minXOffset
    [[deprecated("Use field access instead!")]] float& dyn_minXOffset();
    // Get instance field reference: private UnityEngine.Matrix4x4 localSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_localSpace();
    // Get instance field reference: private UnityEngine.Vector3 startingPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startingPos();
    // public System.Void Awake()
    // Offset: 0x26D47B0
    void Awake();
    // private System.Void OnTriggerStay(UnityEngine.Collider other)
    // Offset: 0x26D4824
    void OnTriggerStay(::UnityEngine::Collider* other);
    // public System.Void SetProgress(System.Single value)
    // Offset: 0x26D3858
    void SetProgress(float value);
    // public System.Single GetProgress()
    // Offset: 0x26D4448
    float GetProgress();
    // public System.Void .ctor()
    // Offset: 0x26D4AA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PushableSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PushableSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PushableSlider*, creationType>()));
    }
  }; // PushableSlider
  #pragma pack(pop)
  static check_size<sizeof(PushableSlider), 108 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_PushableSliderSizeCheck;
  static_assert(sizeof(PushableSlider) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PushableSlider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PushableSlider::*)()>(&GlobalNamespace::PushableSlider::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PushableSlider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PushableSlider::OnTriggerStay
// Il2CppName: OnTriggerStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PushableSlider::*)(::UnityEngine::Collider*)>(&GlobalNamespace::PushableSlider::OnTriggerStay)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PushableSlider*), "OnTriggerStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PushableSlider::SetProgress
// Il2CppName: SetProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PushableSlider::*)(float)>(&GlobalNamespace::PushableSlider::SetProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PushableSlider*), "SetProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PushableSlider::GetProgress
// Il2CppName: GetProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PushableSlider::*)()>(&GlobalNamespace::PushableSlider::GetProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PushableSlider*), "GetProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PushableSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
