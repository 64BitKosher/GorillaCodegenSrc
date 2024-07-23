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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UnescapeMode
  struct UnescapeMode;
  // Forward declaring type: UriParser
  class UriParser;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: UriHelper
  class UriHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::UriHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::UriHelper*, "System", "UriHelper");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.UriHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class UriHelper : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Char[] HexUpperChars
    static ::ArrayW<::Il2CppChar> _get_HexUpperChars();
    // Set static field: static private readonly System.Char[] HexUpperChars
    static void _set_HexUpperChars(::ArrayW<::Il2CppChar> value);
    // static System.Boolean TestForSubPath(System.Char* pMe, System.UInt16 meLength, System.Char* pShe, System.UInt16 sheLength, System.Boolean ignoreCase)
    // Offset: 0x4F6259C
    static bool TestForSubPath(::Il2CppChar* pMe, uint16_t meLength, ::Il2CppChar* pShe, uint16_t sheLength, bool ignoreCase);
    // static System.Char[] EscapeString(System.String input, System.Int32 start, System.Int32 end, System.Char[] dest, ref System.Int32 destPos, System.Boolean isUriString, System.Char force1, System.Char force2, System.Char rsvd)
    // Offset: 0x4F62798
    static ::ArrayW<::Il2CppChar> EscapeString(::StringW input, int start, int end, ::ArrayW<::Il2CppChar> dest, ByRef<int> destPos, bool isUriString, ::Il2CppChar force1, ::Il2CppChar force2, ::Il2CppChar rsvd);
    // static private System.Char[] EnsureDestinationSize(System.Char* pStr, System.Char[] dest, System.Int32 currentInputPos, System.Int16 charsToAdd, System.Int16 minReallocateChars, ref System.Int32 destPos, System.Int32 prevInputPos)
    // Offset: 0x4F62CAC
    static ::ArrayW<::Il2CppChar> EnsureDestinationSize(::Il2CppChar* pStr, ::ArrayW<::Il2CppChar> dest, int currentInputPos, int16_t charsToAdd, int16_t minReallocateChars, ByRef<int> destPos, int prevInputPos);
    // static System.Char[] UnescapeString(System.String input, System.Int32 start, System.Int32 end, System.Char[] dest, ref System.Int32 destPosition, System.Char rsvd1, System.Char rsvd2, System.Char rsvd3, System.UnescapeMode unescapeMode, System.UriParser syntax, System.Boolean isQuery)
    // Offset: 0x4F62FC0
    static ::ArrayW<::Il2CppChar> UnescapeString(::StringW input, int start, int end, ::ArrayW<::Il2CppChar> dest, ByRef<int> destPosition, ::Il2CppChar rsvd1, ::Il2CppChar rsvd2, ::Il2CppChar rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, bool isQuery);
    // static System.Char[] UnescapeString(System.Char* pStr, System.Int32 start, System.Int32 end, System.Char[] dest, ref System.Int32 destPosition, System.Char rsvd1, System.Char rsvd2, System.Char rsvd3, System.UnescapeMode unescapeMode, System.UriParser syntax, System.Boolean isQuery)
    // Offset: 0x4F630A0
    static ::ArrayW<::Il2CppChar> UnescapeString(::Il2CppChar* pStr, int start, int end, ::ArrayW<::Il2CppChar> dest, ByRef<int> destPosition, ::Il2CppChar rsvd1, ::Il2CppChar rsvd2, ::Il2CppChar rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, bool isQuery);
    // static System.Void MatchUTF8Sequence(System.Char* pDest, System.Char[] dest, ref System.Int32 destOffset, System.Char[] unescapedChars, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteCount, System.Boolean isQuery, System.Boolean iriParsing)
    // Offset: 0x4F61F90
    static void MatchUTF8Sequence(::Il2CppChar* pDest, ::ArrayW<::Il2CppChar> dest, ByRef<int> destOffset, ::ArrayW<::Il2CppChar> unescapedChars, int charCount, ::ArrayW<uint8_t> bytes, int byteCount, bool isQuery, bool iriParsing);
    // static System.Void EscapeAsciiChar(System.Char ch, System.Char[] to, ref System.Int32 pos)
    // Offset: 0x4F6246C
    static void EscapeAsciiChar(::Il2CppChar ch, ::ArrayW<::Il2CppChar> to, ByRef<int> pos);
    // static System.Char EscapedAscii(System.Char digit, System.Char next)
    // Offset: 0x4F61E48
    static ::Il2CppChar EscapedAscii(::Il2CppChar digit, ::Il2CppChar next);
    // static System.Boolean IsNotSafeForUnescape(System.Char ch)
    // Offset: 0x4F61F04
    static bool IsNotSafeForUnescape(::Il2CppChar ch);
    // static private System.Boolean IsReservedUnreservedOrHash(System.Char c)
    // Offset: 0x4F62EB8
    static bool IsReservedUnreservedOrHash(::Il2CppChar c);
    // static System.Boolean IsUnreserved(System.Char c)
    // Offset: 0x4F62DD8
    static bool IsUnreserved(::Il2CppChar c);
    // static System.Boolean Is3986Unreserved(System.Char c)
    // Offset: 0x4F63AB4
    static bool Is3986Unreserved(::Il2CppChar c);
    // static private System.Void .cctor()
    // Offset: 0x4F63B50
    static void _cctor();
  }; // System.UriHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UriHelper::TestForSubPath
