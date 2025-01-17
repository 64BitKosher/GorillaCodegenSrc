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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: FormatSwizzle
  struct FormatSwizzle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FormatSwizzle, "UnityEngine.Rendering", "FormatSwizzle");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.FormatSwizzle
  // [TokenAttribute] Offset: FFFFFFFF
  struct FormatSwizzle/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FormatSwizzle
    constexpr FormatSwizzle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleR
    static constexpr const int FormatSwizzleR = 0;
    // Get static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleR
    static ::UnityEngine::Rendering::FormatSwizzle _get_FormatSwizzleR();
    // Set static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleR
    static void _set_FormatSwizzleR(::UnityEngine::Rendering::FormatSwizzle value);
    // static field const value: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleG
    static constexpr const int FormatSwizzleG = 1;
    // Get static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleG
    static ::UnityEngine::Rendering::FormatSwizzle _get_FormatSwizzleG();
    // Set static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleG
    static void _set_FormatSwizzleG(::UnityEngine::Rendering::FormatSwizzle value);
    // static field const value: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleB
    static constexpr const int FormatSwizzleB = 2;
    // Get static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleB
    static ::UnityEngine::Rendering::FormatSwizzle _get_FormatSwizzleB();
    // Set static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleB
    static void _set_FormatSwizzleB(::UnityEngine::Rendering::FormatSwizzle value);
    // static field const value: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleA
    static constexpr const int FormatSwizzleA = 3;
    // Get static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleA
    static ::UnityEngine::Rendering::FormatSwizzle _get_FormatSwizzleA();
    // Set static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzleA
    static void _set_FormatSwizzleA(::UnityEngine::Rendering::FormatSwizzle value);
    // static field const value: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzle0
    static constexpr const int FormatSwizzle0 = 4;
    // Get static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzle0
    static ::UnityEngine::Rendering::FormatSwizzle _get_FormatSwizzle0();
    // Set static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzle0
    static void _set_FormatSwizzle0(::UnityEngine::Rendering::FormatSwizzle value);
    // static field const value: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzle1
    static constexpr const int FormatSwizzle1 = 5;
    // Get static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzle1
    static ::UnityEngine::Rendering::FormatSwizzle _get_FormatSwizzle1();
    // Set static field: static public UnityEngine.Rendering.FormatSwizzle FormatSwizzle1
    static void _set_FormatSwizzle1(::UnityEngine::Rendering::FormatSwizzle value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.FormatSwizzle
  #pragma pack(pop)
  static check_size<sizeof(FormatSwizzle), 0 + sizeof(int)> __UnityEngine_Rendering_FormatSwizzleSizeCheck;
  static_assert(sizeof(FormatSwizzle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
