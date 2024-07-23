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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: IntPtrHelper
  class IntPtrHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::IntPtrHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IntPtrHelper*, "System.Net", "IntPtrHelper");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IntPtrHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class IntPtrHelper : public ::Il2CppObject {
    public:
    // static System.IntPtr Add(System.IntPtr a, System.Int32 b)
    // Offset: 0x4FD4AFC
    static ::System::IntPtr Add(::System::IntPtr a, int b);
    // static System.Int64 Subtract(System.IntPtr a, System.IntPtr b)
    // Offset: 0x4FD4B1C
    static int64_t Subtract(::System::IntPtr a, ::System::IntPtr b);
  }; // System.Net.IntPtrHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IntPtrHelper::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, int)>(&System::Net::IntPtrHelper::Add)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IntPtrHelper*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Net::IntPtrHelper::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr)>(&System::Net::IntPtrHelper::Subtract)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IntPtrHelper*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
