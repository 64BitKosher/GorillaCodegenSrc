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
  // Forward declaring type: TextAlignment
  struct TextAlignment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextAlignment, "UnityEngine.TextCore.Text", "TextAlignment");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.TextAlignment
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextAlignment/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TextAlignment
    constexpr TextAlignment(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment TopLeft
    static constexpr const int TopLeft = 257;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment TopLeft
    static ::UnityEngine::TextCore::Text::TextAlignment _get_TopLeft();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment TopLeft
    static void _set_TopLeft(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment TopCenter
    static constexpr const int TopCenter = 258;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment TopCenter
    static ::UnityEngine::TextCore::Text::TextAlignment _get_TopCenter();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment TopCenter
    static void _set_TopCenter(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment TopRight
    static constexpr const int TopRight = 260;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment TopRight
    static ::UnityEngine::TextCore::Text::TextAlignment _get_TopRight();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment TopRight
    static void _set_TopRight(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment TopJustified
    static constexpr const int TopJustified = 264;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment TopJustified
    static ::UnityEngine::TextCore::Text::TextAlignment _get_TopJustified();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment TopJustified
    static void _set_TopJustified(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment TopFlush
    static constexpr const int TopFlush = 272;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment TopFlush
    static ::UnityEngine::TextCore::Text::TextAlignment _get_TopFlush();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment TopFlush
    static void _set_TopFlush(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment TopGeoAligned
    static constexpr const int TopGeoAligned = 288;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment TopGeoAligned
    static ::UnityEngine::TextCore::Text::TextAlignment _get_TopGeoAligned();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment TopGeoAligned
    static void _set_TopGeoAligned(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MiddleLeft
    static constexpr const int MiddleLeft = 513;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleLeft
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MiddleLeft();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleLeft
    static void _set_MiddleLeft(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MiddleCenter
    static constexpr const int MiddleCenter = 514;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleCenter
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MiddleCenter();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleCenter
    static void _set_MiddleCenter(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MiddleRight
    static constexpr const int MiddleRight = 516;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleRight
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MiddleRight();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleRight
    static void _set_MiddleRight(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MiddleJustified
    static constexpr const int MiddleJustified = 520;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleJustified
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MiddleJustified();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleJustified
    static void _set_MiddleJustified(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MiddleFlush
    static constexpr const int MiddleFlush = 528;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleFlush
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MiddleFlush();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleFlush
    static void _set_MiddleFlush(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MiddleGeoAligned
    static constexpr const int MiddleGeoAligned = 544;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleGeoAligned
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MiddleGeoAligned();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MiddleGeoAligned
    static void _set_MiddleGeoAligned(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BottomLeft
    static constexpr const int BottomLeft = 1025;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BottomLeft
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BottomLeft();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BottomLeft
    static void _set_BottomLeft(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BottomCenter
    static constexpr const int BottomCenter = 1026;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BottomCenter
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BottomCenter();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BottomCenter
    static void _set_BottomCenter(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BottomRight
    static constexpr const int BottomRight = 1028;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BottomRight
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BottomRight();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BottomRight
    static void _set_BottomRight(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BottomJustified
    static constexpr const int BottomJustified = 1032;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BottomJustified
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BottomJustified();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BottomJustified
    static void _set_BottomJustified(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BottomFlush
    static constexpr const int BottomFlush = 1040;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BottomFlush
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BottomFlush();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BottomFlush
    static void _set_BottomFlush(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BottomGeoAligned
    static constexpr const int BottomGeoAligned = 1056;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BottomGeoAligned
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BottomGeoAligned();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BottomGeoAligned
    static void _set_BottomGeoAligned(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BaselineLeft
    static constexpr const int BaselineLeft = 2049;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineLeft
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BaselineLeft();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineLeft
    static void _set_BaselineLeft(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BaselineCenter
    static constexpr const int BaselineCenter = 2050;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineCenter
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BaselineCenter();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineCenter
    static void _set_BaselineCenter(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BaselineRight
    static constexpr const int BaselineRight = 2052;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineRight
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BaselineRight();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineRight
    static void _set_BaselineRight(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BaselineJustified
    static constexpr const int BaselineJustified = 2056;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineJustified
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BaselineJustified();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineJustified
    static void _set_BaselineJustified(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BaselineFlush
    static constexpr const int BaselineFlush = 2064;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineFlush
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BaselineFlush();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineFlush
    static void _set_BaselineFlush(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment BaselineGeoAligned
    static constexpr const int BaselineGeoAligned = 2080;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineGeoAligned
    static ::UnityEngine::TextCore::Text::TextAlignment _get_BaselineGeoAligned();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment BaselineGeoAligned
    static void _set_BaselineGeoAligned(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MidlineLeft
    static constexpr const int MidlineLeft = 4097;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineLeft
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MidlineLeft();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineLeft
    static void _set_MidlineLeft(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MidlineCenter
    static constexpr const int MidlineCenter = 4098;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineCenter
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MidlineCenter();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineCenter
    static void _set_MidlineCenter(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MidlineRight
    static constexpr const int MidlineRight = 4100;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineRight
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MidlineRight();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineRight
    static void _set_MidlineRight(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MidlineJustified
    static constexpr const int MidlineJustified = 4104;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineJustified
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MidlineJustified();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineJustified
    static void _set_MidlineJustified(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MidlineFlush
    static constexpr const int MidlineFlush = 4112;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineFlush
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MidlineFlush();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineFlush
    static void _set_MidlineFlush(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment MidlineGeoAligned
    static constexpr const int MidlineGeoAligned = 4128;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineGeoAligned
    static ::UnityEngine::TextCore::Text::TextAlignment _get_MidlineGeoAligned();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment MidlineGeoAligned
    static void _set_MidlineGeoAligned(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment CaplineLeft
    static constexpr const int CaplineLeft = 8193;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineLeft
    static ::UnityEngine::TextCore::Text::TextAlignment _get_CaplineLeft();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineLeft
    static void _set_CaplineLeft(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment CaplineCenter
    static constexpr const int CaplineCenter = 8194;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineCenter
    static ::UnityEngine::TextCore::Text::TextAlignment _get_CaplineCenter();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineCenter
    static void _set_CaplineCenter(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment CaplineRight
    static constexpr const int CaplineRight = 8196;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineRight
    static ::UnityEngine::TextCore::Text::TextAlignment _get_CaplineRight();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineRight
    static void _set_CaplineRight(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment CaplineJustified
    static constexpr const int CaplineJustified = 8200;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineJustified
    static ::UnityEngine::TextCore::Text::TextAlignment _get_CaplineJustified();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineJustified
    static void _set_CaplineJustified(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment CaplineFlush
    static constexpr const int CaplineFlush = 8208;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineFlush
    static ::UnityEngine::TextCore::Text::TextAlignment _get_CaplineFlush();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineFlush
    static void _set_CaplineFlush(::UnityEngine::TextCore::Text::TextAlignment value);
    // static field const value: static public UnityEngine.TextCore.Text.TextAlignment CaplineGeoAligned
    static constexpr const int CaplineGeoAligned = 8224;
    // Get static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineGeoAligned
    static ::UnityEngine::TextCore::Text::TextAlignment _get_CaplineGeoAligned();
    // Set static field: static public UnityEngine.TextCore.Text.TextAlignment CaplineGeoAligned
    static void _set_CaplineGeoAligned(::UnityEngine::TextCore::Text::TextAlignment value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextCore.Text.TextAlignment
  #pragma pack(pop)
  static check_size<sizeof(TextAlignment), 0 + sizeof(int)> __UnityEngine_TextCore_Text_TextAlignmentSizeCheck;
  static_assert(sizeof(TextAlignment) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"