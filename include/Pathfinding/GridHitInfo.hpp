// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GridNodeBase
  class GridNodeBase;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GridHitInfo
  struct GridHitInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GridHitInfo, "Pathfinding", "GridHitInfo");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.GridHitInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct GridHitInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public Pathfinding.GridNodeBase node
    // Size: 0x8
    // Offset: 0x0
    ::Pathfinding::GridNodeBase* node;
    // Field size check
    static_assert(sizeof(::Pathfinding::GridNodeBase*) == 0x8);
    // public System.Int32 direction
    // Size: 0x4
    // Offset: 0x8
    int direction;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GridHitInfo
    constexpr GridHitInfo(::Pathfinding::GridNodeBase* node_ = {}, int direction_ = {}) noexcept : node{node_}, direction{direction_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Pathfinding.GridNodeBase node
    [[deprecated("Use field access instead!")]] ::Pathfinding::GridNodeBase*& dyn_node();
    // Get instance field reference: public System.Int32 direction
    [[deprecated("Use field access instead!")]] int& dyn_direction();
  }; // Pathfinding.GridHitInfo
  #pragma pack(pop)
  static check_size<sizeof(GridHitInfo), 8 + sizeof(int)> __Pathfinding_GridHitInfoSizeCheck;
  static_assert(sizeof(GridHitInfo) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"