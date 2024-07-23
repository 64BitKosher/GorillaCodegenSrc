// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugUI
#include "UnityEngine/Rendering/DebugUI.hpp"
// Including type: UnityEngine.Rendering.DebugUI/Widget
#include "UnityEngine/Rendering/DebugUI_Widget.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI::MessageBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI::MessageBox*, "UnityEngine.Rendering", "DebugUI/MessageBox");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DebugUI/MessageBox
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUI::MessageBox : public ::UnityEngine::Rendering::DebugUI::Widget {
    public:
    // Nested type: ::UnityEngine::Rendering::DebugUI::MessageBox::Style
    struct Style;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.DebugUI/MessageBox/Style
    // [TokenAttribute] Offset: FFFFFFFF
    struct Style/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Style
      constexpr Style(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Info
      static constexpr const int Info = 0;
      // Get static field: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Info
      static ::UnityEngine::Rendering::DebugUI::MessageBox::Style _get_Info();
      // Set static field: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Info
      static void _set_Info(::UnityEngine::Rendering::DebugUI::MessageBox::Style value);
      // static field const value: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Warning
      static constexpr const int Warning = 1;
      // Get static field: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Warning
      static ::UnityEngine::Rendering::DebugUI::MessageBox::Style _get_Warning();
      // Set static field: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Warning
      static void _set_Warning(::UnityEngine::Rendering::DebugUI::MessageBox::Style value);
      // static field const value: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Error
      static constexpr const int Error = 2;
      // Get static field: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Error
      static ::UnityEngine::Rendering::DebugUI::MessageBox::Style _get_Error();
      // Set static field: static public UnityEngine.Rendering.DebugUI/MessageBox/Style Error
      static void _set_Error(::UnityEngine::Rendering::DebugUI::MessageBox::Style value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.DebugUI/MessageBox/Style
    #pragma pack(pop)
    static check_size<sizeof(DebugUI::MessageBox::Style), 0 + sizeof(int)> __UnityEngine_Rendering_DebugUI_MessageBox_StyleSizeCheck;
    static_assert(sizeof(DebugUI::MessageBox::Style) == 0x4);
    public:
    // public UnityEngine.Rendering.DebugUI/MessageBox/Style style
    // Size: 0x4
    // Offset: 0x48
    ::UnityEngine::Rendering::DebugUI::MessageBox::Style style;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DebugUI::MessageBox::Style) == 0x4);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::DebugUI::MessageBox::Style
    constexpr operator ::UnityEngine::Rendering::DebugUI::MessageBox::Style() const noexcept {
      return style;
    }
    // Get instance field reference: public UnityEngine.Rendering.DebugUI/MessageBox/Style style
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DebugUI::MessageBox::Style& dyn_style();
    // public System.Void .ctor()
    // Offset: 0x524AC74
    // Implemented from: UnityEngine.Rendering.DebugUI/Widget
    // Base method: System.Void Widget::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUI::MessageBox* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugUI::MessageBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUI::MessageBox*, creationType>()));
    }
  }; // UnityEngine.Rendering.DebugUI/MessageBox
  #pragma pack(pop)
  static check_size<sizeof(DebugUI::MessageBox), 72 + sizeof(::UnityEngine::Rendering::DebugUI::MessageBox::Style)> __UnityEngine_Rendering_DebugUI_MessageBoxSizeCheck;
  static_assert(sizeof(DebugUI::MessageBox) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI::MessageBox::Style, "UnityEngine.Rendering", "DebugUI/MessageBox/Style");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::MessageBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!