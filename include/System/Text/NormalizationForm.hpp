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
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: NormalizationForm
  struct NormalizationForm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Text::NormalizationForm, "System.Text", "NormalizationForm");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.NormalizationForm
  // [TokenAttribute] Offset: FFFFFFFF
  struct NormalizationForm/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NormalizationForm
    constexpr NormalizationForm(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Text.NormalizationForm FormC
    static constexpr const int FormC = 1;
    // Get static field: static public System.Text.NormalizationForm FormC
    static ::System::Text::NormalizationForm _get_FormC();
    // Set static field: static public System.Text.NormalizationForm FormC
    static void _set_FormC(::System::Text::NormalizationForm value);
    // static field const value: static public System.Text.NormalizationForm FormD
    static constexpr const int FormD = 2;
    // Get static field: static public System.Text.NormalizationForm FormD
    static ::System::Text::NormalizationForm _get_FormD();
    // Set static field: static public System.Text.NormalizationForm FormD
    static void _set_FormD(::System::Text::NormalizationForm value);
    // static field const value: static public System.Text.NormalizationForm FormKC
    static constexpr const int FormKC = 5;
    // Get static field: static public System.Text.NormalizationForm FormKC
    static ::System::Text::NormalizationForm _get_FormKC();
    // Set static field: static public System.Text.NormalizationForm FormKC
    static void _set_FormKC(::System::Text::NormalizationForm value);
    // static field const value: static public System.Text.NormalizationForm FormKD
    static constexpr const int FormKD = 6;
    // Get static field: static public System.Text.NormalizationForm FormKD
    static ::System::Text::NormalizationForm _get_FormKD();
    // Set static field: static public System.Text.NormalizationForm FormKD
    static void _set_FormKD(::System::Text::NormalizationForm value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Text.NormalizationForm
  #pragma pack(pop)
  static check_size<sizeof(NormalizationForm), 0 + sizeof(int)> __System_Text_NormalizationFormSizeCheck;
  static_assert(sizeof(NormalizationForm) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
