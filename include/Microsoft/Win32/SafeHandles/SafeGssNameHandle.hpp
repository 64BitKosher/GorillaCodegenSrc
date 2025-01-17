// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.SafeHandle
#include "System/Runtime/InteropServices/SafeHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeGssNameHandle
  class SafeGssNameHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeGssNameHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeGssNameHandle*, "Microsoft.Win32.SafeHandles", "SafeGssNameHandle");
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeGssNameHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeGssNameHandle : public ::System::Runtime::InteropServices::SafeHandle {
    public:
    // static public Microsoft.Win32.SafeHandles.SafeGssNameHandle CreateUser(System.String name)
    // Offset: 0x4F5CEDC
    static ::Microsoft::Win32::SafeHandles::SafeGssNameHandle* CreateUser(::StringW name);
    // static public Microsoft.Win32.SafeHandles.SafeGssNameHandle CreatePrincipal(System.String name)
    // Offset: 0x4F5CFA0
    static ::Microsoft::Win32::SafeHandles::SafeGssNameHandle* CreatePrincipal(::StringW name);
    // public override System.Boolean get_IsInvalid()
    // Offset: 0x4F5D064
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::get_IsInvalid()
    bool get_IsInvalid();
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x4F5D074
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // Microsoft.Win32.SafeHandles.SafeGssNameHandle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeGssNameHandle::CreateUser
// Il2CppName: CreateUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeGssNameHandle* (*)(::StringW)>(&Microsoft::Win32::SafeHandles::SafeGssNameHandle::CreateUser)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeGssNameHandle*), "CreateUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeGssNameHandle::CreatePrincipal
// Il2CppName: CreatePrincipal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeGssNameHandle* (*)(::StringW)>(&Microsoft::Win32::SafeHandles::SafeGssNameHandle::CreatePrincipal)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeGssNameHandle*), "CreatePrincipal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeGssNameHandle::get_IsInvalid
// Il2CppName: get_IsInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeGssNameHandle::*)()>(&Microsoft::Win32::SafeHandles::SafeGssNameHandle::get_IsInvalid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeGssNameHandle*), "get_IsInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeGssNameHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeGssNameHandle::*)()>(&Microsoft::Win32::SafeHandles::SafeGssNameHandle::ReleaseHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeGssNameHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
