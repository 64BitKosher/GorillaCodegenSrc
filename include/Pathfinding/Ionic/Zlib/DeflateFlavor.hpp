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
  // Forward declaring type: DeflateFlavor
  struct DeflateFlavor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::DeflateFlavor, "Pathfinding.Ionic.Zlib", "DeflateFlavor");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.DeflateFlavor
  // [TokenAttribute] Offset: FFFFFFFF
  struct DeflateFlavor/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DeflateFlavor
    constexpr DeflateFlavor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zlib.DeflateFlavor Store
    static constexpr const int Store = 0;
    // Get static field: static public Pathfinding.Ionic.Zlib.DeflateFlavor Store
    static ::Pathfinding::Ionic::Zlib::DeflateFlavor _get_Store();
    // Set static field: static public Pathfinding.Ionic.Zlib.DeflateFlavor Store
    static void _set_Store(::Pathfinding::Ionic::Zlib::DeflateFlavor value);
    // static field const value: static public Pathfinding.Ionic.Zlib.DeflateFlavor Fast
    static constexpr const int Fast = 1;
    // Get static field: static public Pathfinding.Ionic.Zlib.DeflateFlavor Fast
    static ::Pathfinding::Ionic::Zlib::DeflateFlavor _get_Fast();
    // Set static field: static public Pathfinding.Ionic.Zlib.DeflateFlavor Fast
    static void _set_Fast(::Pathfinding::Ionic::Zlib::DeflateFlavor value);
    // static field const value: static public Pathfinding.Ionic.Zlib.DeflateFlavor Slow
    static constexpr const int Slow = 2;
    // Get static field: static public Pathfinding.Ionic.Zlib.DeflateFlavor Slow
    static ::Pathfinding::Ionic::Zlib::DeflateFlavor _get_Slow();
    // Set static field: static public Pathfinding.Ionic.Zlib.DeflateFlavor Slow
    static void _set_Slow(::Pathfinding::Ionic::Zlib::DeflateFlavor value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zlib.DeflateFlavor
  #pragma pack(pop)
  static check_size<sizeof(DeflateFlavor), 0 + sizeof(int)> __Pathfinding_Ionic_Zlib_DeflateFlavorSizeCheck;
  static_assert(sizeof(DeflateFlavor) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
