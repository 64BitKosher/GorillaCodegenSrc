// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: SmallRect
  struct SmallRect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::SmallRect, "System", "SmallRect");
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.SmallRect
  // [TokenAttribute] Offset: FFFFFFFF
  struct SmallRect/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int16 Left
    // Size: 0x2
    // Offset: 0x0
    int16_t Left;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 Top
    // Size: 0x2
    // Offset: 0x2
    int16_t Top;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 Right
    // Size: 0x2
    // Offset: 0x4
    int16_t Right;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 Bottom
    // Size: 0x2
    // Offset: 0x6
    int16_t Bottom;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Creating value type constructor for type: SmallRect
    constexpr SmallRect(int16_t Left_ = {}, int16_t Top_ = {}, int16_t Right_ = {}, int16_t Bottom_ = {}) noexcept : Left{Left_}, Top{Top_}, Right{Right_}, Bottom{Bottom_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int16 Left
    [[deprecated("Use field access instead!")]] int16_t& dyn_Left();
    // Get instance field reference: public System.Int16 Top
    [[deprecated("Use field access instead!")]] int16_t& dyn_Top();
    // Get instance field reference: public System.Int16 Right
    [[deprecated("Use field access instead!")]] int16_t& dyn_Right();
    // Get instance field reference: public System.Int16 Bottom
    [[deprecated("Use field access instead!")]] int16_t& dyn_Bottom();
  }; // System.SmallRect
  #pragma pack(pop)
  static check_size<sizeof(SmallRect), 6 + sizeof(int16_t)> __System_SmallRectSizeCheck;
  static_assert(sizeof(SmallRect) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
