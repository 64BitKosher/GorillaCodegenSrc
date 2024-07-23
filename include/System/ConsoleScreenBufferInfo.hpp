// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Coord
#include "System/Coord.hpp"
// Including type: System.SmallRect
#include "System/SmallRect.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: ConsoleScreenBufferInfo
  struct ConsoleScreenBufferInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleScreenBufferInfo, "System", "ConsoleScreenBufferInfo");
// Type namespace: System
namespace System {
  // Size: 0x16
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ConsoleScreenBufferInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConsoleScreenBufferInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Coord Size
    // Size: 0x4
    // Offset: 0x0
    ::System::Coord Size;
    // Field size check
    static_assert(sizeof(::System::Coord) == 0x4);
    // public System.Coord CursorPosition
    // Size: 0x4
    // Offset: 0x4
    ::System::Coord CursorPosition;
    // Field size check
    static_assert(sizeof(::System::Coord) == 0x4);
    // public System.Int16 Attribute
    // Size: 0x2
    // Offset: 0x8
    int16_t Attribute;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.SmallRect Window
    // Size: 0x8
    // Offset: 0xA
    ::System::SmallRect Window;
    // Field size check
    static_assert(sizeof(::System::SmallRect) == 0x8);
    // public System.Coord MaxWindowSize
    // Size: 0x4
    // Offset: 0x12
    ::System::Coord MaxWindowSize;
    // Field size check
    static_assert(sizeof(::System::Coord) == 0x4);
    public:
    // Creating value type constructor for type: ConsoleScreenBufferInfo
    constexpr ConsoleScreenBufferInfo(::System::Coord Size_ = {}, ::System::Coord CursorPosition_ = {}, int16_t Attribute_ = {}, ::System::SmallRect Window_ = {}, ::System::Coord MaxWindowSize_ = {}) noexcept : Size{Size_}, CursorPosition{CursorPosition_}, Attribute{Attribute_}, Window{Window_}, MaxWindowSize{MaxWindowSize_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Coord Size
    [[deprecated("Use field access instead!")]] ::System::Coord& dyn_Size();
    // Get instance field reference: public System.Coord CursorPosition
    [[deprecated("Use field access instead!")]] ::System::Coord& dyn_CursorPosition();
    // Get instance field reference: public System.Int16 Attribute
    [[deprecated("Use field access instead!")]] int16_t& dyn_Attribute();
    // Get instance field reference: public System.SmallRect Window
    [[deprecated("Use field access instead!")]] ::System::SmallRect& dyn_Window();
    // Get instance field reference: public System.Coord MaxWindowSize
    [[deprecated("Use field access instead!")]] ::System::Coord& dyn_MaxWindowSize();
  }; // System.ConsoleScreenBufferInfo
  #pragma pack(pop)
  static check_size<sizeof(ConsoleScreenBufferInfo), 18 + sizeof(::System::Coord)> __System_ConsoleScreenBufferInfoSizeCheck;
  static_assert(sizeof(ConsoleScreenBufferInfo) == 0x16);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"