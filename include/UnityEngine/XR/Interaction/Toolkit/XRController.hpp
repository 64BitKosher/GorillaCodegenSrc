// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRBaseController
#include "UnityEngine/XR/Interaction/Toolkit/XRBaseController.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button
#include "UnityEngine/XR/Interaction/Toolkit/InputHelpers_Button.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.InputHelpers/Axis2D
#include "UnityEngine/XR/Interaction/Toolkit/InputHelpers_Axis2D.hpp"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::XR::Interaction
namespace UnityEngine::Experimental::XR::Interaction {
  // Forward declaring type: BasePoseProvider
  class BasePoseProvider;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRControllerState
  class XRControllerState;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRController
  class XRController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRController*, "UnityEngine.XR.Interaction.Toolkit", "XRController");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0xD9
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRController
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class XRController : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseController {
    public:
    public:
    // private UnityEngine.XR.XRNode m_ControllerNode
    // Size: 0x4
    // Offset: 0x9C
    ::UnityEngine::XR::XRNode m_ControllerNode;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::XRNode) == 0x4);
    // private UnityEngine.XR.XRNode m_InputDeviceControllerNode
    // Size: 0x4
    // Offset: 0xA0
    ::UnityEngine::XR::XRNode m_InputDeviceControllerNode;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::XRNode) == 0x4);
    // private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_SelectUsage
    // Size: 0x4
    // Offset: 0xA4
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button m_SelectUsage;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button) == 0x4);
    // private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_ActivateUsage
    // Size: 0x4
    // Offset: 0xA8
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button m_ActivateUsage;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button) == 0x4);
    // private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_UIPressUsage
    // Size: 0x4
    // Offset: 0xAC
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button m_UIPressUsage;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button) == 0x4);
    // private System.Single m_AxisToPressThreshold
    // Size: 0x4
    // Offset: 0xB0
    float m_AxisToPressThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_RotateAnchorLeft
    // Size: 0x4
    // Offset: 0xB4
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button m_RotateAnchorLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button) == 0x4);
    // private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_RotateAnchorRight
    // Size: 0x4
    // Offset: 0xB8
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button m_RotateAnchorRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button) == 0x4);
    // private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_MoveObjectIn
    // Size: 0x4
    // Offset: 0xBC
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button m_MoveObjectIn;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button) == 0x4);
    // private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_MoveObjectOut
    // Size: 0x4
    // Offset: 0xC0
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button m_MoveObjectOut;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button) == 0x4);
    // private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Axis2D m_DirectionalAnchorRotation
    // Size: 0x4
    // Offset: 0xC4
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Axis2D m_DirectionalAnchorRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Axis2D) == 0x4);
    // private UnityEngine.Experimental.XR.Interaction.BasePoseProvider m_PoseProvider
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* m_PoseProvider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*) == 0x8);
    // private UnityEngine.XR.InputDevice m_InputDevice
    // Size: 0x9
    // Offset: 0xD0
    ::UnityEngine::XR::InputDevice m_InputDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    public:
    // Get instance field reference: private UnityEngine.XR.XRNode m_ControllerNode
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::XRNode& dyn_m_ControllerNode();
    // Get instance field reference: private UnityEngine.XR.XRNode m_InputDeviceControllerNode
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::XRNode& dyn_m_InputDeviceControllerNode();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_SelectUsage
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button& dyn_m_SelectUsage();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_ActivateUsage
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button& dyn_m_ActivateUsage();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_UIPressUsage
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button& dyn_m_UIPressUsage();
    // Get instance field reference: private System.Single m_AxisToPressThreshold
    [[deprecated("Use field access instead!")]] float& dyn_m_AxisToPressThreshold();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_RotateAnchorLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button& dyn_m_RotateAnchorLeft();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_RotateAnchorRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button& dyn_m_RotateAnchorRight();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_MoveObjectIn
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button& dyn_m_MoveObjectIn();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button m_MoveObjectOut
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button& dyn_m_MoveObjectOut();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.InputHelpers/Axis2D m_DirectionalAnchorRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Axis2D& dyn_m_DirectionalAnchorRotation();
    // Get instance field reference: private UnityEngine.Experimental.XR.Interaction.BasePoseProvider m_PoseProvider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*& dyn_m_PoseProvider();
    // Get instance field reference: private UnityEngine.XR.InputDevice m_InputDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_m_InputDevice();
    // public UnityEngine.XR.XRNode get_controllerNode()
    // Offset: 0x53D4B7C
    ::UnityEngine::XR::XRNode get_controllerNode();
    // public System.Void set_controllerNode(UnityEngine.XR.XRNode value)
    // Offset: 0x53D4B84
    void set_controllerNode(::UnityEngine::XR::XRNode value);
    // public UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button get_selectUsage()
    // Offset: 0x53D4B8C
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button get_selectUsage();
    // public System.Void set_selectUsage(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button value)
    // Offset: 0x53D4B94
    void set_selectUsage(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button value);
    // public UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button get_activateUsage()
    // Offset: 0x53D4B9C
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button get_activateUsage();
    // public System.Void set_activateUsage(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button value)
    // Offset: 0x53D4BA4
    void set_activateUsage(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button value);
    // public UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button get_uiPressUsage()
    // Offset: 0x53D4BAC
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button get_uiPressUsage();
    // public System.Void set_uiPressUsage(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button value)
    // Offset: 0x53D4BB4
    void set_uiPressUsage(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button value);
    // public System.Single get_axisToPressThreshold()
    // Offset: 0x53D4BBC
    float get_axisToPressThreshold();
    // public System.Void set_axisToPressThreshold(System.Single value)
    // Offset: 0x53D4BC4
    void set_axisToPressThreshold(float value);
    // public UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button get_rotateObjectLeft()
    // Offset: 0x53D4BCC
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button get_rotateObjectLeft();
    // public System.Void set_rotateObjectLeft(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button value)
    // Offset: 0x53D4BD4
    void set_rotateObjectLeft(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button value);
    // public UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button get_rotateObjectRight()
    // Offset: 0x53D4BDC
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button get_rotateObjectRight();
    // public System.Void set_rotateObjectRight(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button value)
    // Offset: 0x53D4BE4
    void set_rotateObjectRight(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button value);
    // public UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button get_moveObjectIn()
    // Offset: 0x53D4BEC
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button get_moveObjectIn();
    // public System.Void set_moveObjectIn(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button value)
    // Offset: 0x53D4BF4
    void set_moveObjectIn(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button value);
    // public UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button get_moveObjectOut()
    // Offset: 0x53D4BFC
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button get_moveObjectOut();
    // public System.Void set_moveObjectOut(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button value)
    // Offset: 0x53D4C04
    void set_moveObjectOut(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button value);
    // public UnityEngine.XR.Interaction.Toolkit.InputHelpers/Axis2D get_directionalAnchorRotation()
    // Offset: 0x53D4C0C
    ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Axis2D get_directionalAnchorRotation();
    // public System.Void set_directionalAnchorRotation(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Axis2D value)
    // Offset: 0x53D4C14
    void set_directionalAnchorRotation(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Axis2D value);
    // public UnityEngine.Experimental.XR.Interaction.BasePoseProvider get_poseProvider()
    // Offset: 0x53D4C1C
    ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* get_poseProvider();
    // public System.Void set_poseProvider(UnityEngine.Experimental.XR.Interaction.BasePoseProvider value)
    // Offset: 0x53D4C24
    void set_poseProvider(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* value);
    // public UnityEngine.XR.InputDevice get_inputDevice()
    // Offset: 0x53D4C2C
    ::UnityEngine::XR::InputDevice get_inputDevice();
    // protected System.Boolean IsPressed(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button button)
    // Offset: 0x53D4FD0
    bool IsPressed(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button button);
    // protected System.Single ReadValue(UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button button)
    // Offset: 0x53D5074
    float ReadValue(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button button);
    // protected override System.Void UpdateTrackingInput(UnityEngine.XR.Interaction.Toolkit.XRControllerState controllerState)
    // Offset: 0x53D4C78
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.XRBaseController
    // Base method: System.Void XRBaseController::UpdateTrackingInput(UnityEngine.XR.Interaction.Toolkit.XRControllerState controllerState)
    void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);
    // protected override System.Void UpdateInput(UnityEngine.XR.Interaction.Toolkit.XRControllerState controllerState)
    // Offset: 0x53D4E7C
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.XRBaseController
    // Base method: System.Void XRBaseController::UpdateInput(UnityEngine.XR.Interaction.Toolkit.XRControllerState controllerState)
    void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);
    // public override System.Boolean SendHapticImpulse(System.Single amplitude, System.Single duration)
    // Offset: 0x53D5100
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.XRBaseController
    // Base method: System.Boolean XRBaseController::SendHapticImpulse(System.Single amplitude, System.Single duration)
    bool SendHapticImpulse(float amplitude, float duration);
    // public System.Void .ctor()
    // Offset: 0x53D5194
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.XRBaseController
    // Base method: System.Void XRBaseController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::XRController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRController*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.XRController
  #pragma pack(pop)
  static check_size<sizeof(XRController), 208 + sizeof(::UnityEngine::XR::InputDevice)> __UnityEngine_XR_Interaction_Toolkit_XRControllerSizeCheck;
  static_assert(sizeof(XRController) == 0xD9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_controllerNode
// Il2CppName: get_controllerNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRNode (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_controllerNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_controllerNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_controllerNode
// Il2CppName: set_controllerNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::XRNode)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_controllerNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_controllerNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_selectUsage
// Il2CppName: get_selectUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_selectUsage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_selectUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_selectUsage
// Il2CppName: set_selectUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_selectUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_selectUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_activateUsage
// Il2CppName: get_activateUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_activateUsage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_activateUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_activateUsage
// Il2CppName: set_activateUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_activateUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_activateUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_uiPressUsage
// Il2CppName: get_uiPressUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_uiPressUsage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_uiPressUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_uiPressUsage
// Il2CppName: set_uiPressUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_uiPressUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_uiPressUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_axisToPressThreshold
// Il2CppName: get_axisToPressThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_axisToPressThreshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_axisToPressThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_axisToPressThreshold
// Il2CppName: set_axisToPressThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_axisToPressThreshold)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_axisToPressThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectLeft
// Il2CppName: get_rotateObjectLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_rotateObjectLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectLeft
// Il2CppName: set_rotateObjectLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectLeft)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_rotateObjectLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectRight
// Il2CppName: get_rotateObjectRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_rotateObjectRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectRight
// Il2CppName: set_rotateObjectRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectRight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_rotateObjectRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectIn
// Il2CppName: get_moveObjectIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_moveObjectIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectIn
// Il2CppName: set_moveObjectIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectIn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_moveObjectIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectOut
// Il2CppName: get_moveObjectOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_moveObjectOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectOut
// Il2CppName: set_moveObjectOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectOut)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_moveObjectOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_directionalAnchorRotation
// Il2CppName: get_directionalAnchorRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Axis2D (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_directionalAnchorRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_directionalAnchorRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_directionalAnchorRotation
// Il2CppName: set_directionalAnchorRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Axis2D)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_directionalAnchorRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Axis2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_directionalAnchorRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_poseProvider
// Il2CppName: get_poseProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_poseProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_poseProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_poseProvider
// Il2CppName: set_poseProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_poseProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR.Interaction", "BasePoseProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_poseProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_inputDevice
// Il2CppName: get_inputDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputDevice (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_inputDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_inputDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::IsPressed
// Il2CppName: IsPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::IsPressed)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "IsPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::ReadValue
// Il2CppName: ReadValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::ReadValue)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "ReadValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::UpdateTrackingInput
// Il2CppName: UpdateTrackingInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&UnityEngine::XR::Interaction::Toolkit::XRController::UpdateTrackingInput)> {
  static const MethodInfo* get() {
    static auto* controllerState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRControllerState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "UpdateTrackingInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerState});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::UpdateInput
// Il2CppName: UpdateInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&UnityEngine::XR::Interaction::Toolkit::XRController::UpdateInput)> {
  static const MethodInfo* get() {
    static auto* controllerState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRControllerState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "UpdateInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerState});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::SendHapticImpulse
// Il2CppName: SendHapticImpulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRController::*)(float, float)>(&UnityEngine::XR::Interaction::Toolkit::XRController::SendHapticImpulse)> {
  static const MethodInfo* get() {
    static auto* amplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "SendHapticImpulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amplitude, duration});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
