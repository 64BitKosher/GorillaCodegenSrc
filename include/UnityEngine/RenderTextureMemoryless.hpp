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
  // Forward declaring type: RenderTextureMemoryless
  struct RenderTextureMemoryless;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureMemoryless, "UnityEngine", "RenderTextureMemoryless");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RenderTextureMemoryless
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RenderTextureMemoryless/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderTextureMemoryless
    constexpr RenderTextureMemoryless(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RenderTextureMemoryless None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.RenderTextureMemoryless None
    static ::UnityEngine::RenderTextureMemoryless _get_None();
    // Set static field: static public UnityEngine.RenderTextureMemoryless None
    static void _set_None(::UnityEngine::RenderTextureMemoryless value);
    // static field const value: static public UnityEngine.RenderTextureMemoryless Color
    static constexpr const int Color = 1;
    // Get static field: static public UnityEngine.RenderTextureMemoryless Color
    static ::UnityEngine::RenderTextureMemoryless _get_Color();
    // Set static field: static public UnityEngine.RenderTextureMemoryless Color
    static void _set_Color(::UnityEngine::RenderTextureMemoryless value);
    // static field const value: static public UnityEngine.RenderTextureMemoryless Depth
    static constexpr const int Depth = 2;
    // Get static field: static public UnityEngine.RenderTextureMemoryless Depth
    static ::UnityEngine::RenderTextureMemoryless _get_Depth();
    // Set static field: static public UnityEngine.RenderTextureMemoryless Depth
    static void _set_Depth(::UnityEngine::RenderTextureMemoryless value);
    // static field const value: static public UnityEngine.RenderTextureMemoryless MSAA
    static constexpr const int MSAA = 4;
    // Get static field: static public UnityEngine.RenderTextureMemoryless MSAA
    static ::UnityEngine::RenderTextureMemoryless _get_MSAA();
    // Set static field: static public UnityEngine.RenderTextureMemoryless MSAA
    static void _set_MSAA(::UnityEngine::RenderTextureMemoryless value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.RenderTextureMemoryless
  #pragma pack(pop)
  static check_size<sizeof(RenderTextureMemoryless), 0 + sizeof(int)> __UnityEngine_RenderTextureMemorylessSizeCheck;
  static_assert(sizeof(RenderTextureMemoryless) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
