// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn*, "OVR.OpenVR", "IVRCompositor/_ForceInterleavedReprojectionOn");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRCompositor::_ForceInterleavedReprojectionOn : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4977B80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_ForceInterleavedReprojectionOn* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_ForceInterleavedReprojectionOn*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean bOverride)
    // Offset: 0x4977C20
    void Invoke(bool bOverride);
    // public System.IAsyncResult BeginInvoke(System.Boolean bOverride, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4977C38
    ::System::IAsyncResult* BeginInvoke(bool bOverride, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4977CC0
    void EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::*)(bool)>(&OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::Invoke)> {
  static const MethodInfo* get() {
    static auto* bOverride = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bOverride});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::*)(bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* bOverride = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bOverride, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
