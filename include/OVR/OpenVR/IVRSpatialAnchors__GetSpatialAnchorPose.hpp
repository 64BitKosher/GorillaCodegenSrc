// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
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
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: SpatialAnchorPose_t
  struct SpatialAnchorPose_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorPose");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRSpatialAnchors::_GetSpatialAnchorPose : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x49881CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSpatialAnchors::_GetSpatialAnchorPose* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSpatialAnchors::_GetSpatialAnchorPose*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.UInt32 unHandle, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPoseOut)
    // Offset: 0x498826C
    ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unHandle, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPoseOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4988280
    ::System::IAsyncResult* BeginInvoke(uint unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(ref OVR.OpenVR.SpatialAnchorPose_t pPoseOut, System.IAsyncResult result)
    // Offset: 0x498836C
    ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::*)(uint, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::Invoke)> {
  static const MethodInfo* get() {
    static auto* unHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pPoseOut = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "SpatialAnchorPose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unHandle, eOrigin, pPoseOut});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::*)(uint, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pPoseOut = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "SpatialAnchorPose_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unHandle, eOrigin, pPoseOut, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::*)(ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pPoseOut = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "SpatialAnchorPose_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pPoseOut, result});
  }
};
