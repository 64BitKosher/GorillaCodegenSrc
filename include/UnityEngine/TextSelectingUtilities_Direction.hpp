// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextSelectingUtilities
#include "UnityEngine/TextSelectingUtilities.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextSelectingUtilities::Direction, "UnityEngine", "TextSelectingUtilities/Direction");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextSelectingUtilities/Direction
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextSelectingUtilities::Direction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Direction
    constexpr Direction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextSelectingUtilities/Direction Forward
    static constexpr const int Forward = 0;
    // Get static field: static public UnityEngine.TextSelectingUtilities/Direction Forward
    static ::UnityEngine::TextSelectingUtilities::Direction _get_Forward();
    // Set static field: static public UnityEngine.TextSelectingUtilities/Direction Forward
    static void _set_Forward(::UnityEngine::TextSelectingUtilities::Direction value);
    // static field const value: static public UnityEngine.TextSelectingUtilities/Direction Backward
    static constexpr const int Backward = 1;
    // Get static field: static public UnityEngine.TextSelectingUtilities/Direction Backward
    static ::UnityEngine::TextSelectingUtilities::Direction _get_Backward();
    // Set static field: static public UnityEngine.TextSelectingUtilities/Direction Backward
    static void _set_Backward(::UnityEngine::TextSelectingUtilities::Direction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextSelectingUtilities/Direction
  #pragma pack(pop)
  static check_size<sizeof(TextSelectingUtilities::Direction), 0 + sizeof(int)> __UnityEngine_TextSelectingUtilities_DirectionSizeCheck;
  static_assert(sizeof(TextSelectingUtilities::Direction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
