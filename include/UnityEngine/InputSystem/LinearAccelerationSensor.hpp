// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Sensor
#include "UnityEngine/InputSystem/Sensor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: Vector3Control
  class Vector3Control;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: LinearAccelerationSensor
  class LinearAccelerationSensor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LinearAccelerationSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LinearAccelerationSensor*, "UnityEngine.InputSystem", "LinearAccelerationSensor");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LinearAccelerationSensor
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class LinearAccelerationSensor : public ::UnityEngine::InputSystem::Sensor {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.Vector3Control <acceleration>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::Vector3Control* acceleration;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::InputSystem::Controls::Vector3Control*
    constexpr operator ::UnityEngine::InputSystem::Controls::Vector3Control*() const noexcept {
      return acceleration;
    }
    // Get static field: static private UnityEngine.InputSystem.LinearAccelerationSensor <current>k__BackingField
    static ::UnityEngine::InputSystem::LinearAccelerationSensor* _get_$current$k__BackingField();
    // Set static field: static private UnityEngine.InputSystem.LinearAccelerationSensor <current>k__BackingField
    static void _set_$current$k__BackingField(::UnityEngine::InputSystem::LinearAccelerationSensor* value);
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <acceleration>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$acceleration$k__BackingField();
    // public UnityEngine.InputSystem.Controls.Vector3Control get_acceleration()
    // Offset: 0x51099E0
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration();
    // private System.Void set_acceleration(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x51099E8
    void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // static public UnityEngine.InputSystem.LinearAccelerationSensor get_current()
    // Offset: 0x51099F8
    static ::UnityEngine::InputSystem::LinearAccelerationSensor* get_current();
    // static private System.Void set_current(UnityEngine.InputSystem.LinearAccelerationSensor value)
    // Offset: 0x5109A40
    static void set_current(::UnityEngine::InputSystem::LinearAccelerationSensor* value);
    // public override System.Void MakeCurrent()
    // Offset: 0x5109A98
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::MakeCurrent()
    void MakeCurrent();
    // protected override System.Void OnRemoved()
    // Offset: 0x5109AF8
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::OnRemoved()
    void OnRemoved();
    // protected override System.Void FinishSetup()
    // Offset: 0x5109B94
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: System.Void InputControl::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x5109C18
    // Implemented from: UnityEngine.InputSystem.Sensor
    // Base method: System.Void Sensor::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinearAccelerationSensor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LinearAccelerationSensor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinearAccelerationSensor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.LinearAccelerationSensor
  #pragma pack(pop)
  static check_size<sizeof(LinearAccelerationSensor), 368 + sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*)> __UnityEngine_InputSystem_LinearAccelerationSensorSizeCheck;
  static_assert(sizeof(LinearAccelerationSensor) == 0x178);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LinearAccelerationSensor::get_acceleration
// Il2CppName: get_acceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(&UnityEngine::InputSystem::LinearAccelerationSensor::get_acceleration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LinearAccelerationSensor*), "get_acceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LinearAccelerationSensor::set_acceleration
// Il2CppName: set_acceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LinearAccelerationSensor::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&UnityEngine::InputSystem::LinearAccelerationSensor::set_acceleration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LinearAccelerationSensor*), "set_acceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LinearAccelerationSensor::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LinearAccelerationSensor* (*)()>(&UnityEngine::InputSystem::LinearAccelerationSensor::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LinearAccelerationSensor*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LinearAccelerationSensor::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LinearAccelerationSensor*)>(&UnityEngine::InputSystem::LinearAccelerationSensor::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "LinearAccelerationSensor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LinearAccelerationSensor*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LinearAccelerationSensor::MakeCurrent
// Il2CppName: MakeCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(&UnityEngine::InputSystem::LinearAccelerationSensor::MakeCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LinearAccelerationSensor*), "MakeCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LinearAccelerationSensor::OnRemoved
// Il2CppName: OnRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(&UnityEngine::InputSystem::LinearAccelerationSensor::OnRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LinearAccelerationSensor*), "OnRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LinearAccelerationSensor::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(&UnityEngine::InputSystem::LinearAccelerationSensor::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LinearAccelerationSensor*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LinearAccelerationSensor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
