// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: TimeSpanFormat
  class TimeSpanFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::TimeSpanFormat);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeSpanFormat : public ::Il2CppObject {
    public:
    // Nested type: ::System::Globalization::TimeSpanFormat::Pattern
    struct Pattern;
    // Nested type: ::System::Globalization::TimeSpanFormat::FormatLiterals
    struct FormatLiterals;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Globalization.TimeSpanFormat/FormatLiterals
    // [TokenAttribute] Offset: FFFFFFFF
    struct FormatLiterals/*, public ::System::ValueType*/ {
      public:
      public:
      // System.String AppCompatLiteral
      // Size: 0x8
      // Offset: 0x0
      ::StringW AppCompatLiteral;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // System.Int32 dd
      // Size: 0x4
      // Offset: 0x8
      int dd;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 hh
      // Size: 0x4
      // Offset: 0xC
      int hh;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 mm
      // Size: 0x4
      // Offset: 0x10
      int mm;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 ss
      // Size: 0x4
      // Offset: 0x14
      int ss;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 ff
      // Size: 0x4
      // Offset: 0x18
      int ff;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: ff and: literals
      char __padding5[0x4] = {};
      // private System.String[] _literals
      // Size: 0x8
      // Offset: 0x20
      ::ArrayW<::StringW> literals;
      // Field size check
      static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
      public:
      // Creating value type constructor for type: FormatLiterals
      constexpr FormatLiterals(::StringW AppCompatLiteral_ = {}, int dd_ = {}, int hh_ = {}, int mm_ = {}, int ss_ = {}, int ff_ = {}, ::ArrayW<::StringW> literals_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr))) noexcept : AppCompatLiteral{AppCompatLiteral_}, dd{dd_}, hh{hh_}, mm{mm_}, ss{ss_}, ff{ff_}, literals{literals_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: System.String AppCompatLiteral
      [[deprecated("Use field access instead!")]] ::StringW& dyn_AppCompatLiteral();
      // Get instance field reference: System.Int32 dd
      [[deprecated("Use field access instead!")]] int& dyn_dd();
      // Get instance field reference: System.Int32 hh
      [[deprecated("Use field access instead!")]] int& dyn_hh();
      // Get instance field reference: System.Int32 mm
      [[deprecated("Use field access instead!")]] int& dyn_mm();
      // Get instance field reference: System.Int32 ss
      [[deprecated("Use field access instead!")]] int& dyn_ss();
      // Get instance field reference: System.Int32 ff
      [[deprecated("Use field access instead!")]] int& dyn_ff();
      // Get instance field reference: private System.String[] _literals
      [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__literals();
      // System.String get_Start()
      // Offset: 0x45F24DC
      ::StringW get_Start();
      // System.String get_DayHourSep()
      // Offset: 0x45F2504
      ::StringW get_DayHourSep();
      // System.String get_HourMinuteSep()
      // Offset: 0x45F2530
      ::StringW get_HourMinuteSep();
      // System.String get_MinuteSecondSep()
      // Offset: 0x45F255C
      ::StringW get_MinuteSecondSep();
      // System.String get_SecondFractionSep()
      // Offset: 0x45F2588
      ::StringW get_SecondFractionSep();
      // System.String get_End()
      // Offset: 0x45F25B4
      ::StringW get_End();
      // static System.Globalization.TimeSpanFormat/FormatLiterals InitInvariant(System.Boolean isNegative)
      // Offset: 0x45F2690
      static ::System::Globalization::TimeSpanFormat::FormatLiterals InitInvariant(bool isNegative);
      // System.Void Init(System.ReadOnlySpan`1<System.Char> format, System.Boolean useInvariantFieldLengths)
      // Offset: 0x45F2090
      void Init(::System::ReadOnlySpan_1<::Il2CppChar> format, bool useInvariantFieldLengths);
    }; // System.Globalization.TimeSpanFormat/FormatLiterals
    #pragma pack(pop)
    static check_size<sizeof(TimeSpanFormat::FormatLiterals), 32 + sizeof(::ArrayW<::StringW>)> __System_Globalization_TimeSpanFormat_FormatLiteralsSizeCheck;
    static_assert(sizeof(TimeSpanFormat::FormatLiterals) == 0x28);
    // Get static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals PositiveInvariantFormatLiterals
    static ::System::Globalization::TimeSpanFormat::FormatLiterals _get_PositiveInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals PositiveInvariantFormatLiterals
    static void _set_PositiveInvariantFormatLiterals(::System::Globalization::TimeSpanFormat::FormatLiterals value);
    // Get static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals NegativeInvariantFormatLiterals
    static ::System::Globalization::TimeSpanFormat::FormatLiterals _get_NegativeInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals NegativeInvariantFormatLiterals
    static void _set_NegativeInvariantFormatLiterals(::System::Globalization::TimeSpanFormat::FormatLiterals value);
    // static private System.Void AppendNonNegativeInt32(System.Text.StringBuilder sb, System.Int32 n, System.Int32 digits)
    // Offset: 0x45F0F8C
    static void AppendNonNegativeInt32(::System::Text::StringBuilder* sb, int n, int digits);
    // static System.String Format(System.TimeSpan value, System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x45F1084
    static ::StringW Format(::System::TimeSpan value, ::StringW format, ::System::IFormatProvider* formatProvider);
    // static System.Boolean TryFormat(System.TimeSpan value, System.Span`1<System.Char> destination, out System.Int32 charsWritten, System.ReadOnlySpan`1<System.Char> format, System.IFormatProvider formatProvider)
    // Offset: 0x45F13E4
    static bool TryFormat(::System::TimeSpan value, ::System::Span_1<::Il2CppChar> destination, ByRef<int> charsWritten, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::IFormatProvider* formatProvider);
    // static private System.Text.StringBuilder FormatToBuilder(System.TimeSpan value, System.ReadOnlySpan`1<System.Char> format, System.IFormatProvider formatProvider)
    // Offset: 0x45F113C
    static ::System::Text::StringBuilder* FormatToBuilder(::System::TimeSpan value, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::IFormatProvider* formatProvider);
    // static private System.Text.StringBuilder FormatStandard(System.TimeSpan value, System.Boolean isInvariant, System.ReadOnlySpan`1<System.Char> format, System.Globalization.TimeSpanFormat/Pattern pattern)
    // Offset: 0x45F1504
    static ::System::Text::StringBuilder* FormatStandard(::System::TimeSpan value, bool isInvariant, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::Globalization::TimeSpanFormat::Pattern pattern);
    // static private System.Text.StringBuilder FormatCustomized(System.TimeSpan value, System.ReadOnlySpan`1<System.Char> format, System.Globalization.DateTimeFormatInfo dtfi, System.Text.StringBuilder result)
    // Offset: 0x45F1994
    static ::System::Text::StringBuilder* FormatCustomized(::System::TimeSpan value, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Text::StringBuilder* result);
    // static private System.Void .cctor()
    // Offset: 0x45F25E0
    static void _cctor();
  }; // System.Globalization.TimeSpanFormat
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat::FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::AppendNonNegativeInt32
// Il2CppName: AppendNonNegativeInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int, int)>(&System::Globalization::TimeSpanFormat::AppendNonNegativeInt32)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "AppendNonNegativeInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, n, digits});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::TimeSpan, ::StringW, ::System::IFormatProvider*)>(&System::Globalization::TimeSpanFormat::Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::TryFormat
// Il2CppName: TryFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::TimeSpan, ::System::Span_1<::Il2CppChar>, ByRef<int>, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::IFormatProvider*)>(&System::Globalization::TimeSpanFormat::TryFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "TryFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destination, charsWritten, format, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::FormatToBuilder
// Il2CppName: FormatToBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::IFormatProvider*)>(&System::Globalization::TimeSpanFormat::FormatToBuilder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "FormatToBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::FormatStandard
// Il2CppName: FormatStandard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, bool, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::Globalization::TimeSpanFormat::Pattern)>(&System::Globalization::TimeSpanFormat::FormatStandard)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* isInvariant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/Pattern")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "FormatStandard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, isInvariant, format, pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::FormatCustomized
// Il2CppName: FormatCustomized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::Globalization::DateTimeFormatInfo*, ::System::Text::StringBuilder*)>(&System::Globalization::TimeSpanFormat::FormatCustomized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "FormatCustomized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, dtfi, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::TimeSpanFormat::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};