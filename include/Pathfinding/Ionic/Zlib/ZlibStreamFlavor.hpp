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
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: ZlibStreamFlavor
  struct ZlibStreamFlavor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::ZlibStreamFlavor, "Pathfinding.Ionic.Zlib", "ZlibStreamFlavor");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.ZlibStreamFlavor
  // [TokenAttribute] Offset: FFFFFFFF
  struct ZlibStreamFlavor/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ZlibStreamFlavor
    constexpr ZlibStreamFlavor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor ZLIB
    static constexpr const int ZLIB = 1950;
    // Get static field: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor ZLIB
    static ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor _get_ZLIB();
    // Set static field: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor ZLIB
    static void _set_ZLIB(::Pathfinding::Ionic::Zlib::ZlibStreamFlavor value);
    // static field const value: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor DEFLATE
    static constexpr const int DEFLATE = 1951;
    // Get static field: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor DEFLATE
    static ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor _get_DEFLATE();
    // Set static field: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor DEFLATE
    static void _set_DEFLATE(::Pathfinding::Ionic::Zlib::ZlibStreamFlavor value);
    // static field const value: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor GZIP
    static constexpr const int GZIP = 1952;
    // Get static field: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor GZIP
    static ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor _get_GZIP();
    // Set static field: static public Pathfinding.Ionic.Zlib.ZlibStreamFlavor GZIP
    static void _set_GZIP(::Pathfinding::Ionic::Zlib::ZlibStreamFlavor value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zlib.ZlibStreamFlavor
  #pragma pack(pop)
  static check_size<sizeof(ZlibStreamFlavor), 0 + sizeof(int)> __Pathfinding_Ionic_Zlib_ZlibStreamFlavorSizeCheck;
  static_assert(sizeof(ZlibStreamFlavor) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
