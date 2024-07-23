// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DecimalEx
#include "System/DecimalEx.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::DecimalEx::DecimalBits, "System", "DecimalEx/DecimalBits");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.DecimalEx/DecimalBits
  // [TokenAttribute] Offset: FFFFFFFF
  struct DecimalEx::DecimalBits/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 flags
    // Size: 0x4
    // Offset: 0x0
    int flags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 hi
    // Size: 0x4
    // Offset: 0x4
    int hi;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lo
    // Size: 0x4
    // Offset: 0x8
    int lo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 mid
    // Size: 0x4
    // Offset: 0xC
    int mid;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DecimalBits
    constexpr DecimalBits(int flags_ = {}, int hi_ = {}, int lo_ = {}, int mid_ = {}) noexcept : flags{flags_}, hi{hi_}, lo{lo_}, mid{mid_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 flags
    [[deprecated("Use field access instead!")]] int& dyn_flags();
    // Get instance field reference: public System.Int32 hi
    [[deprecated("Use field access instead!")]] int& dyn_hi();
    // Get instance field reference: public System.Int32 lo
    [[deprecated("Use field access instead!")]] int& dyn_lo();
    // Get instance field reference: public System.Int32 mid
    [[deprecated("Use field access instead!")]] int& dyn_mid();
  }; // System.DecimalEx/DecimalBits
  #pragma pack(pop)
  static check_size<sizeof(DecimalEx::DecimalBits), 12 + sizeof(int)> __System_DecimalEx_DecimalBitsSizeCheck;
  static_assert(sizeof(DecimalEx::DecimalBits) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
