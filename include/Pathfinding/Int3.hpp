// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Int3
  struct Int3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Int3, "Pathfinding", "Int3");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.Int3
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct Int3/*, public ::System::ValueType, public ::System::IEquatable_1<::Pathfinding::Int3>*/ {
    public:
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
    // Creating value type constructor for type: Int3
    constexpr Int3(int x_ = {}, int y_ = {}, int z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Pathfinding::Int3>
    operator ::System::IEquatable_1<::Pathfinding::Int3>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Pathfinding::Int3>*>(this);
    }
    // static field const value: static public System.Int32 Precision
    static constexpr const int Precision = 1000;
    // Get static field: static public System.Int32 Precision
    static int _get_Precision();
    // Set static field: static public System.Int32 Precision
    static void _set_Precision(int value);
    // static field const value: static public System.Single FloatPrecision
    static constexpr const float FloatPrecision = 1000;
    // Get static field: static public System.Single FloatPrecision
    static float _get_FloatPrecision();
    // Set static field: static public System.Single FloatPrecision
    static void _set_FloatPrecision(float value);
    // static field const value: static public System.Single PrecisionFactor
    static constexpr const float PrecisionFactor = 0.001;
    // Get static field: static public System.Single PrecisionFactor
    static float _get_PrecisionFactor();
    // Set static field: static public System.Single PrecisionFactor
    static void _set_PrecisionFactor(float value);
    // Get instance field reference: public System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: public System.Int32 y
    [[deprecated("Use field access instead!")]] int& dyn_y();
    // Get instance field reference: public System.Int32 z
    [[deprecated("Use field access instead!")]] int& dyn_z();
    // static public Pathfinding.Int3 get_zero()
    // Offset: 0x29AD80C
    static ::Pathfinding::Int3 get_zero();
    // public System.Void .ctor(UnityEngine.Vector3 position)
    // Offset: 0x29ADC14
    Int3(::UnityEngine::Vector3 position);
    // public System.Void .ctor(System.Int32 _x, System.Int32 _y, System.Int32 _z)
    // Offset: 0x29ADE44
    // ABORTED: conflicts with another method.  Int3(int _x, int _y, int _z);
    // static public Pathfinding.Int3 op_Explicit(UnityEngine.Vector3 ob)
    // Offset: 0x29ADEA8
    explicit Int3(::UnityEngine::Vector3& ob);
    // static public UnityEngine.Vector3 op_Explicit(Pathfinding.Int3 ob)
    // Offset: 0x29AB670
    explicit operator ::UnityEngine::Vector3();
    // public System.Int32 get_Item(System.Int32 i)
    // Offset: 0x29AE510
    int get_Item(int i);
    // public System.Void set_Item(System.Int32 i, System.Int32 value)
    // Offset: 0x29AE530
    void set_Item(int i, int value);
    // static public System.Single Angle(Pathfinding.Int3 lhs, Pathfinding.Int3 rhs)
    // Offset: 0x29AE550
    static float Angle(::Pathfinding::Int3 lhs, ::Pathfinding::Int3 rhs);
    // static public System.Int32 Dot(Pathfinding.Int3 lhs, Pathfinding.Int3 rhs)
    // Offset: 0x29AE63C
    static int Dot(::Pathfinding::Int3 lhs, ::Pathfinding::Int3 rhs);
    // static public System.Int64 DotLong(Pathfinding.Int3 lhs, Pathfinding.Int3 rhs)
    // Offset: 0x29AE6E4
    static int64_t DotLong(::Pathfinding::Int3 lhs, ::Pathfinding::Int3 rhs);
    // public Pathfinding.Int3 Normal2D()
    // Offset: 0x29AE700
    ::Pathfinding::Int3 Normal2D();
    // public System.Single get_magnitude()
    // Offset: 0x29AE654
    float get_magnitude();
    // public System.Int32 get_costMagnitude()
    // Offset: 0x29AE718
    int get_costMagnitude();
    // public System.Single get_sqrMagnitude()
    // Offset: 0x29AE808
    float get_sqrMagnitude();
    // public System.Int64 get_sqrMagnitudeLong()
    // Offset: 0x29AE838
    int64_t get_sqrMagnitudeLong();
    // public System.Boolean Equals(Pathfinding.Int3 other)
    // Offset: 0x29AEABC
    bool Equals(::Pathfinding::Int3 other);
    // public override System.String ToString()
    // Offset: 0x29AE874
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x29AEA18
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29AEAF0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Pathfinding.Int3
  #pragma pack(pop)
  static check_size<sizeof(Int3), 8 + sizeof(int)> __Pathfinding_Int3SizeCheck;
  static_assert(sizeof(Int3) == 0xC);
  // static public System.Boolean op_Equality(Pathfinding.Int3 lhs, Pathfinding.Int3 rhs)
  // Offset: 0x29ADE50
  bool operator ==(const ::Pathfinding::Int3& lhs, const ::Pathfinding::Int3& rhs);
  // static public System.Boolean op_Inequality(Pathfinding.Int3 lhs, Pathfinding.Int3 rhs)
  // Offset: 0x29ADE7C
  bool operator !=(const ::Pathfinding::Int3& lhs, const ::Pathfinding::Int3& rhs);
  // static public Pathfinding.Int3 op_Subtraction(Pathfinding.Int3 lhs, Pathfinding.Int3 rhs)
  // Offset: 0x29AE0B4
  ::Pathfinding::Int3 operator-(const ::Pathfinding::Int3& lhs, const ::Pathfinding::Int3& rhs);
  // static public Pathfinding.Int3 op_UnaryNegation(Pathfinding.Int3 lhs)
  // Offset: 0x29AE0D0
  ::Pathfinding::Int3 operator-(const ::Pathfinding::Int3& lhs);
  // static public Pathfinding.Int3 op_Addition(Pathfinding.Int3 lhs, Pathfinding.Int3 rhs)
  // Offset: 0x29AD818
  ::Pathfinding::Int3 operator+(const ::Pathfinding::Int3& lhs, const ::Pathfinding::Int3& rhs);
  // static public Pathfinding.Int3 op_Multiply(Pathfinding.Int3 lhs, System.Int32 rhs)
  // Offset: 0x29AE0E4
  ::Pathfinding::Int3 operator*(const ::Pathfinding::Int3& lhs, const int& rhs);
  // static public Pathfinding.Int3 op_Multiply(Pathfinding.Int3 lhs, System.Single rhs)
  // Offset: 0x29AE0FC
  ::Pathfinding::Int3 operator*(const ::Pathfinding::Int3& lhs, const float& rhs);
  // static public Pathfinding.Int3 op_Multiply(Pathfinding.Int3 lhs, System.Double rhs)
  // Offset: 0x29AE308
  ::Pathfinding::Int3 operator*(const ::Pathfinding::Int3& lhs, const double& rhs);
  // static public Pathfinding.Int3 op_Division(Pathfinding.Int3 lhs, System.Single rhs)
  // Offset: 0x29AD834
  ::Pathfinding::Int3 operator/(const ::Pathfinding::Int3& lhs, const float& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Int3::get_zero
// Il2CppName: get_zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (*)()>(&Pathfinding::Int3::get_zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::Int3
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Int3::Int3
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Int3::Int3
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator ::UnityEngine::Vector3
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Int3::*)(int)>(&Pathfinding::Int3::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Int3::*)(int, int)>(&Pathfinding::Int3::set_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::Angle
// Il2CppName: Angle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Pathfinding::Int3, ::Pathfinding::Int3)>(&Pathfinding::Int3::Angle)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "Angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::Dot
// Il2CppName: Dot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Pathfinding::Int3, ::Pathfinding::Int3)>(&Pathfinding::Int3::Dot)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "Dot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::DotLong
// Il2CppName: DotLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Pathfinding::Int3, ::Pathfinding::Int3)>(&Pathfinding::Int3::DotLong)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "DotLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::Normal2D
// Il2CppName: Normal2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (Pathfinding::Int3::*)()>(&Pathfinding::Int3::Normal2D)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "Normal2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::get_magnitude
// Il2CppName: get_magnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::Int3::*)()>(&Pathfinding::Int3::get_magnitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "get_magnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::get_costMagnitude
// Il2CppName: get_costMagnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Int3::*)()>(&Pathfinding::Int3::get_costMagnitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "get_costMagnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::get_sqrMagnitude
// Il2CppName: get_sqrMagnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::Int3::*)()>(&Pathfinding::Int3::get_sqrMagnitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "get_sqrMagnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::get_sqrMagnitudeLong
// Il2CppName: get_sqrMagnitudeLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Pathfinding::Int3::*)()>(&Pathfinding::Int3::get_sqrMagnitudeLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "get_sqrMagnitudeLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Int3::*)(::Pathfinding::Int3)>(&Pathfinding::Int3::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Pathfinding::Int3::*)()>(&Pathfinding::Int3::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Int3::*)(::Il2CppObject*)>(&Pathfinding::Int3::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Int3::*)()>(&Pathfinding::Int3::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int3), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int3::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator-
// Il2CppName: op_UnaryNegation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int3::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
