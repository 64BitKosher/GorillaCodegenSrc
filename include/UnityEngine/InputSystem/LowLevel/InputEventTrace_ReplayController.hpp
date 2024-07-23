// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventTrace
#include "UnityEngine/InputSystem/LowLevel/InputEventTrace.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InlinedArray`1
#include "UnityEngine/InputSystem/Utilities/InlinedArray_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventPtr
#include "UnityEngine/InputSystem/LowLevel/InputEventPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
  // [TokenAttribute] Offset: FFFFFFFF
  class InputEventTrace::ReplayController : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c
    class $$c;
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0
    class $$c__DisplayClass43_0;
    public:
    // private System.Boolean <finished>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool finished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <paused>k__BackingField
    // Size: 0x1
    // Offset: 0x11
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 <position>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.InputSystem.LowLevel.InputEventTrace m_EventTrace
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_EventTrace;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEventTrace*) == 0x8);
    // private UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator m_Enumerator
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::Enumerator* m_Enumerator;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEventTrace::Enumerator*) == 0x8);
    // private UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> m_DeviceIDMappings
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int, int>> m_DeviceIDMappings;
    // private System.Boolean m_CreateNewDevices
    // Size: 0x1
    // Offset: 0x40
    bool m_CreateNewDevices;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice> m_CreatedDevices
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> m_CreatedDevices;
    // private System.Action m_OnFinished
    // Size: 0x8
    // Offset: 0x60
    ::System::Action* m_OnFinished;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> m_OnEvent
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_OnEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*) == 0x8);
    // private System.Double m_StartTimeAsPerFirstEvent
    // Size: 0x8
    // Offset: 0x70
    double m_StartTimeAsPerFirstEvent;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_StartTimeAsPerRuntime
    // Size: 0x8
    // Offset: 0x78
    double m_StartTimeAsPerRuntime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Int32 m_AllEventsByTimeIndex
    // Size: 0x4
    // Offset: 0x80
    int m_AllEventsByTimeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> m_AllEventsByTime
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_AllEventsByTime;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Boolean <finished>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$finished$k__BackingField();
    // Get instance field reference: private System.Boolean <paused>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$paused$k__BackingField();
    // Get instance field reference: private System.Int32 <position>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$position$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.LowLevel.InputEventTrace m_EventTrace
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEventTrace*& dyn_m_EventTrace();
    // Get instance field reference: private UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator m_Enumerator
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEventTrace::Enumerator*& dyn_m_Enumerator();
    // Get instance field reference: private UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> m_DeviceIDMappings
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int, int>>& dyn_m_DeviceIDMappings();
    // Get instance field reference: private System.Boolean m_CreateNewDevices
    [[deprecated("Use field access instead!")]] bool& dyn_m_CreateNewDevices();
    // Get instance field reference: private UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice> m_CreatedDevices
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*>& dyn_m_CreatedDevices();
    // Get instance field reference: private System.Action m_OnFinished
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_m_OnFinished();
    // Get instance field reference: private System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> m_OnEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& dyn_m_OnEvent();
    // Get instance field reference: private System.Double m_StartTimeAsPerFirstEvent
    [[deprecated("Use field access instead!")]] double& dyn_m_StartTimeAsPerFirstEvent();
    // Get instance field reference: private System.Double m_StartTimeAsPerRuntime
    [[deprecated("Use field access instead!")]] double& dyn_m_StartTimeAsPerRuntime();
    // Get instance field reference: private System.Int32 m_AllEventsByTimeIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_AllEventsByTimeIndex();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> m_AllEventsByTime
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& dyn_m_AllEventsByTime();
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace get_trace()
    // Offset: 0x5151318
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace* get_trace();
    // public System.Boolean get_finished()
    // Offset: 0x5151320
    bool get_finished();
    // private System.Void set_finished(System.Boolean value)
    // Offset: 0x5151328
    void set_finished(bool value);
    // public System.Boolean get_paused()
    // Offset: 0x5151334
    bool get_paused();
    // public System.Void set_paused(System.Boolean value)
    // Offset: 0x515133C
    void set_paused(bool value);
    // public System.Int32 get_position()
    // Offset: 0x5151348
    int get_position();
    // private System.Void set_position(System.Int32 value)
    // Offset: 0x5151350
    void set_position(int value);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputDevice> get_createdDevices()
    // Offset: 0x5151358
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>* get_createdDevices();
    // System.Void .ctor(UnityEngine.InputSystem.LowLevel.InputEventTrace trace)
    // Offset: 0x51505D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputEventTrace::ReplayController* New_ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputEventTrace::ReplayController*, creationType>(trace)));
    }
    // public System.Void Dispose()
    // Offset: 0x51513BC
    void Dispose();
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController WithDeviceMappedFromTo(UnityEngine.InputSystem.InputDevice recordedDevice, UnityEngine.InputSystem.InputDevice playbackDevice)
    // Offset: 0x51516D0
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* WithDeviceMappedFromTo(::UnityEngine::InputSystem::InputDevice* recordedDevice, ::UnityEngine::InputSystem::InputDevice* playbackDevice);
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController WithDeviceMappedFromTo(System.Int32 recordedDeviceId, System.Int32 playbackDeviceId)
    // Offset: 0x5151754
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* WithDeviceMappedFromTo(int recordedDeviceId, int playbackDeviceId);
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController WithAllDevicesMappedToNewInstances()
    // Offset: 0x51518D0
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* WithAllDevicesMappedToNewInstances();
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController OnFinished(System.Action action)
    // Offset: 0x51518DC
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* OnFinished(::System::Action* action);
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController OnEvent(System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> action)
    // Offset: 0x51518F8
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* OnEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* action);
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController PlayOneEvent()
    // Offset: 0x5151914
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* PlayOneEvent();
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController Rewind()
    // Offset: 0x5151F00
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* Rewind();
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController PlayAllFramesOneByOne()
    // Offset: 0x5151F3C
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* PlayAllFramesOneByOne();
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController PlayAllEvents()
    // Offset: 0x5151FEC
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* PlayAllEvents();
    // public UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController PlayAllEventsAccordingToTimestamps()
    // Offset: 0x51520A4
    ::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* PlayAllEventsAccordingToTimestamps();
    // private System.Void OnBeginFrame()
    // Offset: 0x515235C
    void OnBeginFrame();
    // private System.Void Finished()
    // Offset: 0x515258C
    void Finished();
    // private System.Void QueueEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0x5151CD4
    void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);
    // private System.Boolean MoveNext(System.Boolean skipFrameEvents, out UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0x5151998
    bool MoveNext(bool skipFrameEvents, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr);
    // private System.Int32 ApplyDeviceMapping(System.Int32 originalDeviceId)
    // Offset: 0x5152660
    int ApplyDeviceMapping(int originalDeviceId);
  }; // UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_trace
