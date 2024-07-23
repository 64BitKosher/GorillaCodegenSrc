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
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: BlockState
  struct BlockState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::BlockState, "Pathfinding.Ionic.Zlib", "BlockState");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.BlockState
  // [TokenAttribute] Offset: FFFFFFFF
  struct BlockState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BlockState
    constexpr BlockState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zlib.BlockState NeedMore
    static constexpr const int NeedMore = 0;
    // Get static field: static public Pathfinding.Ionic.Zlib.BlockState NeedMore
    static ::Pathfinding::Ionic::Zlib::BlockState _get_NeedMore();
    // Set static field: static public Pathfinding.Ionic.Zlib.BlockState NeedMore
    static void _set_NeedMore(::Pathfinding::Ionic::Zlib::BlockState value);
    // static field const value: static public Pathfinding.Ionic.Zlib.BlockState BlockDone
    static constexpr const int BlockDone = 1;
    // Get static field: static public Pathfinding.Ionic.Zlib.BlockState BlockDone
    static ::Pathfinding::Ionic::Zlib::BlockState _get_BlockDone();
    // Set static field: static public Pathfinding.Ionic.Zlib.BlockState BlockDone
    static void _set_BlockDone(::Pathfinding::Ionic::Zlib::BlockState value);
    // static field const value: static public Pathfinding.Ionic.Zlib.BlockState FinishStarted
    static constexpr const int FinishStarted = 2;
    // Get static field: static public Pathfinding.Ionic.Zlib.BlockState FinishStarted
    static ::Pathfinding::Ionic::Zlib::BlockState _get_FinishStarted();
    // Set static field: static public Pathfinding.Ionic.Zlib.BlockState FinishStarted
    static void _set_FinishStarted(::Pathfinding::Ionic::Zlib::BlockState value);
    // static field const value: static public Pathfinding.Ionic.Zlib.BlockState FinishDone
    static constexpr const int FinishDone = 3;
    // Get static field: static public Pathfinding.Ionic.Zlib.BlockState FinishDone
    static ::Pathfinding::Ionic::Zlib::BlockState _get_FinishDone();
    // Set static field: static public Pathfinding.Ionic.Zlib.BlockState FinishDone
    static void _set_FinishDone(::Pathfinding::Ionic::Zlib::BlockState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zlib.BlockState
  #pragma pack(pop)
  static check_size<sizeof(BlockState), 0 + sizeof(int)> __Pathfinding_Ionic_Zlib_BlockStateSizeCheck;
  static_assert(sizeof(BlockState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
