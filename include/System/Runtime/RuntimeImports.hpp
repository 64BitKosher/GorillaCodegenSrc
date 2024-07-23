// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Runtime
namespace System::Runtime {
  // Forward declaring type: RuntimeImports
  class RuntimeImports;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::RuntimeImports);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::RuntimeImports*, "System.Runtime", "RuntimeImports");
// Type namespace: System.Runtime
namespace System::Runtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.RuntimeImports
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeImports : public ::Il2CppObject {
    public:
    // static System.Void RhZeroMemory(ref System.Byte b, System.UInt64 byteLength)
    // Offset: 0x4522234
    static void RhZeroMemory(ByRef<uint8_t> b, uint64_t byteLength);
    // static private System.Void ZeroMemory(System.Void* p, System.UInt32 byteLength)
    // Offset: 0x4522238
    static void ZeroMemory(void* p, uint byteLength);
    // static System.Void Memmove(System.Byte* dest, System.Byte* src, System.UInt32 len)
    // Offset: 0x452223C
    static void Memmove(uint8_t* dest, uint8_t* src, uint len);
    // static System.Void Memmove_wbarrier(System.Byte* dest, System.Byte* src, System.UInt32 len, System.IntPtr type_handle)
    // Offset: 0x4522240
    static void Memmove_wbarrier(uint8_t* dest, uint8_t* src, uint len, ::System::IntPtr type_handle);
  }; // System.Runtime.RuntimeImports
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::RuntimeImports::RhZeroMemory
// Il2CppName: RhZeroMemory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<uint8_t>, uint64_t)>(&System::Runtime::RuntimeImports::RhZeroMemory)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    static auto* byteLength = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::RuntimeImports*), "RhZeroMemory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, byteLength});
  }
};
// Writing MetadataGetter for method: System::Runtime::RuntimeImports::ZeroMemory
// Il2CppName: ZeroMemory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, uint)>(&System::Runtime::RuntimeImports::ZeroMemory)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* byteLength = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::RuntimeImports*), "ZeroMemory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, byteLength});
  }
};
// Writing MetadataGetter for method: System::Runtime::RuntimeImports::Memmove
// Il2CppName: Memmove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, uint)>(&System::Runtime::RuntimeImports::Memmove)> {
  static const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::RuntimeImports*), "Memmove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, src, len});
  }
};
// Writing MetadataGetter for method: System::Runtime::RuntimeImports::Memmove_wbarrier
// Il2CppName: Memmove_wbarrier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, uint, ::System::IntPtr)>(&System::Runtime::RuntimeImports::Memmove_wbarrier)> {
  static const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* type_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::RuntimeImports*), "Memmove_wbarrier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, src, len, type_handle});
  }
};
