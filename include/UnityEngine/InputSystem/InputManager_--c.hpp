// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputManager
#include "UnityEngine/InputSystem/InputManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager::$$c*, "UnityEngine.InputSystem", "InputManager/<>c");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputManager/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.InputSystem.InputManager/<>c <>9
    static ::UnityEngine::InputSystem::InputManager::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.InputSystem.InputManager/<>c <>9
    static void _set_$$9(::UnityEngine::InputSystem::InputManager::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.InputSystem.InputDevice,System.String> <>9__144_0
    static ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* _get_$$9__144_0();
    // Set static field: static public System.Func`2<UnityEngine.InputSystem.InputDevice,System.String> <>9__144_0
    static void _set_$$9__144_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x5117E3C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5117EA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputManager::$$c*, creationType>()));
    }
    // System.String <MakeDeviceNameUnique>b__144_0(UnityEngine.InputSystem.InputDevice x)
    // Offset: 0x5117EAC
    ::StringW $MakeDeviceNameUnique$b__144_0(::UnityEngine::InputSystem::InputDevice* x);
  }; // UnityEngine.InputSystem.InputManager/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::InputManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$$c::$MakeDeviceNameUnique$b__144_0
// Il2CppName: <MakeDeviceNameUnique>b__144_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::InputManager::$$c::*)(::UnityEngine::InputSystem::InputDevice*)>(&UnityEngine::InputSystem::InputManager::$$c::$MakeDeviceNameUnique$b__144_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$$c*), "<MakeDeviceNameUnique>b__144_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
