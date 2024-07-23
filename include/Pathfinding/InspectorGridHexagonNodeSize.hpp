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
  // Forward declaring type: InspectorGridHexagonNodeSize
  struct InspectorGridHexagonNodeSize;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::InspectorGridHexagonNodeSize, "Pathfinding", "InspectorGridHexagonNodeSize");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.InspectorGridHexagonNodeSize
  // [TokenAttribute] Offset: FFFFFFFF
  struct InspectorGridHexagonNodeSize/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InspectorGridHexagonNodeSize
    constexpr InspectorGridHexagonNodeSize(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.InspectorGridHexagonNodeSize Width
    static constexpr const int Width = 0;
    // Get static field: static public Pathfinding.InspectorGridHexagonNodeSize Width
    static ::Pathfinding::InspectorGridHexagonNodeSize _get_Width();
    // Set static field: static public Pathfinding.InspectorGridHexagonNodeSize Width
    static void _set_Width(::Pathfinding::InspectorGridHexagonNodeSize value);
    // static field const value: static public Pathfinding.InspectorGridHexagonNodeSize Diameter
    static constexpr const int Diameter = 1;
    // Get static field: static public Pathfinding.InspectorGridHexagonNodeSize Diameter
    static ::Pathfinding::InspectorGridHexagonNodeSize _get_Diameter();
    // Set static field: static public Pathfinding.InspectorGridHexagonNodeSize Diameter
    static void _set_Diameter(::Pathfinding::InspectorGridHexagonNodeSize value);
    // static field const value: static public Pathfinding.InspectorGridHexagonNodeSize NodeSize
    static constexpr const int NodeSize = 2;
    // Get static field: static public Pathfinding.InspectorGridHexagonNodeSize NodeSize
    static ::Pathfinding::InspectorGridHexagonNodeSize _get_NodeSize();
    // Set static field: static public Pathfinding.InspectorGridHexagonNodeSize NodeSize
    static void _set_NodeSize(::Pathfinding::InspectorGridHexagonNodeSize value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.InspectorGridHexagonNodeSize
  #pragma pack(pop)
  static check_size<sizeof(InspectorGridHexagonNodeSize), 0 + sizeof(int)> __Pathfinding_InspectorGridHexagonNodeSizeSizeCheck;
  static_assert(sizeof(InspectorGridHexagonNodeSize) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"