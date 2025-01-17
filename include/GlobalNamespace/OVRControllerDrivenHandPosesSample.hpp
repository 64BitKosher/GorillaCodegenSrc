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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRControllerDrivenHandPosesSample
  class OVRControllerDrivenHandPosesSample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRControllerDrivenHandPosesSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerDrivenHandPosesSample*, "", "OVRControllerDrivenHandPosesSample");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: OVRControllerDrivenHandPosesSample
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class OVRControllerDrivenHandPosesSample : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.UI.Button buttonOff
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* buttonOff;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button buttonConforming
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Button* buttonConforming;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button buttonNatural
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Button* buttonNatural;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.LineRenderer leftLinePointer
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::LineRenderer* leftLinePointer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private UnityEngine.LineRenderer rightLinePointer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::LineRenderer* rightLinePointer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // public OVRCameraRig cameraRig
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::OVRCameraRig* cameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button buttonOff
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_buttonOff();
    // Get instance field reference: private UnityEngine.UI.Button buttonConforming
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_buttonConforming();
    // Get instance field reference: private UnityEngine.UI.Button buttonNatural
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_buttonNatural();
    // Get instance field reference: private UnityEngine.LineRenderer leftLinePointer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_leftLinePointer();
    // Get instance field reference: private UnityEngine.LineRenderer rightLinePointer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_rightLinePointer();
    // Get instance field reference: public OVRCameraRig cameraRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn_cameraRig();
    // private System.Void Awake()
    // Offset: 0x48B78C0
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x48B7C14
    void OnDestroy();
    // private System.Void OnEnable()
    // Offset: 0x48B7C18
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x48B7C1C
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x48B7C20
    void Update();
    // private System.Void UpdateLineRenderer()
    // Offset: 0x48B7C24
    void UpdateLineRenderer();
    // private System.Void UpdateLineRendererForHand(System.Boolean isLeft)
    // Offset: 0x48B7C74
    void UpdateLineRendererForHand(bool isLeft);
    // public System.Void SetControllerDrivenHandPosesTypeToNone()
    // Offset: 0x48B799C
    void SetControllerDrivenHandPosesTypeToNone();
    // public System.Void SetControllerDrivenHandPosesTypeToControllerConforming()
    // Offset: 0x48B7A6C
    void SetControllerDrivenHandPosesTypeToControllerConforming();
    // public System.Void SetControllerDrivenHandPosesTypeToNatural()
    // Offset: 0x48B7B40
    void SetControllerDrivenHandPosesTypeToNatural();
    // public System.Void .ctor()
    // Offset: 0x48B7F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRControllerDrivenHandPosesSample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRControllerDrivenHandPosesSample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRControllerDrivenHandPosesSample*, creationType>()));
    }
  }; // OVRControllerDrivenHandPosesSample
  #pragma pack(pop)
  static check_size<sizeof(OVRControllerDrivenHandPosesSample), 72 + sizeof(::GlobalNamespace::OVRCameraRig*)> __GlobalNamespace_OVRControllerDrivenHandPosesSampleSizeCheck;
  static_assert(sizeof(OVRControllerDrivenHandPosesSample) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::UpdateLineRenderer
// Il2CppName: UpdateLineRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::UpdateLineRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "UpdateLineRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::UpdateLineRendererForHand
// Il2CppName: UpdateLineRendererForHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)(bool)>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::UpdateLineRendererForHand)> {
  static const MethodInfo* get() {
    static auto* isLeft = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "UpdateLineRendererForHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLeft});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::SetControllerDrivenHandPosesTypeToNone
// Il2CppName: SetControllerDrivenHandPosesTypeToNone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::SetControllerDrivenHandPosesTypeToNone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "SetControllerDrivenHandPosesTypeToNone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::SetControllerDrivenHandPosesTypeToControllerConforming
// Il2CppName: SetControllerDrivenHandPosesTypeToControllerConforming
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::SetControllerDrivenHandPosesTypeToControllerConforming)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "SetControllerDrivenHandPosesTypeToControllerConforming", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::SetControllerDrivenHandPosesTypeToNatural
// Il2CppName: SetControllerDrivenHandPosesTypeToNatural
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerDrivenHandPosesSample::*)()>(&GlobalNamespace::OVRControllerDrivenHandPosesSample::SetControllerDrivenHandPosesTypeToNatural)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerDrivenHandPosesSample*), "SetControllerDrivenHandPosesTypeToNatural", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerDrivenHandPosesSample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
