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
  // Forward declaring type: AtlasPopulationMode
  struct AtlasPopulationMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::AtlasPopulationMode, "UnityEngine.TextCore.Text", "AtlasPopulationMode");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.AtlasPopulationMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct AtlasPopulationMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AtlasPopulationMode
    constexpr AtlasPopulationMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.Text.AtlasPopulationMode Static
    static constexpr const int Static = 0;
    // Get static field: static public UnityEngine.TextCore.Text.AtlasPopulationMode Static
    static ::UnityEngine::TextCore::Text::AtlasPopulationMode _get_Static();
    // Set static field: static public UnityEngine.TextCore.Text.AtlasPopulationMode Static
    static void _set_Static(::UnityEngine::TextCore::Text::AtlasPopulationMode value);
    // static field const value: static public UnityEngine.TextCore.Text.AtlasPopulationMode Dynamic
    static constexpr const int Dynamic = 1;
    // Get static field: static public UnityEngine.TextCore.Text.AtlasPopulationMode Dynamic
    static ::UnityEngine::TextCore::Text::AtlasPopulationMode _get_Dynamic();
    // Set static field: static public UnityEngine.TextCore.Text.AtlasPopulationMode Dynamic
    static void _set_Dynamic(::UnityEngine::TextCore::Text::AtlasPopulationMode value);
    // static field const value: static public UnityEngine.TextCore.Text.AtlasPopulationMode DynamicOS
    static constexpr const int DynamicOS = 2;
    // Get static field: static public UnityEngine.TextCore.Text.AtlasPopulationMode DynamicOS
    static ::UnityEngine::TextCore::Text::AtlasPopulationMode _get_DynamicOS();
    // Set static field: static public UnityEngine.TextCore.Text.AtlasPopulationMode DynamicOS
    static void _set_DynamicOS(::UnityEngine::TextCore::Text::AtlasPopulationMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextCore.Text.AtlasPopulationMode
  #pragma pack(pop)
  static check_size<sizeof(AtlasPopulationMode), 0 + sizeof(int)> __UnityEngine_TextCore_Text_AtlasPopulationModeSizeCheck;
  static_assert(sizeof(AtlasPopulationMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
