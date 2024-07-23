// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.XRNodeState
#include "UnityEngine/XR/XRNodeState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Skipping declaration: XRNode because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: InputTracking
  class InputTracking;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::InputTracking);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputTracking*, "UnityEngine.XR", "InputTracking");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.InputTracking
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  class InputTracking : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::XR::InputTracking::TrackingStateEventType
    struct TrackingStateEventType;
    // Get static field: static private System.Action`1<UnityEngine.XR.XRNodeState> trackingAcquired
    static ::System::Action_1<::UnityEngine::XR::XRNodeState>* _get_trackingAcquired();
    // Set static field: static private System.Action`1<UnityEngine.XR.XRNodeState> trackingAcquired
    static void _set_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);
    // Get static field: static private System.Action`1<UnityEngine.XR.XRNodeState> trackingLost
    static ::System::Action_1<::UnityEngine::XR::XRNodeState>* _get_trackingLost();
    // Set static field: static private System.Action`1<UnityEngine.XR.XRNodeState> trackingLost
    static void _set_trackingLost(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);
    // Get static field: static private System.Action`1<UnityEngine.XR.XRNodeState> nodeAdded
    static ::System::Action_1<::UnityEngine::XR::XRNodeState>* _get_nodeAdded();
    // Set static field: static private System.Action`1<UnityEngine.XR.XRNodeState> nodeAdded
    static void _set_nodeAdded(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);
    // Get static field: static private System.Action`1<UnityEngine.XR.XRNodeState> nodeRemoved
    static ::System::Action_1<::UnityEngine::XR::XRNodeState>* _get_nodeRemoved();
    // Set static field: static private System.Action`1<UnityEngine.XR.XRNodeState> nodeRemoved
    static void _set_nodeRemoved(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);
    // static private System.Void InvokeTrackingEvent(UnityEngine.XR.InputTracking/TrackingStateEventType eventType, UnityEngine.XR.XRNode nodeType, System.Int64 uniqueID, System.Boolean tracked)
    // Offset: 0x5711CD0
    static void InvokeTrackingEvent(::UnityEngine::XR::InputTracking::TrackingStateEventType eventType, ::UnityEngine::XR::XRNode nodeType, int64_t uniqueID, bool tracked);
    // static public System.Void GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> nodeStates)
    // Offset: 0x5711E94
    static void GetNodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStates);
    // static private System.Void GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> nodeStates)
    // Offset: 0x5711F48
    static void GetNodeStates_Internal(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStates);
    // static System.UInt64 GetDeviceIdAtXRNode(UnityEngine.XR.XRNode node)
    // Offset: 0x5711F84
    static uint64_t GetDeviceIdAtXRNode(::UnityEngine::XR::XRNode node);
    // static System.Void GetDeviceIdsAtXRNode_Internal(UnityEngine.XR.XRNode node, System.Collections.Generic.List`1<System.UInt64> deviceIds)
    // Offset: 0x5711FC0
    static void GetDeviceIdsAtXRNode_Internal(::UnityEngine::XR::XRNode node, ::System::Collections::Generic::List_1<uint64_t>* deviceIds);
  }; // UnityEngine.XR.InputTracking
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::InvokeTrackingEvent
// Il2CppName: InvokeTrackingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::InputTracking::TrackingStateEventType, ::UnityEngine::XR::XRNode, int64_t, bool)>(&UnityEngine::XR::InputTracking::InvokeTrackingEvent)> {
  static const MethodInfo* get() {
    static auto* eventType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputTracking/TrackingStateEventType")->byval_arg;
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* uniqueID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* tracked = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputTracking*), "InvokeTrackingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventType, nodeType, uniqueID, tracked});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::GetNodeStates
// Il2CppName: GetNodeStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*)>(&UnityEngine::XR::InputTracking::GetNodeStates)> {
  static const MethodInfo* get() {
    static auto* nodeStates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNodeState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputTracking*), "GetNodeStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeStates});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::GetNodeStates_Internal
// Il2CppName: GetNodeStates_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*)>(&UnityEngine::XR::InputTracking::GetNodeStates_Internal)> {
  static const MethodInfo* get() {
    static auto* nodeStates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNodeState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputTracking*), "GetNodeStates_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeStates});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::GetDeviceIdAtXRNode
// Il2CppName: GetDeviceIdAtXRNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::UnityEngine::XR::XRNode)>(&UnityEngine::XR::InputTracking::GetDeviceIdAtXRNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputTracking*), "GetDeviceIdAtXRNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::GetDeviceIdsAtXRNode_Internal
// Il2CppName: GetDeviceIdsAtXRNode_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::XRNode, ::System::Collections::Generic::List_1<uint64_t>*)>(&UnityEngine::XR::InputTracking::GetDeviceIdsAtXRNode_Internal)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* deviceIds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt64")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputTracking*), "GetDeviceIdsAtXRNode_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, deviceIds});
  }
};
