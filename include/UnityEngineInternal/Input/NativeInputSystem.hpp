// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngineInternal.Input.NativeInputUpdateType
#include "UnityEngineInternal/Input/NativeInputUpdateType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngineInternal::Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeUpdateCallback
  class NativeUpdateCallback;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputSystem
  class NativeInputSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngineInternal::Input::NativeInputSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputSystem*, "UnityEngineInternal.Input", "NativeInputSystem");
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.Input.NativeInputSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class NativeInputSystem : public ::Il2CppObject {
    public:
    // Get static field: static public UnityEngineInternal.Input.NativeUpdateCallback onUpdate
    static ::UnityEngineInternal::Input::NativeUpdateCallback* _get_onUpdate();
    // Set static field: static public UnityEngineInternal.Input.NativeUpdateCallback onUpdate
    static void _set_onUpdate(::UnityEngineInternal::Input::NativeUpdateCallback* value);
    // Get static field: static public System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> onBeforeUpdate
    static ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* _get_onBeforeUpdate();
    // Set static field: static public System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> onBeforeUpdate
    static void _set_onBeforeUpdate(::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* value);
    // Get static field: static public System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> onShouldRunUpdate
    static ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* _get_onShouldRunUpdate();
    // Set static field: static public System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> onShouldRunUpdate
    static void _set_onShouldRunUpdate(::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* value);
    // Get static field: static private System.Action`2<System.Int32,System.String> s_OnDeviceDiscoveredCallback
    static ::System::Action_2<int, ::StringW>* _get_s_OnDeviceDiscoveredCallback();
    // Set static field: static private System.Action`2<System.Int32,System.String> s_OnDeviceDiscoveredCallback
    static void _set_s_OnDeviceDiscoveredCallback(::System::Action_2<int, ::StringW>* value);
    // static public System.Action`2<System.Int32,System.String> get_onDeviceDiscovered()
    // Offset: 0x551B3AC
    static ::System::Action_2<int, ::StringW>* get_onDeviceDiscovered();
    // static public System.Void set_onDeviceDiscovered(System.Action`2<System.Int32,System.String> value)
    // Offset: 0x551B404
    static void set_onDeviceDiscovered(::System::Action_2<int, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x551B4D8
    static void _cctor();
    // static System.Void NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType)
    // Offset: 0x551B508
    static void NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType);
    // static System.Void NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType, System.IntPtr eventBuffer)
    // Offset: 0x551B584
    static void NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::System::IntPtr eventBuffer);
    // static System.Void NotifyDeviceDiscovered(System.Int32 deviceId, System.String deviceDescriptor)
    // Offset: 0x551B620
    static void NotifyDeviceDiscovered(int deviceId, ::StringW deviceDescriptor);
    // static System.Void ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType, out System.Boolean retval)
    // Offset: 0x551B6B0
    static void ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ByRef<bool> retval);
    // static System.Void set_hasDeviceDiscoveredCallback(System.Boolean value)
    // Offset: 0x551B49C
    static void set_hasDeviceDiscoveredCallback(bool value);
    // static public System.Double get_currentTime()
    // Offset: 0x551B740
    static double get_currentTime();
    // static public System.Double get_currentTimeOffsetToRealtimeSinceStartup()
    // Offset: 0x551B768
    static double get_currentTimeOffsetToRealtimeSinceStartup();
    // static public System.Int32 AllocateDeviceId()
    // Offset: 0x551B790
    static int AllocateDeviceId();
    // static public System.Void QueueInputEvent(System.IntPtr inputEvent)
    // Offset: 0x551B7B8
    static void QueueInputEvent(::System::IntPtr inputEvent);
    // static public System.Int64 IOCTL(System.Int32 deviceId, System.Int32 code, System.IntPtr data, System.Int32 sizeInBytes)
    // Offset: 0x551B7F4
    static int64_t IOCTL(int deviceId, int code, ::System::IntPtr data, int sizeInBytes);
    // static public System.Void SetPollingFrequency(System.Single hertz)
    // Offset: 0x551B850
    static void SetPollingFrequency(float hertz);
    // static public System.Void Update(UnityEngineInternal.Input.NativeInputUpdateType updateType)
    // Offset: 0x551B888
    static void Update(::UnityEngineInternal::Input::NativeInputUpdateType updateType);
  }; // UnityEngineInternal.Input.NativeInputSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::get_onDeviceDiscovered
// Il2CppName: get_onDeviceDiscovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<int, ::StringW>* (*)()>(&UnityEngineInternal::Input::NativeInputSystem::get_onDeviceDiscovered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "get_onDeviceDiscovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::set_onDeviceDiscovered
// Il2CppName: set_onDeviceDiscovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<int, ::StringW>*)>(&UnityEngineInternal::Input::NativeInputSystem::set_onDeviceDiscovered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "set_onDeviceDiscovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngineInternal::Input::NativeInputSystem::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate
// Il2CppName: NotifyBeforeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyBeforeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate
// Il2CppName: NotifyUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::IntPtr)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* eventBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, eventBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered
// Il2CppName: NotifyDeviceDiscovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::StringW)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* deviceDescriptor = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyDeviceDiscovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, deviceDescriptor});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate
// Il2CppName: ShouldRunUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ByRef<bool>)>(&UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* retval = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "ShouldRunUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, retval});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback
// Il2CppName: set_hasDeviceDiscoveredCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "set_hasDeviceDiscoveredCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::get_currentTime
// Il2CppName: get_currentTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&UnityEngineInternal::Input::NativeInputSystem::get_currentTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "get_currentTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup
// Il2CppName: get_currentTimeOffsetToRealtimeSinceStartup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&UnityEngineInternal::Input::NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "get_currentTimeOffsetToRealtimeSinceStartup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::AllocateDeviceId
// Il2CppName: AllocateDeviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngineInternal::Input::NativeInputSystem::AllocateDeviceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "AllocateDeviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::QueueInputEvent
// Il2CppName: QueueInputEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngineInternal::Input::NativeInputSystem::QueueInputEvent)> {
  static const MethodInfo* get() {
    static auto* inputEvent = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "QueueInputEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputEvent});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::IOCTL
// Il2CppName: IOCTL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, ::System::IntPtr, int)>(&UnityEngineInternal::Input::NativeInputSystem::IOCTL)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* sizeInBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "IOCTL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, code, data, sizeInBytes});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::SetPollingFrequency
// Il2CppName: SetPollingFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngineInternal::Input::NativeInputSystem::SetPollingFrequency)> {
  static const MethodInfo* get() {
    static auto* hertz = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "SetPollingFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hertz});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&UnityEngineInternal::Input::NativeInputSystem::Update)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType});
  }
};
