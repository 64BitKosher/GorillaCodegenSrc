// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.TimeSpanParse
#include "System/Globalization/TimeSpanParse.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Globalization.TimeSpanParse/TTT
#include "System/Globalization/TimeSpanParse_TTT.hpp"
// Including type: System.ReadOnlySpan`1
#include "System/ReadOnlySpan_1.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::TimeSpanToken, "System.Globalization", "TimeSpanParse/TimeSpanToken");
// Type namespace: System.Globalization
namespace System::Globalization {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.TimeSpanParse/TimeSpanToken
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsByRefLikeAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  struct TimeSpanParse::TimeSpanToken/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Globalization.TimeSpanParse/TTT _ttt
    // Size: 0x1
    // Offset: 0x0
    ::System::Globalization::TimeSpanParse::TTT ttt;
    // Field size check
    static_assert(sizeof(::System::Globalization::TimeSpanParse::TTT) == 0x1);
    // System.Int32 _num
    // Size: 0x4
    // Offset: 0x4
    int num;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _zeroes
    // Size: 0x4
    // Offset: 0x8
    int zeroes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.ReadOnlySpan`1<System.Char> _sep
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::ReadOnlySpan_1<::Il2CppChar> sep;
    public:
    // Creating value type constructor for type: TimeSpanToken
    constexpr TimeSpanToken(::System::Globalization::TimeSpanParse::TTT ttt_ = {}, int num_ = {}, int zeroes_ = {}, ::System::ReadOnlySpan_1<::Il2CppChar> sep_ = {}) noexcept : ttt{ttt_}, num{num_}, zeroes{zeroes_}, sep{sep_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Globalization.TimeSpanParse/TTT _ttt
    [[deprecated("Use field access instead!")]] ::System::Globalization::TimeSpanParse::TTT& dyn__ttt();
    // Get instance field reference: System.Int32 _num
    [[deprecated("Use field access instead!")]] int& dyn__num();
    // Get instance field reference: System.Int32 _zeroes
    [[deprecated("Use field access instead!")]] int& dyn__zeroes();
    // Get instance field reference: System.ReadOnlySpan`1<System.Char> _sep
    [[deprecated("Use field access instead!")]] ::System::ReadOnlySpan_1<::Il2CppChar>& dyn__sep();
    // public System.Void .ctor(System.Globalization.TimeSpanParse/TTT type)
    // Offset: 0x45F7DC4
    TimeSpanToken(::System::Globalization::TimeSpanParse::TTT type);
    // public System.Void .ctor(System.Int32 number)
    // Offset: 0x45F5C04
    TimeSpanToken(int number);
    // public System.Void .ctor(System.Int32 number, System.Int32 leadingZeroes)
    // Offset: 0x45F7D9C
    TimeSpanToken(int number, int leadingZeroes);
    // public System.Void .ctor(System.Globalization.TimeSpanParse/TTT type, System.Int32 number, System.Int32 leadingZeroes, System.ReadOnlySpan`1<System.Char> separator)
    // Offset: 0x45F7DD4
    // ABORTED: conflicts with another method.  TimeSpanToken(::System::Globalization::TimeSpanParse::TTT type, int number, int leadingZeroes, ::System::ReadOnlySpan_1<::Il2CppChar> separator);
    // public System.Boolean IsInvalidFraction()
    // Offset: 0x45F29D8
    bool IsInvalidFraction();
  }; // System.Globalization.TimeSpanParse/TimeSpanToken
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanToken::TimeSpanToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanToken::TimeSpanToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanToken::TimeSpanToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanToken::TimeSpanToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanToken::IsInvalidFraction
// Il2CppName: IsInvalidFraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanToken::*)()>(&System::Globalization::TimeSpanParse::TimeSpanToken::IsInvalidFraction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanToken), "IsInvalidFraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};