// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Utilities.ForDeviceEventObservable
#include "UnityEngine/InputSystem/Utilities/ForDeviceEventObservable.hpp"
// Including type: System.IObserver`1
#include "System/IObserver_1.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventPtr
#include "UnityEngine/InputSystem/LowLevel/InputEventPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice*, "UnityEngine.InputSystem.Utilities", "ForDeviceEventObservable/ForDevice");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Utilities.ForDeviceEventObservable/ForDevice
  // [TokenAttribute] Offset: FFFFFFFF
  class ForDeviceEventObservable::ForDevice : public ::Il2CppObject/*, public ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*/ {
    public:
    public:
    // private System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> m_Observer
    // Size: 0x8
    // Offset: 0x10
    ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_Observer;
    // Field size check
    static_assert(sizeof(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*) == 0x8);
    // private UnityEngine.InputSystem.InputDevice m_Device
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::InputSystem::InputDevice* m_Device;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputDevice*) == 0x8);
    // private System.Type m_DeviceType
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* m_DeviceType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>
    operator ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() noexcept {
      return *reinterpret_cast<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(this);
    }
    // Get instance field reference: private System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> m_Observer
    [[deprecated("Use field access instead!")]] ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& dyn_m_Observer();
    // Get instance field reference: private UnityEngine.InputSystem.InputDevice m_Device
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputDevice*& dyn_m_Device();
    // Get instance field reference: private System.Type m_DeviceType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_DeviceType();
    // public System.Void .ctor(System.Type deviceType, UnityEngine.InputSystem.InputDevice device, System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> observer)
    // Offset: 0x517865C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ForDeviceEventObservable::ForDevice* New_ctor(::System::Type* deviceType, ::UnityEngine::InputSystem::InputDevice* device, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ForDeviceEventObservable::ForDevice*, creationType>(deviceType, device, observer)));
    }
    // public System.Void OnCompleted()
    // Offset: 0x51786BC
    void OnCompleted();
    // public System.Void OnError(System.Exception error)
    // Offset: 0x51786C0
    void OnError(::System::Exception* error);
    // public System.Void OnNext(UnityEngine.InputSystem.LowLevel.InputEventPtr value)
    // Offset: 0x5178718
    void OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr value);
  }; // UnityEngine.InputSystem.Utilities.ForDeviceEventObservable/ForDevice
  #pragma pack(pop)
  static check_size<sizeof(ForDeviceEventObservable::ForDevice), 32 + sizeof(::System::Type*)> __UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_ForDeviceSizeCheck;
  static_assert(sizeof(ForDeviceEventObservable::ForDevice) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::*)()>(&UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::OnCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice*), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::OnError
// Il2CppName: OnError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::*)(::System::Exception*)>(&UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::OnError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice*), "OnError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::OnNext
// Il2CppName: OnNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice::OnNext)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDevice*), "OnNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
