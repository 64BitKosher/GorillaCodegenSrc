// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: Handedness
  struct Handedness;
  // Forward declaring type: ControllerButtonUsage
  struct ControllerButtonUsage;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IController
  class IController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::IController);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::IController*, "Oculus.Interaction.Input", "IController");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.IController
  // [TokenAttribute] Offset: FFFFFFFF
  class IController {
    public:
    // public Oculus.Interaction.Input.Handedness get_Handedness()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Oculus::Interaction::Input::Handedness get_Handedness();
    // public System.Boolean get_IsConnected()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsConnected();
    // public System.Boolean get_IsPoseValid()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsPoseValid();
    // public System.Boolean TryGetPose(out UnityEngine.Pose pose)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetPose(ByRef<::UnityEngine::Pose> pose);
    // public System.Boolean TryGetPointerPose(out UnityEngine.Pose pose)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetPointerPose(ByRef<::UnityEngine::Pose> pose);
    // public System.Single get_Scale()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_Scale();
    // public System.Boolean IsButtonUsageAnyActive(Oculus.Interaction.Input.ControllerButtonUsage buttonUsage)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsButtonUsageAnyActive(::Oculus::Interaction::Input::ControllerButtonUsage buttonUsage);
    // public System.Boolean IsButtonUsageAllActive(Oculus.Interaction.Input.ControllerButtonUsage buttonUsage)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsButtonUsageAllActive(::Oculus::Interaction::Input::ControllerButtonUsage buttonUsage);
    // public System.Void add_WhenUpdated(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_WhenUpdated(::System::Action* value);
    // public System.Void remove_WhenUpdated(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_WhenUpdated(::System::Action* value);
  }; // Oculus.Interaction.Input.IController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::get_Handedness
// Il2CppName: get_Handedness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::Handedness (Oculus::Interaction::Input::IController::*)()>(&Oculus::Interaction::Input::IController::get_Handedness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "get_Handedness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::get_IsConnected
// Il2CppName: get_IsConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::IController::*)()>(&Oculus::Interaction::Input::IController::get_IsConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "get_IsConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::get_IsPoseValid
// Il2CppName: get_IsPoseValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::IController::*)()>(&Oculus::Interaction::Input::IController::get_IsPoseValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "get_IsPoseValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::TryGetPose
// Il2CppName: TryGetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::IController::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::Input::IController::TryGetPose)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "TryGetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::TryGetPointerPose
// Il2CppName: TryGetPointerPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::IController::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::Input::IController::TryGetPointerPose)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "TryGetPointerPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::get_Scale
// Il2CppName: get_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::IController::*)()>(&Oculus::Interaction::Input::IController::get_Scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "get_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::IsButtonUsageAnyActive
// Il2CppName: IsButtonUsageAnyActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::IController::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&Oculus::Interaction::Input::IController::IsButtonUsageAnyActive)> {
  static const MethodInfo* get() {
    static auto* buttonUsage = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "ControllerButtonUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "IsButtonUsageAnyActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonUsage});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::IsButtonUsageAllActive
// Il2CppName: IsButtonUsageAllActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::IController::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&Oculus::Interaction::Input::IController::IsButtonUsageAllActive)> {
  static const MethodInfo* get() {
    static auto* buttonUsage = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "ControllerButtonUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "IsButtonUsageAllActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonUsage});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::add_WhenUpdated
// Il2CppName: add_WhenUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::IController::*)(::System::Action*)>(&Oculus::Interaction::Input::IController::add_WhenUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "add_WhenUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::IController::remove_WhenUpdated
// Il2CppName: remove_WhenUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::IController::*)(::System::Action*)>(&Oculus::Interaction::Input::IController::remove_WhenUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IController*), "remove_WhenUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
