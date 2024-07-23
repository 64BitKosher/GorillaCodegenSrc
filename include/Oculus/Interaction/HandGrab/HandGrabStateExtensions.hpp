// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: Oculus::Interaction::HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: IHandGrabState
  class IHandGrabState;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: HandGrabStateExtensions
  class HandGrabStateExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandGrab::HandGrabStateExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::HandGrabStateExtensions*, "Oculus.Interaction.HandGrab", "HandGrabStateExtensions");
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.HandGrabStateExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class HandGrabStateExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.Pose GetVisualWristPose(Oculus.Interaction.HandGrab.IHandGrabState grabState)
    // Offset: 0x482AF00
    static ::UnityEngine::Pose GetVisualWristPose(::Oculus::Interaction::HandGrab::IHandGrabState* grabState);
    // static public UnityEngine.Pose GetTargetGrabPose(Oculus.Interaction.HandGrab.IHandGrabState grabState)
    // Offset: 0x4825050
    static ::UnityEngine::Pose GetTargetGrabPose(::Oculus::Interaction::HandGrab::IHandGrabState* grabState);
  }; // Oculus.Interaction.HandGrab.HandGrabStateExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateExtensions::GetVisualWristPose
// Il2CppName: GetVisualWristPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&Oculus::Interaction::HandGrab::HandGrabStateExtensions::GetVisualWristPose)> {
  static const MethodInfo* get() {
    static auto* grabState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateExtensions*), "GetVisualWristPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateExtensions::GetTargetGrabPose
// Il2CppName: GetTargetGrabPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&Oculus::Interaction::HandGrab::HandGrabStateExtensions::GetTargetGrabPose)> {
  static const MethodInfo* get() {
    static auto* grabState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateExtensions*), "GetTargetGrabPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabState});
  }
};
