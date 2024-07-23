// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.Encoder
#include "System/Text/Encoder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::EncoderNLS);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderNLS*, "System.Text", "EncoderNLS");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderNLS
  // [TokenAttribute] Offset: FFFFFFFF
  class EncoderNLS : public ::System::Text::Encoder {
    public:
    public:
    // System.Char _charLeftOver
    // Size: 0x2
    // Offset: 0x20
    ::Il2CppChar charLeftOver;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: charLeftOver and: encoding
    char __padding0[0x6] = {};
    // private System.Text.Encoding _encoding
    // Size: 0x8
    // Offset: 0x28
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Boolean _mustFlush
    // Size: 0x1
    // Offset: 0x30
    bool mustFlush;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _throwOnOverflow
    // Size: 0x1
    // Offset: 0x31
    bool throwOnOverflow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: throwOnOverflow and: charsUsed
    char __padding3[0x2] = {};
    // System.Int32 _charsUsed
    // Size: 0x4
    // Offset: 0x34
    int charsUsed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Char _charLeftOver
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn__charLeftOver();
    // Get instance field reference: private System.Text.Encoding _encoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn__encoding();
    // Get instance field reference: private System.Boolean _mustFlush
    [[deprecated("Use field access instead!")]] bool& dyn__mustFlush();
    // Get instance field reference: System.Boolean _throwOnOverflow
    [[deprecated("Use field access instead!")]] bool& dyn__throwOnOverflow();
    // Get instance field reference: System.Int32 _charsUsed
    [[deprecated("Use field access instead!")]] int& dyn__charsUsed();
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x44CAF7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderNLS* New_ctor(::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncoderNLS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderNLS*, creationType>(encoding)));
    }
    // public System.Text.Encoding get_Encoding()
    // Offset: 0x44CBAB8
    ::System::Text::Encoding* get_Encoding();
    // public System.Boolean get_MustFlush()
    // Offset: 0x44CBAC0
    bool get_MustFlush();
    // System.Boolean get_HasState()
    // Offset: 0x44CBAC8
    bool get_HasState();
    // System.Void ClearMustFlush()
    // Offset: 0x44CBAD8
    void ClearMustFlush();
    // public override System.Void Reset()
    // Offset: 0x44CAFDC
    // Implemented from: System.Text.Encoder
    // Base method: System.Void Encoder::Reset()
    void Reset();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x44CAFFC
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    int GetByteCount(::ArrayW<::Il2CppChar> chars, int index, int count, bool flush);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    // Offset: 0x44CB1C8
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    int GetByteCount(::Il2CppChar* chars, int count, bool flush);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    // Offset: 0x44CB2B8
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    int GetBytes(::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex, bool flush);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    // Offset: 0x44CB538
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush);
    // public override System.Void Convert(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    // Offset: 0x44CB650
    // Implemented from: System.Text.Encoder
    // Base method: System.Void Encoder::Convert(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    void Convert(::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, bool flush, ByRef<int> charsUsed, ByRef<int> bytesUsed, ByRef<bool> completed);
    // public override System.Void Convert(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    // Offset: 0x44CB904
    // Implemented from: System.Text.Encoder
    // Base method: System.Void Encoder::Convert(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    void Convert(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush, ByRef<int> charsUsed, ByRef<int> bytesUsed, ByRef<bool> completed);
  }; // System.Text.EncoderNLS
  #pragma pack(pop)
  static check_size<sizeof(EncoderNLS), 52 + sizeof(int)> __System_Text_EncoderNLSSizeCheck;
  static_assert(sizeof(EncoderNLS) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncoderNLS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::EncoderNLS::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::Text::EncoderNLS::*)()>(&System::Text::EncoderNLS::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::get_MustFlush
// Il2CppName: get_MustFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderNLS::*)()>(&System::Text::EncoderNLS::get_MustFlush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "get_MustFlush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::get_HasState
// Il2CppName: get_HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderNLS::*)()>(&System::Text::EncoderNLS::get_HasState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::ClearMustFlush
// Il2CppName: ClearMustFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderNLS::*)()>(&System::Text::EncoderNLS::ClearMustFlush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "ClearMustFlush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderNLS::*)()>(&System::Text::EncoderNLS::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderNLS::*)(::ArrayW<::Il2CppChar>, int, int, bool)>(&System::Text::EncoderNLS::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderNLS::*)(::Il2CppChar*, int, bool)>(&System::Text::EncoderNLS::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderNLS::*)(::ArrayW<::Il2CppChar>, int, int, ::ArrayW<uint8_t>, int, bool)>(&System::Text::EncoderNLS::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex, flush});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderNLS::*)(::Il2CppChar*, int, uint8_t*, int, bool)>(&System::Text::EncoderNLS::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, flush});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderNLS::*)(::ArrayW<::Il2CppChar>, int, int, ::ArrayW<uint8_t>, int, int, bool, ByRef<int>, ByRef<int>, ByRef<bool>)>(&System::Text::EncoderNLS::Convert)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* charsUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bytesUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* completed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex, byteCount, flush, charsUsed, bytesUsed, completed});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderNLS::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderNLS::*)(::Il2CppChar*, int, uint8_t*, int, bool, ByRef<int>, ByRef<int>, ByRef<bool>)>(&System::Text::EncoderNLS::Convert)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* charsUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bytesUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* completed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderNLS*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, flush, charsUsed, bytesUsed, completed});
  }
};