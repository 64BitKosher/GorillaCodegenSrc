// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LitJson
namespace LitJson {
  // Forward declaring type: WriterContext
  class WriterContext;
  // Forward declaring type: Condition
  struct Condition;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: LitJson
namespace LitJson {
  // Forward declaring type: JsonWriter
  class JsonWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LitJson::JsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::LitJson::JsonWriter*, "LitJson", "JsonWriter");
// Type namespace: LitJson
namespace LitJson {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: LitJson.JsonWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class JsonWriter : public ::Il2CppObject {
    public:
    public:
    // private LitJson.WriterContext context
    // Size: 0x8
    // Offset: 0x10
    ::LitJson::WriterContext* context;
    // Field size check
    static_assert(sizeof(::LitJson::WriterContext*) == 0x8);
    // private System.Collections.Generic.Stack`1<LitJson.WriterContext> ctx_stack
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Stack_1<::LitJson::WriterContext*>* ctx_stack;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::LitJson::WriterContext*>*) == 0x8);
    // private System.Boolean has_reached_end
    // Size: 0x1
    // Offset: 0x20
    bool has_reached_end;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: has_reached_end and: hex_seq
    char __padding2[0x7] = {};
    // private System.Char[] hex_seq
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Il2CppChar> hex_seq;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Int32 indentation
    // Size: 0x4
    // Offset: 0x30
    int indentation;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 indent_value
    // Size: 0x4
    // Offset: 0x34
    int indent_value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Text.StringBuilder inst_string_builder
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::StringBuilder* inst_string_builder;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Boolean pretty_print
    // Size: 0x1
    // Offset: 0x40
    bool pretty_print;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean validate
    // Size: 0x1
    // Offset: 0x41
    bool validate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validate and: writer
    char __padding8[0x6] = {};
    // private System.IO.TextWriter writer
    // Size: 0x8
    // Offset: 0x48
    ::System::IO::TextWriter* writer;
    // Field size check
    static_assert(sizeof(::System::IO::TextWriter*) == 0x8);
    public:
    // Get static field: static private System.Globalization.NumberFormatInfo number_format
    static ::System::Globalization::NumberFormatInfo* _get_number_format();
    // Set static field: static private System.Globalization.NumberFormatInfo number_format
    static void _set_number_format(::System::Globalization::NumberFormatInfo* value);
    // Get instance field reference: private LitJson.WriterContext context
    [[deprecated("Use field access instead!")]] ::LitJson::WriterContext*& dyn_context();
    // Get instance field reference: private System.Collections.Generic.Stack`1<LitJson.WriterContext> ctx_stack
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::LitJson::WriterContext*>*& dyn_ctx_stack();
    // Get instance field reference: private System.Boolean has_reached_end
    [[deprecated("Use field access instead!")]] bool& dyn_has_reached_end();
    // Get instance field reference: private System.Char[] hex_seq
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_hex_seq();
    // Get instance field reference: private System.Int32 indentation
    [[deprecated("Use field access instead!")]] int& dyn_indentation();
    // Get instance field reference: private System.Int32 indent_value
    [[deprecated("Use field access instead!")]] int& dyn_indent_value();
    // Get instance field reference: private System.Text.StringBuilder inst_string_builder
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn_inst_string_builder();
    // Get instance field reference: private System.Boolean pretty_print
    [[deprecated("Use field access instead!")]] bool& dyn_pretty_print();
    // Get instance field reference: private System.Boolean validate
    [[deprecated("Use field access instead!")]] bool& dyn_validate();
    // Get instance field reference: private System.IO.TextWriter writer
    [[deprecated("Use field access instead!")]] ::System::IO::TextWriter*& dyn_writer();
    // public System.Int32 get_IndentValue()
    // Offset: 0x27C9928
    int get_IndentValue();
    // public System.Void set_IndentValue(System.Int32 value)
    // Offset: 0x27C9930
    void set_IndentValue(int value);
    // public System.Boolean get_PrettyPrint()
    // Offset: 0x27C9944
    bool get_PrettyPrint();
    // public System.Void set_PrettyPrint(System.Boolean value)
    // Offset: 0x27C994C
    void set_PrettyPrint(bool value);
    // public System.IO.TextWriter get_TextWriter()
    // Offset: 0x27C9958
    ::System::IO::TextWriter* get_TextWriter();
    // public System.Boolean get_Validate()
    // Offset: 0x27C9960
    bool get_Validate();
    // public System.Void set_Validate(System.Boolean value)
    // Offset: 0x27C9968
    void set_Validate(bool value);
    // static private System.Void .cctor()
    // Offset: 0x27C9974
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x27C0048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::JsonWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonWriter*, creationType>()));
    }
    // public System.Void .ctor(System.Text.StringBuilder sb)
    // Offset: 0x27C9B04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonWriter* New_ctor(::System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::JsonWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonWriter*, creationType>(sb)));
    }
    // public System.Void .ctor(System.IO.TextWriter writer)
    // Offset: 0x27BEF2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonWriter* New_ctor(::System::IO::TextWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::JsonWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonWriter*, creationType>(writer)));
    }
    // private System.Void DoValidation(LitJson.Condition cond)
    // Offset: 0x27C9B70
    void DoValidation(::LitJson::Condition cond);
    // private System.Void Init()
    // Offset: 0x27C99D0
    void Init();
    // static private System.Void IntToHex(System.Int32 n, System.Char[] hex)
    // Offset: 0x27C9CF4
    static void IntToHex(int n, ::ArrayW<::Il2CppChar> hex);
    // private System.Void Indent()
    // Offset: 0x27C9D6C
    void Indent();
    // private System.Void Put(System.String str)
    // Offset: 0x27C9D84
    void Put(::StringW str);
    // private System.Void PutNewline()
    // Offset: 0x27C9E10
    void PutNewline();
    // private System.Void PutNewline(System.Boolean add_comma)
    // Offset: 0x27C9E18
    void PutNewline(bool add_comma);
    // private System.Void PutString(System.String str)
    // Offset: 0x27C9EA0
    void PutString(::StringW str);
    // private System.Void Unindent()
    // Offset: 0x27CA1A8
    void Unindent();
    // public System.Void Reset()
    // Offset: 0x27C6AD8
    void Reset();
    // public System.Void Write(System.Boolean boolean)
    // Offset: 0x27BE340
    void Write(bool boolean);
    // public System.Void Write(System.Decimal number)
    // Offset: 0x27C7688
    void Write(::System::Decimal number);
    // public System.Void Write(System.Double number)
    // Offset: 0x27BE3D8
    void Write(double number);
    // public System.Void Write(System.Int32 number)
    // Offset: 0x27BE514
    void Write(int number);
    // public System.Void Write(System.Int64 number)
    // Offset: 0x27BE5E8
    void Write(int64_t number);
    // public System.Void Write(System.String str)
    // Offset: 0x27BE2B4
    void Write(::StringW str);
    // public System.Void Write(System.UInt64 number)
    // Offset: 0x27C6890
    void Write(uint64_t number);
    // public System.Void WriteArrayEnd()
    // Offset: 0x27BE7B0
    void WriteArrayEnd();
    // public System.Void WriteArrayStart()
    // Offset: 0x27BE6BC
    void WriteArrayStart();
    // public System.Void WriteObjectEnd()
    // Offset: 0x27BEAB4
    void WriteObjectEnd();
    // public System.Void WriteObjectStart()
    // Offset: 0x27BE8B0
    void WriteObjectStart();
    // public System.Void WritePropertyName(System.String property_name)
    // Offset: 0x27BE9A4
    void WritePropertyName(::StringW property_name);
    // public override System.String ToString()
    // Offset: 0x27CA1C0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // LitJson.JsonWriter
  #pragma pack(pop)
  static check_size<sizeof(JsonWriter), 72 + sizeof(::System::IO::TextWriter*)> __LitJson_JsonWriterSizeCheck;
  static_assert(sizeof(JsonWriter) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LitJson::JsonWriter::get_IndentValue
// Il2CppName: get_IndentValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::get_IndentValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "get_IndentValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::set_IndentValue
// Il2CppName: set_IndentValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(int)>(&LitJson::JsonWriter::set_IndentValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "set_IndentValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::get_PrettyPrint
// Il2CppName: get_PrettyPrint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::get_PrettyPrint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "get_PrettyPrint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::set_PrettyPrint
// Il2CppName: set_PrettyPrint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(bool)>(&LitJson::JsonWriter::set_PrettyPrint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "set_PrettyPrint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::get_TextWriter
// Il2CppName: get_TextWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextWriter* (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::get_TextWriter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "get_TextWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::get_Validate
// Il2CppName: get_Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::get_Validate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "get_Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::set_Validate
// Il2CppName: set_Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(bool)>(&LitJson::JsonWriter::set_Validate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "set_Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LitJson::JsonWriter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LitJson::JsonWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LitJson::JsonWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LitJson::JsonWriter::DoValidation
// Il2CppName: DoValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(::LitJson::Condition)>(&LitJson::JsonWriter::DoValidation)> {
  static const MethodInfo* get() {
    static auto* cond = &::il2cpp_utils::GetClassFromName("LitJson", "Condition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "DoValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cond});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::IntToHex
// Il2CppName: IntToHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<::Il2CppChar>)>(&LitJson::JsonWriter::IntToHex)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hex = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "IntToHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, hex});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Indent
// Il2CppName: Indent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::Indent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Indent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(::StringW)>(&LitJson::JsonWriter::Put)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::PutNewline
// Il2CppName: PutNewline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::PutNewline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "PutNewline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::PutNewline
// Il2CppName: PutNewline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(bool)>(&LitJson::JsonWriter::PutNewline)> {
  static const MethodInfo* get() {
    static auto* add_comma = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "PutNewline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{add_comma});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::PutString
// Il2CppName: PutString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(::StringW)>(&LitJson::JsonWriter::PutString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "PutString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Unindent
// Il2CppName: Unindent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::Unindent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Unindent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(bool)>(&LitJson::JsonWriter::Write)> {
  static const MethodInfo* get() {
    static auto* boolean = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boolean});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(::System::Decimal)>(&LitJson::JsonWriter::Write)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(double)>(&LitJson::JsonWriter::Write)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(int)>(&LitJson::JsonWriter::Write)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(int64_t)>(&LitJson::JsonWriter::Write)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(::StringW)>(&LitJson::JsonWriter::Write)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(uint64_t)>(&LitJson::JsonWriter::Write)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::WriteArrayEnd
// Il2CppName: WriteArrayEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::WriteArrayEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "WriteArrayEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::WriteArrayStart
// Il2CppName: WriteArrayStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::WriteArrayStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "WriteArrayStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::WriteObjectEnd
// Il2CppName: WriteObjectEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::WriteObjectEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "WriteObjectEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::WriteObjectStart
// Il2CppName: WriteObjectStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::WriteObjectStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "WriteObjectStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::WritePropertyName
// Il2CppName: WritePropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::JsonWriter::*)(::StringW)>(&LitJson::JsonWriter::WritePropertyName)> {
  static const MethodInfo* get() {
    static auto* property_name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "WritePropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property_name});
  }
};
// Writing MetadataGetter for method: LitJson::JsonWriter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LitJson::JsonWriter::*)()>(&LitJson::JsonWriter::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::JsonWriter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
