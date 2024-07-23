// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.CVRSystem
#include "OVR/OpenVR/CVRSystem.hpp"
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
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
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
NEED_NO_BOX(::OVR::OpenVR::CVRSystem::_GetControllerStatePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem::_GetControllerStatePacked*, "OVR.OpenVR", "CVRSystem/_GetControllerStatePacked");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRSystem/_GetControllerStatePacked
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class CVRSystem::_GetControllerStatePacked : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4989690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSystem::_GetControllerStatePacked* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRSystem::_GetControllerStatePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSystem::_GetControllerStatePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 unControllerDeviceIndex, ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0x4989730
    bool Invoke(uint unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint unControllerStateSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unControllerDeviceIndex, ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4989744
    ::System::IAsyncResult* BeginInvoke(uint unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint unControllerStateSize, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, System.IAsyncResult result)
    // Offset: 0x4989814
    bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.CVRSystem/_GetControllerStatePacked
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRSystem::_GetControllerStatePacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRSystem::_GetControllerStatePacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::_GetControllerStatePacked::*)(uint, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint)>(&OVR::OpenVR::CVRSystem::_GetControllerStatePacked::Invoke)> {
  static const MethodInfo* get() {
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t_Packed")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSystem::_GetControllerStatePacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unControllerDeviceIndex, pControllerState, unControllerStateSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSystem::_GetControllerStatePacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::CVRSystem::_GetControllerStatePacked::*)(uint, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::CVRSystem::_GetControllerStatePacked::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t_Packed")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSystem::_GetControllerStatePacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSystem::_GetControllerStatePacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::_GetControllerStatePacked::*)(ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ::System::IAsyncResult*)>(&OVR::OpenVR::CVRSystem::_GetControllerStatePacked::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t_Packed")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSystem::_GetControllerStatePacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, result});
  }
};
