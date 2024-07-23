// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputRemoting
#include "UnityEngine/InputSystem/InputRemoting.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputEvent
  struct InputEvent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting::NewEventsMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting::NewEventsMsg*, "UnityEngine.InputSystem", "InputRemoting/NewEventsMsg");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputRemoting/NewEventsMsg
  // [TokenAttribute] Offset: FFFFFFFF
  class InputRemoting::NewEventsMsg : public ::Il2CppObject {
    public:
    // static public UnityEngine.InputSystem.InputRemoting/Message CreateResetEvent(UnityEngine.InputSystem.InputDevice device, System.Boolean isHardReset)
    // Offset: 0x5106B88
    static ::UnityEngine::InputSystem::InputRemoting::Message CreateResetEvent(::UnityEngine::InputSystem::InputDevice* device, bool isHardReset);
    // static public UnityEngine.InputSystem.InputRemoting/Message CreateStateEvent(UnityEngine.InputSystem.InputDevice device)
    // Offset: 0x510663C
    static ::UnityEngine::InputSystem::InputRemoting::Message CreateStateEvent(::UnityEngine::InputSystem::InputDevice* device);
    // static public UnityEngine.InputSystem.InputRemoting/Message Create(UnityEngine.InputSystem.LowLevel.InputEvent* events, System.Int32 eventCount)
    // Offset: 0x51067A0
    static ::UnityEngine::InputSystem::InputRemoting::Message Create(::UnityEngine::InputSystem::LowLevel::InputEvent* events, int eventCount);
    // static public System.Void Process(UnityEngine.InputSystem.InputRemoting receiver, UnityEngine.InputSystem.InputRemoting/Message msg)
    // Offset: 0x5105678
    static void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting::Message msg);
  }; // UnityEngine.InputSystem.InputRemoting/NewEventsMsg
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::NewEventsMsg::CreateResetEvent
// Il2CppName: CreateResetEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting::Message (*)(::UnityEngine::InputSystem::InputDevice*, bool)>(&UnityEngine::InputSystem::InputRemoting::NewEventsMsg::CreateResetEvent)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    static auto* isHardReset = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::NewEventsMsg*), "CreateResetEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, isHardReset});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::NewEventsMsg::CreateStateEvent
// Il2CppName: CreateStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting::Message (*)(::UnityEngine::InputSystem::InputDevice*)>(&UnityEngine::InputSystem::InputRemoting::NewEventsMsg::CreateStateEvent)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::NewEventsMsg*), "CreateStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::NewEventsMsg::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting::Message (*)(::UnityEngine::InputSystem::LowLevel::InputEvent*, int)>(&UnityEngine::InputSystem::InputRemoting::NewEventsMsg::Create)> {
  static const MethodInfo* get() {
    static auto* events = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEvent"))->byval_arg;
    static auto* eventCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::NewEventsMsg*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{events, eventCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::NewEventsMsg::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting::Message)>(&UnityEngine::InputSystem::InputRemoting::NewEventsMsg::Process)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputRemoting")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputRemoting/Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::NewEventsMsg*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver, msg});
  }
};