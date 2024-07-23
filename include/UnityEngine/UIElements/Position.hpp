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
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Position
  struct Position;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Position, "UnityEngine.UIElements", "Position");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Position
  // [TokenAttribute] Offset: FFFFFFFF
  struct Position/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Position
    constexpr Position(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.Position Relative
    static constexpr const int Relative = 0;
    // Get static field: static public UnityEngine.UIElements.Position Relative
    static ::UnityEngine::UIElements::Position _get_Relative();
    // Set static field: static public UnityEngine.UIElements.Position Relative
    static void _set_Relative(::UnityEngine::UIElements::Position value);
    // static field const value: static public UnityEngine.UIElements.Position Absolute
    static constexpr const int Absolute = 1;
    // Get static field: static public UnityEngine.UIElements.Position Absolute
    static ::UnityEngine::UIElements::Position _get_Absolute();
    // Set static field: static public UnityEngine.UIElements.Position Absolute
    static void _set_Absolute(::UnityEngine::UIElements::Position value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.Position
  #pragma pack(pop)
  static check_size<sizeof(Position), 0 + sizeof(int)> __UnityEngine_UIElements_PositionSizeCheck;
  static_assert(sizeof(Position) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
