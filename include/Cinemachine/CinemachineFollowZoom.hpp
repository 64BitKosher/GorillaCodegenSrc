// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineExtension
#include "Cinemachine/CinemachineExtension.hpp"
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
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineFollowZoom
  class CinemachineFollowZoom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineFollowZoom);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineFollowZoom*, "Cinemachine", "CinemachineFollowZoom");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineFollowZoom
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [SaveDuringPlayAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class CinemachineFollowZoom : public ::Cinemachine::CinemachineExtension {
    public:
    // Nested type: ::Cinemachine::CinemachineFollowZoom::VcamExtraState
    class VcamExtraState;
    public:
    // public System.Single m_Width
    // Size: 0x4
    // Offset: 0x30
    float m_Width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Damping
    // Size: 0x4
    // Offset: 0x34
    float m_Damping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_MinFOV
    // Size: 0x4
    // Offset: 0x38
    float m_MinFOV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_MaxFOV
    // Size: 0x4
    // Offset: 0x3C
    float m_MaxFOV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single m_Width
    [[deprecated("Use field access instead!")]] float& dyn_m_Width();
    // Get instance field reference: public System.Single m_Damping
    [[deprecated("Use field access instead!")]] float& dyn_m_Damping();
    // Get instance field reference: public System.Single m_MinFOV
    [[deprecated("Use field access instead!")]] float& dyn_m_MinFOV();
    // Get instance field reference: public System.Single m_MaxFOV
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxFOV();
    // private System.Void OnValidate()
    // Offset: 0x2A8CB70
    void OnValidate();
    // public override System.Single GetMaxDampTime()
    // Offset: 0x2A8CBB4
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Single CinemachineExtension::GetMaxDampTime()
    float GetMaxDampTime();
    // protected override System.Void PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    // Offset: 0x2A8CBBC
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore::Stage stage, ByRef<::Cinemachine::CameraState> state, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x2A8CE64
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineFollowZoom* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineFollowZoom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineFollowZoom*, creationType>()));
    }
  }; // Cinemachine.CinemachineFollowZoom
  #pragma pack(pop)
  static check_size<sizeof(CinemachineFollowZoom), 60 + sizeof(float)> __Cinemachine_CinemachineFollowZoomSizeCheck;
  static_assert(sizeof(CinemachineFollowZoom) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineFollowZoom::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineFollowZoom::*)()>(&Cinemachine::CinemachineFollowZoom::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFollowZoom*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFollowZoom::GetMaxDampTime
// Il2CppName: GetMaxDampTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineFollowZoom::*)()>(&Cinemachine::CinemachineFollowZoom::GetMaxDampTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFollowZoom*), "GetMaxDampTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFollowZoom::PostPipelineStageCallback
// Il2CppName: PostPipelineStageCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineFollowZoom::*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore::Stage, ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::CinemachineFollowZoom::PostPipelineStageCallback)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCameraBase")->byval_arg;
    static auto* stage = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineCore/Stage")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFollowZoom*), "PostPipelineStageCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, stage, state, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFollowZoom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
