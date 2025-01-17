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
  // Forward declaring type: ColliderType
  struct ColliderType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::ColliderType, "Pathfinding", "ColliderType");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.ColliderType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ColliderType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ColliderType
    constexpr ColliderType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.ColliderType Sphere
    static constexpr const int Sphere = 0;
    // Get static field: static public Pathfinding.ColliderType Sphere
    static ::Pathfinding::ColliderType _get_Sphere();
    // Set static field: static public Pathfinding.ColliderType Sphere
    static void _set_Sphere(::Pathfinding::ColliderType value);
    // static field const value: static public Pathfinding.ColliderType Capsule
    static constexpr const int Capsule = 1;
    // Get static field: static public Pathfinding.ColliderType Capsule
    static ::Pathfinding::ColliderType _get_Capsule();
    // Set static field: static public Pathfinding.ColliderType Capsule
    static void _set_Capsule(::Pathfinding::ColliderType value);
    // static field const value: static public Pathfinding.ColliderType Ray
    static constexpr const int Ray = 2;
    // Get static field: static public Pathfinding.ColliderType Ray
    static ::Pathfinding::ColliderType _get_Ray();
    // Set static field: static public Pathfinding.ColliderType Ray
    static void _set_Ray(::Pathfinding::ColliderType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.ColliderType
  #pragma pack(pop)
  static check_size<sizeof(ColliderType), 0 + sizeof(int)> __Pathfinding_ColliderTypeSizeCheck;
  static_assert(sizeof(ColliderType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
