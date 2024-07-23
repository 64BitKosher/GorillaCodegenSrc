// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Unity.Mathematics
namespace Unity::Mathematics {
  // Forward declaring type: half
  struct half;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::half, "Unity.Mathematics", "half");
// Type namespace: Unity.Mathematics
namespace Unity::Mathematics {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Mathematics.half
  // [TokenAttribute] Offset: FFFFFFFF
  // [Il2CppEagerStaticClassConstructionAttribute] Offset: FFFFFFFF
  struct half/*, public ::System::ValueType, public ::System::IEquatable_1<::Unity::Mathematics::half>, public ::System::IFormattable*/ {
    public:
    public:
    // public System.UInt16 value
    // Size: 0x2
    // Offset: 0x0
    uint16_t value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: half
    constexpr half(uint16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Mathematics::half>
    operator ::System::IEquatable_1<::Unity::Mathematics::half>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Mathematics::half>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return value;
    }
    // Get instance field reference: public System.UInt16 value
    [[deprecated("Use field access instead!")]] uint16_t& dyn_value();
    // static public System.Single get_MinValue()
    // Offset: 0x517F220
    static float get_MinValue();
    // public System.Boolean Equals(Unity.Mathematics.half rhs)
    // Offset: 0x517F22C
    bool Equals(::Unity::Mathematics::half rhs);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x517F330
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x517F23C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x517F2B4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x517F2BC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Unity.Mathematics.half
  #pragma pack(pop)
  static check_size<sizeof(half), 0 + sizeof(uint16_t)> __Unity_Mathematics_halfSizeCheck;
  static_assert(sizeof(half) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Mathematics::half::get_MinValue
// Il2CppName: get_MinValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Unity::Mathematics::half::get_MinValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::half), "get_MinValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::half::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Mathematics::half::*)(::Unity::Mathematics::half)>(&Unity::Mathematics::half::Equals)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "half")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::half), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::half::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Mathematics::half::*)(::StringW, ::System::IFormatProvider*)>(&Unity::Mathematics::half::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::half), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::half::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Mathematics::half::*)(::Il2CppObject*)>(&Unity::Mathematics::half::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::half), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::half::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Mathematics::half::*)()>(&Unity::Mathematics::half::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::half), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::half::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Mathematics::half::*)()>(&Unity::Mathematics::half::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::half), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
