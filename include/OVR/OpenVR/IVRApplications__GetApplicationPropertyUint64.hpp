// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyUint64");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRApplications::_GetApplicationPropertyUint64 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4971CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationPropertyUint64* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationPropertyUint64*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, ref OVR.OpenVR.EVRApplicationError peError)
    // Offset: 0x4971D64
    uint64_t Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, ref OVR.OpenVR.EVRApplicationError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4971D78
    ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(ref OVR.OpenVR.EVRApplicationError peError, System.IAsyncResult result)
    // Offset: 0x4971E40
    uint64_t EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ByRef<::OVR::OpenVR::EVRApplicationError>)>(&OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eProperty = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationProperty")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, eProperty, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eProperty = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationProperty")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, eProperty, peError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::*)(ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, result});
  }
};