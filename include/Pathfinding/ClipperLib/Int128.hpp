// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Pathfinding.ClipperLib
namespace Pathfinding::ClipperLib {
  // Forward declaring type: Int128
  struct Int128;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::ClipperLib::Int128, "Pathfinding.ClipperLib", "Int128");
// Type namespace: Pathfinding.ClipperLib
namespace Pathfinding::ClipperLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.ClipperLib.Int128
  // [TokenAttribute] Offset: FFFFFFFF
  struct Int128/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int64 hi
    // Size: 0x8
    // Offset: 0x0
    int64_t hi;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.UInt64 lo
    // Size: 0x8
    // Offset: 0x8
    uint64_t lo;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: Int128
    constexpr Int128(int64_t hi_ = {}, uint64_t lo_ = {}) noexcept : hi{hi_}, lo{lo_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int64 hi
    [[deprecated("Use field access instead!")]] int64_t& dyn_hi();
    // Get instance field reference: private System.UInt64 lo
    [[deprecated("Use field access instead!")]] uint64_t& dyn_lo();
    // public System.Void .ctor(System.Int64 _lo)
    // Offset: 0x4994664
    Int128(int64_t _lo);
    // public System.Void .ctor(System.Int64 _hi, System.UInt64 _lo)
    // Offset: 0x4994670
    // ABORTED: conflicts with another method.  Int128(int64_t _hi, uint64_t _lo);
    // static public Pathfinding.ClipperLib.Int128 Int128Mul(System.Int64 lhs, System.Int64 rhs)
    // Offset: 0x4994734
    static ::Pathfinding::ClipperLib::Int128 Int128Mul(int64_t lhs, int64_t rhs);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4994678
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4994700
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Pathfinding.ClipperLib.Int128
  #pragma pack(pop)
  static check_size<sizeof(Int128), 8 + sizeof(uint64_t)> __Pathfinding_ClipperLib_Int128SizeCheck;
  static_assert(sizeof(Int128) == 0x10);
  // static public System.Boolean op_Equality(Pathfinding.ClipperLib.Int128 val1, Pathfinding.ClipperLib.Int128 val2)
  // Offset: 0x49947A8
  bool operator ==(const ::Pathfinding::ClipperLib::Int128& val1, const ::Pathfinding::ClipperLib::Int128& val2);
  // static public System.Boolean op_GreaterThan(Pathfinding.ClipperLib.Int128 val1, Pathfinding.ClipperLib.Int128 val2)
  // Offset: 0x4994854
  bool operator >(const ::Pathfinding::ClipperLib::Int128& val1, const ::Pathfinding::ClipperLib::Int128& val2);
  // static public System.Boolean op_LessThan(Pathfinding.ClipperLib.Int128 val1, Pathfinding.ClipperLib.Int128 val2)
  // Offset: 0x499486C
  bool operator <(const ::Pathfinding::ClipperLib::Int128& val1, const ::Pathfinding::ClipperLib::Int128& val2);
  // static public Pathfinding.ClipperLib.Int128 op_Addition(Pathfinding.ClipperLib.Int128 lhs, Pathfinding.ClipperLib.Int128 rhs)
  // Offset: 0x4994884
  ::Pathfinding::ClipperLib::Int128 operator+(const ::Pathfinding::ClipperLib::Int128& lhs, const ::Pathfinding::ClipperLib::Int128& rhs);
  // static public Pathfinding.ClipperLib.Int128 op_Subtraction(Pathfinding.ClipperLib.Int128 lhs, Pathfinding.ClipperLib.Int128 rhs)
  // Offset: 0x4994894
  ::Pathfinding::ClipperLib::Int128 operator-(const ::Pathfinding::ClipperLib::Int128& lhs, const ::Pathfinding::ClipperLib::Int128& rhs);
  // static public Pathfinding.ClipperLib.Int128 op_UnaryNegation(Pathfinding.ClipperLib.Int128 val)
  // Offset: 0x4994790
  ::Pathfinding::ClipperLib::Int128 operator-(const ::Pathfinding::ClipperLib::Int128& val);
  // static public Pathfinding.ClipperLib.Int128 op_Division(Pathfinding.ClipperLib.Int128 lhs, Pathfinding.ClipperLib.Int128 rhs)
  // Offset: 0x49948B8
  ::Pathfinding::ClipperLib::Int128 operator/(const ::Pathfinding::ClipperLib::Int128& lhs, const ::Pathfinding::ClipperLib::Int128& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::Int128
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::Int128
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::Int128Mul
// Il2CppName: Int128Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::ClipperLib::Int128 (*)(int64_t, int64_t)>(&Pathfinding::ClipperLib::Int128::Int128Mul)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ClipperLib::Int128), "Int128Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::ClipperLib::Int128::*)(::Il2CppObject*)>(&Pathfinding::ClipperLib::Int128::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ClipperLib::Int128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::ClipperLib::Int128::*)()>(&Pathfinding::ClipperLib::Int128::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ClipperLib::Int128), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::operator-
// Il2CppName: op_UnaryNegation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::ClipperLib::Int128::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
