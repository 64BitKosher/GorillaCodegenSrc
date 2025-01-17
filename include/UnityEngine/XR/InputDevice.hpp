// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.XR.InputTrackingState
#include "UnityEngine/XR/InputTrackingState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRInputSubsystem
  class XRInputSubsystem;
  // Forward declaring type: InputDeviceCharacteristics
  struct InputDeviceCharacteristics;
  // Forward declaring type: HapticCapabilities
  struct HapticCapabilities;
  // Forward declaring type: InputFeatureUsage`1<T>
  template<typename T>
  struct InputFeatureUsage_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: InputDevice
  struct InputDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: FFFFFFFF
  struct InputDevice/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::XR::InputDevice>*/ {
    public:
    public:
    // private System.UInt64 m_DeviceId
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_DeviceId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Boolean m_Initialized
    // Size: 0x1
    // Offset: 0x8
    bool m_Initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: InputDevice
    constexpr InputDevice(uint64_t m_DeviceId_ = {}, bool m_Initialized_ = {}) noexcept : m_DeviceId{m_DeviceId_}, m_Initialized{m_Initialized_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::XR::InputDevice>
    operator ::System::IEquatable_1<::UnityEngine::XR::InputDevice>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::XR::InputDevice>*>(this);
    }
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> s_InputSubsystemCache
    static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* _get_s_InputSubsystemCache();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> s_InputSubsystemCache
    static void _set_s_InputSubsystemCache(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value);
    // Get instance field reference: private System.UInt64 m_DeviceId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_m_DeviceId();
    // Get instance field reference: private System.Boolean m_Initialized
    [[deprecated("Use field access instead!")]] bool& dyn_m_Initialized();
    // System.Void .ctor(System.UInt64 deviceId)
    // Offset: 0x571363C
    InputDevice(uint64_t deviceId);
    // private System.UInt64 get_deviceId()
    // Offset: 0x571364C
    uint64_t get_deviceId();
    // public System.Boolean get_isValid()
    // Offset: 0x5713664
    bool get_isValid();
    // public System.String get_name()
    // Offset: 0x571371C
    ::StringW get_name();
    // public UnityEngine.XR.InputDeviceCharacteristics get_characteristics()
    // Offset: 0x57137B4
    ::UnityEngine::XR::InputDeviceCharacteristics get_characteristics();
    // private System.Boolean IsValidId()
    // Offset: 0x57136C0
    bool IsValidId();
    // public System.Boolean SendHapticImpulse(System.UInt32 channel, System.Single amplitude, System.Single duration)
    // Offset: 0x571384C
    bool SendHapticImpulse(uint channel, float amplitude, float duration);
    // public System.Boolean TryGetHapticCapabilities(out UnityEngine.XR.HapticCapabilities capabilities)
    // Offset: 0x57139A0
    bool TryGetHapticCapabilities(ByRef<::UnityEngine::XR::HapticCapabilities> capabilities);
    // public System.Boolean TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean> usage, out System.Boolean value)
    // Offset: 0x5713A84
    bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<bool> usage, ByRef<bool> value);
    // public System.Boolean TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single> usage, out System.Single value)
    // Offset: 0x5713B8C
    bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<float> usage, ByRef<float> value);
    // public System.Boolean TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> usage, out UnityEngine.Vector2 value)
    // Offset: 0x5713C94
    bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> usage, ByRef<::UnityEngine::Vector2> value);
    // public System.Boolean TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> usage, out UnityEngine.Vector3 value)
    // Offset: 0x5713D9C
    bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> usage, ByRef<::UnityEngine::Vector3> value);
    // public System.Boolean TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> usage, out UnityEngine.Quaternion value)
    // Offset: 0x5713EA4
    bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> usage, ByRef<::UnityEngine::Quaternion> value);
    // public System.Boolean TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> usage, out UnityEngine.XR.InputTrackingState value)
    // Offset: 0x5713FAC
    bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState> usage, ByRef<::UnityEngine::XR::InputTrackingState> value);
    // private System.Boolean CheckValidAndSetDefault(out T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool CheckValidAndSetDefault(ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::InputDevice::CheckValidAndSetDefault");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CheckValidAndSetDefault", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, byref(value));
    }
    // public System.Boolean Equals(UnityEngine.XR.InputDevice other)
    // Offset: 0x5714140
    bool Equals(::UnityEngine::XR::InputDevice other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x57140B0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5714168
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.InputDevice
  #pragma pack(pop)
  static check_size<sizeof(InputDevice), 8 + sizeof(bool)> __UnityEngine_XR_InputDeviceSizeCheck;
  static_assert(sizeof(InputDevice) == 0x9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::InputDevice
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::get_deviceId
// Il2CppName: get_deviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::get_deviceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "get_deviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::get_isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::get_characteristics
// Il2CppName: get_characteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::get_characteristics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "get_characteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::IsValidId
// Il2CppName: IsValidId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::IsValidId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "IsValidId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::SendHapticImpulse
// Il2CppName: SendHapticImpulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(uint, float, float)>(&UnityEngine::XR::InputDevice::SendHapticImpulse)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* amplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "SendHapticImpulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, amplitude, duration});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::TryGetHapticCapabilities
// Il2CppName: TryGetHapticCapabilities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(ByRef<::UnityEngine::XR::HapticCapabilities>)>(&UnityEngine::XR::InputDevice::TryGetHapticCapabilities)> {
  static const MethodInfo* get() {
    static auto* capabilities = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "HapticCapabilities")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "TryGetHapticCapabilities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capabilities});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::TryGetFeatureValue
// Il2CppName: TryGetFeatureValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<bool>, ByRef<bool>)>(&UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  static const MethodInfo* get() {
    static auto* usage = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputFeatureUsage`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "TryGetFeatureValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::TryGetFeatureValue
// Il2CppName: TryGetFeatureValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<float>, ByRef<float>)>(&UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  static const MethodInfo* get() {
    static auto* usage = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputFeatureUsage`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "TryGetFeatureValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::TryGetFeatureValue
// Il2CppName: TryGetFeatureValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>)>(&UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  static const MethodInfo* get() {
    static auto* usage = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputFeatureUsage`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "TryGetFeatureValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::TryGetFeatureValue
// Il2CppName: TryGetFeatureValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  static const MethodInfo* get() {
    static auto* usage = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputFeatureUsage`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "TryGetFeatureValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::TryGetFeatureValue
// Il2CppName: TryGetFeatureValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  static const MethodInfo* get() {
    static auto* usage = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputFeatureUsage`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "TryGetFeatureValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::TryGetFeatureValue
// Il2CppName: TryGetFeatureValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState>, ByRef<::UnityEngine::XR::InputTrackingState>)>(&UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  static const MethodInfo* get() {
    static auto* usage = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputFeatureUsage`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputTrackingState")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputTrackingState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "TryGetFeatureValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::CheckValidAndSetDefault
// Il2CppName: CheckValidAndSetDefault
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputDevice)>(&UnityEngine::XR::InputDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::Il2CppObject*)>(&UnityEngine::XR::InputDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
