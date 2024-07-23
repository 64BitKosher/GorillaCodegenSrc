// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonWriter
#include "Newtonsoft/Json/JsonWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JContainer
  class JContainer;
  // Forward declaring type: JValue
  class JValue;
  // Forward declaring type: JToken
  class JToken;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonToken
  struct JsonToken;
  // Forward declaring type: JsonReader
  class JsonReader;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Decimal because it is already included!
  // Skipping declaration: DateTime because it is already included!
  // Skipping declaration: DateTimeOffset because it is already included!
  // Skipping declaration: TimeSpan because it is already included!
  // Skipping declaration: Guid because it is already included!
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JTokenWriter
  class JTokenWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JTokenWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenWriter*, "Newtonsoft.Json.Linq", "JTokenWriter");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JTokenWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  class JTokenWriter : public ::Newtonsoft::Json::JsonWriter {
    public:
    public:
    // private Newtonsoft.Json.Linq.JContainer _token
    // Size: 0x8
    // Offset: 0x60
    ::Newtonsoft::Json::Linq::JContainer* token;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JContainer*) == 0x8);
    // private Newtonsoft.Json.Linq.JContainer _parent
    // Size: 0x8
    // Offset: 0x68
    ::Newtonsoft::Json::Linq::JContainer* parent;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JContainer*) == 0x8);
    // private Newtonsoft.Json.Linq.JValue _value
    // Size: 0x8
    // Offset: 0x70
    ::Newtonsoft::Json::Linq::JValue* value;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JValue*) == 0x8);
    // private Newtonsoft.Json.Linq.JToken _current
    // Size: 0x8
    // Offset: 0x78
    ::Newtonsoft::Json::Linq::JToken* current;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JToken*) == 0x8);
    public:
    // Get instance field reference: private Newtonsoft.Json.Linq.JContainer _token
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JContainer*& dyn__token();
    // Get instance field reference: private Newtonsoft.Json.Linq.JContainer _parent
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JContainer*& dyn__parent();
    // Get instance field reference: private Newtonsoft.Json.Linq.JValue _value
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JValue*& dyn__value();
    // Get instance field reference: private Newtonsoft.Json.Linq.JToken _current
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JToken*& dyn__current();
    // public Newtonsoft.Json.Linq.JToken get_Token()
    // Offset: 0x474E1FC
    ::Newtonsoft::Json::Linq::JToken* get_Token();
    // private System.Void AddParent(Newtonsoft.Json.Linq.JContainer container)
    // Offset: 0x474E2DC
    void AddParent(::Newtonsoft::Json::Linq::JContainer* container);
    // private System.Void RemoveParent()
    // Offset: 0x474E33C
    void RemoveParent();
    // private System.Void AddValue(System.Object value, Newtonsoft.Json.JsonToken token)
    // Offset: 0x474E54C
    void AddValue(::Il2CppObject* value, ::Newtonsoft::Json::JsonToken token);
    // System.Void AddValue(Newtonsoft.Json.Linq.JValue value, Newtonsoft.Json.JsonToken token)
    // Offset: 0x474E5C8
    void AddValue(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::JsonToken token);
    // public System.Void .ctor()
    // Offset: 0x474E218
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JTokenWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JTokenWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JTokenWriter*, creationType>()));
    }
    // public override System.Void Close()
    // Offset: 0x474E270
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::Close()
    void Close();
    // public override System.Void WriteStartObject()
    // Offset: 0x474E278
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteStartObject()
    void WriteStartObject();
    // public override System.Void WriteStartArray()
    // Offset: 0x474E3AC
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteStartArray()
    void WriteStartArray();
    // public override System.Void WriteStartConstructor(System.String name)
    // Offset: 0x474E410
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteStartConstructor(System.String name)
    void WriteStartConstructor(::StringW name);
    // protected override System.Void WriteEnd(Newtonsoft.Json.JsonToken token)
    // Offset: 0x474E488
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteEnd(Newtonsoft.Json.JsonToken token)
    void WriteEnd(::Newtonsoft::Json::JsonToken token);
    // public override System.Void WritePropertyName(System.String name)
    // Offset: 0x474E48C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WritePropertyName(System.String name)
    void WritePropertyName(::StringW name);
    // public override System.Void WriteValue(System.Object value)
    // Offset: 0x474E688
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Object value)
    void WriteValue(::Il2CppObject* value);
    // public override System.Void WriteNull()
    // Offset: 0x474E714
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteNull()
    void WriteNull();
    // public override System.Void WriteUndefined()
    // Offset: 0x474E734
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteUndefined()
    void WriteUndefined();
    // public override System.Void WriteRaw(System.String json)
    // Offset: 0x474E754
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteRaw(System.String json)
    void WriteRaw(::StringW json);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x474E7D0
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteComment(System.String text)
    void WriteComment(::StringW text);
    // public override System.Void WriteValue(System.String value)
    // Offset: 0x474E804
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.String value)
    void WriteValue(::StringW value);
    // public override System.Void WriteValue(System.Int32 value)
    // Offset: 0x474E834
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Int32 value)
    void WriteValue(int value);
    // public override System.Void WriteValue(System.UInt32 value)
    // Offset: 0x474E8B0
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.UInt32 value)
    void WriteValue(uint value);
    // public override System.Void WriteValue(System.Int64 value)
    // Offset: 0x474E92C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Int64 value)
    void WriteValue(int64_t value);
    // public override System.Void WriteValue(System.UInt64 value)
    // Offset: 0x474E9A8
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.UInt64 value)
    void WriteValue(uint64_t value);
    // public override System.Void WriteValue(System.Single value)
    // Offset: 0x474EA24
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Single value)
    void WriteValue(float value);
    // public override System.Void WriteValue(System.Double value)
    // Offset: 0x474EAA0
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Double value)
    void WriteValue(double value);
    // public override System.Void WriteValue(System.Boolean value)
    // Offset: 0x474EB1C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Boolean value)
    void WriteValue(bool value);
    // public override System.Void WriteValue(System.Int16 value)
    // Offset: 0x474EB9C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Int16 value)
    void WriteValue(int16_t value);
    // public override System.Void WriteValue(System.UInt16 value)
    // Offset: 0x474EC18
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.UInt16 value)
    void WriteValue(uint16_t value);
    // public override System.Void WriteValue(System.Char value)
    // Offset: 0x474EC94
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Char value)
    void WriteValue(::Il2CppChar value);
    // public override System.Void WriteValue(System.Byte value)
    // Offset: 0x474ED2C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Byte value)
    void WriteValue(uint8_t value);
    // public override System.Void WriteValue(System.SByte value)
    // Offset: 0x474EDA8
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.SByte value)
    void WriteValue(int8_t value);
    // public override System.Void WriteValue(System.Decimal value)
    // Offset: 0x474EE24
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Decimal value)
    void WriteValue(::System::Decimal value);
    // public override System.Void WriteValue(System.DateTime value)
    // Offset: 0x474EED8
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.DateTime value)
    void WriteValue(::System::DateTime value);
    // public override System.Void WriteValue(System.DateTimeOffset value)
    // Offset: 0x474EF90
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.DateTimeOffset value)
    void WriteValue(::System::DateTimeOffset value);
    // public override System.Void WriteValue(System.Byte[] value)
    // Offset: 0x474F01C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Byte[] value)
    void WriteValue(::ArrayW<uint8_t> value);
    // public override System.Void WriteValue(System.TimeSpan value)
    // Offset: 0x474F04C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.TimeSpan value)
    void WriteValue(::System::TimeSpan value);
    // public override System.Void WriteValue(System.Guid value)
    // Offset: 0x474F0C8
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Guid value)
    void WriteValue(::System::Guid value);
    // public override System.Void WriteValue(System.Uri value)
    // Offset: 0x474F154
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Uri value)
    void WriteValue(::System::Uri* value);
    // override System.Void WriteToken(Newtonsoft.Json.JsonReader reader, System.Boolean writeChildren, System.Boolean writeDateConstructorAsDate, System.Boolean writeComments)
    // Offset: 0x474F184
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteToken(Newtonsoft.Json.JsonReader reader, System.Boolean writeChildren, System.Boolean writeDateConstructorAsDate, System.Boolean writeComments)
    void WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments);
  }; // Newtonsoft.Json.Linq.JTokenWriter
  #pragma pack(pop)
  static check_size<sizeof(JTokenWriter), 120 + sizeof(::Newtonsoft::Json::Linq::JToken*)> __Newtonsoft_Json_Linq_JTokenWriterSizeCheck;
  static_assert(sizeof(JTokenWriter) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::get_Token
// Il2CppName: get_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JTokenWriter::*)()>(&Newtonsoft::Json::Linq::JTokenWriter::get_Token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "get_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::AddParent
// Il2CppName: AddParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JContainer*)>(&Newtonsoft::Json::Linq::JTokenWriter::AddParent)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "AddParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::RemoveParent
// Il2CppName: RemoveParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)()>(&Newtonsoft::Json::Linq::JTokenWriter::RemoveParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "RemoveParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::AddValue
// Il2CppName: AddValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::Il2CppObject*, ::Newtonsoft::Json::JsonToken)>(&Newtonsoft::Json::Linq::JTokenWriter::AddValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::AddValue
// Il2CppName: AddValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::JsonToken)>(&Newtonsoft::Json::Linq::JTokenWriter::AddValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JValue")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)()>(&Newtonsoft::Json::Linq::JTokenWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteStartObject
// Il2CppName: WriteStartObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)()>(&Newtonsoft::Json::Linq::JTokenWriter::WriteStartObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteStartObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteStartArray
// Il2CppName: WriteStartArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)()>(&Newtonsoft::Json::Linq::JTokenWriter::WriteStartArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteStartArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteStartConstructor
// Il2CppName: WriteStartConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteStartConstructor)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteStartConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteEnd
// Il2CppName: WriteEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonToken)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteEnd)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WritePropertyName
// Il2CppName: WritePropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&Newtonsoft::Json::Linq::JTokenWriter::WritePropertyName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WritePropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::Il2CppObject*)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteNull
// Il2CppName: WriteNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)()>(&Newtonsoft::Json::Linq::JTokenWriter::WriteNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteUndefined
// Il2CppName: WriteUndefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)()>(&Newtonsoft::Json::Linq::JTokenWriter::WriteUndefined)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteUndefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteComment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(int)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(uint)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(int64_t)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(uint64_t)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(float)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(double)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(bool)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(int16_t)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(uint16_t)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::Il2CppChar)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(uint8_t)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(int8_t)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Decimal)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::System::DateTime)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::System::DateTimeOffset)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::ArrayW<uint8_t>)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::System::TimeSpan)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Guid)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Uri*)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenWriter::WriteToken
// Il2CppName: WriteToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool)>(&Newtonsoft::Json::Linq::JTokenWriter::WriteToken)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* writeChildren = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* writeDateConstructorAsDate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* writeComments = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenWriter*), "WriteToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, writeChildren, writeDateConstructorAsDate, writeComments});
  }
};