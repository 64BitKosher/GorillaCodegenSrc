// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Buffers::Text
namespace System::Buffers::Text {
  // Forward declaring type: NumberBuffer
  struct NumberBuffer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
}
// Completed forward declares
// Type namespace: System.Buffers.Text
namespace System::Buffers::Text {
  // Forward declaring type: Number
  class Number;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Buffers::Text::Number);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::Text::Number*, "System.Buffers.Text", "Number");
// Type namespace: System.Buffers.Text
namespace System::Buffers::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Buffers.Text.Number
  // [TokenAttribute] Offset: FFFFFFFF
  class Number : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.UInt64[] s_rgval64Power10
    static ::ArrayW<uint64_t> _get_s_rgval64Power10();
    // Set static field: static private readonly System.UInt64[] s_rgval64Power10
    static void _set_s_rgval64Power10(::ArrayW<uint64_t> value);
    // Get static field: static private readonly System.SByte[] s_rgexp64Power10
    static ::ArrayW<int8_t> _get_s_rgexp64Power10();
    // Set static field: static private readonly System.SByte[] s_rgexp64Power10
    static void _set_s_rgexp64Power10(::ArrayW<int8_t> value);
    // Get static field: static private readonly System.UInt64[] s_rgval64Power10By16
    static ::ArrayW<uint64_t> _get_s_rgval64Power10By16();
    // Set static field: static private readonly System.UInt64[] s_rgval64Power10By16
    static void _set_s_rgval64Power10By16(::ArrayW<uint64_t> value);
    // Get static field: static private readonly System.Int16[] s_rgexp64Power10By16
    static ::ArrayW<int16_t> _get_s_rgexp64Power10By16();
    // Set static field: static private readonly System.Int16[] s_rgexp64Power10By16
    static void _set_s_rgexp64Power10By16(::ArrayW<int16_t> value);
    // static System.Boolean NumberBufferToDouble(ref System.Buffers.Text.NumberBuffer number, out System.Double value)
    // Offset: 0x463A340
    static bool NumberBufferToDouble(ByRef<::System::Buffers::Text::NumberBuffer> number, ByRef<double> value);
    // static public System.Boolean NumberBufferToDecimal(ref System.Buffers.Text.NumberBuffer number, ref System.Decimal value)
    // Offset: 0x463A90C
    static bool NumberBufferToDecimal(ByRef<::System::Buffers::Text::NumberBuffer> number, ByRef<::System::Decimal> value);
    // static public System.Void DecimalToNumber(System.Decimal value, ref System.Buffers.Text.NumberBuffer number)
    // Offset: 0x463AB10
    static void DecimalToNumber(::System::Decimal value, ByRef<::System::Buffers::Text::NumberBuffer> number);
    // static private System.UInt32 DigitsToInt(System.ReadOnlySpan`1<System.Byte> digits, System.Int32 count)
    // Offset: 0x463AD28
    static uint DigitsToInt(::System::ReadOnlySpan_1<uint8_t> digits, int count);
    // static private System.UInt64 Mul32x32To64(System.UInt32 a, System.UInt32 b)
    // Offset: 0x463ADEC
    static uint64_t Mul32x32To64(uint a, uint b);
    // static private System.UInt64 Mul64Lossy(System.UInt64 a, System.UInt64 b, ref System.Int32 pexp)
    // Offset: 0x463ADF4
    static uint64_t Mul64Lossy(uint64_t a, uint64_t b, ByRef<int> pexp);
    // static private System.Int32 abs(System.Int32 value)
    // Offset: 0x463AE8C
    static int abs(int value);
    // static private System.Double NumberToDouble(ref System.Buffers.Text.NumberBuffer number)
    // Offset: 0x463A3CC
    static double NumberToDouble(ByRef<::System::Buffers::Text::NumberBuffer> number);
    // static public System.Void RoundNumber(ref System.Buffers.Text.NumberBuffer number, System.Int32 pos)
    // Offset: 0x463AF08
    static void RoundNumber(ByRef<::System::Buffers::Text::NumberBuffer> number, int pos);
    // static private System.Void .cctor()
    // Offset: 0x463B028
    static void _cctor();
  }; // System.Buffers.Text.Number
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Buffers::Text::Number::NumberBufferToDouble
// Il2CppName: NumberBufferToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Buffers::Text::NumberBuffer>, ByRef<double>)>(&System::Buffers::Text::Number::NumberBufferToDouble)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System.Buffers.Text", "NumberBuffer")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "NumberBufferToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number, value});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::NumberBufferToDecimal
// Il2CppName: NumberBufferToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Buffers::Text::NumberBuffer>, ByRef<::System::Decimal>)>(&System::Buffers::Text::Number::NumberBufferToDecimal)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System.Buffers.Text", "NumberBuffer")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "NumberBufferToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number, value});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::DecimalToNumber
// Il2CppName: DecimalToNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Decimal, ByRef<::System::Buffers::Text::NumberBuffer>)>(&System::Buffers::Text::Number::DecimalToNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* number = &::il2cpp_utils::GetClassFromName("System.Buffers.Text", "NumberBuffer")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "DecimalToNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, number});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::DigitsToInt
// Il2CppName: DigitsToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::System::ReadOnlySpan_1<uint8_t>, int)>(&System::Buffers::Text::Number::DigitsToInt)> {
  static const MethodInfo* get() {
    static auto* digits = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "DigitsToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digits, count});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::Mul32x32To64
// Il2CppName: Mul32x32To64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint, uint)>(&System::Buffers::Text::Number::Mul32x32To64)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "Mul32x32To64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::Mul64Lossy
// Il2CppName: Mul64Lossy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, ByRef<int>)>(&System::Buffers::Text::Number::Mul64Lossy)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pexp = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "Mul64Lossy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, pexp});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::abs
// Il2CppName: abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Buffers::Text::Number::abs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::NumberToDouble
// Il2CppName: NumberToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(ByRef<::System::Buffers::Text::NumberBuffer>)>(&System::Buffers::Text::Number::NumberToDouble)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System.Buffers.Text", "NumberBuffer")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "NumberToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::RoundNumber
// Il2CppName: RoundNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Buffers::Text::NumberBuffer>, int)>(&System::Buffers::Text::Number::RoundNumber)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System.Buffers.Text", "NumberBuffer")->this_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), "RoundNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number, pos});
  }
};
// Writing MetadataGetter for method: System::Buffers::Text::Number::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Buffers::Text::Number::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Text::Number*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
