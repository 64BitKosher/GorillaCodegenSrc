// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.IInputActionCollection2
#include "UnityEngine/InputSystem/IInputActionCollection2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputActionAsset
  class InputActionAsset;
  // Forward declaring type: InputActionMap
  class InputActionMap;
  // Forward declaring type: InputAction
  class InputAction;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Nullable`1 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerator`1 because it is already included!
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: DefaultInputActions
  class DefaultInputActions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::DefaultInputActions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions*, "UnityEngine.InputSystem", "DefaultInputActions");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.DefaultInputActions
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultInputActions : public ::Il2CppObject/*, public ::UnityEngine::InputSystem::IInputActionCollection2, public ::System::IDisposable*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::DefaultInputActions::PlayerActions
    struct PlayerActions;
    // Nested type: ::UnityEngine::InputSystem::DefaultInputActions::UIActions
    struct UIActions;
    // Nested type: ::UnityEngine::InputSystem::DefaultInputActions::IPlayerActions
    class IPlayerActions;
    // Nested type: ::UnityEngine::InputSystem::DefaultInputActions::IUIActions
    class IUIActions;
    public:
    // private readonly UnityEngine.InputSystem.InputActionAsset <asset>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::InputSystem::InputActionAsset* asset;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputActionMap m_Player
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::InputSystem::InputActionMap* m_Player;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionMap*) == 0x8);
    // private UnityEngine.InputSystem.DefaultInputActions/IPlayerActions m_PlayerActionsCallbackInterface
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::InputSystem::DefaultInputActions::IPlayerActions* m_PlayerActionsCallbackInterface;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::DefaultInputActions::IPlayerActions*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_Player_Move
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::InputSystem::InputAction* m_Player_Move;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_Player_Look
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::InputSystem::InputAction* m_Player_Look;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_Player_Fire
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::InputSystem::InputAction* m_Player_Fire;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputActionMap m_UI
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::InputSystem::InputActionMap* m_UI;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionMap*) == 0x8);
    // private UnityEngine.InputSystem.DefaultInputActions/IUIActions m_UIActionsCallbackInterface
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::InputSystem::DefaultInputActions::IUIActions* m_UIActionsCallbackInterface;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::DefaultInputActions::IUIActions*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_Navigate
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::InputSystem::InputAction* m_UI_Navigate;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_Submit
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::InputSystem::InputAction* m_UI_Submit;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_Cancel
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::InputSystem::InputAction* m_UI_Cancel;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_Point
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::InputSystem::InputAction* m_UI_Point;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_Click
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::InputSystem::InputAction* m_UI_Click;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_ScrollWheel
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::InputSystem::InputAction* m_UI_ScrollWheel;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_MiddleClick
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::InputSystem::InputAction* m_UI_MiddleClick;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_RightClick
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::InputSystem::InputAction* m_UI_RightClick;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_TrackedDevicePosition
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::InputSystem::InputAction* m_UI_TrackedDevicePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private readonly UnityEngine.InputSystem.InputAction m_UI_TrackedDeviceOrientation
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::InputSystem::InputAction* m_UI_TrackedDeviceOrientation;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // private System.Int32 m_KeyboardMouseSchemeIndex
    // Size: 0x4
    // Offset: 0xA0
    int m_KeyboardMouseSchemeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_GamepadSchemeIndex
    // Size: 0x4
    // Offset: 0xA4
    int m_GamepadSchemeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_TouchSchemeIndex
    // Size: 0x4
    // Offset: 0xA8
    int m_TouchSchemeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_JoystickSchemeIndex
    // Size: 0x4
    // Offset: 0xAC
    int m_JoystickSchemeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_XRSchemeIndex
    // Size: 0x4
    // Offset: 0xB0
    int m_XRSchemeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::IInputActionCollection2
    operator ::UnityEngine::InputSystem::IInputActionCollection2() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputActionAsset <asset>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionAsset*& dyn_$asset$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputActionMap m_Player
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionMap*& dyn_m_Player();
    // Get instance field reference: private UnityEngine.InputSystem.DefaultInputActions/IPlayerActions m_PlayerActionsCallbackInterface
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::DefaultInputActions::IPlayerActions*& dyn_m_PlayerActionsCallbackInterface();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_Player_Move
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_Player_Move();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_Player_Look
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_Player_Look();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_Player_Fire
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_Player_Fire();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputActionMap m_UI
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionMap*& dyn_m_UI();
    // Get instance field reference: private UnityEngine.InputSystem.DefaultInputActions/IUIActions m_UIActionsCallbackInterface
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::DefaultInputActions::IUIActions*& dyn_m_UIActionsCallbackInterface();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_Navigate
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_Navigate();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_Submit
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_Submit();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_Cancel
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_Cancel();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_Point
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_Point();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_Click
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_Click();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_ScrollWheel
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_ScrollWheel();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_MiddleClick
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_MiddleClick();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_RightClick
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_RightClick();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_TrackedDevicePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_TrackedDevicePosition();
    // Get instance field reference: private readonly UnityEngine.InputSystem.InputAction m_UI_TrackedDeviceOrientation
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_m_UI_TrackedDeviceOrientation();
    // Get instance field reference: private System.Int32 m_KeyboardMouseSchemeIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_KeyboardMouseSchemeIndex();
    // Get instance field reference: private System.Int32 m_GamepadSchemeIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_GamepadSchemeIndex();
    // Get instance field reference: private System.Int32 m_TouchSchemeIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_TouchSchemeIndex();
    // Get instance field reference: private System.Int32 m_JoystickSchemeIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_JoystickSchemeIndex();
    // Get instance field reference: private System.Int32 m_XRSchemeIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_XRSchemeIndex();
    // public UnityEngine.InputSystem.InputActionAsset get_asset()
    // Offset: 0x511916C
    ::UnityEngine::InputSystem::InputActionAsset* get_asset();
    // public System.Void .ctor()
    // Offset: 0x5119174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultInputActions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::DefaultInputActions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultInputActions*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x51195A8
    void Dispose();
    // public System.Nullable`1<UnityEngine.InputSystem.InputBinding> get_bindingMask()
    // Offset: 0x5119604
    ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();
    // public System.Void set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding> value)
    // Offset: 0x511962C
    void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);
    // public System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> get_devices()
    // Offset: 0x5119678
    ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices();
    // public System.Void set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> value)
    // Offset: 0x51196B8
    void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value);
    // public UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> get_controlSchemes()
    // Offset: 0x5119704
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes();
    // public System.Boolean Contains(UnityEngine.InputSystem.InputAction action)
    // Offset: 0x5119720
    bool Contains(::UnityEngine::InputSystem::InputAction* action);
    // public System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> GetEnumerator()
    // Offset: 0x511973C
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x5119758
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void Enable()
    // Offset: 0x5119774
    void Enable();
    // public System.Void Disable()
    // Offset: 0x5119790
    void Disable();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> get_bindings()
    // Offset: 0x51197AC
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings();
    // public UnityEngine.InputSystem.InputAction FindAction(System.String actionNameOrId, System.Boolean throwIfNotFound)
    // Offset: 0x51197C8
    ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);
    // public System.Int32 FindBinding(UnityEngine.InputSystem.InputBinding bindingMask, out UnityEngine.InputSystem.InputAction action)
    // Offset: 0x51197E8
    int FindBinding(::UnityEngine::InputSystem::InputBinding bindingMask, ByRef<::UnityEngine::InputSystem::InputAction*> action);
    // public UnityEngine.InputSystem.DefaultInputActions/PlayerActions get_Player()
    // Offset: 0x5119844
    ::UnityEngine::InputSystem::DefaultInputActions::PlayerActions get_Player();
    // public UnityEngine.InputSystem.DefaultInputActions/UIActions get_UI()
    // Offset: 0x5119864
    ::UnityEngine::InputSystem::DefaultInputActions::UIActions get_UI();
    // public UnityEngine.InputSystem.InputControlScheme get_KeyboardMouseScheme()
    // Offset: 0x5119884
    ::UnityEngine::InputSystem::InputControlScheme get_KeyboardMouseScheme();
    // public UnityEngine.InputSystem.InputControlScheme get_GamepadScheme()
    // Offset: 0x5119944
    ::UnityEngine::InputSystem::InputControlScheme get_GamepadScheme();
    // public UnityEngine.InputSystem.InputControlScheme get_TouchScheme()
    // Offset: 0x5119A04
    ::UnityEngine::InputSystem::InputControlScheme get_TouchScheme();
    // public UnityEngine.InputSystem.InputControlScheme get_JoystickScheme()
    // Offset: 0x5119AC4
    ::UnityEngine::InputSystem::InputControlScheme get_JoystickScheme();
    // public UnityEngine.InputSystem.InputControlScheme get_XRScheme()
    // Offset: 0x5119B84
    ::UnityEngine::InputSystem::InputControlScheme get_XRScheme();
  }; // UnityEngine.InputSystem.DefaultInputActions
  #pragma pack(pop)
  static check_size<sizeof(DefaultInputActions), 176 + sizeof(int)> __UnityEngine_InputSystem_DefaultInputActionsSizeCheck;
  static_assert(sizeof(DefaultInputActions) == 0xB4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_asset
// Il2CppName: get_asset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionAsset* (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_asset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_asset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_bindingMask
// Il2CppName: get_bindingMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_bindingMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_bindingMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::set_bindingMask
// Il2CppName: set_bindingMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&UnityEngine::InputSystem::DefaultInputActions::set_bindingMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBinding")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "set_bindingMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_devices
// Il2CppName: get_devices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_devices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_devices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::set_devices
// Il2CppName: set_devices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&UnityEngine::InputSystem::DefaultInputActions::set_devices)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "set_devices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_controlSchemes
// Il2CppName: get_controlSchemes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_controlSchemes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_controlSchemes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::DefaultInputActions::*)(::UnityEngine::InputSystem::InputAction*)>(&UnityEngine::InputSystem::DefaultInputActions::Contains)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_bindings
// Il2CppName: get_bindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_bindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_bindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::FindAction
// Il2CppName: FindAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::*)(::StringW, bool)>(&UnityEngine::InputSystem::DefaultInputActions::FindAction)> {
  static const MethodInfo* get() {
    static auto* actionNameOrId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* throwIfNotFound = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "FindAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actionNameOrId, throwIfNotFound});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::FindBinding
// Il2CppName: FindBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::DefaultInputActions::*)(::UnityEngine::InputSystem::InputBinding, ByRef<::UnityEngine::InputSystem::InputAction*>)>(&UnityEngine::InputSystem::DefaultInputActions::FindBinding)> {
  static const MethodInfo* get() {
    static auto* bindingMask = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBinding")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputAction")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "FindBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingMask, action});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_Player
// Il2CppName: get_Player
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::DefaultInputActions::PlayerActions (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_Player)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_Player", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_UI
// Il2CppName: get_UI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::DefaultInputActions::UIActions (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_UI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_UI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_KeyboardMouseScheme
// Il2CppName: get_KeyboardMouseScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlScheme (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_KeyboardMouseScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_KeyboardMouseScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_GamepadScheme
// Il2CppName: get_GamepadScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlScheme (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_GamepadScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_GamepadScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_TouchScheme
// Il2CppName: get_TouchScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlScheme (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_TouchScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_TouchScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_JoystickScheme
// Il2CppName: get_JoystickScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlScheme (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_JoystickScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_JoystickScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::get_XRScheme
// Il2CppName: get_XRScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlScheme (UnityEngine::InputSystem::DefaultInputActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::get_XRScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions*), "get_XRScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};