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
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: FontStyles
  struct FontStyles;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontStyles, "UnityEngine.TextCore.Text", "FontStyles");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.FontStyles
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct FontStyles/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FontStyles
    constexpr FontStyles(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles Normal
    static ::UnityEngine::TextCore::Text::FontStyles _get_Normal();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles Normal
    static void _set_Normal(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles Bold
    static constexpr const int Bold = 1;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles Bold
    static ::UnityEngine::TextCore::Text::FontStyles _get_Bold();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles Bold
    static void _set_Bold(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles Italic
    static constexpr const int Italic = 2;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles Italic
    static ::UnityEngine::TextCore::Text::FontStyles _get_Italic();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles Italic
    static void _set_Italic(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles Underline
    static constexpr const int Underline = 4;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles Underline
    static ::UnityEngine::TextCore::Text::FontStyles _get_Underline();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles Underline
    static void _set_Underline(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles LowerCase
    static constexpr const int LowerCase = 8;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles LowerCase
    static ::UnityEngine::TextCore::Text::FontStyles _get_LowerCase();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles LowerCase
    static void _set_LowerCase(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles UpperCase
    static constexpr const int UpperCase = 16;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles UpperCase
    static ::UnityEngine::TextCore::Text::FontStyles _get_UpperCase();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles UpperCase
    static void _set_UpperCase(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles SmallCaps
    static constexpr const int SmallCaps = 32;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles SmallCaps
    static ::UnityEngine::TextCore::Text::FontStyles _get_SmallCaps();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles SmallCaps
    static void _set_SmallCaps(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles Strikethrough
    static constexpr const int Strikethrough = 64;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles Strikethrough
    static ::UnityEngine::TextCore::Text::FontStyles _get_Strikethrough();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles Strikethrough
    static void _set_Strikethrough(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles Superscript
    static constexpr const int Superscript = 128;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles Superscript
    static ::UnityEngine::TextCore::Text::FontStyles _get_Superscript();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles Superscript
    static void _set_Superscript(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles Subscript
    static constexpr const int Subscript = 256;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles Subscript
    static ::UnityEngine::TextCore::Text::FontStyles _get_Subscript();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles Subscript
    static void _set_Subscript(::UnityEngine::TextCore::Text::FontStyles value);
    // static field const value: static public UnityEngine.TextCore.Text.FontStyles Highlight
    static constexpr const int Highlight = 512;
    // Get static field: static public UnityEngine.TextCore.Text.FontStyles Highlight
    static ::UnityEngine::TextCore::Text::FontStyles _get_Highlight();
    // Set static field: static public UnityEngine.TextCore.Text.FontStyles Highlight
    static void _set_Highlight(::UnityEngine::TextCore::Text::FontStyles value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextCore.Text.FontStyles
  #pragma pack(pop)
  static check_size<sizeof(FontStyles), 0 + sizeof(int)> __UnityEngine_TextCore_Text_FontStylesSizeCheck;
  static_assert(sizeof(FontStyles) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
