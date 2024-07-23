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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: ButtonControl
  class ButtonControl;
  // Forward declaring type: StickControl
  class StickControl;
  // Forward declaring type: AxisControl
  class AxisControl;
  // Forward declaring type: Vector2Control
  class Vector2Control;
}
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: ReadOnlyArray`1<TValue>
  template<typename TValue>
  struct ReadOnlyArray_1;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: Joystick
  class Joystick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Joystick);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Joystick*, "UnityEngine.InputSystem", "Joystick");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x190
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Joystick
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class Joystick : public ::UnityEngine::InputSystem::InputDevice {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.ButtonControl <trigger>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::ButtonControl* trigger;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.StickControl <stick>k__BackingField
    // Size: 0x8
    // Offset: 0x178
    ::UnityEngine::InputSystem::Controls::StickControl* stick;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::StickControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <twist>k__BackingField
    // Size: 0x8
    // Offset: 0x180
    ::UnityEngine::InputSystem::Controls::AxisControl* twist;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector2Control <hatswitch>k__BackingField
    // Size: 0x8
    // Offset: 0x188
    ::UnityEngine::InputSystem::Controls::Vector2Control* hatswitch;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    public:
    // Get static field: static private UnityEngine.InputSystem.Joystick <current>k__BackingField
    static ::UnityEngine::InputSystem::Joystick* _get_$current$k__BackingField();
    // Set static field: static private UnityEngine.InputSystem.Joystick <current>k__BackingField
    static void _set_$current$k__BackingField(::UnityEngine::InputSystem::Joystick* value);
    // Get static field: static private System.Int32 s_JoystickCount
    static int _get_s_JoystickCount();
    // Set static field: static private System.Int32 s_JoystickCount
    static void _set_s_JoystickCount(int value);
    // Get static field: static private UnityEngine.InputSystem.Joystick[] s_Joysticks
    static ::ArrayW<::UnityEngine::InputSystem::Joystick*> _get_s_Joysticks();
    // Set static field: static private UnityEngine.InputSystem.Joystick[] s_Joysticks
    static void _set_s_Joysticks(::ArrayW<::UnityEngine::InputSystem::Joystick*> value);
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <trigger>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$trigger$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.StickControl <stick>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::StickControl*& dyn_$stick$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <twist>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$twist$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <hatswitch>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$hatswitch$k__BackingField();
    // public UnityEngine.InputSystem.Controls.ButtonControl get_trigger()
    // Offset: 0x50C67B0
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_trigger();
    // protected System.Void set_trigger(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x50C67B8
    void set_trigger(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.StickControl get_stick()
    // Offset: 0x50C67C8
    ::UnityEngine::InputSystem::Controls::StickControl* get_stick();
    // protected System.Void set_stick(UnityEngine.InputSystem.Controls.StickControl value)
    // Offset: 0x50C67D0
    void set_stick(::UnityEngine::InputSystem::Controls::StickControl* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_twist()
    // Offset: 0x50C67E0
    ::UnityEngine::InputSystem::Controls::AxisControl* get_twist();
    // protected System.Void set_twist(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x50C67E8
    void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.Vector2Control get_hatswitch()
    // Offset: 0x50C67F8
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_hatswitch();
    // protected System.Void set_hatswitch(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0x50C6800
    void set_hatswitch(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // static public UnityEngine.InputSystem.Joystick get_current()
    // Offset: 0x50C6810
    static ::UnityEngine::InputSystem::Joystick* get_current();
    // static private System.Void set_current(UnityEngine.InputSystem.Joystick value)
    // Offset: 0x50C6858
    static void set_current(::UnityEngine::InputSystem::Joystick* value);
    // static public UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Joystick> get_all()
    // Offset: 0x50C68B0
    static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*> get_all();
    // protected override System.Void FinishSetup()
    // Offset: 0x50C6930
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: System.Void InputControl::FinishSetup()
    void FinishSetup();
    // public override System.Void MakeCurrent()
    // Offset: 0x50C6A98
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::MakeCurrent()
    void MakeCurrent();
    // protected override System.Void OnAdded()
    // Offset: 0x50C6AF0
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::OnAdded()
    void OnAdded();
    // protected override System.Void OnRemoved()
    // Offset: 0x50C6B68
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::OnRemoved()
    void OnRemoved();
    // public System.Void .ctor()
    // Offset: 0x50C6C90
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Joystick* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Joystick::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Joystick*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Joystick
  #pragma pack(pop)
  static check_size<sizeof(Joystick), 392 + sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*)> __UnityEngine_InputSystem_JoystickSizeCheck;
  static_assert(sizeof(Joystick) == 0x190);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::get_trigger
// Il2CppName: get_trigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::Joystick::*)()>(&UnityEngine::InputSystem::Joystick::get_trigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "get_trigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::set_trigger
// Il2CppName: set_trigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Joystick::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::Joystick::set_trigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "set_trigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::get_stick
// Il2CppName: get_stick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::StickControl* (UnityEngine::InputSystem::Joystick::*)()>(&UnityEngine::InputSystem::Joystick::get_stick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "get_stick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::set_stick
// Il2CppName: set_stick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Joystick::*)(::UnityEngine::InputSystem::Controls::StickControl*)>(&UnityEngine::InputSystem::Joystick::set_stick)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "StickControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "set_stick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::get_twist
// Il2CppName: get_twist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Joystick::*)()>(&UnityEngine::InputSystem::Joystick::get_twist)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "get_twist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::set_twist
// Il2CppName: set_twist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Joystick::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Joystick::set_twist)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "set_twist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::get_hatswitch
// Il2CppName: get_hatswitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (UnityEngine::InputSystem::Joystick::*)()>(&UnityEngine::InputSystem::Joystick::get_hatswitch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "get_hatswitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::set_hatswitch
// Il2CppName: set_hatswitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Joystick::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&UnityEngine::InputSystem::Joystick::set_hatswitch)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "set_hatswitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Joystick* (*)()>(&UnityEngine::InputSystem::Joystick::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Joystick*)>(&UnityEngine::InputSystem::Joystick::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "Joystick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::get_all
// Il2CppName: get_all
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*> (*)()>(&UnityEngine::InputSystem::Joystick::get_all)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "get_all", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Joystick::*)()>(&UnityEngine::InputSystem::Joystick::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::MakeCurrent
// Il2CppName: MakeCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Joystick::*)()>(&UnityEngine::InputSystem::Joystick::MakeCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "MakeCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::OnAdded
// Il2CppName: OnAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Joystick::*)()>(&UnityEngine::InputSystem::Joystick::OnAdded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "OnAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::OnRemoved
// Il2CppName: OnRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Joystick::*)()>(&UnityEngine::InputSystem::Joystick::OnRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Joystick*), "OnRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Joystick::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
