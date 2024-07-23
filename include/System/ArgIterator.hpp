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
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ArgIterator
  struct ArgIterator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ArgIterator, "System", "ArgIterator");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ArgIterator
  // [TokenAttribute] Offset: FFFFFFFF
  struct ArgIterator/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.IntPtr sig
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr sig;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr args
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr args;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Int32 next_arg
    // Size: 0x4
    // Offset: 0x10
    int next_arg;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 num_args
    // Size: 0x4
    // Offset: 0x14
    int num_args;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ArgIterator
    constexpr ArgIterator(::System::IntPtr sig_ = {}, ::System::IntPtr args_ = {}, int next_arg_ = {}, int num_args_ = {}) noexcept : sig{sig_}, args{args_}, next_arg{next_arg_}, num_args{num_args_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.IntPtr sig
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_sig();
    // Get instance field reference: private System.IntPtr args
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_args();
    // Get instance field reference: private System.Int32 next_arg
    [[deprecated("Use field access instead!")]] int& dyn_next_arg();
    // Get instance field reference: private System.Int32 num_args
    [[deprecated("Use field access instead!")]] int& dyn_num_args();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x46A4BC4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x46A4C10
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.ArgIterator
  #pragma pack(pop)
  static check_size<sizeof(ArgIterator), 20 + sizeof(int)> __System_ArgIteratorSizeCheck;
  static_assert(sizeof(ArgIterator) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ArgIterator::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ArgIterator::*)(::Il2CppObject*)>(&System::ArgIterator::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ArgIterator), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::ArgIterator::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ArgIterator::*)()>(&System::ArgIterator::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ArgIterator), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
