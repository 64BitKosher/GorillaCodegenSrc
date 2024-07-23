// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
  // Forward declaring type: SimpleCapsuleWithStickMovement
  class SimpleCapsuleWithStickMovement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CapsuleCollider
  class CapsuleCollider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CharacterCameraConstraint
  class CharacterCameraConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CharacterCameraConstraint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CharacterCameraConstraint*, "", "CharacterCameraConstraint");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: CharacterCameraConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class CharacterCameraConstraint : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    // public UnityEngine.LayerMask CollideLayers
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::LayerMask CollideLayers;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public System.Single HeightOffset
    // Size: 0x4
    // Offset: 0x2C
    float HeightOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MinimumHeight
    // Size: 0x4
    // Offset: 0x30
    float MinimumHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaximumHeight
    // Size: 0x4
    // Offset: 0x34
    float MaximumHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.CapsuleCollider _character
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::CapsuleCollider* character;
    // Field size check
    static_assert(sizeof(::UnityEngine::CapsuleCollider*) == 0x8);
    // private SimpleCapsuleWithStickMovement _simplePlayerController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SimpleCapsuleWithStickMovement* simplePlayerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleCapsuleWithStickMovement*) == 0x8);
    public:
    // static field const value: static private System.Single FADE_RAY_LENGTH
    static constexpr const float FADE_RAY_LENGTH = 0.25;
    // Get static field: static private System.Single FADE_RAY_LENGTH
    static float _get_FADE_RAY_LENGTH();
    // Set static field: static private System.Single FADE_RAY_LENGTH
    static void _set_FADE_RAY_LENGTH(float value);
    // static field const value: static private System.Single FADE_OVERLAP_MAXIMUM
    static constexpr const float FADE_OVERLAP_MAXIMUM = 0.1;
    // Get static field: static private System.Single FADE_OVERLAP_MAXIMUM
    static float _get_FADE_OVERLAP_MAXIMUM();
    // Set static field: static private System.Single FADE_OVERLAP_MAXIMUM
    static void _set_FADE_OVERLAP_MAXIMUM(float value);
    // static field const value: static private System.Single FADE_AMOUNT_MAXIMUM
    static constexpr const float FADE_AMOUNT_MAXIMUM = 1;
    // Get static field: static private System.Single FADE_AMOUNT_MAXIMUM
    static float _get_FADE_AMOUNT_MAXIMUM();
    // Set static field: static private System.Single FADE_AMOUNT_MAXIMUM
    static void _set_FADE_AMOUNT_MAXIMUM(float value);
    // Get instance field reference: public OVRCameraRig CameraRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn_CameraRig();
    // Get instance field reference: public UnityEngine.LayerMask CollideLayers
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_CollideLayers();
    // Get instance field reference: public System.Single HeightOffset
    [[deprecated("Use field access instead!")]] float& dyn_HeightOffset();
    // Get instance field reference: public System.Single MinimumHeight
    [[deprecated("Use field access instead!")]] float& dyn_MinimumHeight();
    // Get instance field reference: public System.Single MaximumHeight
    [[deprecated("Use field access instead!")]] float& dyn_MaximumHeight();
    // Get instance field reference: private UnityEngine.CapsuleCollider _character
    [[deprecated("Use field access instead!")]] ::UnityEngine::CapsuleCollider*& dyn__character();
    // Get instance field reference: private SimpleCapsuleWithStickMovement _simplePlayerController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleCapsuleWithStickMovement*& dyn__simplePlayerController();
    // private System.Void .ctor()
    // Offset: 0x291EE64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharacterCameraConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CharacterCameraConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharacterCameraConstraint*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x291EE6C
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x291EEFC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x291F024
    void OnDisable();
    // private System.Void CameraUpdate()
    // Offset: 0x291F14C
    void CameraUpdate();
    // private System.Boolean CheckCameraOverlapped()
    // Offset: 0x291F4CC
    bool CheckCameraOverlapped();
    // private System.Boolean CheckCameraNearClipping(out System.Single result)
    // Offset: 0x291F740
    bool CheckCameraNearClipping(ByRef<float> result);
  }; // CharacterCameraConstraint
  #pragma pack(pop)
  static check_size<sizeof(CharacterCameraConstraint), 64 + sizeof(::GlobalNamespace::SimpleCapsuleWithStickMovement*)> __GlobalNamespace_CharacterCameraConstraintSizeCheck;
  static_assert(sizeof(CharacterCameraConstraint) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::CameraUpdate
// Il2CppName: CameraUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::CameraUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "CameraUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::CheckCameraOverlapped
// Il2CppName: CheckCameraOverlapped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::CheckCameraOverlapped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "CheckCameraOverlapped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::CheckCameraNearClipping
// Il2CppName: CheckCameraNearClipping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CharacterCameraConstraint::*)(ByRef<float>)>(&GlobalNamespace::CharacterCameraConstraint::CheckCameraNearClipping)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "CheckCameraNearClipping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
