// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField::EditState, "TMPro", "TMP_InputField/EditState");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_InputField/EditState
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_InputField::EditState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EditState
    constexpr EditState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TMP_InputField/EditState Continue
    static constexpr const int Continue = 0;
    // Get static field: static public TMPro.TMP_InputField/EditState Continue
    static ::TMPro::TMP_InputField::EditState _get_Continue();
    // Set static field: static public TMPro.TMP_InputField/EditState Continue
    static void _set_Continue(::TMPro::TMP_InputField::EditState value);
    // static field const value: static public TMPro.TMP_InputField/EditState Finish
    static constexpr const int Finish = 1;
    // Get static field: static public TMPro.TMP_InputField/EditState Finish
    static ::TMPro::TMP_InputField::EditState _get_Finish();
    // Set static field: static public TMPro.TMP_InputField/EditState Finish
    static void _set_Finish(::TMPro::TMP_InputField::EditState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // TMPro.TMP_InputField/EditState
  #pragma pack(pop)
  static check_size<sizeof(TMP_InputField::EditState), 0 + sizeof(int)> __TMPro_TMP_InputField_EditStateSizeCheck;
  static_assert(sizeof(TMP_InputField::EditState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
