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
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: CompressionMode
  struct CompressionMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CompressionMode, "System.IO.Compression", "CompressionMode");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.CompressionMode
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
    // static field const value: static public System.IO.Compression.CompressionMode Decompress
    static constexpr const int Decompress = 0;
    // Get static field: static public System.IO.Compression.CompressionMode Decompress
    static ::System::IO::Compression::CompressionMode _get_Decompress();
    // Set static field: static public System.IO.Compression.CompressionMode Decompress
    static void _set_Decompress(::System::IO::Compression::CompressionMode value);
    // static field const value: static public System.IO.Compression.CompressionMode Compress
    static constexpr const int Compress = 1;
    // Get static field: static public System.IO.Compression.CompressionMode Compress
    static ::System::IO::Compression::CompressionMode _get_Compress();
    // Set static field: static public System.IO.Compression.CompressionMode Compress
    static void _set_Compress(::System::IO::Compression::CompressionMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.IO.Compression.CompressionMode
  #pragma pack(pop)
  static check_size<sizeof(CompressionMode), 0 + sizeof(int)> __System_IO_Compression_CompressionModeSizeCheck;
  static_assert(sizeof(CompressionMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
