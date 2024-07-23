// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cysharp.Text.Utf16FormatSegment
#include "Cysharp/Text/Utf16FormatSegment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Buffers
namespace System::Buffers {
  // Forward declaring type: IBufferWriter`1<T>
  template<typename T>
  class IBufferWriter_1;
}
// Completed forward declares
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Forward declaring type: Utf16PreparedFormat`13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
  class Utf16PreparedFormat_13;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Cysharp::Text::Utf16PreparedFormat_13, "Cysharp.Text", "Utf16PreparedFormat`13");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // WARNING Size may be invalid!
  // Autogenerated type: Cysharp.Text.Utf16PreparedFormat`13
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
  class Utf16PreparedFormat_13 : public ::Il2CppObject {
    public:
    public:
    // private readonly System.String <FormatString>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::StringW FormatString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Int32 <MinSize>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int MinSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly Cysharp.Text.Utf16FormatSegment[] segments
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Cysharp::Text::Utf16FormatSegment> segments;
    // Field size check
    static_assert(sizeof(::ArrayW<::Cysharp::Text::Utf16FormatSegment>) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.String <FormatString>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$FormatString$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16PreparedFormat_13::dyn_$FormatString$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<FormatString>k__BackingField"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 <MinSize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$MinSize$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16PreparedFormat_13::dyn_$MinSize$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<MinSize>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Cysharp.Text.Utf16FormatSegment[] segments
    [[deprecated("Use field access instead!")]] ::ArrayW<::Cysharp::Text::Utf16FormatSegment>& dyn_segments() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16PreparedFormat_13::dyn_segments");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "segments"))->offset;
      return *reinterpret_cast<::ArrayW<::Cysharp::Text::Utf16FormatSegment>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.String get_FormatString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_FormatString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16PreparedFormat_13::get_FormatString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_FormatString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Int32 get_MinSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_MinSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16PreparedFormat_13::get_MinSize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_MinSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.String format)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Utf16PreparedFormat_13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>* New_ctor(::StringW format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16PreparedFormat_13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Utf16PreparedFormat_13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>*, creationType>(format)));
    }
    // public System.String Format(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW Format(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16PreparedFormat_13::Format");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Format", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(arg3), ::il2cpp_utils::ExtractType(arg4), ::il2cpp_utils::ExtractType(arg5), ::il2cpp_utils::ExtractType(arg6), ::il2cpp_utils::ExtractType(arg7), ::il2cpp_utils::ExtractType(arg8), ::il2cpp_utils::ExtractType(arg9), ::il2cpp_utils::ExtractType(arg10), ::il2cpp_utils::ExtractType(arg11), ::il2cpp_utils::ExtractType(arg12), ::il2cpp_utils::ExtractType(arg13)})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    // public System.Void FormatTo(ref TBufferWriter sb, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TBufferWriter>
    void FormatTo(ByRef<TBufferWriter> sb, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TBufferWriter>, ::System::Buffers::IBufferWriter_1<::Il2CppChar>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16PreparedFormat_13::FormatTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FormatTo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBufferWriter>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sb), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(arg3), ::il2cpp_utils::ExtractType(arg4), ::il2cpp_utils::ExtractType(arg5), ::il2cpp_utils::ExtractType(arg6), ::il2cpp_utils::ExtractType(arg7), ::il2cpp_utils::ExtractType(arg8), ::il2cpp_utils::ExtractType(arg9), ::il2cpp_utils::ExtractType(arg10), ::il2cpp_utils::ExtractType(arg11), ::il2cpp_utils::ExtractType(arg12), ::il2cpp_utils::ExtractType(arg13)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBufferWriter>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, byref(sb), arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
  }; // Cysharp.Text.Utf16PreparedFormat`13
  // Could not write size check! Type: Cysharp.Text.Utf16PreparedFormat`13 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
