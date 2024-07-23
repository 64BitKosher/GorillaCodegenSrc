// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineExtension
#include "Cinemachine/CinemachineExtension.hpp"
// Including type: Cinemachine.CinemachineCore/Stage
#include "Cinemachine/CinemachineCore_Stage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineVirtualCameraBase
  class CinemachineVirtualCameraBase;
  // Forward declaring type: CameraState
  struct CameraState;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CinemachineRecomposer
  class CinemachineRecomposer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CinemachineRecomposer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CinemachineRecomposer*, "", "CinemachineRecomposer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: CinemachineRecomposer
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [SaveDuringPlayAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class CinemachineRecomposer : public ::Cinemachine::CinemachineExtension {
    public:
    public:
    // public Cinemachine.CinemachineCore/Stage m_ApplyAfter
    // Size: 0x4
    // Offset: 0x30
    ::Cinemachine::CinemachineCore::Stage m_ApplyAfter;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineCore::Stage) == 0x4);
    // public System.Single m_Tilt
    // Size: 0x4
    // Offset: 0x34
    float m_Tilt;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Pan
    // Size: 0x4
    // Offset: 0x38
    float m_Pan;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Dutch
    // Size: 0x4
    // Offset: 0x3C
    float m_Dutch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_ZoomScale
    // Size: 0x4
    // Offset: 0x40
    float m_ZoomScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_FollowAttachment
    // Size: 0x4
    // Offset: 0x44
    float m_FollowAttachment;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_LookAtAttachment
    // Size: 0x4
    // Offset: 0x48
    float m_LookAtAttachment;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public Cinemachine.CinemachineCore/Stage m_ApplyAfter
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineCore::Stage& dyn_m_ApplyAfter();
    // Get instance field reference: public System.Single m_Tilt
    [[deprecated("Use field access instead!")]] float& dyn_m_Tilt();
    // Get instance field reference: public System.Single m_Pan
    [[deprecated("Use field access instead!")]] float& dyn_m_Pan();
    // Get instance field reference: public System.Single m_Dutch
    [[deprecated("Use field access instead!")]] float& dyn_m_Dutch();
    // Get instance field reference: public System.Single m_ZoomScale
    [[deprecated("Use field access instead!")]] float& dyn_m_ZoomScale();
    // Get instance field reference: public System.Single m_FollowAttachment
    [[deprecated("Use field access instead!")]] float& dyn_m_FollowAttachment();
    // Get instance field reference: public System.Single m_LookAtAttachment
    [[deprecated("Use field access instead!")]] float& dyn_m_LookAtAttachment();
    // private System.Void Reset()
    // Offset: 0x2A7CC40
    void Reset();
    // private System.Void OnValidate()
    // Offset: 0x2A7CC60
    void OnValidate();
    // public override System.Void PrePipelineMutateCameraStateCallback(Cinemachine.CinemachineVirtualCameraBase vcam, ref Cinemachine.CameraState curState, System.Single deltaTime)
    // Offset: 0x2A7CCA0
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::PrePipelineMutateCameraStateCallback(Cinemachine.CinemachineVirtualCameraBase vcam, ref Cinemachine.CameraState curState, System.Single deltaTime)
    void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ByRef<::Cinemachine::CameraState> curState, float deltaTime);
    // protected override System.Void PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    // Offset: 0x2A7CCBC
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore::Stage stage, ByRef<::Cinemachine::CameraState> state, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x2A7CF34
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineRecomposer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CinemachineRecomposer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineRecomposer*, creationType>()));
    }
  }; // CinemachineRecomposer
  #pragma pack(pop)
  static check_size<sizeof(CinemachineRecomposer), 72 + sizeof(float)> __GlobalNamespace_CinemachineRecomposerSizeCheck;
  static_assert(sizeof(CinemachineRecomposer) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CinemachineRecomposer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CinemachineRecomposer::*)()>(&GlobalNamespace::CinemachineRecomposer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CinemachineRecomposer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CinemachineRecomposer::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CinemachineRecomposer::*)()>(&GlobalNamespace::CinemachineRecomposer::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CinemachineRecomposer*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CinemachineRecomposer::PrePipelineMutateCameraStateCallback
// Il2CppName: PrePipelineMutateCameraStateCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CinemachineRecomposer::*)(::Cinemachine::CinemachineVirtualCameraBase*, ByRef<::Cinemachine::CameraState>, float)>(&GlobalNamespace::CinemachineRecomposer::PrePipelineMutateCameraStateCallback)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCameraBase")->byval_arg;
    static auto* curState = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CinemachineRecomposer*), "PrePipelineMutateCameraStateCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, curState, deltaTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CinemachineRecomposer::PostPipelineStageCallback
// Il2CppName: PostPipelineStageCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CinemachineRecomposer::*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore::Stage, ByRef<::Cinemachine::CameraState>, float)>(&GlobalNamespace::CinemachineRecomposer::PostPipelineStageCallback)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCameraBase")->byval_arg;
    static auto* stage = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineCore/Stage")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CinemachineRecomposer*), "PostPipelineStageCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, stage, state, deltaTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CinemachineRecomposer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
