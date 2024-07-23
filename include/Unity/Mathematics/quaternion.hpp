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
// Including type: Unity.Mathematics.float4
#include "Unity/Mathematics/float4.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: Unity::Mathematics
namespace Unity::Mathematics {
  // Forward declaring type: float3
  struct float3;
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
  // Forward declaring type: quaternion
  struct quaternion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::quaternion, "Unity.Mathematics", "quaternion");
// Type namespace: Unity.Mathematics
namespace Unity::Mathematics {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Mathematics.quaternion
  // [TokenAttribute] Offset: FFFFFFFF
  // [Il2CppEagerStaticClassConstructionAttribute] Offset: FFFFFFFF
  struct quaternion/*, public ::System::ValueType, public ::System::IEquatable_1<::Unity::Mathematics::quaternion>, public ::System::IFormattable*/ {
    public:
    public:
    // public Unity.Mathematics.float4 value
    // Size: 0x10
    // Offset: 0x0
    ::Unity::Mathematics::float4 value;
    // Field size check
    static_assert(sizeof(::Unity::Mathematics::float4) == 0x10);
    public:
    // Creating value type constructor for type: quaternion
    constexpr quaternion(::Unity::Mathematics::float4 value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Mathematics::quaternion>
    operator ::System::IEquatable_1<::Unity::Mathematics::quaternion>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Mathematics::quaternion>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating conversion operator: operator ::Unity::Mathematics::float4
    constexpr operator ::Unity::Mathematics::float4() const noexcept {
      return value;
    }
    // Get static field: static public readonly Unity.Mathematics.quaternion identity
    static ::Unity::Mathematics::quaternion _get_identity();
    // Set static field: static public readonly Unity.Mathematics.quaternion identity
    static void _set_identity(::Unity::Mathematics::quaternion value);
    // Get instance field reference: public Unity.Mathematics.float4 value
    [[deprecated("Use field access instead!")]] ::Unity::Mathematics::float4& dyn_value();
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0x517FEC0
    quaternion(float x, float y, float z, float w);
    // public System.Void .ctor(Unity.Mathematics.float4 value)
    // Offset: 0x517FECC
    // ABORTED: conflicts with another method.  quaternion(::Unity::Mathematics::float4 value);
    // static public Unity.Mathematics.quaternion EulerXYZ(Unity.Mathematics.float3 xyz)
    // Offset: 0x517FED8
    static ::Unity::Mathematics::quaternion EulerXYZ(::Unity::Mathematics::float3 xyz);
    // static public Unity.Mathematics.quaternion EulerXYZ(System.Single x, System.Single y, System.Single z)
    // Offset: 0x517FF8C
    static ::Unity::Mathematics::quaternion EulerXYZ(float x, float y, float z);
    // public System.Boolean Equals(Unity.Mathematics.quaternion x)
    // Offset: 0x5180040
    bool Equals(::Unity::Mathematics::quaternion x);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x5180358
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // static private System.Void .cctor()
    // Offset: 0x518051C
    static void _cctor();
    // public override System.Boolean Equals(System.Object x)
    // Offset: 0x518007C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object x)
    bool Equals(::Il2CppObject* x);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5180124
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x518017C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Unity.Mathematics.quaternion
  #pragma pack(pop)
  static check_size<sizeof(quaternion), 0 + sizeof(::Unity::Mathematics::float4)> __Unity_Mathematics_quaternionSizeCheck;
  static_assert(sizeof(quaternion) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::quaternion
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::quaternion
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::EulerXYZ
// Il2CppName: EulerXYZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3)>(&Unity::Mathematics::quaternion::EulerXYZ)> {
  static const MethodInfo* get() {
    static auto* xyz = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::quaternion), "EulerXYZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xyz});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::EulerXYZ
// Il2CppName: EulerXYZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::quaternion (*)(float, float, float)>(&Unity::Mathematics::quaternion::EulerXYZ)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::quaternion), "EulerXYZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Mathematics::quaternion::*)(::Unity::Mathematics::quaternion)>(&Unity::Mathematics::quaternion::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::quaternion), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Mathematics::quaternion::*)(::StringW, ::System::IFormatProvider*)>(&Unity::Mathematics::quaternion::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::quaternion), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Mathematics::quaternion::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::quaternion), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Mathematics::quaternion::*)(::Il2CppObject*)>(&Unity::Mathematics::quaternion::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::quaternion), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Mathematics::quaternion::*)()>(&Unity::Mathematics::quaternion::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::quaternion), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::quaternion::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Mathematics::quaternion::*)()>(&Unity::Mathematics::quaternion::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::quaternion), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
