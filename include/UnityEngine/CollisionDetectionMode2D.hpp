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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CollisionDetectionMode2D
  struct CollisionDetectionMode2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CollisionDetectionMode2D, "UnityEngine", "CollisionDetectionMode2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CollisionDetectionMode2D
  // [TokenAttribute] Offset: FFFFFFFF
  struct CollisionDetectionMode2D/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CollisionDetectionMode2D
    constexpr CollisionDetectionMode2D(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.CollisionDetectionMode2D None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.CollisionDetectionMode2D None
    static ::UnityEngine::CollisionDetectionMode2D _get_None();
    // Set static field: static public UnityEngine.CollisionDetectionMode2D None
    static void _set_None(::UnityEngine::CollisionDetectionMode2D value);
    // static field const value: static public UnityEngine.CollisionDetectionMode2D Discrete
    static constexpr const int Discrete = 0;
    // Get static field: static public UnityEngine.CollisionDetectionMode2D Discrete
    static ::UnityEngine::CollisionDetectionMode2D _get_Discrete();
    // Set static field: static public UnityEngine.CollisionDetectionMode2D Discrete
    static void _set_Discrete(::UnityEngine::CollisionDetectionMode2D value);
    // static field const value: static public UnityEngine.CollisionDetectionMode2D Continuous
    static constexpr const int Continuous = 1;
    // Get static field: static public UnityEngine.CollisionDetectionMode2D Continuous
    static ::UnityEngine::CollisionDetectionMode2D _get_Continuous();
    // Set static field: static public UnityEngine.CollisionDetectionMode2D Continuous
    static void _set_Continuous(::UnityEngine::CollisionDetectionMode2D value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.CollisionDetectionMode2D
  #pragma pack(pop)
  static check_size<sizeof(CollisionDetectionMode2D), 0 + sizeof(int)> __UnityEngine_CollisionDetectionMode2DSizeCheck;
  static_assert(sizeof(CollisionDetectionMode2D) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
