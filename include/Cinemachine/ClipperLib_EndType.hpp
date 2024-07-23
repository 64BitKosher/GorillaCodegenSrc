// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ClipperLib
#include "Cinemachine/ClipperLib.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ClipperLib::EndType, "Cinemachine", "ClipperLib/EndType");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.ClipperLib/EndType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClipperLib::EndType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EndType
    constexpr EndType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Cinemachine.ClipperLib/EndType etClosedPolygon
    static constexpr const int etClosedPolygon = 0;
    // Get static field: static public Cinemachine.ClipperLib/EndType etClosedPolygon
    static ::Cinemachine::ClipperLib::EndType _get_etClosedPolygon();
    // Set static field: static public Cinemachine.ClipperLib/EndType etClosedPolygon
    static void _set_etClosedPolygon(::Cinemachine::ClipperLib::EndType value);
    // static field const value: static public Cinemachine.ClipperLib/EndType etClosedLine
    static constexpr const int etClosedLine = 1;
    // Get static field: static public Cinemachine.ClipperLib/EndType etClosedLine
    static ::Cinemachine::ClipperLib::EndType _get_etClosedLine();
    // Set static field: static public Cinemachine.ClipperLib/EndType etClosedLine
    static void _set_etClosedLine(::Cinemachine::ClipperLib::EndType value);
    // static field const value: static public Cinemachine.ClipperLib/EndType etOpenButt
    static constexpr const int etOpenButt = 2;
    // Get static field: static public Cinemachine.ClipperLib/EndType etOpenButt
    static ::Cinemachine::ClipperLib::EndType _get_etOpenButt();
    // Set static field: static public Cinemachine.ClipperLib/EndType etOpenButt
    static void _set_etOpenButt(::Cinemachine::ClipperLib::EndType value);
    // static field const value: static public Cinemachine.ClipperLib/EndType etOpenSquare
    static constexpr const int etOpenSquare = 3;
    // Get static field: static public Cinemachine.ClipperLib/EndType etOpenSquare
    static ::Cinemachine::ClipperLib::EndType _get_etOpenSquare();
    // Set static field: static public Cinemachine.ClipperLib/EndType etOpenSquare
    static void _set_etOpenSquare(::Cinemachine::ClipperLib::EndType value);
    // static field const value: static public Cinemachine.ClipperLib/EndType etOpenRound
    static constexpr const int etOpenRound = 4;
    // Get static field: static public Cinemachine.ClipperLib/EndType etOpenRound
    static ::Cinemachine::ClipperLib::EndType _get_etOpenRound();
    // Set static field: static public Cinemachine.ClipperLib/EndType etOpenRound
    static void _set_etOpenRound(::Cinemachine::ClipperLib::EndType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Cinemachine.ClipperLib/EndType
  #pragma pack(pop)
  static check_size<sizeof(ClipperLib::EndType), 0 + sizeof(int)> __Cinemachine_ClipperLib_EndTypeSizeCheck;
  static_assert(sizeof(ClipperLib::EndType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
