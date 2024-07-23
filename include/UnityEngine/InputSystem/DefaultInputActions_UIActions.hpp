// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.DefaultInputActions
#include "UnityEngine/InputSystem/DefaultInputActions.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputAction
  class InputAction;
  // Forward declaring type: InputActionMap
  class InputActionMap;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions::UIActions, "UnityEngine.InputSystem", "DefaultInputActions/UIActions");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.DefaultInputActions/UIActions
  // [TokenAttribute] Offset: FFFFFFFF
  struct DefaultInputActions::UIActions/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.InputSystem.DefaultInputActions m_Wrapper
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::DefaultInputActions*) == 0x8);
    public:
    // Creating value type constructor for type: UIActions
    constexpr UIActions(::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper_ = {}) noexcept : m_Wrapper{m_Wrapper_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::InputSystem::DefaultInputActions*
    constexpr operator ::UnityEngine::InputSystem::DefaultInputActions*() const noexcept {
      return m_Wrapper;
    }
    // Get instance field reference: private UnityEngine.InputSystem.DefaultInputActions m_Wrapper
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::DefaultInputActions*& dyn_m_Wrapper();
    // public System.Void .ctor(UnityEngine.InputSystem.DefaultInputActions wrapper)
    // Offset: 0x511A81C
    // ABORTED: conflicts with another method.  UIActions(::UnityEngine::InputSystem::DefaultInputActions* wrapper);
    // public UnityEngine.InputSystem.InputAction get_Navigate()
    // Offset: 0x511A824
    ::UnityEngine::InputSystem::InputAction* get_Navigate();
    // public UnityEngine.InputSystem.InputAction get_Submit()
    // Offset: 0x511A840
    ::UnityEngine::InputSystem::InputAction* get_Submit();
    // public UnityEngine.InputSystem.InputAction get_Cancel()
    // Offset: 0x511A85C
    ::UnityEngine::InputSystem::InputAction* get_Cancel();
    // public UnityEngine.InputSystem.InputAction get_Point()
    // Offset: 0x511A878
    ::UnityEngine::InputSystem::InputAction* get_Point();
    // public UnityEngine.InputSystem.InputAction get_Click()
    // Offset: 0x511A894
    ::UnityEngine::InputSystem::InputAction* get_Click();
    // public UnityEngine.InputSystem.InputAction get_ScrollWheel()
    // Offset: 0x511A8B0
    ::UnityEngine::InputSystem::InputAction* get_ScrollWheel();
    // public UnityEngine.InputSystem.InputAction get_MiddleClick()
    // Offset: 0x511A8CC
    ::UnityEngine::InputSystem::InputAction* get_MiddleClick();
    // public UnityEngine.InputSystem.InputAction get_RightClick()
    // Offset: 0x511A8E8
    ::UnityEngine::InputSystem::InputAction* get_RightClick();
    // public UnityEngine.InputSystem.InputAction get_TrackedDevicePosition()
    // Offset: 0x511A904
    ::UnityEngine::InputSystem::InputAction* get_TrackedDevicePosition();
    // public UnityEngine.InputSystem.InputAction get_TrackedDeviceOrientation()
    // Offset: 0x511A920
    ::UnityEngine::InputSystem::InputAction* get_TrackedDeviceOrientation();
    // public UnityEngine.InputSystem.InputActionMap Get()
    // Offset: 0x511A93C
    ::UnityEngine::InputSystem::InputActionMap* Get();
    // public System.Void Enable()
    // Offset: 0x511A958
    void Enable();
    // public System.Void Disable()
    // Offset: 0x511A97C
    void Disable();
    // public System.Boolean get_enabled()
    // Offset: 0x511A9A0
    bool get_enabled();
    // public System.Void SetCallbacks(UnityEngine.InputSystem.DefaultInputActions/IUIActions instance)
    // Offset: 0x511A9DC
    void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions::IUIActions* instance);
  }; // UnityEngine.InputSystem.DefaultInputActions/UIActions
  #pragma pack(pop)
  static check_size<sizeof(DefaultInputActions::UIActions), 0 + sizeof(::UnityEngine::InputSystem::DefaultInputActions*)> __UnityEngine_InputSystem_DefaultInputActions_UIActionsSizeCheck;
  static_assert(sizeof(DefaultInputActions::UIActions) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::UIActions
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Navigate
// Il2CppName: get_Navigate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Navigate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_Navigate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Submit
// Il2CppName: get_Submit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Submit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_Submit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Cancel
// Il2CppName: get_Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Point
// Il2CppName: get_Point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Point)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_Point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Click
// Il2CppName: get_Click
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_Click)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_Click", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_ScrollWheel
// Il2CppName: get_ScrollWheel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_ScrollWheel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_ScrollWheel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_MiddleClick
// Il2CppName: get_MiddleClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_MiddleClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_MiddleClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_RightClick
// Il2CppName: get_RightClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_RightClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_RightClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_TrackedDevicePosition
// Il2CppName: get_TrackedDevicePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_TrackedDevicePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_TrackedDevicePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_TrackedDeviceOrientation
// Il2CppName: get_TrackedDeviceOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_TrackedDeviceOrientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_TrackedDeviceOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::UIActions::SetCallbacks
// Il2CppName: SetCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::UIActions::*)(::UnityEngine::InputSystem::DefaultInputActions::IUIActions*)>(&UnityEngine::InputSystem::DefaultInputActions::UIActions::SetCallbacks)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "DefaultInputActions/IUIActions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::UIActions), "SetCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};