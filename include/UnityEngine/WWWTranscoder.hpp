// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WWWTranscoder
  class WWWTranscoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::WWWTranscoder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WWWTranscoder*, "UnityEngine", "WWWTranscoder");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WWWTranscoder
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class WWWTranscoder : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] ucHexChars
    static ::ArrayW<uint8_t> _get_ucHexChars();
    // Set static field: static private System.Byte[] ucHexChars
    static void _set_ucHexChars(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] lcHexChars
    static ::ArrayW<uint8_t> _get_lcHexChars();
    // Set static field: static private System.Byte[] lcHexChars
    static void _set_lcHexChars(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte urlEscapeChar
    static uint8_t _get_urlEscapeChar();
    // Set static field: static private System.Byte urlEscapeChar
    static void _set_urlEscapeChar(uint8_t value);
    // Get static field: static private System.Byte[] urlSpace
    static ::ArrayW<uint8_t> _get_urlSpace();
    // Set static field: static private System.Byte[] urlSpace
    static void _set_urlSpace(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] dataSpace
    static ::ArrayW<uint8_t> _get_dataSpace();
    // Set static field: static private System.Byte[] dataSpace
    static void _set_dataSpace(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] urlForbidden
    static ::ArrayW<uint8_t> _get_urlForbidden();
    // Set static field: static private System.Byte[] urlForbidden
    static void _set_urlForbidden(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte qpEscapeChar
    static uint8_t _get_qpEscapeChar();
    // Set static field: static private System.Byte qpEscapeChar
    static void _set_qpEscapeChar(uint8_t value);
    // Get static field: static private System.Byte[] qpSpace
    static ::ArrayW<uint8_t> _get_qpSpace();
    // Set static field: static private System.Byte[] qpSpace
    static void _set_qpSpace(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] qpForbidden
    static ::ArrayW<uint8_t> _get_qpForbidden();
    // Set static field: static private System.Byte[] qpForbidden
    static void _set_qpForbidden(::ArrayW<uint8_t> value);
    // static private System.Byte Hex2Byte(System.Byte[] b, System.Int32 offset)
    // Offset: 0x570B254
    static uint8_t Hex2Byte(::ArrayW<uint8_t> b, int offset);
    // static private System.Void Byte2Hex(System.Byte b, System.Byte[] hexChars, out System.Byte byte0, out System.Byte byte1)
    // Offset: 0x570B300
    static void Byte2Hex(uint8_t b, ::ArrayW<uint8_t> hexChars, ByRef<uint8_t> byte0, ByRef<uint8_t> byte1);
    // static public System.Byte[] DataEncode(System.Byte[] toEncode)
    // Offset: 0x570AF54
    static ::ArrayW<uint8_t> DataEncode(::ArrayW<uint8_t> toEncode);
    // static public System.String QPEncode(System.String toEncode, System.Text.Encoding e)
    // Offset: 0x570AE60
    static ::StringW QPEncode(::StringW toEncode, ::System::Text::Encoding* e);
    // static public System.Byte[] Encode(System.Byte[] input, System.Byte escapeChar, System.Byte[] space, System.Byte[] forbidden, System.Boolean uppercase)
    // Offset: 0x570B354
    static ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> input, uint8_t escapeChar, ::ArrayW<uint8_t> space, ::ArrayW<uint8_t> forbidden, bool uppercase);
    // static private System.Boolean ByteArrayContains(System.Byte[] array, System.Byte b)
    // Offset: 0x570B730
    static bool ByteArrayContains(::ArrayW<uint8_t> array, uint8_t b);
    // static public System.Byte[] URLDecode(System.Byte[] toEncode)
    // Offset: 0x57097F8
    static ::ArrayW<uint8_t> URLDecode(::ArrayW<uint8_t> toEncode);
    // static private System.Boolean ByteSubArrayEquals(System.Byte[] array, System.Int32 index, System.Byte[] comperand)
    // Offset: 0x570BAB0
    static bool ByteSubArrayEquals(::ArrayW<uint8_t> array, int index, ::ArrayW<uint8_t> comperand);
    // static public System.Byte[] Decode(System.Byte[] input, System.Byte escapeChar, System.Byte[] space)
    // Offset: 0x570B798
    static ::ArrayW<uint8_t> Decode(::ArrayW<uint8_t> input, uint8_t escapeChar, ::ArrayW<uint8_t> space);
    // static public System.Boolean SevenBitClean(System.String s, System.Text.Encoding e)
    // Offset: 0x570ACEC
    static bool SevenBitClean(::StringW s, ::System::Text::Encoding* e);
    // static public System.Boolean SevenBitClean(System.Byte* input, System.Int32 inputLength)
    // Offset: 0x570BB40
    static bool SevenBitClean(uint8_t* input, int inputLength);
    // static private System.Void .cctor()
    // Offset: 0x570BB9C
    static void _cctor();
  }; // UnityEngine.WWWTranscoder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::Hex2Byte
// Il2CppName: Hex2Byte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::ArrayW<uint8_t>, int)>(&UnityEngine::WWWTranscoder::Hex2Byte)> {
  static const MethodInfo* get() {
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "Hex2Byte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::Byte2Hex
// Il2CppName: Byte2Hex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t, ::ArrayW<uint8_t>, ByRef<uint8_t>, ByRef<uint8_t>)>(&UnityEngine::WWWTranscoder::Byte2Hex)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* hexChars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byte0 = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    static auto* byte1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "Byte2Hex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, hexChars, byte0, byte1});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::DataEncode
// Il2CppName: DataEncode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&UnityEngine::WWWTranscoder::DataEncode)> {
  static const MethodInfo* get() {
    static auto* toEncode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "DataEncode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toEncode});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::QPEncode
// Il2CppName: QPEncode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&UnityEngine::WWWTranscoder::QPEncode)> {
  static const MethodInfo* get() {
    static auto* toEncode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "QPEncode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toEncode, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&UnityEngine::WWWTranscoder::Encode)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* escapeChar = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* space = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* forbidden = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* uppercase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, escapeChar, space, forbidden, uppercase});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::ByteArrayContains
// Il2CppName: ByteArrayContains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, uint8_t)>(&UnityEngine::WWWTranscoder::ByteArrayContains)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "ByteArrayContains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::URLDecode
// Il2CppName: URLDecode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&UnityEngine::WWWTranscoder::URLDecode)> {
  static const MethodInfo* get() {
    static auto* toEncode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "URLDecode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toEncode});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::ByteSubArrayEquals
// Il2CppName: ByteSubArrayEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>)>(&UnityEngine::WWWTranscoder::ByteSubArrayEquals)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* comperand = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "ByteSubArrayEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index, comperand});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>)>(&UnityEngine::WWWTranscoder::Decode)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* escapeChar = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* space = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, escapeChar, space});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::SevenBitClean
// Il2CppName: SevenBitClean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Text::Encoding*)>(&UnityEngine::WWWTranscoder::SevenBitClean)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "SevenBitClean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::SevenBitClean
// Il2CppName: SevenBitClean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint8_t*, int)>(&UnityEngine::WWWTranscoder::SevenBitClean)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* inputLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "SevenBitClean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inputLength});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::WWWTranscoder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
