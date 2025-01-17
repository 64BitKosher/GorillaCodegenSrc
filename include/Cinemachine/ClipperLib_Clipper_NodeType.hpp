// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ClipperLib/Clipper
#include "Cinemachine/ClipperLib_Clipper.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ClipperLib::Clipper::NodeType, "Cinemachine", "ClipperLib/Clipper/NodeType");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.ClipperLib/Clipper/NodeType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClipperLib::Clipper::NodeType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NodeType
    constexpr NodeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Cinemachine.ClipperLib/Clipper/NodeType ntAny
    static constexpr const int ntAny = 0;
    // Get static field: static public Cinemachine.ClipperLib/Clipper/NodeType ntAny
    static ::Cinemachine::ClipperLib::Clipper::NodeType _get_ntAny();
    // Set static field: static public Cinemachine.ClipperLib/Clipper/NodeType ntAny
    static void _set_ntAny(::Cinemachine::ClipperLib::Clipper::NodeType value);
    // static field const value: static public Cinemachine.ClipperLib/Clipper/NodeType ntOpen
    static constexpr const int ntOpen = 1;
    // Get static field: static public Cinemachine.ClipperLib/Clipper/NodeType ntOpen
    static ::Cinemachine::ClipperLib::Clipper::NodeType _get_ntOpen();
    // Set static field: static public Cinemachine.ClipperLib/Clipper/NodeType ntOpen
    static void _set_ntOpen(::Cinemachine::ClipperLib::Clipper::NodeType value);
    // static field const value: static public Cinemachine.ClipperLib/Clipper/NodeType ntClosed
    static constexpr const int ntClosed = 2;
    // Get static field: static public Cinemachine.ClipperLib/Clipper/NodeType ntClosed
    static ::Cinemachine::ClipperLib::Clipper::NodeType _get_ntClosed();
    // Set static field: static public Cinemachine.ClipperLib/Clipper/NodeType ntClosed
    static void _set_ntClosed(::Cinemachine::ClipperLib::Clipper::NodeType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Cinemachine.ClipperLib/Clipper/NodeType
  #pragma pack(pop)
  static check_size<sizeof(ClipperLib::Clipper::NodeType), 0 + sizeof(int)> __Cinemachine_ClipperLib_Clipper_NodeTypeSizeCheck;
  static_assert(sizeof(ClipperLib::Clipper::NodeType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
