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
  // Forward declaring type: OpenGLESVersion
  struct OpenGLESVersion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OpenGLESVersion, "UnityEngine.Rendering", "OpenGLESVersion");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.OpenGLESVersion
  // [TokenAttribute] Offset: FFFFFFFF
  struct OpenGLESVersion/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OpenGLESVersion
    constexpr OpenGLESVersion(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.OpenGLESVersion None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.OpenGLESVersion None
    static ::UnityEngine::Rendering::OpenGLESVersion _get_None();
    // Set static field: static public UnityEngine.Rendering.OpenGLESVersion None
    static void _set_None(::UnityEngine::Rendering::OpenGLESVersion value);
    // static field const value: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES20
    static constexpr const int OpenGLES20 = 1;
    // Get static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES20
    static ::UnityEngine::Rendering::OpenGLESVersion _get_OpenGLES20();
    // Set static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES20
    static void _set_OpenGLES20(::UnityEngine::Rendering::OpenGLESVersion value);
    // static field const value: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES30
    static constexpr const int OpenGLES30 = 2;
    // Get static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES30
    static ::UnityEngine::Rendering::OpenGLESVersion _get_OpenGLES30();
    // Set static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES30
    static void _set_OpenGLES30(::UnityEngine::Rendering::OpenGLESVersion value);
    // static field const value: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES31
    static constexpr const int OpenGLES31 = 3;
    // Get static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES31
    static ::UnityEngine::Rendering::OpenGLESVersion _get_OpenGLES31();
    // Set static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES31
    static void _set_OpenGLES31(::UnityEngine::Rendering::OpenGLESVersion value);
    // static field const value: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES31AEP
    static constexpr const int OpenGLES31AEP = 4;
    // Get static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES31AEP
    static ::UnityEngine::Rendering::OpenGLESVersion _get_OpenGLES31AEP();
    // Set static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES31AEP
    static void _set_OpenGLES31AEP(::UnityEngine::Rendering::OpenGLESVersion value);
    // static field const value: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES32
    static constexpr const int OpenGLES32 = 5;
    // Get static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES32
    static ::UnityEngine::Rendering::OpenGLESVersion _get_OpenGLES32();
    // Set static field: static public UnityEngine.Rendering.OpenGLESVersion OpenGLES32
    static void _set_OpenGLES32(::UnityEngine::Rendering::OpenGLESVersion value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.OpenGLESVersion
  #pragma pack(pop)
  static check_size<sizeof(OpenGLESVersion), 0 + sizeof(int)> __UnityEngine_Rendering_OpenGLESVersionSizeCheck;
  static_assert(sizeof(OpenGLESVersion) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
