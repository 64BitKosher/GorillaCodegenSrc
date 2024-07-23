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
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Heuristic
  struct Heuristic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Heuristic, "Pathfinding", "Heuristic");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Heuristic
  // [TokenAttribute] Offset: FFFFFFFF
  struct Heuristic/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Heuristic
    constexpr Heuristic(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Heuristic Manhattan
    static constexpr const int Manhattan = 0;
    // Get static field: static public Pathfinding.Heuristic Manhattan
    static ::Pathfinding::Heuristic _get_Manhattan();
    // Set static field: static public Pathfinding.Heuristic Manhattan
    static void _set_Manhattan(::Pathfinding::Heuristic value);
    // static field const value: static public Pathfinding.Heuristic DiagonalManhattan
    static constexpr const int DiagonalManhattan = 1;
    // Get static field: static public Pathfinding.Heuristic DiagonalManhattan
    static ::Pathfinding::Heuristic _get_DiagonalManhattan();
    // Set static field: static public Pathfinding.Heuristic DiagonalManhattan
    static void _set_DiagonalManhattan(::Pathfinding::Heuristic value);
    // static field const value: static public Pathfinding.Heuristic Euclidean
    static constexpr const int Euclidean = 2;
    // Get static field: static public Pathfinding.Heuristic Euclidean
    static ::Pathfinding::Heuristic _get_Euclidean();
    // Set static field: static public Pathfinding.Heuristic Euclidean
    static void _set_Euclidean(::Pathfinding::Heuristic value);
    // static field const value: static public Pathfinding.Heuristic None
    static constexpr const int None = 3;
    // Get static field: static public Pathfinding.Heuristic None
    static ::Pathfinding::Heuristic _get_None();
    // Set static field: static public Pathfinding.Heuristic None
    static void _set_None(::Pathfinding::Heuristic value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Heuristic
  #pragma pack(pop)
  static check_size<sizeof(Heuristic), 0 + sizeof(int)> __Pathfinding_HeuristicSizeCheck;
  static_assert(sizeof(Heuristic) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
