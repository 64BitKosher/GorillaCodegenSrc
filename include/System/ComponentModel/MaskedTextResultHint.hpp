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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: MaskedTextResultHint
  struct MaskedTextResultHint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MaskedTextResultHint, "System.ComponentModel", "MaskedTextResultHint");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.MaskedTextResultHint
  // [TokenAttribute] Offset: FFFFFFFF
  struct MaskedTextResultHint/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MaskedTextResultHint
    constexpr MaskedTextResultHint(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ComponentModel.MaskedTextResultHint Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint Unknown
    static ::System::ComponentModel::MaskedTextResultHint _get_Unknown();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint Unknown
    static void _set_Unknown(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint CharacterEscaped
    static constexpr const int CharacterEscaped = 1;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint CharacterEscaped
    static ::System::ComponentModel::MaskedTextResultHint _get_CharacterEscaped();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint CharacterEscaped
    static void _set_CharacterEscaped(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint NoEffect
    static constexpr const int NoEffect = 2;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint NoEffect
    static ::System::ComponentModel::MaskedTextResultHint _get_NoEffect();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint NoEffect
    static void _set_NoEffect(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint SideEffect
    static constexpr const int SideEffect = 3;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint SideEffect
    static ::System::ComponentModel::MaskedTextResultHint _get_SideEffect();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint SideEffect
    static void _set_SideEffect(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint Success
    static constexpr const int Success = 4;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint Success
    static ::System::ComponentModel::MaskedTextResultHint _get_Success();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint Success
    static void _set_Success(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint AsciiCharacterExpected
    static constexpr const int AsciiCharacterExpected = -1;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint AsciiCharacterExpected
    static ::System::ComponentModel::MaskedTextResultHint _get_AsciiCharacterExpected();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint AsciiCharacterExpected
    static void _set_AsciiCharacterExpected(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint AlphanumericCharacterExpected
    static constexpr const int AlphanumericCharacterExpected = -2;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint AlphanumericCharacterExpected
    static ::System::ComponentModel::MaskedTextResultHint _get_AlphanumericCharacterExpected();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint AlphanumericCharacterExpected
    static void _set_AlphanumericCharacterExpected(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint DigitExpected
    static constexpr const int DigitExpected = -3;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint DigitExpected
    static ::System::ComponentModel::MaskedTextResultHint _get_DigitExpected();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint DigitExpected
    static void _set_DigitExpected(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint LetterExpected
    static constexpr const int LetterExpected = -4;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint LetterExpected
    static ::System::ComponentModel::MaskedTextResultHint _get_LetterExpected();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint LetterExpected
    static void _set_LetterExpected(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint SignedDigitExpected
    static constexpr const int SignedDigitExpected = -5;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint SignedDigitExpected
    static ::System::ComponentModel::MaskedTextResultHint _get_SignedDigitExpected();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint SignedDigitExpected
    static void _set_SignedDigitExpected(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint InvalidInput
    static constexpr const int InvalidInput = -51;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint InvalidInput
    static ::System::ComponentModel::MaskedTextResultHint _get_InvalidInput();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint InvalidInput
    static void _set_InvalidInput(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint PromptCharNotAllowed
    static constexpr const int PromptCharNotAllowed = -52;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint PromptCharNotAllowed
    static ::System::ComponentModel::MaskedTextResultHint _get_PromptCharNotAllowed();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint PromptCharNotAllowed
    static void _set_PromptCharNotAllowed(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint UnavailableEditPosition
    static constexpr const int UnavailableEditPosition = -53;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint UnavailableEditPosition
    static ::System::ComponentModel::MaskedTextResultHint _get_UnavailableEditPosition();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint UnavailableEditPosition
    static void _set_UnavailableEditPosition(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint NonEditPosition
    static constexpr const int NonEditPosition = -54;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint NonEditPosition
    static ::System::ComponentModel::MaskedTextResultHint _get_NonEditPosition();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint NonEditPosition
    static void _set_NonEditPosition(::System::ComponentModel::MaskedTextResultHint value);
    // static field const value: static public System.ComponentModel.MaskedTextResultHint PositionOutOfRange
    static constexpr const int PositionOutOfRange = -55;
    // Get static field: static public System.ComponentModel.MaskedTextResultHint PositionOutOfRange
    static ::System::ComponentModel::MaskedTextResultHint _get_PositionOutOfRange();
    // Set static field: static public System.ComponentModel.MaskedTextResultHint PositionOutOfRange
    static void _set_PositionOutOfRange(::System::ComponentModel::MaskedTextResultHint value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.ComponentModel.MaskedTextResultHint
  #pragma pack(pop)
  static check_size<sizeof(MaskedTextResultHint), 0 + sizeof(int)> __System_ComponentModel_MaskedTextResultHintSizeCheck;
  static_assert(sizeof(MaskedTextResultHint) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
