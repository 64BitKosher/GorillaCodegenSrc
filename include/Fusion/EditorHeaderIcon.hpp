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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: EditorHeaderIcon
  struct EditorHeaderIcon;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::EditorHeaderIcon, "Fusion", "EditorHeaderIcon");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.EditorHeaderIcon
  // [TokenAttribute] Offset: FFFFFFFF
  struct EditorHeaderIcon/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EditorHeaderIcon
    constexpr EditorHeaderIcon(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.EditorHeaderIcon None
    static constexpr const int None = 0;
    // Get static field: static public Fusion.EditorHeaderIcon None
    static ::Fusion::EditorHeaderIcon _get_None();
    // Set static field: static public Fusion.EditorHeaderIcon None
    static void _set_None(::Fusion::EditorHeaderIcon value);
    // static field const value: static public Fusion.EditorHeaderIcon FusionBlue
    static constexpr const int FusionBlue = 1;
    // Get static field: static public Fusion.EditorHeaderIcon FusionBlue
    static ::Fusion::EditorHeaderIcon _get_FusionBlue();
    // Set static field: static public Fusion.EditorHeaderIcon FusionBlue
    static void _set_FusionBlue(::Fusion::EditorHeaderIcon value);
    // static field const value: static public Fusion.EditorHeaderIcon FusionGreen
    static constexpr const int FusionGreen = 2;
    // Get static field: static public Fusion.EditorHeaderIcon FusionGreen
    static ::Fusion::EditorHeaderIcon _get_FusionGreen();
    // Set static field: static public Fusion.EditorHeaderIcon FusionGreen
    static void _set_FusionGreen(::Fusion::EditorHeaderIcon value);
    // static field const value: static public Fusion.EditorHeaderIcon FusionGray
    static constexpr const int FusionGray = 3;
    // Get static field: static public Fusion.EditorHeaderIcon FusionGray
    static ::Fusion::EditorHeaderIcon _get_FusionGray();
    // Set static field: static public Fusion.EditorHeaderIcon FusionGray
    static void _set_FusionGray(::Fusion::EditorHeaderIcon value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.EditorHeaderIcon
  #pragma pack(pop)
  static check_size<sizeof(EditorHeaderIcon), 0 + sizeof(int)> __Fusion_EditorHeaderIconSizeCheck;
  static_assert(sizeof(EditorHeaderIcon) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
