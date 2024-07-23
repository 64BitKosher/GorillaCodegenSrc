// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
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
NEED_NO_BOX(::OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName*, "OVR.OpenVR", "IVRRenderModels/_GetComponentRenderModelName");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetComponentRenderModelName
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRRenderModels::_GetComponentRenderModelName : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x498212C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentRenderModelName* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentRenderModelName*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchRenderModelName, System.String pchComponentName, System.Text.StringBuilder pchComponentRenderModelName, System.UInt32 unComponentRenderModelNameLen)
    // Offset: 0x49821E0
    uint Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, System.Text.StringBuilder pchComponentRenderModelName, System.UInt32 unComponentRenderModelNameLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x49821F4
    ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x498229C
    uint EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetComponentRenderModelName
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint)>(&OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentRenderModelName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unComponentRenderModelNameLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentRenderModelName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unComponentRenderModelNameLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentRenderModelName*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
