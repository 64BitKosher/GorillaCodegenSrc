// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: InputAnalogActionData_t
  struct InputAnalogActionData_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVRInput::_GetAnalogActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput::_GetAnalogActionData*, "OVR.OpenVR", "IVRInput/_GetAnalogActionData");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetAnalogActionData
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRInput::_GetAnalogActionData : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4985F18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetAnalogActionData* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRInput::_GetAnalogActionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetAnalogActionData*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, ref OVR.OpenVR.InputAnalogActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x4985FB8
    ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, ref OVR.OpenVR.InputAnalogActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4985FCC
    ::System::IAsyncResult* BeginInvoke(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.InputAnalogActionData_t pActionData, System.IAsyncResult result)
    // Offset: 0x49860D4
    ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetAnalogActionData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetAnalogActionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetAnalogActionData::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetAnalogActionData::*)(uint64_t, ByRef<::OVR::OpenVR::InputAnalogActionData_t>, uint, uint64_t)>(&OVR::OpenVR::IVRInput::_GetAnalogActionData::Invoke)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputAnalogActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetAnalogActionData*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, pActionData, unActionDataSize, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetAnalogActionData::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRInput::_GetAnalogActionData::*)(uint64_t, ByRef<::OVR::OpenVR::InputAnalogActionData_t>, uint, uint64_t, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_GetAnalogActionData::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputAnalogActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetAnalogActionData*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetAnalogActionData::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetAnalogActionData::*)(ByRef<::OVR::OpenVR::InputAnalogActionData_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_GetAnalogActionData::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputAnalogActionData_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetAnalogActionData*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pActionData, result});
  }
};