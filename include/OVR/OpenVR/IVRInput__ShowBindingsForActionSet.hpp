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
// Including type: OVR.OpenVR.VRActiveActionSet_t
#include "OVR/OpenVR/VRActiveActionSet_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInputError
  struct EVRInputError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRInput::_ShowBindingsForActionSet);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput::_ShowBindingsForActionSet*, "OVR.OpenVR", "IVRInput/_ShowBindingsForActionSet");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRInput/_ShowBindingsForActionSet
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRInput::_ShowBindingsForActionSet : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x498741C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_ShowBindingsForActionSet* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_ShowBindingsForActionSet*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(in OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt32 unSetCount, System.UInt64 originToHighlight)
    // Offset: 0x49874D0
    ::OVR::OpenVR::EVRInputError Invoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint unSizeOfVRSelectedActionSet_t, uint unSetCount, uint64_t originToHighlight);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt32 unSetCount, System.UInt64 originToHighlight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x49874E4
    ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint unSizeOfVRSelectedActionSet_t, uint unSetCount, uint64_t originToHighlight, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x49875BC
    ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_ShowBindingsForActionSet
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::*)(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>, uint, uint, uint64_t)>(&OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::Invoke)> {
  static const MethodInfo* get() {
    static auto* pSets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRActiveActionSet_t"), 1)->this_arg;
    static auto* unSizeOfVRSelectedActionSet_t = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unSetCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* originToHighlight = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_ShowBindingsForActionSet*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::*)(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>, uint, uint, uint64_t, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pSets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRActiveActionSet_t"), 1)->this_arg;
    static auto* unSizeOfVRSelectedActionSet_t = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unSetCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* originToHighlight = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_ShowBindingsForActionSet*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_ShowBindingsForActionSet::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_ShowBindingsForActionSet*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
