// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.XR.XRControllerWithRumble
#include "UnityEngine/InputSystem/XR/XRControllerWithRumble.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: AxisControl
  class AxisControl;
  // Forward declaring type: ButtonControl
  class ButtonControl;
  // Forward declaring type: Vector2Control
  class Vector2Control;
  // Forward declaring type: Vector3Control
  class Vector3Control;
}
// Completed forward declares
// Type namespace: Unity.XR.OpenVR
namespace Unity::XR::OpenVR {
  // Forward declaring type: ViveWand
  class ViveWand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::OpenVR::ViveWand);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::ViveWand*, "Unity.XR.OpenVR", "ViveWand");
// Type namespace: Unity.XR.OpenVR
namespace Unity::XR::OpenVR {
  // Size: 0x1E0
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.OpenVR.ViveWand
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class ViveWand : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.AxisControl <grip>k__BackingField
    // Size: 0x8
    // Offset: 0x190
    ::UnityEngine::InputSystem::Controls::AxisControl* grip;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <gripPressed>k__BackingField
    // Size: 0x8
    // Offset: 0x198
    ::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <primary>k__BackingField
    // Size: 0x8
    // Offset: 0x1A0
    ::UnityEngine::InputSystem::Controls::ButtonControl* primary;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <trackpadPressed>k__BackingField
    // Size: 0x8
    // Offset: 0x1A8
    ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadPressed;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <trackpadTouched>k__BackingField
    // Size: 0x8
    // Offset: 0x1B0
    ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadTouched;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector2Control <trackpad>k__BackingField
    // Size: 0x8
    // Offset: 0x1B8
    ::UnityEngine::InputSystem::Controls::Vector2Control* trackpad;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <trigger>k__BackingField
    // Size: 0x8
    // Offset: 0x1C0
    ::UnityEngine::InputSystem::Controls::AxisControl* trigger;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <triggerPressed>k__BackingField
    // Size: 0x8
    // Offset: 0x1C8
    ::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector3Control <deviceVelocity>k__BackingField
    // Size: 0x8
    // Offset: 0x1D0
    ::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector3Control <deviceAngularVelocity>k__BackingField
    // Size: 0x8
    // Offset: 0x1D8
    ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <grip>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$grip$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <gripPressed>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$gripPressed$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <primary>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$primary$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <trackpadPressed>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$trackpadPressed$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <trackpadTouched>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$trackpadTouched$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <trackpad>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$trackpad$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <trigger>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$trigger$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <triggerPressed>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$triggerPressed$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <deviceVelocity>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$deviceVelocity$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <deviceAngularVelocity>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$deviceAngularVelocity$k__BackingField();
    // public UnityEngine.InputSystem.Controls.AxisControl get_grip()
    // Offset: 0x508C1A4
    ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();
    // private System.Void set_grip(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x508C1AC
    void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_gripPressed()
    // Offset: 0x508C1BC
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();
    // private System.Void set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C1C4
    void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_primary()
    // Offset: 0x508C1D4
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary();
    // private System.Void set_primary(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C1DC
    void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_trackpadPressed()
    // Offset: 0x508C1EC
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed();
    // private System.Void set_trackpadPressed(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C1F4
    void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_trackpadTouched()
    // Offset: 0x508C204
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadTouched();
    // private System.Void set_trackpadTouched(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C20C
    void set_trackpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.Vector2Control get_trackpad()
    // Offset: 0x508C21C
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_trackpad();
    // private System.Void set_trackpad(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0x508C224
    void set_trackpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_trigger()
    // Offset: 0x508C234
    ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();
    // private System.Void set_trigger(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x508C23C
    void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_triggerPressed()
    // Offset: 0x508C24C
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();
    // private System.Void set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C254
    void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.Vector3Control get_deviceVelocity()
    // Offset: 0x508C264
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();
    // private System.Void set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x508C26C
    void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // public UnityEngine.InputSystem.Controls.Vector3Control get_deviceAngularVelocity()
    // Offset: 0x508C27C
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();
    // private System.Void set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x508C284
    void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // protected override System.Void FinishSetup()
    // Offset: 0x508C294
    // Implemented from: UnityEngine.InputSystem.XR.XRController
    // Base method: System.Void XRController::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x508C540
    // Implemented from: UnityEngine.InputSystem.XR.XRControllerWithRumble
    // Base method: System.Void XRControllerWithRumble::.ctor()
    // Base method: System.Void XRController::.ctor()
    // Base method: System.Void TrackedDevice::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViveWand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::OpenVR::ViveWand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViveWand*, creationType>()));
    }
  }; // Unity.XR.OpenVR.ViveWand
  #pragma pack(pop)
  static check_size<sizeof(ViveWand), 472 + sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*)> __Unity_XR_OpenVR_ViveWandSizeCheck;
  static_assert(sizeof(ViveWand) == 0x1E0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_grip
// Il2CppName: get_grip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_grip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_grip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_grip
// Il2CppName: set_grip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&Unity::XR::OpenVR::ViveWand::set_grip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_grip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_gripPressed
// Il2CppName: get_gripPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_gripPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_gripPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_gripPressed
// Il2CppName: set_gripPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::ViveWand::set_gripPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_gripPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_primary
// Il2CppName: get_primary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_primary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_primary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_primary
// Il2CppName: set_primary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::ViveWand::set_primary)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_primary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_trackpadPressed
// Il2CppName: get_trackpadPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_trackpadPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_trackpadPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_trackpadPressed
// Il2CppName: set_trackpadPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::ViveWand::set_trackpadPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_trackpadPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_trackpadTouched
// Il2CppName: get_trackpadTouched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_trackpadTouched)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_trackpadTouched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_trackpadTouched
// Il2CppName: set_trackpadTouched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::ViveWand::set_trackpadTouched)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_trackpadTouched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_trackpad
// Il2CppName: get_trackpad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_trackpad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_trackpad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_trackpad
// Il2CppName: set_trackpad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&Unity::XR::OpenVR::ViveWand::set_trackpad)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_trackpad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_trigger
// Il2CppName: get_trigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_trigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_trigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_trigger
// Il2CppName: set_trigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&Unity::XR::OpenVR::ViveWand::set_trigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_trigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_triggerPressed
// Il2CppName: get_triggerPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_triggerPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_triggerPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_triggerPressed
// Il2CppName: set_triggerPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::ViveWand::set_triggerPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_triggerPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_deviceVelocity
// Il2CppName: get_deviceVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_deviceVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_deviceVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_deviceVelocity
// Il2CppName: set_deviceVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&Unity::XR::OpenVR::ViveWand::set_deviceVelocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_deviceVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::get_deviceAngularVelocity
// Il2CppName: get_deviceAngularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::get_deviceAngularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "get_deviceAngularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::set_deviceAngularVelocity
// Il2CppName: set_deviceAngularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&Unity::XR::OpenVR::ViveWand::set_deviceAngularVelocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "set_deviceAngularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::ViveWand::*)()>(&Unity::XR::OpenVR::ViveWand::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::ViveWand*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::ViveWand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
