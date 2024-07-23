// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GCHandleType
  struct GCHandleType;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GCHandle
  struct GCHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.GCHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  struct GCHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: GCHandle
    constexpr GCHandle(::System::IntPtr handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return handle;
    }
    // Get instance field reference: private System.IntPtr handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_handle();
    // private System.Void .ctor(System.IntPtr h)
    // Offset: 0x4574768
    // ABORTED: conflicts with another method.  GCHandle(::System::IntPtr h);
    // private System.Void .ctor(System.Object obj)
    // Offset: 0x4574770
    GCHandle(::Il2CppObject* obj);
    // System.Void .ctor(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x4574794
    GCHandle(::Il2CppObject* value, ::System::Runtime::InteropServices::GCHandleType type);
    // public System.Boolean get_IsAllocated()
    // Offset: 0x45747C4
    bool get_IsAllocated();
    // public System.Object get_Target()
    // Offset: 0x45747D4
    ::Il2CppObject* get_Target();
    // public System.Void set_Target(System.Object value)
    // Offset: 0x4574848
    void set_Target(::Il2CppObject* value);
    // public System.IntPtr AddrOfPinnedObject()
    // Offset: 0x4574870
    ::System::IntPtr AddrOfPinnedObject();
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value)
    // Offset: 0x4574954
    static ::System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value);
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x4574960
    static ::System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value, ::System::Runtime::InteropServices::GCHandleType type);
    // public System.Void Free()
    // Offset: 0x4574974
    void Free();
    // static public System.IntPtr op_Explicit(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x4574A18
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // static public System.Runtime.InteropServices.GCHandle op_Explicit(System.IntPtr value)
    // Offset: 0x4574A1C
    explicit GCHandle(::System::IntPtr& value);
    // static private System.Boolean CheckCurrentDomain(System.IntPtr handle)
    // Offset: 0x4574AC8
    static bool CheckCurrentDomain(::System::IntPtr handle);
    // static private System.Object GetTarget(System.IntPtr handle)
    // Offset: 0x4574844
    static ::Il2CppObject* GetTarget(::System::IntPtr handle);
    // static private System.IntPtr GetTargetHandle(System.Object obj, System.IntPtr handle, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x45747C0
    static ::System::IntPtr GetTargetHandle(::Il2CppObject* obj, ::System::IntPtr handle, ::System::Runtime::InteropServices::GCHandleType type);
    // static private System.Void FreeHandle(System.IntPtr handle)
    // Offset: 0x4574A14
    static void FreeHandle(::System::IntPtr handle);
    // static private System.IntPtr GetAddrOfPinnedObject(System.IntPtr handle)
    // Offset: 0x4574950
    static ::System::IntPtr GetAddrOfPinnedObject(::System::IntPtr handle);
    // static public System.Runtime.InteropServices.GCHandle FromIntPtr(System.IntPtr value)
    // Offset: 0x4574B5C
    static ::System::Runtime::InteropServices::GCHandle FromIntPtr(::System::IntPtr value);
    // static public System.IntPtr ToIntPtr(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x4574B60
    static ::System::IntPtr ToIntPtr(::System::Runtime::InteropServices::GCHandle value);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x4574AD4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4574B54
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.InteropServices.GCHandle
  #pragma pack(pop)
  static check_size<sizeof(GCHandle), 0 + sizeof(::System::IntPtr)> __System_Runtime_InteropServices_GCHandleSizeCheck;
  static_assert(sizeof(GCHandle) == 0x8);
  // static public System.Boolean op_Equality(System.Runtime.InteropServices.GCHandle a, System.Runtime.InteropServices.GCHandle b)
  // Offset: 0x4574ACC
  bool operator ==(const ::System::Runtime::InteropServices::GCHandle& a, const ::System::Runtime::InteropServices::GCHandle& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::get_IsAllocated
// Il2CppName: get_IsAllocated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::get_IsAllocated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "get_IsAllocated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::set_Target
// Il2CppName: set_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::GCHandle::*)(::Il2CppObject*)>(&System::Runtime::InteropServices::GCHandle::set_Target)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "set_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject
// Il2CppName: AddrOfPinnedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "AddrOfPinnedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::Il2CppObject*)>(&System::Runtime::InteropServices::GCHandle::Alloc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::Il2CppObject*, ::System::Runtime::InteropServices::GCHandleType)>(&System::Runtime::InteropServices::GCHandle::Alloc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::Free)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::CheckCurrentDomain
// Il2CppName: CheckCurrentDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&System::Runtime::InteropServices::GCHandle::CheckCurrentDomain)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "CheckCurrentDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetTarget
// Il2CppName: GetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::IntPtr)>(&System::Runtime::InteropServices::GCHandle::GetTarget)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetTargetHandle
// Il2CppName: GetTargetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Il2CppObject*, ::System::IntPtr, ::System::Runtime::InteropServices::GCHandleType)>(&System::Runtime::InteropServices::GCHandle::GetTargetHandle)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetTargetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, handle, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::FreeHandle
// Il2CppName: FreeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&System::Runtime::InteropServices::GCHandle::FreeHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "FreeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject
// Il2CppName: GetAddrOfPinnedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetAddrOfPinnedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::FromIntPtr
// Il2CppName: FromIntPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::System::IntPtr)>(&System::Runtime::InteropServices::GCHandle::FromIntPtr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "FromIntPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::ToIntPtr
// Il2CppName: ToIntPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::Runtime::InteropServices::GCHandle)>(&System::Runtime::InteropServices::GCHandle::ToIntPtr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "ToIntPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::GCHandle::*)(::Il2CppObject*)>(&System::Runtime::InteropServices::GCHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
