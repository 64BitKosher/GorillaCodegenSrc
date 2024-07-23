// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputDevice
#include "UnityEngine/InputSystem/InputDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: ButtonControl
  class ButtonControl;
  // Forward declaring type: Vector2Control
  class Vector2Control;
}
// Completed forward declares
// Type namespace: Unity.XR.Oculus.Input
namespace Unity::XR::Oculus::Input {
  // Forward declaring type: OculusRemote
  class OculusRemote;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusRemote);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusRemote*, "Unity.XR.Oculus.Input", "OculusRemote");
// Type namespace: Unity.XR.Oculus.Input
namespace Unity::XR::Oculus::Input {
  // Size: 0x188
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.Input.OculusRemote
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class OculusRemote : public ::UnityEngine::InputSystem::InputDevice {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.ButtonControl <back>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::ButtonControl* back;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <start>k__BackingField
    // Size: 0x8
    // Offset: 0x178
    ::UnityEngine::InputSystem::Controls::ButtonControl* start;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector2Control <touchpad>k__BackingField
    // Size: 0x8
    // Offset: 0x180
    ::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <back>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$back$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <start>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$start$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <touchpad>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$touchpad$k__BackingField();
    // public UnityEngine.InputSystem.Controls.ButtonControl get_back()
    // Offset: 0x544D8A4
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_back();
    // private System.Void set_back(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x544D8AC
    void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_start()
    // Offset: 0x544D8BC
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_start();
    // private System.Void set_start(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x544D8C4
    void set_start(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.Vector2Control get_touchpad()
    // Offset: 0x544D8D4
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();
    // private System.Void set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0x544D8DC
    void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // public System.Void .ctor()
    // Offset: 0x544D9F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusRemote* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::Oculus::Input::OculusRemote::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusRemote*, creationType>()));
    }
    // protected override System.Void FinishSetup()
    // Offset: 0x544D8EC
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: System.Void InputControl::FinishSetup()
    void FinishSetup();
  }; // Unity.XR.Oculus.Input.OculusRemote
  #pragma pack(pop)
  static check_size<sizeof(OculusRemote), 384 + sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*)> __Unity_XR_Oculus_Input_OculusRemoteSizeCheck;
  static_assert(sizeof(OculusRemote) == 0x188);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusRemote::get_back
// Il2CppName: get_back
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::Oculus::Input::OculusRemote::*)()>(&Unity::XR::Oculus::Input::OculusRemote::get_back)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusRemote*), "get_back", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusRemote::set_back
// Il2CppName: set_back
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::Input::OculusRemote::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::Oculus::Input::OculusRemote::set_back)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusRemote*), "set_back", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusRemote::get_start
// Il2CppName: get_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::Oculus::Input::OculusRemote::*)()>(&Unity::XR::Oculus::Input::OculusRemote::get_start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusRemote*), "get_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusRemote::set_start
// Il2CppName: set_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::Input::OculusRemote::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::Oculus::Input::OculusRemote::set_start)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusRemote*), "set_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusRemote::get_touchpad
// Il2CppName: get_touchpad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (Unity::XR::Oculus::Input::OculusRemote::*)()>(&Unity::XR::Oculus::Input::OculusRemote::get_touchpad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusRemote*), "get_touchpad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusRemote::set_touchpad
// Il2CppName: set_touchpad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::Input::OculusRemote::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&Unity::XR::Oculus::Input::OculusRemote::set_touchpad)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusRemote*), "set_touchpad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusRemote::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusRemote::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::Input::OculusRemote::*)()>(&Unity::XR::Oculus::Input::OculusRemote::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusRemote*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};