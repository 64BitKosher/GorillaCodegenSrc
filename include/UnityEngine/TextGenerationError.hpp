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
  // Forward declaring type: TextGenerationError
  struct TextGenerationError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGenerationError, "UnityEngine", "TextGenerationError");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextGenerationError
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TextGenerationError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TextGenerationError
    constexpr TextGenerationError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextGenerationError None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.TextGenerationError None
    static ::UnityEngine::TextGenerationError _get_None();
    // Set static field: static public UnityEngine.TextGenerationError None
    static void _set_None(::UnityEngine::TextGenerationError value);
    // static field const value: static public UnityEngine.TextGenerationError CustomSizeOnNonDynamicFont
    static constexpr const int CustomSizeOnNonDynamicFont = 1;
    // Get static field: static public UnityEngine.TextGenerationError CustomSizeOnNonDynamicFont
    static ::UnityEngine::TextGenerationError _get_CustomSizeOnNonDynamicFont();
    // Set static field: static public UnityEngine.TextGenerationError CustomSizeOnNonDynamicFont
    static void _set_CustomSizeOnNonDynamicFont(::UnityEngine::TextGenerationError value);
    // static field const value: static public UnityEngine.TextGenerationError CustomStyleOnNonDynamicFont
    static constexpr const int CustomStyleOnNonDynamicFont = 2;
    // Get static field: static public UnityEngine.TextGenerationError CustomStyleOnNonDynamicFont
    static ::UnityEngine::TextGenerationError _get_CustomStyleOnNonDynamicFont();
    // Set static field: static public UnityEngine.TextGenerationError CustomStyleOnNonDynamicFont
    static void _set_CustomStyleOnNonDynamicFont(::UnityEngine::TextGenerationError value);
    // static field const value: static public UnityEngine.TextGenerationError NoFont
    static constexpr const int NoFont = 4;
    // Get static field: static public UnityEngine.TextGenerationError NoFont
    static ::UnityEngine::TextGenerationError _get_NoFont();
    // Set static field: static public UnityEngine.TextGenerationError NoFont
    static void _set_NoFont(::UnityEngine::TextGenerationError value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextGenerationError
  #pragma pack(pop)
  static check_size<sizeof(TextGenerationError), 0 + sizeof(int)> __UnityEngine_TextGenerationErrorSizeCheck;
  static_assert(sizeof(TextGenerationError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
