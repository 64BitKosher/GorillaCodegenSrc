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
  // Forward declaring type: FastMemoryFlags
  struct FastMemoryFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FastMemoryFlags, "UnityEngine.Rendering", "FastMemoryFlags");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.FastMemoryFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct FastMemoryFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FastMemoryFlags
    constexpr FastMemoryFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.FastMemoryFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.FastMemoryFlags None
    static ::UnityEngine::Rendering::FastMemoryFlags _get_None();
    // Set static field: static public UnityEngine.Rendering.FastMemoryFlags None
    static void _set_None(::UnityEngine::Rendering::FastMemoryFlags value);
    // static field const value: static public UnityEngine.Rendering.FastMemoryFlags SpillTop
    static constexpr const int SpillTop = 1;
    // Get static field: static public UnityEngine.Rendering.FastMemoryFlags SpillTop
    static ::UnityEngine::Rendering::FastMemoryFlags _get_SpillTop();
    // Set static field: static public UnityEngine.Rendering.FastMemoryFlags SpillTop
    static void _set_SpillTop(::UnityEngine::Rendering::FastMemoryFlags value);
    // static field const value: static public UnityEngine.Rendering.FastMemoryFlags SpillBottom
    static constexpr const int SpillBottom = 2;
    // Get static field: static public UnityEngine.Rendering.FastMemoryFlags SpillBottom
    static ::UnityEngine::Rendering::FastMemoryFlags _get_SpillBottom();
    // Set static field: static public UnityEngine.Rendering.FastMemoryFlags SpillBottom
    static void _set_SpillBottom(::UnityEngine::Rendering::FastMemoryFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.FastMemoryFlags
  #pragma pack(pop)
  static check_size<sizeof(FastMemoryFlags), 0 + sizeof(int)> __UnityEngine_Rendering_FastMemoryFlagsSizeCheck;
  static_assert(sizeof(FastMemoryFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
