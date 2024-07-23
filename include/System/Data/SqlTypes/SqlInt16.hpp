// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Data.SqlTypes.INullable
#include "System/Data/SqlTypes/INullable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Xml.Serialization.IXmlSerializable
#include "System/Xml/Serialization/IXmlSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data::SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlByte
  struct SqlByte;
  // Forward declaring type: SqlInt64
  struct SqlInt64;
  // Forward declaring type: SqlBoolean
  struct SqlBoolean;
  // Forward declaring type: SqlDouble
  struct SqlDouble;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchema
  class XmlSchema;
  // Forward declaring type: XmlSchemaSet
  class XmlSchemaSet;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlWriter
  class XmlWriter;
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlInt16
  struct SqlInt16;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlInt16, "System.Data.SqlTypes", "SqlInt16");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Data.SqlTypes.SqlInt16
  // [TokenAttribute] Offset: FFFFFFFF
  // [XmlSchemaProviderAttribute] Offset: FFFFFFFF
  struct SqlInt16/*, public ::System::ValueType, public ::System::Data::SqlTypes::INullable, public ::System::IComparable, public ::System::Xml::Serialization::IXmlSerializable*/ {
    public:
    public:
    // private System.Boolean m_fNotNull
    // Size: 0x1
    // Offset: 0x0
    bool m_fNotNull;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_fNotNull and: m_value
    char __padding0[0x1] = {};
    // private System.Int16 m_value
    // Size: 0x2
    // Offset: 0x2
    int16_t m_value;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Creating value type constructor for type: SqlInt16
    constexpr SqlInt16(bool m_fNotNull_ = {}, int16_t m_value_ = {}) noexcept : m_fNotNull{m_fNotNull_}, m_value{m_value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Data::SqlTypes::INullable
    operator ::System::Data::SqlTypes::INullable() noexcept {
      return *reinterpret_cast<::System::Data::SqlTypes::INullable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Xml::Serialization::IXmlSerializable
    operator ::System::Xml::Serialization::IXmlSerializable() noexcept {
      return *reinterpret_cast<::System::Xml::Serialization::IXmlSerializable*>(this);
    }
    // Get static field: static private readonly System.Int32 s_MASKI2
    static int _get_s_MASKI2();
    // Set static field: static private readonly System.Int32 s_MASKI2
    static void _set_s_MASKI2(int value);
    // Get static field: static public readonly System.Data.SqlTypes.SqlInt16 Null
    static ::System::Data::SqlTypes::SqlInt16 _get_Null();
    // Set static field: static public readonly System.Data.SqlTypes.SqlInt16 Null
    static void _set_Null(::System::Data::SqlTypes::SqlInt16 value);
    // Get static field: static public readonly System.Data.SqlTypes.SqlInt16 Zero
    static ::System::Data::SqlTypes::SqlInt16 _get_Zero();
    // Set static field: static public readonly System.Data.SqlTypes.SqlInt16 Zero
    static void _set_Zero(::System::Data::SqlTypes::SqlInt16 value);
    // Get static field: static public readonly System.Data.SqlTypes.SqlInt16 MinValue
    static ::System::Data::SqlTypes::SqlInt16 _get_MinValue();
    // Set static field: static public readonly System.Data.SqlTypes.SqlInt16 MinValue
    static void _set_MinValue(::System::Data::SqlTypes::SqlInt16 value);
    // Get static field: static public readonly System.Data.SqlTypes.SqlInt16 MaxValue
    static ::System::Data::SqlTypes::SqlInt16 _get_MaxValue();
    // Set static field: static public readonly System.Data.SqlTypes.SqlInt16 MaxValue
    static void _set_MaxValue(::System::Data::SqlTypes::SqlInt16 value);
    // Get instance field reference: private System.Boolean m_fNotNull
    [[deprecated("Use field access instead!")]] bool& dyn_m_fNotNull();
    // Get instance field reference: private System.Int16 m_value
    [[deprecated("Use field access instead!")]] int16_t& dyn_m_value();
    // private System.Void .ctor(System.Boolean fNull)
    // Offset: 0x4CB841C
    SqlInt16(bool fNull);
    // public System.Void .ctor(System.Int16 value)
    // Offset: 0x4CB8428
    SqlInt16(int16_t value);
    // public System.Boolean get_IsNull()
    // Offset: 0x4CB4778
    bool get_IsNull();
    // public System.Int16 get_Value()
    // Offset: 0x4CB4788
    int16_t get_Value();
    // static public System.Data.SqlTypes.SqlInt16 op_Explicit(System.Data.SqlTypes.SqlInt64 x)
    // Offset: 0x4CB89BC
    explicit SqlInt16(::System::Data::SqlTypes::SqlInt64& x);
    // static public System.Data.SqlTypes.SqlBoolean LessThan(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
    // Offset: 0x4CB8C8C
    static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);
    // static public System.Data.SqlTypes.SqlBoolean GreaterThan(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
    // Offset: 0x4CB8CF8
    static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);
    // public System.Data.SqlTypes.SqlDouble ToSqlDouble()
    // Offset: 0x4CB8D64
    ::System::Data::SqlTypes::SqlDouble ToSqlDouble();
    // public System.Data.SqlTypes.SqlInt64 ToSqlInt64()
    // Offset: 0x4CB8DBC
    ::System::Data::SqlTypes::SqlInt64 ToSqlInt64();
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x4CB8EA0
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Data.SqlTypes.SqlInt16 value)
    // Offset: 0x4CB8F88
    int CompareTo(::System::Data::SqlTypes::SqlInt16 value);
    // private System.Xml.Schema.XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema()
    // Offset: 0x4CB91A0
    ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();
    // private System.Void System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader reader)
    // Offset: 0x4CB91A8
    void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);
    // private System.Void System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter writer)
    // Offset: 0x4CB92C8
    void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);
    // static public System.Xml.XmlQualifiedName GetXsdType(System.Xml.Schema.XmlSchemaSet schemaSet)
    // Offset: 0x4CB93C8
    static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);
    // static private System.Void .cctor()
    // Offset: 0x4CB9454
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x4CB8448
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x4CB90A8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4CB9170
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Data.SqlTypes.SqlInt16
  #pragma pack(pop)
  static check_size<sizeof(SqlInt16), 2 + sizeof(int16_t)> __System_Data_SqlTypes_SqlInt16SizeCheck;
  static_assert(sizeof(SqlInt16) == 0x4);
  // static public System.Data.SqlTypes.SqlInt16 op_UnaryNegation(System.Data.SqlTypes.SqlInt16 x)
  // Offset: 0x4CB8468
  ::System::Data::SqlTypes::SqlInt16 operator-(const ::System::Data::SqlTypes::SqlInt16& x);
  // static public System.Data.SqlTypes.SqlInt16 op_Addition(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
  // Offset: 0x4CB84F4
  ::System::Data::SqlTypes::SqlInt16 operator+(const ::System::Data::SqlTypes::SqlInt16& x, const ::System::Data::SqlTypes::SqlInt16& y);
  // static public System.Data.SqlTypes.SqlInt16 op_Subtraction(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
  // Offset: 0x4CB85DC
  ::System::Data::SqlTypes::SqlInt16 operator-(const ::System::Data::SqlTypes::SqlInt16& x, const ::System::Data::SqlTypes::SqlInt16& y);
  // static public System.Data.SqlTypes.SqlInt16 op_Multiply(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
  // Offset: 0x4CB86C4
  ::System::Data::SqlTypes::SqlInt16 operator*(const ::System::Data::SqlTypes::SqlInt16& x, const ::System::Data::SqlTypes::SqlInt16& y);
  // static public System.Data.SqlTypes.SqlInt16 op_Division(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
  // Offset: 0x4CB87F0
  ::System::Data::SqlTypes::SqlInt16 operator/(const ::System::Data::SqlTypes::SqlInt16& x, const ::System::Data::SqlTypes::SqlInt16& y);
  // static public System.Data.SqlTypes.SqlBoolean op_Equality(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
  // Offset: 0x4CB8AA0
  ::System::Data::SqlTypes::SqlBoolean operator ==(const ::System::Data::SqlTypes::SqlInt16& x, const ::System::Data::SqlTypes::SqlInt16& y);
  // static public System.Data.SqlTypes.SqlBoolean op_LessThan(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
  // Offset: 0x4CB8B44
  ::System::Data::SqlTypes::SqlBoolean operator <(const ::System::Data::SqlTypes::SqlInt16& x, const ::System::Data::SqlTypes::SqlInt16& y);
  // static public System.Data.SqlTypes.SqlBoolean op_GreaterThan(System.Data.SqlTypes.SqlInt16 x, System.Data.SqlTypes.SqlInt16 y)
  // Offset: 0x4CB8BE8
  ::System::Data::SqlTypes::SqlBoolean operator >(const ::System::Data::SqlTypes::SqlInt16& x, const ::System::Data::SqlTypes::SqlInt16& y);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::SqlInt16
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::SqlInt16
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlInt16::*)()>(&System::Data::SqlTypes::SqlInt16::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Data::SqlTypes::SqlInt16::*)()>(&System::Data::SqlTypes::SqlInt16::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::SqlInt16
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::LessThan
// Il2CppName: LessThan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(&System::Data::SqlTypes::SqlInt16::LessThan)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlInt16")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "LessThan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::GreaterThan
// Il2CppName: GreaterThan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(&System::Data::SqlTypes::SqlInt16::GreaterThan)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlInt16")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "GreaterThan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::ToSqlDouble
// Il2CppName: ToSqlDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlDouble (System::Data::SqlTypes::SqlInt16::*)()>(&System::Data::SqlTypes::SqlInt16::ToSqlDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "ToSqlDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::ToSqlInt64
// Il2CppName: ToSqlInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlInt64 (System::Data::SqlTypes::SqlInt16::*)()>(&System::Data::SqlTypes::SqlInt16::ToSqlInt64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "ToSqlInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlInt16::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlInt16::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlInt16::*)(::System::Data::SqlTypes::SqlInt16)>(&System::Data::SqlTypes::SqlInt16::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_GetSchema
// Il2CppName: System.Xml.Serialization.IXmlSerializable.GetSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (System::Data::SqlTypes::SqlInt16::*)()>(&System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "System.Xml.Serialization.IXmlSerializable.GetSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_ReadXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.ReadXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlInt16::*)(::System::Xml::XmlReader*)>(&System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_WriteXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.WriteXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlInt16::*)(::System::Xml::XmlWriter*)>(&System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::GetXsdType
// Il2CppName: GetXsdType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&System::Data::SqlTypes::SqlInt16::GetXsdType)> {
  static const MethodInfo* get() {
    static auto* schemaSet = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "GetXsdType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaSet});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::SqlTypes::SqlInt16::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::SqlTypes::SqlInt16::*)()>(&System::Data::SqlTypes::SqlInt16::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlInt16::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlInt16::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlInt16::*)()>(&System::Data::SqlTypes::SqlInt16::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlInt16), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::operator-
// Il2CppName: op_UnaryNegation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlInt16::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
