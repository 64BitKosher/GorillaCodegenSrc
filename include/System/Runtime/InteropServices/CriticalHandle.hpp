// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: CriticalHandle
  class CriticalHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::CriticalHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::CriticalHandle*, "System.Runtime.InteropServices", "CriticalHandle");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.CriticalHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class CriticalHandle : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // protected System.IntPtr handle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Boolean _isClosed
    // Size: 0x1
    // Offset: 0x18
    bool isClosed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: protected System.IntPtr handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_handle();
    // Get instance field reference: private System.Boolean _isClosed
    [[deprecated("Use field access instead!")]] bool& dyn__isClosed();
    // protected System.Void .ctor(System.IntPtr invalidHandleValue)
    // Offset: 0x4573998
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CriticalHandle* New_ctor(::System::IntPtr invalidHandleValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::CriticalHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CriticalHandle*, creationType>(invalidHandleValue)));
    }
    // private System.Void Cleanup()
    // Offset: 0x4573A6C
    void Cleanup();
    // static private System.Void FireCustomerDebugProbe()
    // Offset: 0x4573B4C
    static void FireCustomerDebugProbe();
    // protected System.Void SetHandle(System.IntPtr handle)
    // Offset: 0x4573B54
    void SetHandle(::System::IntPtr handle);
    // public System.Boolean get_IsClosed()
    // Offset: 0x4573B5C
    bool get_IsClosed();
    // public System.Boolean get_IsInvalid()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsInvalid();
    // public System.Void Dispose()
    // Offset: 0x4573B64
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x4573B74
    void Dispose(bool disposing);
    // protected System.Boolean ReleaseHandle()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ReleaseHandle();
    // protected override System.Void Finalize()
    // Offset: 0x45739CC
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::Finalize()
    void Finalize();
  }; // System.Runtime.InteropServices.CriticalHandle
  #pragma pack(pop)
  static check_size<sizeof(CriticalHandle), 24 + sizeof(bool)> __System_Runtime_InteropServices_CriticalHandleSizeCheck;
  static_assert(sizeof(CriticalHandle) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::CriticalHandle::*)()>(&System::Runtime::InteropServices::CriticalHandle::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::FireCustomerDebugProbe
// Il2CppName: FireCustomerDebugProbe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::InteropServices::CriticalHandle::FireCustomerDebugProbe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "FireCustomerDebugProbe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::SetHandle
// Il2CppName: SetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::CriticalHandle::*)(::System::IntPtr)>(&System::Runtime::InteropServices::CriticalHandle::SetHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "SetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::get_IsClosed
// Il2CppName: get_IsClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::CriticalHandle::*)()>(&System::Runtime::InteropServices::CriticalHandle::get_IsClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "get_IsClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::get_IsInvalid
// Il2CppName: get_IsInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::CriticalHandle::*)()>(&System::Runtime::InteropServices::CriticalHandle::get_IsInvalid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "get_IsInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::CriticalHandle::*)()>(&System::Runtime::InteropServices::CriticalHandle::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::CriticalHandle::*)(bool)>(&System::Runtime::InteropServices::CriticalHandle::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::CriticalHandle::*)()>(&System::Runtime::InteropServices::CriticalHandle::ReleaseHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::CriticalHandle::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::CriticalHandle::*)()>(&System::Runtime::InteropServices::CriticalHandle::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::CriticalHandle*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
