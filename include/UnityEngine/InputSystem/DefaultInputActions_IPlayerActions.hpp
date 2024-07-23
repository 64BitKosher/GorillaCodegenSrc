// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.DefaultInputActions
#include "UnityEngine/InputSystem/DefaultInputActions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: CallbackContext
  struct InputAction_CallbackContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::DefaultInputActions::IPlayerActions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions::IPlayerActions*, "UnityEngine.InputSystem", "DefaultInputActions/IPlayerActions");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.DefaultInputActions/IPlayerActions
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultInputActions::IPlayerActions {
    public:
    // public System.Void OnMove(UnityEngine.InputSystem.InputAction/CallbackContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnMove(::UnityEngine::InputSystem::InputAction_CallbackContext context);
    // public System.Void OnLook(UnityEngine.InputSystem.InputAction/CallbackContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnLook(::UnityEngine::InputSystem::InputAction_CallbackContext context);
    // public System.Void OnFire(UnityEngine.InputSystem.InputAction/CallbackContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnFire(::UnityEngine::InputSystem::InputAction_CallbackContext context);
  }; // UnityEngine.InputSystem.DefaultInputActions/IPlayerActions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::OnMove
// Il2CppName: OnMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(&UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::OnMove)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputAction/CallbackContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::IPlayerActions*), "OnMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::OnLook
// Il2CppName: OnLook
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(&UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::OnLook)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputAction/CallbackContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::IPlayerActions*), "OnLook", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::OnFire
// Il2CppName: OnFire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(&UnityEngine::InputSystem::DefaultInputActions::IPlayerActions::OnFire)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputAction/CallbackContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::IPlayerActions*), "OnFire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