// Il2CppName: get_trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_trace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "get_trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_finished
// Il2CppName: get_finished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_finished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "get_finished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::set_finished
// Il2CppName: set_finished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(bool)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::set_finished)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "set_finished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_paused
// Il2CppName: get_paused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_paused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "get_paused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::set_paused
// Il2CppName: set_paused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(bool)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::set_paused)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "set_paused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(int)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_createdDevices
// Il2CppName: get_createdDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::get_createdDevices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "get_createdDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::WithDeviceMappedFromTo
// Il2CppName: WithDeviceMappedFromTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::WithDeviceMappedFromTo)> {
  static const MethodInfo* get() {
    static auto* recordedDevice = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    static auto* playbackDevice = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "WithDeviceMappedFromTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordedDevice, playbackDevice});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::WithDeviceMappedFromTo
// Il2CppName: WithDeviceMappedFromTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(int, int)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::WithDeviceMappedFromTo)> {
  static const MethodInfo* get() {
    static auto* recordedDeviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playbackDeviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "WithDeviceMappedFromTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordedDeviceId, playbackDeviceId});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::WithAllDevicesMappedToNewInstances
// Il2CppName: WithAllDevicesMappedToNewInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::WithAllDevicesMappedToNewInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "WithAllDevicesMappedToNewInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::OnFinished
// Il2CppName: OnFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(::System::Action*)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::OnFinished)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "OnFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::OnEvent
// Il2CppName: OnEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::OnEvent)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "OnEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::PlayOneEvent
// Il2CppName: PlayOneEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::PlayOneEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "PlayOneEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::Rewind
// Il2CppName: Rewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::Rewind)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "Rewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::PlayAllFramesOneByOne
// Il2CppName: PlayAllFramesOneByOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::PlayAllFramesOneByOne)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "PlayAllFramesOneByOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::PlayAllEvents
// Il2CppName: PlayAllEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::PlayAllEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "PlayAllEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::PlayAllEventsAccordingToTimestamps
// Il2CppName: PlayAllEventsAccordingToTimestamps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController* (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::PlayAllEventsAccordingToTimestamps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "PlayAllEventsAccordingToTimestamps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::OnBeginFrame
// Il2CppName: OnBeginFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::OnBeginFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "OnBeginFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::Finished
// Il2CppName: Finished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::Finished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "Finished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::QueueEvent
// Il2CppName: QueueEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::QueueEvent)> {
  static const MethodInfo* get() {
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "QueueEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(bool, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::MoveNext)> {
  static const MethodInfo* get() {
    static auto* skipFrameEvents = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skipFrameEvents, eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::ApplyDeviceMapping
// Il2CppName: ApplyDeviceMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::*)(int)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::ApplyDeviceMapping)> {
  static const MethodInfo* get() {
    static auto* originalDeviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController*), "ApplyDeviceMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{originalDeviceId});
  }
};
