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
  // Forward declaring type: GraphDebugMode
  struct GraphDebugMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GraphDebugMode, "Pathfinding", "GraphDebugMode");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GraphDebugMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct GraphDebugMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GraphDebugMode
    constexpr GraphDebugMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.GraphDebugMode SolidColor
    static constexpr const int SolidColor = 0;
    // Get static field: static public Pathfinding.GraphDebugMode SolidColor
    static ::Pathfinding::GraphDebugMode _get_SolidColor();
    // Set static field: static public Pathfinding.GraphDebugMode SolidColor
    static void _set_SolidColor(::Pathfinding::GraphDebugMode value);
    // static field const value: static public Pathfinding.GraphDebugMode G
    static constexpr const int G = 1;
    // Get static field: static public Pathfinding.GraphDebugMode G
    static ::Pathfinding::GraphDebugMode _get_G();
    // Set static field: static public Pathfinding.GraphDebugMode G
    static void _set_G(::Pathfinding::GraphDebugMode value);
    // static field const value: static public Pathfinding.GraphDebugMode H
    static constexpr const int H = 2;
    // Get static field: static public Pathfinding.GraphDebugMode H
    static ::Pathfinding::GraphDebugMode _get_H();
    // Set static field: static public Pathfinding.GraphDebugMode H
    static void _set_H(::Pathfinding::GraphDebugMode value);
    // static field const value: static public Pathfinding.GraphDebugMode F
    static constexpr const int F = 3;
    // Get static field: static public Pathfinding.GraphDebugMode F
    static ::Pathfinding::GraphDebugMode _get_F();
    // Set static field: static public Pathfinding.GraphDebugMode F
    static void _set_F(::Pathfinding::GraphDebugMode value);
    // static field const value: static public Pathfinding.GraphDebugMode Penalty
    static constexpr const int Penalty = 4;
    // Get static field: static public Pathfinding.GraphDebugMode Penalty
    static ::Pathfinding::GraphDebugMode _get_Penalty();
    // Set static field: static public Pathfinding.GraphDebugMode Penalty
    static void _set_Penalty(::Pathfinding::GraphDebugMode value);
    // static field const value: static public Pathfinding.GraphDebugMode Areas
    static constexpr const int Areas = 5;
    // Get static field: static public Pathfinding.GraphDebugMode Areas
    static ::Pathfinding::GraphDebugMode _get_Areas();
    // Set static field: static public Pathfinding.GraphDebugMode Areas
    static void _set_Areas(::Pathfinding::GraphDebugMode value);
    // static field const value: static public Pathfinding.GraphDebugMode Tags
    static constexpr const int Tags = 6;
    // Get static field: static public Pathfinding.GraphDebugMode Tags
    static ::Pathfinding::GraphDebugMode _get_Tags();
    // Set static field: static public Pathfinding.GraphDebugMode Tags
    static void _set_Tags(::Pathfinding::GraphDebugMode value);
    // static field const value: static public Pathfinding.GraphDebugMode HierarchicalNode
    static constexpr const int HierarchicalNode = 7;
    // Get static field: static public Pathfinding.GraphDebugMode HierarchicalNode
    static ::Pathfinding::GraphDebugMode _get_HierarchicalNode();
    // Set static field: static public Pathfinding.GraphDebugMode HierarchicalNode
    static void _set_HierarchicalNode(::Pathfinding::GraphDebugMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.GraphDebugMode
  #pragma pack(pop)
  static check_size<sizeof(GraphDebugMode), 0 + sizeof(int)> __Pathfinding_GraphDebugModeSizeCheck;
  static_assert(sizeof(GraphDebugMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
