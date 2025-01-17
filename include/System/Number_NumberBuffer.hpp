// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Number
#include "System/Number.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Number::NumberBuffer, "System", "Number/NumberBuffer");
// Type namespace: System
namespace System {
  // Size: 0x7A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Number/NumberBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsByRefLikeAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  struct Number::NumberBuffer/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::System::Number::NumberBuffer::DigitsAndNullTerminator
    struct DigitsAndNullTerminator;
    // Size: 0x0
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Number/NumberBuffer/DigitsAndNullTerminator
    // [TokenAttribute] Offset: FFFFFFFF
    struct DigitsAndNullTerminator/*, public ::System::ValueType*/ {
      public:
      // Creating value type constructor for type: DigitsAndNullTerminator
      constexpr DigitsAndNullTerminator() noexcept {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
    }; // System.Number/NumberBuffer/DigitsAndNullTerminator
    #pragma pack(pop)
    public:
    // public System.Int32 precision
    // Size: 0x4
    // Offset: 0x0
    int precision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 scale
    // Size: 0x4
    // Offset: 0x4
    int scale;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _sign
    // Size: 0x4
    // Offset: 0x8
    int sign;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Number/NumberBuffer/DigitsAndNullTerminator _digits
    // Size: 0x1
    // Offset: 0xC
    ::System::Number::NumberBuffer::DigitsAndNullTerminator digits;
    // Field size check
    static_assert(sizeof(::System::Number::NumberBuffer::DigitsAndNullTerminator) == 0x1);
    // Padding between fields: digits and: allDigits
    char __padding3[0x65] = {};
    // private System.Char* _allDigits
    // Size: 0x8
    // Offset: 0x72
    ::Il2CppChar* allDigits;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    public:
    // Creating value type constructor for type: NumberBuffer
    constexpr NumberBuffer(int precision_ = {}, int scale_ = {}, int sign_ = {}, ::System::Number::NumberBuffer::DigitsAndNullTerminator digits_ = {}, ::Il2CppChar* allDigits_ = {}) noexcept : precision{precision_}, scale{scale_}, sign{sign_}, digits{digits_}, allDigits{allDigits_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 precision
    [[deprecated("Use field access instead!")]] int& dyn_precision();
    // Get instance field reference: public System.Int32 scale
    [[deprecated("Use field access instead!")]] int& dyn_scale();
    // Get instance field reference: private System.Int32 _sign
    [[deprecated("Use field access instead!")]] int& dyn__sign();
    // Get instance field reference: private System.Number/NumberBuffer/DigitsAndNullTerminator _digits
    [[deprecated("Use field access instead!")]] ::System::Number::NumberBuffer::DigitsAndNullTerminator& dyn__digits();
    // Get instance field reference: private System.Char* _allDigits
    [[deprecated("Use field access instead!")]] ::Il2CppChar*& dyn__allDigits();
    // public System.Boolean get_sign()
    // Offset: 0x466A670
    bool get_sign();
    // public System.Void set_sign(System.Boolean value)
    // Offset: 0x466A680
    void set_sign(bool value);
    // public System.Char* get_digits()
    // Offset: 0x466A68C
    ::Il2CppChar* get_digits();
  }; // System.Number/NumberBuffer
  #pragma pack(pop)
  static check_size<sizeof(Number::NumberBuffer), 114 + sizeof(::Il2CppChar*)> __System_Number_NumberBufferSizeCheck;
  static_assert(sizeof(Number::NumberBuffer) == 0x7A);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Number::NumberBuffer::DigitsAndNullTerminator, "System", "Number/NumberBuffer/DigitsAndNullTerminator");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Number::NumberBuffer::get_sign
// Il2CppName: get_sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Number::NumberBuffer::*)()>(&System::Number::NumberBuffer::get_sign)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Number::NumberBuffer), "get_sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Number::NumberBuffer::set_sign
// Il2CppName: set_sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Number::NumberBuffer::*)(bool)>(&System::Number::NumberBuffer::set_sign)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Number::NumberBuffer), "set_sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Number::NumberBuffer::get_digits
// Il2CppName: get_digits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar* (System::Number::NumberBuffer::*)()>(&System::Number::NumberBuffer::get_digits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Number::NumberBuffer), "get_digits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
