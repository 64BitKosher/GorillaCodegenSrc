// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: Endianness
  struct Endianness;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Endianness, "System.Net", "Endianness");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Endianness
  // [TokenAttribute] Offset: FFFFFFFF
  struct Endianness/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Endianness
    constexpr Endianness(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Endianness Network
    static constexpr const int Network = 0;
    // Get static field: static public System.Net.Endianness Network
    static ::System::Net::Endianness _get_Network();
    // Set static field: static public System.Net.Endianness Network
    static void _set_Network(::System::Net::Endianness value);
    // static field const value: static public System.Net.Endianness Native
    static constexpr const int Native = 16;
    // Get static field: static public System.Net.Endianness Native
    static ::System::Net::Endianness _get_Native();
    // Set static field: static public System.Net.Endianness Native
    static void _set_Native(::System::Net::Endianness value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.Endianness
  #pragma pack(pop)
  static check_size<sizeof(Endianness), 0 + sizeof(int)> __System_Net_EndiannessSizeCheck;
  static_assert(sizeof(Endianness) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
