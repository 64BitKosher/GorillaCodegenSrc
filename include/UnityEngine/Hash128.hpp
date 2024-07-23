// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.UInt64
#include "System/UInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Hash128
  struct Hash128;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Hash128, "UnityEngine", "Hash128");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Hash128
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct Hash128/*, public ::System::ValueType, public ::System::IComparable, public ::System::IComparable_1<::UnityEngine::Hash128>, public ::System::IEquatable_1<::UnityEngine::Hash128>*/ {
    public:
    public:
    // System.UInt64 u64_0
    // Size: 0x8
    // Offset: 0x0
    uint64_t u64_0;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 u64_1
    // Size: 0x8
    // Offset: 0x8
    uint64_t u64_1;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: Hash128
    constexpr Hash128(uint64_t u64_0_ = {}, uint64_t u64_1_ = {}) noexcept : u64_0{u64_0_}, u64_1{u64_1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::UnityEngine::Hash128>
    operator ::System::IComparable_1<::UnityEngine::Hash128>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::UnityEngine::Hash128>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Hash128>
    operator ::System::IEquatable_1<::UnityEngine::Hash128>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Hash128>*>(this);
    }
    // static field const value: static private System.UInt64 kConst
    static constexpr const uint64_t kConst = 16045690984833335023u;
    // Get static field: static private System.UInt64 kConst
    static uint64_t _get_kConst();
    // Set static field: static private System.UInt64 kConst
    static void _set_kConst(uint64_t value);
    // Get instance field reference: System.UInt64 u64_0
    [[deprecated("Use field access instead!")]] uint64_t& dyn_u64_0();
    // Get instance field reference: System.UInt64 u64_1
    [[deprecated("Use field access instead!")]] uint64_t& dyn_u64_1();
    // public System.Void .ctor(System.UInt32 u32_0, System.UInt32 u32_1, System.UInt32 u32_2, System.UInt32 u32_3)
    // Offset: 0x54B1A10
    Hash128(uint u32_0, uint u32_1, uint u32_2, uint u32_3);
    // public System.Void .ctor(System.UInt64 u64_0, System.UInt64 u64_1)
    // Offset: 0x54B1A28
    // ABORTED: conflicts with another method.  Hash128(uint64_t u64_0, uint64_t u64_1);
    // public System.Boolean get_isValid()
    // Offset: 0x54B1A30
    bool get_isValid();
    // public System.Int32 CompareTo(UnityEngine.Hash128 rhs)
    // Offset: 0x54B1A50
    int CompareTo(::UnityEngine::Hash128 rhs);
    // static public UnityEngine.Hash128 Parse(System.String hashString)
    // Offset: 0x54B1B44
    static ::UnityEngine::Hash128 Parse(::StringW hashString);
    // static private System.String Hash128ToStringImpl(UnityEngine.Hash128 hash)
    // Offset: 0x54B1B04
    static ::StringW Hash128ToStringImpl(::UnityEngine::Hash128 hash);
    // static private System.Void ComputeFromString(System.String data, ref UnityEngine.Hash128 hash)
    // Offset: 0x54B1C18
    static void ComputeFromString(::StringW data, ByRef<::UnityEngine::Hash128> hash);
    // static public UnityEngine.Hash128 Compute(System.String data)
    // Offset: 0x54B1C5C
    static ::UnityEngine::Hash128 Compute(::StringW data);
    // public System.Boolean Equals(UnityEngine.Hash128 obj)
    // Offset: 0x54B1D4C
    bool Equals(::UnityEngine::Hash128 obj);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x54B1D9C
    int CompareTo(::Il2CppObject* obj);
    // static private System.Void Parse_Injected(System.String hashString, out UnityEngine.Hash128 ret)
    // Offset: 0x54B1B98
    static void Parse_Injected(::StringW hashString, ByRef<::UnityEngine::Hash128> ret);
    // static private System.String Hash128ToStringImpl_Injected(ref UnityEngine.Hash128 hash)
    // Offset: 0x54B1BDC
    static ::StringW Hash128ToStringImpl_Injected(ByRef<::UnityEngine::Hash128> hash);
    // public override System.String ToString()
    // Offset: 0x54B1AF8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54B1CB0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54B1D68
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Hash128
  #pragma pack(pop)
  static check_size<sizeof(Hash128), 8 + sizeof(uint64_t)> __UnityEngine_Hash128SizeCheck;
  static_assert(sizeof(Hash128) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.Hash128 hash1, UnityEngine.Hash128 hash2)
  // Offset: 0x54B1D34
  bool operator ==(const ::UnityEngine::Hash128& hash1, const ::UnityEngine::Hash128& hash2);
  // static public System.Boolean op_Inequality(UnityEngine.Hash128 hash1, UnityEngine.Hash128 hash2)
  // Offset: 0x54B1E58
  bool operator !=(const ::UnityEngine::Hash128& hash1, const ::UnityEngine::Hash128& hash2);
  // static public System.Boolean op_LessThan(UnityEngine.Hash128 x, UnityEngine.Hash128 y)
  // Offset: 0x54B1AA4
  bool operator <(const ::UnityEngine::Hash128& x, const ::UnityEngine::Hash128& y);
  // static public System.Boolean op_GreaterThan(UnityEngine.Hash128 x, UnityEngine.Hash128 y)
  // Offset: 0x54B1ABC
  bool operator >(const ::UnityEngine::Hash128& x, const ::UnityEngine::Hash128& y);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Hash128::Hash128
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Hash128::Hash128
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Hash128::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Hash128::*)()>(&UnityEngine::Hash128::get_isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Hash128::*)(::UnityEngine::Hash128)>(&UnityEngine::Hash128::CompareTo)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Hash128 (*)(::StringW)>(&UnityEngine::Hash128::Parse)> {
  static const MethodInfo* get() {
    static auto* hashString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashString});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Hash128ToStringImpl
// Il2CppName: Hash128ToStringImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Hash128)>(&UnityEngine::Hash128::Hash128ToStringImpl)> {
  static const MethodInfo* get() {
    static auto* hash = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Hash128ToStringImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::ComputeFromString
// Il2CppName: ComputeFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::UnityEngine::Hash128>)>(&UnityEngine::Hash128::ComputeFromString)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hash = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "ComputeFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, hash});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Compute
// Il2CppName: Compute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Hash128 (*)(::StringW)>(&UnityEngine::Hash128::Compute)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Compute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Hash128::*)(::UnityEngine::Hash128)>(&UnityEngine::Hash128::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Hash128::*)(::Il2CppObject*)>(&UnityEngine::Hash128::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Parse_Injected
// Il2CppName: Parse_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::UnityEngine::Hash128>)>(&UnityEngine::Hash128::Parse_Injected)> {
  static const MethodInfo* get() {
    static auto* hashString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Parse_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashString, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Hash128ToStringImpl_Injected
// Il2CppName: Hash128ToStringImpl_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::UnityEngine::Hash128>)>(&UnityEngine::Hash128::Hash128ToStringImpl_Injected)> {
  static const MethodInfo* get() {
    static auto* hash = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Hash128ToStringImpl_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Hash128::*)()>(&UnityEngine::Hash128::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Hash128::*)(::Il2CppObject*)>(&UnityEngine::Hash128::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Hash128::*)()>(&UnityEngine::Hash128::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Hash128::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Hash128::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Hash128::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
