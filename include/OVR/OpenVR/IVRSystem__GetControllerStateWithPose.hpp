// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_GetControllerStateWithPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*, "OVR.OpenVR", "IVRSystem/_GetControllerStateWithPose");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRSystem::_GetControllerStateWithPose : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x496DCEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetControllerStateWithPose* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetControllerStateWithPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x496DD8C
    bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint unControllerStateSize, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x496DDA0
    ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint unControllerStateSize, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VRControllerState_t pControllerState, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x496DEDC
    bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint, ByRef<::OVR::OpenVR::VRControllerState_t>, uint, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::Invoke)> {
  static const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint, ByRef<::OVR::OpenVR::VRControllerState_t>, uint, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::*)(ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, pTrackedDevicePose, result});
  }
};
