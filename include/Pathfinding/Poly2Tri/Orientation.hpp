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
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: Orientation
  struct Orientation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Poly2Tri::Orientation, "Pathfinding.Poly2Tri", "Orientation");
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Poly2Tri.Orientation
  // [TokenAttribute] Offset: FFFFFFFF
  struct Orientation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Orientation
    constexpr Orientation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Poly2Tri.Orientation CW
    static constexpr const int CW = 0;
    // Get static field: static public Pathfinding.Poly2Tri.Orientation CW
    static ::Pathfinding::Poly2Tri::Orientation _get_CW();
    // Set static field: static public Pathfinding.Poly2Tri.Orientation CW
    static void _set_CW(::Pathfinding::Poly2Tri::Orientation value);
    // static field const value: static public Pathfinding.Poly2Tri.Orientation CCW
    static constexpr const int CCW = 1;
    // Get static field: static public Pathfinding.Poly2Tri.Orientation CCW
    static ::Pathfinding::Poly2Tri::Orientation _get_CCW();
    // Set static field: static public Pathfinding.Poly2Tri.Orientation CCW
    static void _set_CCW(::Pathfinding::Poly2Tri::Orientation value);
    // static field const value: static public Pathfinding.Poly2Tri.Orientation Collinear
    static constexpr const int Collinear = 2;
    // Get static field: static public Pathfinding.Poly2Tri.Orientation Collinear
    static ::Pathfinding::Poly2Tri::Orientation _get_Collinear();
    // Set static field: static public Pathfinding.Poly2Tri.Orientation Collinear
    static void _set_Collinear(::Pathfinding::Poly2Tri::Orientation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Poly2Tri.Orientation
  #pragma pack(pop)
  static check_size<sizeof(Orientation), 0 + sizeof(int)> __Pathfinding_Poly2Tri_OrientationSizeCheck;
  static_assert(sizeof(Orientation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
