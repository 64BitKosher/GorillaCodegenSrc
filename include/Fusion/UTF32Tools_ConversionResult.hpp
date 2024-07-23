// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.UTF32Tools
#include "Fusion/UTF32Tools.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::UTF32Tools::ConversionResult, "Fusion", "UTF32Tools/ConversionResult");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.UTF32Tools/ConversionResult
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct UTF32Tools::ConversionResult/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.Int32 CharacterCount
    // Size: 0x4
    // Offset: 0x0
    int CharacterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 CodePointCount
    // Size: 0x4
    // Offset: 0x4
    int CodePointCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ConversionResult
    constexpr ConversionResult(int CharacterCount_ = {}, int CodePointCount_ = {}) noexcept : CharacterCount{CharacterCount_}, CodePointCount{CodePointCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.Int32 CharacterCount
    [[deprecated("Use field access instead!")]] int& dyn_CharacterCount();
    // Get instance field reference: public readonly System.Int32 CodePointCount
    [[deprecated("Use field access instead!")]] int& dyn_CodePointCount();
    // public System.Void .ctor(System.Int32 words, System.Int32 characters)
    // Offset: 0x2AD9F4C
    // ABORTED: conflicts with another method.  ConversionResult(int words, int characters);
  }; // Fusion.UTF32Tools/ConversionResult
  #pragma pack(pop)
  static check_size<sizeof(UTF32Tools::ConversionResult), 4 + sizeof(int)> __Fusion_UTF32Tools_ConversionResultSizeCheck;
  static_assert(sizeof(UTF32Tools::ConversionResult) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::UTF32Tools::ConversionResult::ConversionResult
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
