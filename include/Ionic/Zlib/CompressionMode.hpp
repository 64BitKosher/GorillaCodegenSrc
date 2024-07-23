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
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Forward declaring type: CompressionMode
  struct CompressionMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Ionic::Zlib::CompressionMode, "Ionic.Zlib", "CompressionMode");
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Ionic.Zlib.CompressionMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct CompressionMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CompressionMode
    constexpr CompressionMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Ionic.Zlib.CompressionMode Compress
    static constexpr const int Compress = 0;
    // Get static field: static public Ionic.Zlib.CompressionMode Compress
    static ::Ionic::Zlib::CompressionMode _get_Compress();
    // Set static field: static public Ionic.Zlib.CompressionMode Compress
    static void _set_Compress(::Ionic::Zlib::CompressionMode value);
    // static field const value: static public Ionic.Zlib.CompressionMode Decompress
    static constexpr const int Decompress = 1;
    // Get static field: static public Ionic.Zlib.CompressionMode Decompress
    static ::Ionic::Zlib::CompressionMode _get_Decompress();
    // Set static field: static public Ionic.Zlib.CompressionMode Decompress
    static void _set_Decompress(::Ionic::Zlib::CompressionMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Ionic.Zlib.CompressionMode
  #pragma pack(pop)
  static check_size<sizeof(CompressionMode), 0 + sizeof(int)> __Ionic_Zlib_CompressionModeSizeCheck;
  static_assert(sizeof(CompressionMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
