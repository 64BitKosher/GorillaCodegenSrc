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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data::SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: EComparison
  struct EComparison;
  // Forward declaring type: SqlBoolean
  struct SqlBoolean;
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
  // Forward declaring type: SqlBinary
  struct SqlBinary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlBinary, "System.Data.SqlTypes", "SqlBinary");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Data.SqlTypes.SqlBinary
  // [TokenAttribute] Offset: FFFFFFFF
  // [XmlSchemaProviderAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct SqlBinary/*, public ::System::ValueType, public ::System::Data::SqlTypes::INullable, public ::System::IComparable, public ::System::Xml::Serialization::IXmlSerializable*/ {
    public:
    public:
    // private System.Byte[] _value
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> value;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: SqlBinary
    constexpr SqlBinary(::ArrayW<uint8_t> value_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : value{value_} {}
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
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return value;
    }
    // Get static field: static public readonly System.Data.SqlTypes.SqlBinary Null
    static ::System::Data::SqlTypes::SqlBinary _get_Null();
    // Set static field: static public readonly System.Data.SqlTypes.SqlBinary Null
    static void _set_Null(::System::Data::SqlTypes::SqlBinary value);
    // Get instance field reference: private System.Byte[] _value
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__value();
    // private System.Void .ctor(System.Boolean fNull)
    // Offset: 0x4CAB450
    SqlBinary(bool fNull);
    // public System.Void .ctor(System.Byte[] value)
    // Offset: 0x4CAB45C
    // ABORTED: conflicts with another method.  SqlBinary(::ArrayW<uint8_t> value);
    // public System.Boolean get_IsNull()
    // Offset: 0x4CAB4E8
    bool get_IsNull();
    // public System.Byte[] get_Value()
    // Offset: 0x4CAB4F8
    ::ArrayW<uint8_t> get_Value();
    // static private System.Data.SqlTypes.EComparison PerformCompareByte(System.Byte[] x, System.Byte[] y)
    // Offset: 0x4CAB6B0
    static ::System::Data::SqlTypes::EComparison PerformCompareByte(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x4CABA3C
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Data.SqlTypes.SqlBinary value)
    // Offset: 0x4CABB28
    int CompareTo(::System::Data::SqlTypes::SqlBinary value);
    // static System.Int32 HashByteArray(System.Byte[] rgbValue, System.Int32 length)
    // Offset: 0x4CABD54
    static int HashByteArray(::ArrayW<uint8_t> rgbValue, int length);
    // private System.Xml.Schema.XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema()
    // Offset: 0x4CABE70
    ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();
    // private System.Void System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader reader)
    // Offset: 0x4CABE78
    void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);
    // private System.Void System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter writer)
    // Offset: 0x4CAC02C
    void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);
    // static public System.Xml.XmlQualifiedName GetXsdType(System.Xml.Schema.XmlSchemaSet schemaSet)
    // Offset: 0x4CAC128
    static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);
    // static private System.Void .cctor()
    // Offset: 0x4CAC1B4
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x4CAB5C8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x4CABC44
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4CABDBC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Data.SqlTypes.SqlBinary
  #pragma pack(pop)
  static check_size<sizeof(SqlBinary), 0 + sizeof(::ArrayW<uint8_t>)> __System_Data_SqlTypes_SqlBinarySizeCheck;
  static_assert(sizeof(SqlBinary) == 0x8);
  // static public System.Data.SqlTypes.SqlBoolean op_Equality(System.Data.SqlTypes.SqlBinary x, System.Data.SqlTypes.SqlBinary y)
  // Offset: 0x4CAB7AC
  ::System::Data::SqlTypes::SqlBoolean operator ==(const ::System::Data::SqlTypes::SqlBinary& x, const ::System::Data::SqlTypes::SqlBinary& y);
  // static public System.Data.SqlTypes.SqlBoolean op_LessThan(System.Data.SqlTypes.SqlBinary x, System.Data.SqlTypes.SqlBinary y)
  // Offset: 0x4CAB894
  ::System::Data::SqlTypes::SqlBoolean operator <(const ::System::Data::SqlTypes::SqlBinary& x, const ::System::Data::SqlTypes::SqlBinary& y);
  // static public System.Data.SqlTypes.SqlBoolean op_GreaterThan(System.Data.SqlTypes.SqlBinary x, System.Data.SqlTypes.SqlBinary y)
  // Offset: 0x4CAB968
  ::System::Data::SqlTypes::SqlBoolean operator >(const ::System::Data::SqlTypes::SqlBinary& x, const ::System::Data::SqlTypes::SqlBinary& y);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::SqlBinary
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::SqlBinary
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlBinary::*)()>(&System::Data::SqlTypes::SqlBinary::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Data::SqlTypes::SqlBinary::*)()>(&System::Data::SqlTypes::SqlBinary::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::PerformCompareByte
// Il2CppName: PerformCompareByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::EComparison (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Data::SqlTypes::SqlBinary::PerformCompareByte)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "PerformCompareByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlBinary::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlBinary::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlBinary::*)(::System::Data::SqlTypes::SqlBinary)>(&System::Data::SqlTypes::SqlBinary::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Data.SqlTypes", "SqlBinary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::HashByteArray
// Il2CppName: HashByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&System::Data::SqlTypes::SqlBinary::HashByteArray)> {
  static const MethodInfo* get() {
    static auto* rgbValue = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "HashByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbValue, length});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::System_Xml_Serialization_IXmlSerializable_GetSchema
// Il2CppName: System.Xml.Serialization.IXmlSerializable.GetSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (System::Data::SqlTypes::SqlBinary::*)()>(&System::Data::SqlTypes::SqlBinary::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "System.Xml.Serialization.IXmlSerializable.GetSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::System_Xml_Serialization_IXmlSerializable_ReadXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.ReadXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlBinary::*)(::System::Xml::XmlReader*)>(&System::Data::SqlTypes::SqlBinary::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::System_Xml_Serialization_IXmlSerializable_WriteXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.WriteXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlBinary::*)(::System::Xml::XmlWriter*)>(&System::Data::SqlTypes::SqlBinary::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::GetXsdType
// Il2CppName: GetXsdType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&System::Data::SqlTypes::SqlBinary::GetXsdType)> {
  static const MethodInfo* get() {
    static auto* schemaSet = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "GetXsdType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaSet});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::SqlTypes::SqlBinary::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::SqlTypes::SqlBinary::*)()>(&System::Data::SqlTypes::SqlBinary::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlBinary::*)(::Il2CppObject*)>(&System::Data::SqlTypes::SqlBinary::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlBinary::*)()>(&System::Data::SqlTypes::SqlBinary::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBinary), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBinary::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!