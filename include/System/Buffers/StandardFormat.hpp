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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
}
// Completed forward declares
// Type namespace: System.Buffers
namespace System::Buffers {
  // Forward declaring type: StandardFormat
  struct StandardFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::StandardFormat, "System.Buffers", "StandardFormat");
// Type namespace: System.Buffers
namespace System::Buffers {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Buffers.StandardFormat
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct StandardFormat/*, public ::System::ValueType, public ::System::IEquatable_1<::System::Buffers::StandardFormat>*/ {
    public:
    public:
    // private readonly System.Byte _format
    // Size: 0x1
    // Offset: 0x0
    uint8_t format;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private readonly System.Byte _precision
    // Size: 0x1
    // Offset: 0x1
    uint8_t precision;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: StandardFormat
    constexpr StandardFormat(uint8_t format_ = {}, uint8_t precision_ = {}) noexcept : format{format_}, precision{precision_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Buffers::StandardFormat>
    operator ::System::IEquatable_1<::System::Buffers::StandardFormat>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Buffers::StandardFormat>*>(this);
    }
    // Get instance field reference: private readonly System.Byte _format
    [[deprecated("Use field access instead!")]] uint8_t& dyn__format();
    // Get instance field reference: private readonly System.Byte _precision
    [[deprecated("Use field access instead!")]] uint8_t& dyn__precision();
    // public System.Char get_Symbol()
    // Offset: 0x462D4B8
    ::Il2CppChar get_Symbol();
    // public System.Byte get_Precision()
    // Offset: 0x462D4C0
    uint8_t get_Precision();
    // public System.Boolean get_HasPrecision()
    // Offset: 0x462D4C8
    bool get_HasPrecision();
    // public System.Boolean get_IsDefault()
    // Offset: 0x462D4D8
    bool get_IsDefault();
    // public System.Void .ctor(System.Char symbol, System.Byte precision)
    // Offset: 0x462D4F8
    StandardFormat(::Il2CppChar symbol, uint8_t precision);
    // static public System.Buffers.StandardFormat Parse(System.ReadOnlySpan`1<System.Char> format)
    // Offset: 0x462D578
    static ::System::Buffers::StandardFormat Parse(::System::ReadOnlySpan_1<::Il2CppChar> format);
    // static private System.Boolean ParseHelper(System.ReadOnlySpan`1<System.Char> format, out System.Buffers.StandardFormat standardFormat, System.Boolean throws)
    // Offset: 0x462D598
    static bool ParseHelper(::System::ReadOnlySpan_1<::Il2CppChar> format, ByRef<::System::Buffers::StandardFormat> standardFormat, bool throws);
    // public System.Boolean Equals(System.Buffers.StandardFormat other)
    // Offset: 0x462D79C
    bool Equals(::System::Buffers::StandardFormat other);
    // System.Int32 Format(System.Span`1<System.Char> destination)
    // Offset: 0x462D8E0
    int Format(::System::Span_1<::Il2CppChar> destination);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x462D718
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x462D7C4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x462D7F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Buffers.StandardFormat
  #pragma pack(pop)
  static check_size<sizeof(StandardFormat), 1 + sizeof(uint8_t)> __System_Buffers_StandardFormatSizeCheck;
  static_assert(sizeof(StandardFormat) == 0x2);
  // static public System.Boolean op_Inequality(System.Buffers.StandardFormat left, System.Buffers.StandardFormat right)
  // Offset: 0x462D9D4
  bool operator !=(const ::System::Buffers::StandardFormat& left, const ::System::Buffers::StandardFormat& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Buffers::StandardFormat::get_Symbol
// Il2CppName: get_Symbol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Buffers::StandardFormat::*)()>(&System::Buffers::StandardFormat::get_Symbol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "get_Symbol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::get_Precision
// Il2CppName: get_Precision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Buffers::StandardFormat::*)()>(&System::Buffers::StandardFormat::get_Precision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "get_Precision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::get_HasPrecision
// Il2CppName: get_HasPrecision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Buffers::StandardFormat::*)()>(&System::Buffers::StandardFormat::get_HasPrecision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "get_HasPrecision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::get_IsDefault
// Il2CppName: get_IsDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Buffers::StandardFormat::*)()>(&System::Buffers::StandardFormat::get_IsDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "get_IsDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::StandardFormat
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Buffers::StandardFormat::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::StandardFormat (*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::Buffers::StandardFormat::Parse)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::ParseHelper
// Il2CppName: ParseHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ByRef<::System::Buffers::StandardFormat>, bool)>(&System::Buffers::StandardFormat::ParseHelper)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* standardFormat = &::il2cpp_utils::GetClassFromName("System.Buffers", "StandardFormat")->this_arg;
    static auto* throws = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "ParseHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, standardFormat, throws});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Buffers::StandardFormat::*)(::System::Buffers::StandardFormat)>(&System::Buffers::StandardFormat::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Buffers", "StandardFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Buffers::StandardFormat::*)(::System::Span_1<::Il2CppChar>)>(&System::Buffers::StandardFormat::Format)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Buffers::StandardFormat::*)(::Il2CppObject*)>(&System::Buffers::StandardFormat::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Buffers::StandardFormat::*)()>(&System::Buffers::StandardFormat::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Buffers::StandardFormat::*)()>(&System::Buffers::StandardFormat::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::StandardFormat), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Buffers::StandardFormat::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!