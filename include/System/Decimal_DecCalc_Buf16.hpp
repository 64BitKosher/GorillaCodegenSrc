// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Decimal/DecCalc
#include "System/Decimal_DecCalc.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Decimal::DecCalc::Buf16, "System", "Decimal/DecCalc/Buf16");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.Decimal/DecCalc/Buf16
  // [TokenAttribute] Offset: FFFFFFFF
  struct Decimal::DecCalc::Buf16/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 U0
    // Size: 0x4
    // Offset: 0x0
    uint U0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 U1
    // Size: 0x4
    // Offset: 0x4
    uint U1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 U2
    // Size: 0x4
    // Offset: 0x8
    uint U2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 U3
    // Size: 0x4
    // Offset: 0xC
    uint U3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // WARNING Could not write padding for field: U3! Ignoring it instead (and assuming correct layout regardless)...
    // private System.UInt64 ulo64LE
    // Size: 0x8
    // Offset: 0x0
    uint64_t ulo64LE;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 uhigh64LE
    // Size: 0x8
    // Offset: 0x8
    uint64_t uhigh64LE;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: Buf16
    constexpr Buf16(uint U0_ = {}, uint U1_ = {}, uint U2_ = {}, uint U3_ = {}, uint64_t ulo64LE_ = {}, uint64_t uhigh64LE_ = {}) noexcept : U0{U0_}, U1{U1_}, U2{U2_}, U3{U3_}, ulo64LE{ulo64LE_}, uhigh64LE{uhigh64LE_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 U0
    [[deprecated("Use field access instead!")]] uint& dyn_U0();
    // Get instance field reference: public System.UInt32 U1
    [[deprecated("Use field access instead!")]] uint& dyn_U1();
    // Get instance field reference: public System.UInt32 U2
    [[deprecated("Use field access instead!")]] uint& dyn_U2();
    // Get instance field reference: public System.UInt32 U3
    [[deprecated("Use field access instead!")]] uint& dyn_U3();
    // Get instance field reference: private System.UInt64 ulo64LE
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ulo64LE();
    // Get instance field reference: private System.UInt64 uhigh64LE
    [[deprecated("Use field access instead!")]] uint64_t& dyn_uhigh64LE();
    // public System.UInt64 get_Low64()
    // Offset: 0x46BE98C
    uint64_t get_Low64();
    // public System.Void set_Low64(System.UInt64 value)
    // Offset: 0x46BE994
    void set_Low64(uint64_t value);
    // public System.UInt64 get_High64()
    // Offset: 0x46BE984
    uint64_t get_High64();
    // public System.Void set_High64(System.UInt64 value)
    // Offset: 0x46BFBB8
    void set_High64(uint64_t value);
  }; // System.Decimal/DecCalc/Buf16
  #pragma pack(pop)
  static check_size<sizeof(Decimal::DecCalc::Buf16), 8 + sizeof(uint64_t)> __System_Decimal_DecCalc_Buf16SizeCheck;
  static_assert(sizeof(Decimal::DecCalc::Buf16) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Decimal::DecCalc::Buf16::get_Low64
// Il2CppName: get_Low64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Decimal::DecCalc::Buf16::*)()>(&System::Decimal::DecCalc::Buf16::get_Low64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Decimal::DecCalc::Buf16), "get_Low64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Decimal::DecCalc::Buf16::set_Low64
// Il2CppName: set_Low64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Decimal::DecCalc::Buf16::*)(uint64_t)>(&System::Decimal::DecCalc::Buf16::set_Low64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Decimal::DecCalc::Buf16), "set_Low64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Decimal::DecCalc::Buf16::get_High64
// Il2CppName: get_High64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Decimal::DecCalc::Buf16::*)()>(&System::Decimal::DecCalc::Buf16::get_High64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Decimal::DecCalc::Buf16), "get_High64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Decimal::DecCalc::Buf16::set_High64
// Il2CppName: set_High64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Decimal::DecCalc::Buf16::*)(uint64_t)>(&System::Decimal::DecCalc::Buf16::set_High64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Decimal::DecCalc::Buf16), "set_High64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