// Il2CppName: TestForSubPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, uint16_t, ::Il2CppChar*, uint16_t, bool)>(&System::UriHelper::TestForSubPath)> {
  static const MethodInfo* get() {
    static auto* pMe = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* meLength = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* pShe = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* sheLength = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "TestForSubPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pMe, meLength, pShe, sheLength, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::UriHelper::EscapeString
// Il2CppName: EscapeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)(::StringW, int, int, ::ArrayW<::Il2CppChar>, ByRef<int>, bool, ::Il2CppChar, ::Il2CppChar, ::Il2CppChar)>(&System::UriHelper::EscapeString)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* destPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* isUriString = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* force1 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* force2 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* rsvd = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "EscapeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, start, end, dest, destPos, isUriString, force1, force2, rsvd});
  }
};
// Writing MetadataGetter for method: System::UriHelper::EnsureDestinationSize
// Il2CppName: EnsureDestinationSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)(::Il2CppChar*, ::ArrayW<::Il2CppChar>, int, int16_t, int16_t, ByRef<int>, int)>(&System::UriHelper::EnsureDestinationSize)> {
  static const MethodInfo* get() {
    static auto* pStr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* currentInputPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charsToAdd = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* minReallocateChars = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* destPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* prevInputPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "EnsureDestinationSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pStr, dest, currentInputPos, charsToAdd, minReallocateChars, destPos, prevInputPos});
  }
};
// Writing MetadataGetter for method: System::UriHelper::UnescapeString
// Il2CppName: UnescapeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)(::StringW, int, int, ::ArrayW<::Il2CppChar>, ByRef<int>, ::Il2CppChar, ::Il2CppChar, ::Il2CppChar, ::System::UnescapeMode, ::System::UriParser*, bool)>(&System::UriHelper::UnescapeString)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* destPosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* rsvd1 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* rsvd2 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* rsvd3 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* unescapeMode = &::il2cpp_utils::GetClassFromName("System", "UnescapeMode")->byval_arg;
    static auto* syntax = &::il2cpp_utils::GetClassFromName("System", "UriParser")->byval_arg;
    static auto* isQuery = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "UnescapeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, start, end, dest, destPosition, rsvd1, rsvd2, rsvd3, unescapeMode, syntax, isQuery});
  }
};
// Writing MetadataGetter for method: System::UriHelper::UnescapeString
// Il2CppName: UnescapeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)(::Il2CppChar*, int, int, ::ArrayW<::Il2CppChar>, ByRef<int>, ::Il2CppChar, ::Il2CppChar, ::Il2CppChar, ::System::UnescapeMode, ::System::UriParser*, bool)>(&System::UriHelper::UnescapeString)> {
  static const MethodInfo* get() {
    static auto* pStr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* destPosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* rsvd1 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* rsvd2 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* rsvd3 = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* unescapeMode = &::il2cpp_utils::GetClassFromName("System", "UnescapeMode")->byval_arg;
    static auto* syntax = &::il2cpp_utils::GetClassFromName("System", "UriParser")->byval_arg;
    static auto* isQuery = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "UnescapeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pStr, start, end, dest, destPosition, rsvd1, rsvd2, rsvd3, unescapeMode, syntax, isQuery});
  }
};
// Writing MetadataGetter for method: System::UriHelper::MatchUTF8Sequence
// Il2CppName: MatchUTF8Sequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppChar*, ::ArrayW<::Il2CppChar>, ByRef<int>, ::ArrayW<::Il2CppChar>, int, ::ArrayW<uint8_t>, int, bool, bool)>(&System::UriHelper::MatchUTF8Sequence)> {
  static const MethodInfo* get() {
    static auto* pDest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* destOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* unescapedChars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isQuery = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* iriParsing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "MatchUTF8Sequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pDest, dest, destOffset, unescapedChars, charCount, bytes, byteCount, isQuery, iriParsing});
  }
};
// Writing MetadataGetter for method: System::UriHelper::EscapeAsciiChar
// Il2CppName: EscapeAsciiChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppChar, ::ArrayW<::Il2CppChar>, ByRef<int>)>(&System::UriHelper::EscapeAsciiChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* to = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "EscapeAsciiChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch, to, pos});
  }
};
// Writing MetadataGetter for method: System::UriHelper::EscapedAscii
// Il2CppName: EscapedAscii
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar, ::Il2CppChar)>(&System::UriHelper::EscapedAscii)> {
  static const MethodInfo* get() {
    static auto* digit = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* next = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "EscapedAscii", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digit, next});
  }
};
// Writing MetadataGetter for method: System::UriHelper::IsNotSafeForUnescape
// Il2CppName: IsNotSafeForUnescape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::UriHelper::IsNotSafeForUnescape)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "IsNotSafeForUnescape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::UriHelper::IsReservedUnreservedOrHash
// Il2CppName: IsReservedUnreservedOrHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::UriHelper::IsReservedUnreservedOrHash)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "IsReservedUnreservedOrHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::UriHelper::IsUnreserved
// Il2CppName: IsUnreserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::UriHelper::IsUnreserved)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "IsUnreserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::UriHelper::Is3986Unreserved
// Il2CppName: Is3986Unreserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::UriHelper::Is3986Unreserved)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), "Is3986Unreserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::UriHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::UriHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
