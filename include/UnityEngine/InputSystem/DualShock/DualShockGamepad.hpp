// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Gamepad
#include "UnityEngine/InputSystem/Gamepad.hpp"
// Including type: UnityEngine.InputSystem.DualShock.IDualShockHaptics
#include "UnityEngine/InputSystem/DualShock/IDualShockHaptics.hpp"
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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.DualShock
namespace UnityEngine::InputSystem::DualShock {
  // Forward declaring type: DualShockGamepad
  class DualShockGamepad;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::DualShock::DualShockGamepad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DualShock::DualShockGamepad*, "UnityEngine.InputSystem.DualShock", "DualShockGamepad");
// Type namespace: UnityEngine.InputSystem.DualShock
namespace UnityEngine::InputSystem::DualShock {
  // Size: 0x238
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.DualShock.DualShockGamepad
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class DualShockGamepad : public ::UnityEngine::InputSystem::Gamepad/*, public ::UnityEngine::InputSystem::DualShock::IDualShockHaptics*/ {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.ButtonControl <touchpadButton>k__BackingField
    // Size: 0x8
    // Offset: 0x1F0
    ::UnityEngine::InputSystem::Controls::ButtonControl* touchpadButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <optionsButton>k__BackingField
    // Size: 0x8
    // Offset: 0x1F8
    ::UnityEngine::InputSystem::Controls::ButtonControl* optionsButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <shareButton>k__BackingField
    // Size: 0x8
    // Offset: 0x200
    ::UnityEngine::InputSystem::Controls::ButtonControl* shareButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <L1>k__BackingField
    // Size: 0x8
    // Offset: 0x208
    ::UnityEngine::InputSystem::Controls::ButtonControl* L1;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <R1>k__BackingField
    // Size: 0x8
    // Offset: 0x210
    ::UnityEngine::InputSystem::Controls::ButtonControl* R1;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <L2>k__BackingField
    // Size: 0x8
    // Offset: 0x218
    ::UnityEngine::InputSystem::Controls::ButtonControl* L2;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <R2>k__BackingField
    // Size: 0x8
    // Offset: 0x220
    ::UnityEngine::InputSystem::Controls::ButtonControl* R2;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <L3>k__BackingField
    // Size: 0x8
    // Offset: 0x228
    ::UnityEngine::InputSystem::Controls::ButtonControl* L3;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <R3>k__BackingField
    // Size: 0x8
    // Offset: 0x230
    ::UnityEngine::InputSystem::Controls::ButtonControl* R3;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::DualShock::IDualShockHaptics
    operator ::UnityEngine::InputSystem::DualShock::IDualShockHaptics() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>(this);
    }
    // Get static field: static private UnityEngine.InputSystem.DualShock.DualShockGamepad <current>k__BackingField
    static ::UnityEngine::InputSystem::DualShock::DualShockGamepad* _get_$current$k__BackingField();
    // Set static field: static private UnityEngine.InputSystem.DualShock.DualShockGamepad <current>k__BackingField
    static void _set_$current$k__BackingField(::UnityEngine::InputSystem::DualShock::DualShockGamepad* value);
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <touchpadButton>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$touchpadButton$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <optionsButton>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$optionsButton$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <shareButton>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$shareButton$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <L1>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$L1$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <R1>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$R1$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <L2>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$L2$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <R2>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$R2$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <L3>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$L3$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <R3>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$R3$k__BackingField();
    // public UnityEngine.InputSystem.Controls.ButtonControl get_touchpadButton()
    // Offset: 0x5147EA8
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadButton();
    // protected System.Void set_touchpadButton(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147EB0
    void set_touchpadButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_optionsButton()
    // Offset: 0x5147EC0
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_optionsButton();
    // protected System.Void set_optionsButton(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147EC8
    void set_optionsButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_shareButton()
    // Offset: 0x5147ED8
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_shareButton();
    // protected System.Void set_shareButton(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147EE0
    void set_shareButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_L1()
    // Offset: 0x5147EF0
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_L1();
    // protected System.Void set_L1(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147EF8
    void set_L1(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_R1()
    // Offset: 0x5147F08
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_R1();
    // protected System.Void set_R1(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147F10
    void set_R1(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_L2()
    // Offset: 0x5147F20
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_L2();
    // protected System.Void set_L2(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147F28
    void set_L2(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_R2()
    // Offset: 0x5147F38
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_R2();
    // protected System.Void set_R2(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147F40
    void set_R2(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_L3()
    // Offset: 0x5147F50
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_L3();
    // protected System.Void set_L3(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147F58
    void set_L3(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_R3()
    // Offset: 0x5147F68
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_R3();
    // protected System.Void set_R3(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x5147F70
    void set_R3(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // static public UnityEngine.InputSystem.DualShock.DualShockGamepad get_current()
    // Offset: 0x5147F80
    static ::UnityEngine::InputSystem::DualShock::DualShockGamepad* get_current();
    // static private System.Void set_current(UnityEngine.InputSystem.DualShock.DualShockGamepad value)
    // Offset: 0x5147FC8
    static void set_current(::UnityEngine::InputSystem::DualShock::DualShockGamepad* value);
    // public System.Void SetLightBarColor(UnityEngine.Color color)
    // Offset: 0x5148220
    void SetLightBarColor(::UnityEngine::Color color);
    // public override System.Void MakeCurrent()
    // Offset: 0x5148020
    // Implemented from: UnityEngine.InputSystem.Gamepad
    // Base method: System.Void Gamepad::MakeCurrent()
    void MakeCurrent();
    // protected override System.Void OnRemoved()
    // Offset: 0x5148080
    // Implemented from: UnityEngine.InputSystem.Gamepad
    // Base method: System.Void Gamepad::OnRemoved()
    void OnRemoved();
    // protected override System.Void FinishSetup()
    // Offset: 0x514811C
    // Implemented from: UnityEngine.InputSystem.Gamepad
    // Base method: System.Void Gamepad::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x5148224
    // Implemented from: UnityEngine.InputSystem.Gamepad
    // Base method: System.Void Gamepad::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DualShockGamepad* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::DualShock::DualShockGamepad::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DualShockGamepad*, creationType>()));
    }
  }; // UnityEngine.InputSystem.DualShock.DualShockGamepad
  #pragma pack(pop)
  static check_size<sizeof(DualShockGamepad), 560 + sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*)> __UnityEngine_InputSystem_DualShock_DualShockGamepadSizeCheck;
  static_assert(sizeof(DualShockGamepad) == 0x238);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_touchpadButton
// Il2CppName: get_touchpadButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_touchpadButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_touchpadButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_touchpadButton
// Il2CppName: set_touchpadButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_touchpadButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_touchpadButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_optionsButton
// Il2CppName: get_optionsButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_optionsButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_optionsButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_optionsButton
// Il2CppName: set_optionsButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_optionsButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_optionsButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_shareButton
// Il2CppName: get_shareButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_shareButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_shareButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_shareButton
// Il2CppName: set_shareButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_shareButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_shareButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L1
// Il2CppName: get_L1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_L1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L1
// Il2CppName: set_L1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_L1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R1
// Il2CppName: get_R1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_R1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R1
// Il2CppName: set_R1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_R1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L2
// Il2CppName: get_L2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_L2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L2
// Il2CppName: set_L2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_L2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R2
// Il2CppName: get_R2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_R2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R2
// Il2CppName: set_R2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_R2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L3
// Il2CppName: get_L3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_L3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L3
// Il2CppName: set_L3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L3)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_L3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R3
// Il2CppName: get_R3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_R3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R3
// Il2CppName: set_R3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R3)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_R3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::DualShock::DualShockGamepad* (*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::DualShock::DualShockGamepad*)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.DualShock", "DualShockGamepad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::SetLightBarColor
// Il2CppName: SetLightBarColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::Color)>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::SetLightBarColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "SetLightBarColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::MakeCurrent
// Il2CppName: MakeCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::MakeCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "MakeCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::OnRemoved
// Il2CppName: OnRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::OnRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "OnRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&UnityEngine::InputSystem::DualShock::DualShockGamepad::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockGamepad*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockGamepad::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!