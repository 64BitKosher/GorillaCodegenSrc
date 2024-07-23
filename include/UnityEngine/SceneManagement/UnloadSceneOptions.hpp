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
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: UnloadSceneOptions
  struct UnloadSceneOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::UnloadSceneOptions, "UnityEngine.SceneManagement", "UnloadSceneOptions");
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SceneManagement.UnloadSceneOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct UnloadSceneOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UnloadSceneOptions
    constexpr UnloadSceneOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.SceneManagement.UnloadSceneOptions None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.SceneManagement.UnloadSceneOptions None
    static ::UnityEngine::SceneManagement::UnloadSceneOptions _get_None();
    // Set static field: static public UnityEngine.SceneManagement.UnloadSceneOptions None
    static void _set_None(::UnityEngine::SceneManagement::UnloadSceneOptions value);
    // static field const value: static public UnityEngine.SceneManagement.UnloadSceneOptions UnloadAllEmbeddedSceneObjects
    static constexpr const int UnloadAllEmbeddedSceneObjects = 1;
    // Get static field: static public UnityEngine.SceneManagement.UnloadSceneOptions UnloadAllEmbeddedSceneObjects
    static ::UnityEngine::SceneManagement::UnloadSceneOptions _get_UnloadAllEmbeddedSceneObjects();
    // Set static field: static public UnityEngine.SceneManagement.UnloadSceneOptions UnloadAllEmbeddedSceneObjects
    static void _set_UnloadAllEmbeddedSceneObjects(::UnityEngine::SceneManagement::UnloadSceneOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.SceneManagement.UnloadSceneOptions
  #pragma pack(pop)
  static check_size<sizeof(UnloadSceneOptions), 0 + sizeof(int)> __UnityEngine_SceneManagement_UnloadSceneOptionsSizeCheck;
  static_assert(sizeof(UnloadSceneOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
