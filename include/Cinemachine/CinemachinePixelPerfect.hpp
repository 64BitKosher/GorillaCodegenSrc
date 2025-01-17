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
  // Forward declaring type: CinemachinePixelPerfect
  class CinemachinePixelPerfect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachinePixelPerfect);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachinePixelPerfect*, "Cinemachine", "CinemachinePixelPerfect");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachinePixelPerfect
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class CinemachinePixelPerfect : public ::Cinemachine::CinemachineExtension {
    public:
    // protected override System.Void PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    // Offset: 0x2A92A0C
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore::Stage stage, ByRef<::Cinemachine::CameraState> state, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x2A92B9C
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachinePixelPerfect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachinePixelPerfect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachinePixelPerfect*, creationType>()));
    }
  }; // Cinemachine.CinemachinePixelPerfect
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachinePixelPerfect::PostPipelineStageCallback
// Il2CppName: PostPipelineStageCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachinePixelPerfect::*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore::Stage, ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::CinemachinePixelPerfect::PostPipelineStageCallback)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCameraBase")->byval_arg;
    static auto* stage = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineCore/Stage")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachinePixelPerfect*), "PostPipelineStageCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, stage, state, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachinePixelPerfect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
