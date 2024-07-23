// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformTrackedDeviceComponent");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVROverlay::_GetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x497CB80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTransformTrackedDeviceComponent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTransformTrackedDeviceComponent*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punDeviceIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameSize)
    // Offset: 0x497CC20
    ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName, uint unComponentNameSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punDeviceIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x497CC34
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName, uint unComponentNameSize, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt32 punDeviceIndex, System.IAsyncResult result)
    // Offset: 0x497CD14
    ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint> punDeviceIndex, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::*)(uint64_t, ByRef<uint>, ::System::Text::StringBuilder*, uint)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unComponentNameSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::*)(uint64_t, ByRef<uint>, ::System::Text::StringBuilder*, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unComponentNameSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::*)(ByRef<uint>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* punDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punDeviceIndex, result});
  }
};
