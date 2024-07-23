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
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: ZipEntryTimestamp
  struct ZipEntryTimestamp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::ZipEntryTimestamp, "Pathfinding.Ionic.Zip", "ZipEntryTimestamp");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.ZipEntryTimestamp
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ZipEntryTimestamp/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ZipEntryTimestamp
    constexpr ZipEntryTimestamp(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp None
    static constexpr const int None = 0;
    // Get static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp None
    static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp _get_None();
    // Set static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp None
    static void _set_None(::Pathfinding::Ionic::Zip::ZipEntryTimestamp value);
    // static field const value: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp DOS
    static constexpr const int DOS = 1;
    // Get static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp DOS
    static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp _get_DOS();
    // Set static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp DOS
    static void _set_DOS(::Pathfinding::Ionic::Zip::ZipEntryTimestamp value);
    // static field const value: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp Windows
    static constexpr const int Windows = 2;
    // Get static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp Windows
    static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp _get_Windows();
    // Set static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp Windows
    static void _set_Windows(::Pathfinding::Ionic::Zip::ZipEntryTimestamp value);
    // static field const value: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp Unix
    static constexpr const int Unix = 4;
    // Get static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp Unix
    static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp _get_Unix();
    // Set static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp Unix
    static void _set_Unix(::Pathfinding::Ionic::Zip::ZipEntryTimestamp value);
    // static field const value: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp InfoZip1
    static constexpr const int InfoZip1 = 8;
    // Get static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp InfoZip1
    static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp _get_InfoZip1();
    // Set static field: static public Pathfinding.Ionic.Zip.ZipEntryTimestamp InfoZip1
    static void _set_InfoZip1(::Pathfinding::Ionic::Zip::ZipEntryTimestamp value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zip.ZipEntryTimestamp
  #pragma pack(pop)
  static check_size<sizeof(ZipEntryTimestamp), 0 + sizeof(int)> __Pathfinding_Ionic_Zip_ZipEntryTimestampSizeCheck;
  static_assert(sizeof(ZipEntryTimestamp) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
