// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
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
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy*, "OVR.OpenVR", "IVRChaperoneSetup/_CommitWorkingCopy");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_CommitWorkingCopy
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRChaperoneSetup::_CommitWorkingCopy : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4973AA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_CommitWorkingCopy* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_CommitWorkingCopy*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(OVR.OpenVR.EChaperoneConfigFile configFile)
    // Offset: 0x4973B40
    bool Invoke(::OVR::OpenVR::EChaperoneConfigFile configFile);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EChaperoneConfigFile configFile, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4973B54
    ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x4973BD8
    bool EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_CommitWorkingCopy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::*)(::OVR::OpenVR::EChaperoneConfigFile)>(&OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::Invoke)> {
  static const MethodInfo* get() {
    static auto* configFile = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EChaperoneConfigFile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configFile});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::*)(::OVR::OpenVR::EChaperoneConfigFile, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* configFile = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EChaperoneConfigFile")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configFile, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_CommitWorkingCopy*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
