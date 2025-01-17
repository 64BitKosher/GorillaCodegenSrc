// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputDeviceCommand
  struct InputDeviceCommand;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputDeviceCommandDelegate
  class InputDeviceCommandDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*, "UnityEngine.InputSystem.LowLevel", "InputDeviceCommandDelegate");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputDeviceCommandDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class InputDeviceCommandDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x514A048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputDeviceCommandDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputDeviceCommandDelegate*, creationType>(object, method)));
    }
    // public System.Nullable`1<System.Int64> Invoke(UnityEngine.InputSystem.InputDevice device, UnityEngine.InputSystem.LowLevel.InputDeviceCommand* command)
    // Offset: 0x514A154
    ::System::Nullable_1<int64_t> Invoke(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* command);
    // public System.IAsyncResult BeginInvoke(UnityEngine.InputSystem.InputDevice device, UnityEngine.InputSystem.LowLevel.InputDeviceCommand* command, System.AsyncCallback callback, System.Object object)
    // Offset: 0x514A168
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* command, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Nullable`1<System.Int64> EndInvoke(System.IAsyncResult result)
    // Offset: 0x514A190
    ::System::Nullable_1<int64_t> EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.InputSystem.LowLevel.InputDeviceCommandDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*)>(&UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    static auto* command = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputDeviceCommand"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, command});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    static auto* command = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputDeviceCommand"))->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, command, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::System::IAsyncResult*)>(&UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
