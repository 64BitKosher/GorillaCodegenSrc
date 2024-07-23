// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: HandleRef
  struct HandleRef;
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeWaitHandle
  class SafeWaitHandle;
  // Forward declaring type: SafeProcessHandle
  class SafeProcessHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Forward declaring type: NativeMethods
  class NativeMethods;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::NativeMethods*, "Microsoft.Win32", "NativeMethods");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.NativeMethods
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeMethods : public ::Il2CppObject {
    public:
    // static public System.Boolean DuplicateHandle(System.Runtime.InteropServices.HandleRef hSourceProcessHandle, System.Runtime.InteropServices.SafeHandle hSourceHandle, System.Runtime.InteropServices.HandleRef hTargetProcess, out Microsoft.Win32.SafeHandles.SafeWaitHandle targetHandle, System.Int32 dwDesiredAccess, System.Boolean bInheritHandle, System.Int32 dwOptions)
    // Offset: 0x4C03E5C
    static bool DuplicateHandle(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::SafeHandle* hSourceHandle, ::System::Runtime::InteropServices::HandleRef hTargetProcess, ByRef<::Microsoft::Win32::SafeHandles::SafeWaitHandle*> targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions);
    // static public System.Boolean DuplicateHandle(System.Runtime.InteropServices.HandleRef hSourceProcessHandle, System.Runtime.InteropServices.HandleRef hSourceHandle, System.Runtime.InteropServices.HandleRef hTargetProcess, out Microsoft.Win32.SafeHandles.SafeProcessHandle targetHandle, System.Int32 dwDesiredAccess, System.Boolean bInheritHandle, System.Int32 dwOptions)
    // Offset: 0x4C04070
    static bool DuplicateHandle(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::HandleRef hSourceHandle, ::System::Runtime::InteropServices::HandleRef hTargetProcess, ByRef<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions);
    // static public System.IntPtr GetCurrentProcess()
    // Offset: 0x4C041B8
    static ::System::IntPtr GetCurrentProcess();
    // static public System.Boolean GetExitCodeProcess(System.IntPtr processHandle, out System.Int32 exitCode)
    // Offset: 0x4C041BC
    static bool GetExitCodeProcess(::System::IntPtr processHandle, ByRef<int> exitCode);
    // static public System.Boolean GetExitCodeProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle processHandle, out System.Int32 exitCode)
    // Offset: 0x4C041C0
    static bool GetExitCodeProcess(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, ByRef<int> exitCode);
    // static public System.Boolean TerminateProcess(System.IntPtr processHandle, System.Int32 exitCode)
    // Offset: 0x4C042B8
    static bool TerminateProcess(::System::IntPtr processHandle, int exitCode);
    // static public System.Boolean TerminateProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle processHandle, System.Int32 exitCode)
    // Offset: 0x4C042BC
    static bool TerminateProcess(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, int exitCode);
    // static public System.Int32 GetCurrentProcessId()
    // Offset: 0x4C043B4
    static int GetCurrentProcessId();
    // static public System.Boolean CloseProcess(System.IntPtr handle)
    // Offset: 0x4C043B8
    static bool CloseProcess(::System::IntPtr handle);
  }; // Microsoft.Win32.NativeMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::DuplicateHandle
// Il2CppName: DuplicateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::SafeHandle*, ::System::Runtime::InteropServices::HandleRef, ByRef<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>, int, bool, int)>(&Microsoft::Win32::NativeMethods::DuplicateHandle)> {
  static const MethodInfo* get() {
    static auto* hSourceProcessHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "HandleRef")->byval_arg;
    static auto* hSourceHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* hTargetProcess = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "HandleRef")->byval_arg;
    static auto* targetHandle = &::il2cpp_utils::GetClassFromName("Microsoft.Win32.SafeHandles", "SafeWaitHandle")->this_arg;
    static auto* dwDesiredAccess = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bInheritHandle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* dwOptions = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "DuplicateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hSourceProcessHandle, hSourceHandle, hTargetProcess, targetHandle, dwDesiredAccess, bInheritHandle, dwOptions});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::DuplicateHandle
// Il2CppName: DuplicateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef, ByRef<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>, int, bool, int)>(&Microsoft::Win32::NativeMethods::DuplicateHandle)> {
  static const MethodInfo* get() {
    static auto* hSourceProcessHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "HandleRef")->byval_arg;
    static auto* hSourceHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "HandleRef")->byval_arg;
    static auto* hTargetProcess = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "HandleRef")->byval_arg;
    static auto* targetHandle = &::il2cpp_utils::GetClassFromName("Microsoft.Win32.SafeHandles", "SafeProcessHandle")->this_arg;
    static auto* dwDesiredAccess = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bInheritHandle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* dwOptions = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "DuplicateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hSourceProcessHandle, hSourceHandle, hTargetProcess, targetHandle, dwDesiredAccess, bInheritHandle, dwOptions});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::GetCurrentProcess
// Il2CppName: GetCurrentProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&Microsoft::Win32::NativeMethods::GetCurrentProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "GetCurrentProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::GetExitCodeProcess
// Il2CppName: GetExitCodeProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<int>)>(&Microsoft::Win32::NativeMethods::GetExitCodeProcess)> {
  static const MethodInfo* get() {
    static auto* processHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* exitCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "GetExitCodeProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processHandle, exitCode});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::GetExitCodeProcess
// Il2CppName: GetExitCodeProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ByRef<int>)>(&Microsoft::Win32::NativeMethods::GetExitCodeProcess)> {
  static const MethodInfo* get() {
    static auto* processHandle = &::il2cpp_utils::GetClassFromName("Microsoft.Win32.SafeHandles", "SafeProcessHandle")->byval_arg;
    static auto* exitCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "GetExitCodeProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processHandle, exitCode});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::TerminateProcess
// Il2CppName: TerminateProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int)>(&Microsoft::Win32::NativeMethods::TerminateProcess)> {
  static const MethodInfo* get() {
    static auto* processHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* exitCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "TerminateProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processHandle, exitCode});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::TerminateProcess
// Il2CppName: TerminateProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, int)>(&Microsoft::Win32::NativeMethods::TerminateProcess)> {
  static const MethodInfo* get() {
    static auto* processHandle = &::il2cpp_utils::GetClassFromName("Microsoft.Win32.SafeHandles", "SafeProcessHandle")->byval_arg;
    static auto* exitCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "TerminateProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processHandle, exitCode});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::GetCurrentProcessId
// Il2CppName: GetCurrentProcessId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&Microsoft::Win32::NativeMethods::GetCurrentProcessId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "GetCurrentProcessId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::NativeMethods::CloseProcess
// Il2CppName: CloseProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&Microsoft::Win32::NativeMethods::CloseProcess)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::NativeMethods*), "CloseProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
