// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Buffers.Text.Utf8Formatter
#include "System/Buffers/Text/Utf8Formatter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::Text::Utf8Formatter::DecomposedGuid, "System.Buffers.Text", "Utf8Formatter/DecomposedGuid");
// Type namespace: System.Buffers.Text
namespace System::Buffers::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.Buffers.Text.Utf8Formatter/DecomposedGuid
  // [TokenAttribute] Offset: FFFFFFFF
  struct Utf8Formatter::DecomposedGuid/*, public ::System::ValueType*/ {
    public:
    public:
    // Creating union for fields at offset: 0x0
    union {
      // public System.Guid Guid
      // Size: 0x10
      // Offset: 0x0
      ::System::Guid Guid;
      // Field size check
      static_assert(sizeof(::System::Guid) == 0x10);
      // public System.Byte Byte00
      // Size: 0x1
      // Offset: 0x0
      uint8_t Byte00;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
    };
    // public System.Byte Byte01
    // Size: 0x1
    // Offset: 0x1
    uint8_t Byte01;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte02
    // Size: 0x1
    // Offset: 0x2
    uint8_t Byte02;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte03
    // Size: 0x1
    // Offset: 0x3
    uint8_t Byte03;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte04
    // Size: 0x1
    // Offset: 0x4
    uint8_t Byte04;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte05
    // Size: 0x1
    // Offset: 0x5
    uint8_t Byte05;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte06
    // Size: 0x1
    // Offset: 0x6
    uint8_t Byte06;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte07
    // Size: 0x1
    // Offset: 0x7
    uint8_t Byte07;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte08
    // Size: 0x1
    // Offset: 0x8
    uint8_t Byte08;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte09
    // Size: 0x1
    // Offset: 0x9
    uint8_t Byte09;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte10
    // Size: 0x1
    // Offset: 0xA
    uint8_t Byte10;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte11
    // Size: 0x1
    // Offset: 0xB
    uint8_t Byte11;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte12
    // Size: 0x1
    // Offset: 0xC
    uint8_t Byte12;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte13
    // Size: 0x1
    // Offset: 0xD
    uint8_t Byte13;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte14
    // Size: 0x1
    // Offset: 0xE
    uint8_t Byte14;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Byte15
    // Size: 0x1
    // Offset: 0xF
    uint8_t Byte15;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: DecomposedGuid
    constexpr DecomposedGuid(::System::Guid Guid_ = {}, uint8_t Byte01_ = {}, uint8_t Byte02_ = {}, uint8_t Byte03_ = {}, uint8_t Byte04_ = {}, uint8_t Byte05_ = {}, uint8_t Byte06_ = {}, uint8_t Byte07_ = {}, uint8_t Byte08_ = {}, uint8_t Byte09_ = {}, uint8_t Byte10_ = {}, uint8_t Byte11_ = {}, uint8_t Byte12_ = {}, uint8_t Byte13_ = {}, uint8_t Byte14_ = {}, uint8_t Byte15_ = {}) noexcept : Guid{Guid_}, Byte01{Byte01_}, Byte02{Byte02_}, Byte03{Byte03_}, Byte04{Byte04_}, Byte05{Byte05_}, Byte06{Byte06_}, Byte07{Byte07_}, Byte08{Byte08_}, Byte09{Byte09_}, Byte10{Byte10_}, Byte11{Byte11_}, Byte12{Byte12_}, Byte13{Byte13_}, Byte14{Byte14_}, Byte15{Byte15_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Guid Guid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_Guid();
    // Get instance field reference: public System.Byte Byte00
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte00();
    // Get instance field reference: public System.Byte Byte01
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte01();
    // Get instance field reference: public System.Byte Byte02
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte02();
    // Get instance field reference: public System.Byte Byte03
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte03();
    // Get instance field reference: public System.Byte Byte04
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte04();
    // Get instance field reference: public System.Byte Byte05
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte05();
    // Get instance field reference: public System.Byte Byte06
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte06();
    // Get instance field reference: public System.Byte Byte07
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte07();
    // Get instance field reference: public System.Byte Byte08
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte08();
    // Get instance field reference: public System.Byte Byte09
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte09();
    // Get instance field reference: public System.Byte Byte10
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte10();
    // Get instance field reference: public System.Byte Byte11
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte11();
    // Get instance field reference: public System.Byte Byte12
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte12();
    // Get instance field reference: public System.Byte Byte13
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte13();
    // Get instance field reference: public System.Byte Byte14
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte14();
    // Get instance field reference: public System.Byte Byte15
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Byte15();
  }; // System.Buffers.Text.Utf8Formatter/DecomposedGuid
  #pragma pack(pop)
  static check_size<sizeof(Utf8Formatter::DecomposedGuid), 15 + sizeof(uint8_t)> __System_Buffers_Text_Utf8Formatter_DecomposedGuidSizeCheck;
  static_assert(sizeof(Utf8Formatter::DecomposedGuid) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"