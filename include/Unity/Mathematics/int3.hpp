// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
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
// Forward declaring namespace: Unity::Mathematics
namespace Unity::Mathematics {
}
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
  // Forward declaring type: int3
  struct int3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3, "Unity.Mathematics", "int3");
// Type namespace: Unity.Mathematics
namespace Unity::Mathematics {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Mathematics.int3
  // [TokenAttribute] Offset: FFFFFFFF
  // [Il2CppEagerStaticClassConstructionAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  struct int3/*, public ::System::ValueType, public ::System::IEquatable_1<::Unity::Mathematics::int3>, public ::System::IFormattable*/ {
    public:
    // Nested type: ::Unity::Mathematics::int3::DebuggerProxy
    class DebuggerProxy;
    public:
    // public System.Int32 x
    // Size: 0x4
    // Offset: 0x0
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 y
    // Size: 0x4
    // Offset: 0x4
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 z
    // Size: 0x4
    // Offset: 0x8
    int z;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: int3
    constexpr int3(int x_ = {}, int y_ = {}, int z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Mathematics::int3>
    operator ::System::IEquatable_1<::Unity::Mathematics::int3>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Mathematics::int3>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get instance field reference: public System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: public System.Int32 y
    [[deprecated("Use field access instead!")]] int& dyn_y();
    // Get instance field reference: public System.Int32 z
    [[deprecated("Use field access instead!")]] int& dyn_z();
    // public System.Void .ctor(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x517F670
    // ABORTED: conflicts with another method.  int3(int x, int y, int z);
    // public System.Boolean Equals(Unity.Mathematics.int3 rhs)
    // Offset: 0x517F67C
    bool Equals(::Unity::Mathematics::int3 rhs);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x517F854
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x517F6B0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x517F748
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x517F790
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Unity.Mathematics.int3
  #pragma pack(pop)
  static check_size<sizeof(int3), 8 + sizeof(int)> __Unity_Mathematics_int3SizeCheck;
  static_assert(sizeof(int3) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Mathematics::int3::int3
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Mathematics::int3::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Mathematics::int3::*)(::Unity::Mathematics::int3)>(&Unity::Mathematics::int3::Equals)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::int3), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::int3::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Mathematics::int3::*)(::StringW, ::System::IFormatProvider*)>(&Unity::Mathematics::int3::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::int3), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::int3::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Mathematics::int3::*)(::Il2CppObject*)>(&Unity::Mathematics::int3::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::int3), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::int3::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Mathematics::int3::*)()>(&Unity::Mathematics::int3::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::int3), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::int3::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Mathematics::int3::*)()>(&Unity::Mathematics::int3::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::int3), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
