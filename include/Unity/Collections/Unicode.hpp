// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: ConversionError
  struct ConversionError;
}
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: Unicode
  struct Unicode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Unicode, "Unity.Collections", "Unicode");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.Unicode
  // [TokenAttribute] Offset: FFFFFFFF
  // [GenerateTestsForBurstCompatibilityAttribute] Offset: FFFFFFFF
  struct Unicode/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Unity::Collections::Unicode::Rune
    struct Rune;
    // Creating value type constructor for type: Unicode
    constexpr Unicode() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static public System.Boolean IsValidCodePoint(System.Int32 codepoint)
    // Offset: 0x5088F4C
    static bool IsValidCodePoint(int codepoint);
    // static public System.Boolean NotTrailer(System.Byte b)
    // Offset: 0x5088F58
    static bool NotTrailer(uint8_t b);
    // static public Unity.Collections.Unicode/Rune get_ReplacementCharacter()
    // Offset: 0x5088F68
    static ::Unity::Collections::Unicode::Rune get_ReplacementCharacter();
    // static public Unity.Collections.ConversionError Utf8ToUcs(out Unity.Collections.Unicode/Rune rune, System.Byte* buffer, ref System.Int32 index, System.Int32 capacity)
    // Offset: 0x5088F70
    static ::Unity::Collections::ConversionError Utf8ToUcs(ByRef<::Unity::Collections::Unicode::Rune> rune, uint8_t* buffer, ByRef<int> index, int capacity);
    // static public Unity.Collections.ConversionError UcsToUtf16(System.Char* buffer, ref System.Int32 index, System.Int32 capacity, Unity.Collections.Unicode/Rune rune)
    // Offset: 0x508911C
    static ::Unity::Collections::ConversionError UcsToUtf16(::Il2CppChar* buffer, ByRef<int> index, int capacity, ::Unity::Collections::Unicode::Rune rune);
    // static public Unity.Collections.ConversionError Utf8ToUtf16(System.Byte* utf8Buffer, System.Int32 utf8Length, System.Char* utf16Buffer, out System.Int32 utf16Length, System.Int32 utf16Capacity)
    // Offset: 0x5089194
    static ::Unity::Collections::ConversionError Utf8ToUtf16(uint8_t* utf8Buffer, int utf8Length, ::Il2CppChar* utf16Buffer, ByRef<int> utf16Length, int utf16Capacity);
  }; // Unity.Collections.Unicode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::Unicode::IsValidCodePoint
// Il2CppName: IsValidCodePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&Unity::Collections::Unicode::IsValidCodePoint)> {
  static const MethodInfo* get() {
    static auto* codepoint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::Unicode), "IsValidCodePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codepoint});
  }
};
// Writing MetadataGetter for method: Unity::Collections::Unicode::NotTrailer
// Il2CppName: NotTrailer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint8_t)>(&Unity::Collections::Unicode::NotTrailer)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::Unicode), "NotTrailer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Unity::Collections::Unicode::get_ReplacementCharacter
// Il2CppName: get_ReplacementCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::Unicode::Rune (*)()>(&Unity::Collections::Unicode::get_ReplacementCharacter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::Unicode), "get_ReplacementCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::Unicode::Utf8ToUcs
// Il2CppName: Utf8ToUcs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::ConversionError (*)(ByRef<::Unity::Collections::Unicode::Rune>, uint8_t*, ByRef<int>, int)>(&Unity::Collections::Unicode::Utf8ToUcs)> {
  static const MethodInfo* get() {
    static auto* rune = &::il2cpp_utils::GetClassFromName("Unity.Collections", "Unicode/Rune")->this_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::Unicode), "Utf8ToUcs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rune, buffer, index, capacity});
  }
};
// Writing MetadataGetter for method: Unity::Collections::Unicode::UcsToUtf16
// Il2CppName: UcsToUtf16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::ConversionError (*)(::Il2CppChar*, ByRef<int>, int, ::Unity::Collections::Unicode::Rune)>(&Unity::Collections::Unicode::UcsToUtf16)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rune = &::il2cpp_utils::GetClassFromName("Unity.Collections", "Unicode/Rune")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::Unicode), "UcsToUtf16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, capacity, rune});
  }
};
// Writing MetadataGetter for method: Unity::Collections::Unicode::Utf8ToUtf16
// Il2CppName: Utf8ToUtf16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::ConversionError (*)(uint8_t*, int, ::Il2CppChar*, ByRef<int>, int)>(&Unity::Collections::Unicode::Utf8ToUtf16)> {
  static const MethodInfo* get() {
    static auto* utf8Buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* utf8Length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* utf16Buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* utf16Length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* utf16Capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::Unicode), "Utf8ToUtf16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{utf8Buffer, utf8Length, utf16Buffer, utf16Length, utf16Capacity});
  }
};
