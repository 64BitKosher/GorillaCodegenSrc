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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2Int
  struct Vector2Int;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector2Int
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [Il2CppEagerStaticClassConstructionAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: FFFFFFFF
  struct Vector2Int/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Vector2Int>, public ::System::IFormattable*/ {
    public:
    public:
    // private System.Int32 m_X
    // Size: 0x4
    // Offset: 0x0
    int m_X;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Y
    // Size: 0x4
    // Offset: 0x4
    int m_Y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Vector2Int
    constexpr Vector2Int(int m_X_ = {}, int m_Y_ = {}) noexcept : m_X{m_X_}, m_Y{m_Y_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Vector2Int>
    operator ::System::IEquatable_1<::UnityEngine::Vector2Int>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Vector2Int>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get static field: static private readonly UnityEngine.Vector2Int s_Zero
    static ::UnityEngine::Vector2Int _get_s_Zero();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Zero
    static void _set_s_Zero(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_One
    static ::UnityEngine::Vector2Int _get_s_One();
    // Set static field: static private readonly UnityEngine.Vector2Int s_One
    static void _set_s_One(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Up
    static ::UnityEngine::Vector2Int _get_s_Up();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Up
    static void _set_s_Up(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Down
    static ::UnityEngine::Vector2Int _get_s_Down();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Down
    static void _set_s_Down(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Left
    static ::UnityEngine::Vector2Int _get_s_Left();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Left
    static void _set_s_Left(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Right
    static ::UnityEngine::Vector2Int _get_s_Right();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Right
    static void _set_s_Right(::UnityEngine::Vector2Int value);
    // Get instance field reference: private System.Int32 m_X
    [[deprecated("Use field access instead!")]] int& dyn_m_X();
    // Get instance field reference: private System.Int32 m_Y
    [[deprecated("Use field access instead!")]] int& dyn_m_Y();
    // public System.Int32 get_x()
    // Offset: 0x54BD390
    int get_x();
    // public System.Void set_x(System.Int32 value)
    // Offset: 0x54BD398
    void set_x(int value);
    // public System.Int32 get_y()
    // Offset: 0x54BD3A0
    int get_y();
    // public System.Void set_y(System.Int32 value)
    // Offset: 0x54BD3A8
    void set_y(int value);
    // public System.Void .ctor(System.Int32 x, System.Int32 y)
    // Offset: 0x54BD3B0
    // ABORTED: conflicts with another method.  Vector2Int(int x, int y);
    // static public UnityEngine.Vector2Int FloorToInt(UnityEngine.Vector2 v)
    // Offset: 0x54BD3C8
    static ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2 v);
    // static public UnityEngine.Vector2Int RoundToInt(UnityEngine.Vector2 v)
    // Offset: 0x54BD490
    static ::UnityEngine::Vector2Int RoundToInt(::UnityEngine::Vector2 v);
    // public System.Boolean Equals(UnityEngine.Vector2Int other)
    // Offset: 0x54BD6F8
    bool Equals(::UnityEngine::Vector2Int other);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x54BD778
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // static public UnityEngine.Vector2Int get_zero()
    // Offset: 0x54BD908
    static ::UnityEngine::Vector2Int get_zero();
    // static private System.Void .cctor()
    // Offset: 0x54BD950
    static void _cctor();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x54BD670
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54BD720
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x54BD768
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Vector2Int
  #pragma pack(pop)
  static check_size<sizeof(Vector2Int), 4 + sizeof(int)> __UnityEngine_Vector2IntSizeCheck;
  static_assert(sizeof(Vector2Int) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.Vector2Int lhs, UnityEngine.Vector2Int rhs)
  // Offset: 0x54BD630
  bool operator ==(const ::UnityEngine::Vector2Int& lhs, const ::UnityEngine::Vector2Int& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector2Int lhs, UnityEngine.Vector2Int rhs)
  // Offset: 0x54BD650
  bool operator !=(const ::UnityEngine::Vector2Int& lhs, const ::UnityEngine::Vector2Int& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Vector2Int::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Vector2Int::*)()>(&UnityEngine::Vector2Int::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::set_x
// Il2CppName: set_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Vector2Int::*)(int)>(&UnityEngine::Vector2Int::set_x)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "set_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Vector2Int::*)()>(&UnityEngine::Vector2Int::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::set_y
// Il2CppName: set_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Vector2Int::*)(int)>(&UnityEngine::Vector2Int::set_y)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "set_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::Vector2Int
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Vector2Int::FloorToInt
// Il2CppName: FloorToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&UnityEngine::Vector2Int::FloorToInt)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "FloorToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::RoundToInt
// Il2CppName: RoundToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&UnityEngine::Vector2Int::RoundToInt)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "RoundToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Vector2Int::*)(::UnityEngine::Vector2Int)>(&UnityEngine::Vector2Int::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Vector2Int::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::Vector2Int::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::get_zero
// Il2CppName: get_zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)()>(&UnityEngine::Vector2Int::get_zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Vector2Int::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Vector2Int::*)(::Il2CppObject*)>(&UnityEngine::Vector2Int::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Vector2Int::*)()>(&UnityEngine::Vector2Int::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Vector2Int::*)()>(&UnityEngine::Vector2Int::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2Int::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
