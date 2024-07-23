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
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions::PlayerActions, "UnityEngine.InputSystem", "DefaultInputActions/PlayerActions");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.DefaultInputActions/PlayerActions
  // [TokenAttribute] Offset: FFFFFFFF
  struct DefaultInputActions::PlayerActions/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.InputSystem.DefaultInputActions m_Wrapper
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::DefaultInputActions*) == 0x8);
    public:
    // Creating value type constructor for type: PlayerActions
    constexpr PlayerActions(::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper_ = {}) noexcept : m_Wrapper{m_Wrapper_} {}
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
    // Offset: 0x5119C44
    // ABORTED: conflicts with another method.  PlayerActions(::UnityEngine::InputSystem::DefaultInputActions* wrapper);
    // public UnityEngine.InputSystem.InputAction get_Move()
    // Offset: 0x5119C4C
    ::UnityEngine::InputSystem::InputAction* get_Move();
    // public UnityEngine.InputSystem.InputAction get_Look()
    // Offset: 0x5119C68
    ::UnityEngine::InputSystem::InputAction* get_Look();
    // public UnityEngine.InputSystem.InputAction get_Fire()
    // Offset: 0x5119C84
    ::UnityEngine::InputSystem::InputAction* get_Fire();
    // public UnityEngine.InputSystem.InputActionMap Get()
    // Offset: 0x5119CA0
    ::UnityEngine::InputSystem::InputActionMap* Get();
    // public System.Void Enable()
    // Offset: 0x5119CBC
    void Enable();
    // public System.Void Disable()
    // Offset: 0x5119CE0
    void Disable();
    // public System.Boolean get_enabled()
    // Offset: 0x5119D04
    bool get_enabled();
    // public System.Void SetCallbacks(UnityEngine.InputSystem.DefaultInputActions/IPlayerActions instance)
    // Offset: 0x5119D40
    void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions::IPlayerActions* instance);
  }; // UnityEngine.InputSystem.DefaultInputActions/PlayerActions
  #pragma pack(pop)
  static check_size<sizeof(DefaultInputActions::PlayerActions), 0 + sizeof(::UnityEngine::InputSystem::DefaultInputActions*)> __UnityEngine_InputSystem_DefaultInputActions_PlayerActionsSizeCheck;
  static_assert(sizeof(DefaultInputActions::PlayerActions) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::PlayerActions
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::get_Move
// Il2CppName: get_Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::PlayerActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::PlayerActions::get_Move)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::PlayerActions), "get_Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::get_Look
// Il2CppName: get_Look
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::PlayerActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::PlayerActions::get_Look)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::PlayerActions), "get_Look", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::get_Fire
// Il2CppName: get_Fire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::DefaultInputActions::PlayerActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::PlayerActions::get_Fire)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::PlayerActions), "get_Fire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (UnityEngine::InputSystem::DefaultInputActions::PlayerActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::PlayerActions::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::PlayerActions), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::PlayerActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::PlayerActions::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::PlayerActions), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::PlayerActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::PlayerActions::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::PlayerActions), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::DefaultInputActions::PlayerActions::*)()>(&UnityEngine::InputSystem::DefaultInputActions::PlayerActions::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::PlayerActions), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::DefaultInputActions::PlayerActions::SetCallbacks
// Il2CppName: SetCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::DefaultInputActions::PlayerActions::*)(::UnityEngine::InputSystem::DefaultInputActions::IPlayerActions*)>(&UnityEngine::InputSystem::DefaultInputActions::PlayerActions::SetCallbacks)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "DefaultInputActions/IPlayerActions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DefaultInputActions::PlayerActions), "SetCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
