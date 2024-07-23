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
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ScriptableRenderPassInput
  struct ScriptableRenderPassInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput, "UnityEngine.Rendering.Universal", "ScriptableRenderPassInput");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ScriptableRenderPassInput
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ScriptableRenderPassInput/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ScriptableRenderPassInput
    constexpr ScriptableRenderPassInput(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput None
    static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput _get_None();
    // Set static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput None
    static void _set_None(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);
    // static field const value: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Depth
    static constexpr const int Depth = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Depth
    static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput _get_Depth();
    // Set static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Depth
    static void _set_Depth(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);
    // static field const value: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Normal
    static constexpr const int Normal = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Normal
    static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput _get_Normal();
    // Set static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Normal
    static void _set_Normal(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);
    // static field const value: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Color
    static constexpr const int Color = 4;
    // Get static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Color
    static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput _get_Color();
    // Set static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Color
    static void _set_Color(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);
    // static field const value: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Motion
    static constexpr const int Motion = 8;
    // Get static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Motion
    static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput _get_Motion();
    // Set static field: static public UnityEngine.Rendering.Universal.ScriptableRenderPassInput Motion
    static void _set_Motion(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.ScriptableRenderPassInput
  #pragma pack(pop)
  static check_size<sizeof(ScriptableRenderPassInput), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ScriptableRenderPassInputSizeCheck;
  static_assert(sizeof(ScriptableRenderPassInput) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
