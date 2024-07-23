// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Sockets.NetPeerGroupMap
#include "Fusion/Sockets/NetPeerGroupMap.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetPeerGroupMap::EntryState, "Fusion.Sockets", "NetPeerGroupMap/EntryState");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Sockets.NetPeerGroupMap/EntryState
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetPeerGroupMap::EntryState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EntryState
    constexpr EntryState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Sockets.NetPeerGroupMap/EntryState None
    static constexpr const int None = 0;
    // Get static field: static public Fusion.Sockets.NetPeerGroupMap/EntryState None
    static ::Fusion::Sockets::NetPeerGroupMap::EntryState _get_None();
    // Set static field: static public Fusion.Sockets.NetPeerGroupMap/EntryState None
    static void _set_None(::Fusion::Sockets::NetPeerGroupMap::EntryState value);
    // static field const value: static public Fusion.Sockets.NetPeerGroupMap/EntryState Free
    static constexpr const int Free = 1;
    // Get static field: static public Fusion.Sockets.NetPeerGroupMap/EntryState Free
    static ::Fusion::Sockets::NetPeerGroupMap::EntryState _get_Free();
    // Set static field: static public Fusion.Sockets.NetPeerGroupMap/EntryState Free
    static void _set_Free(::Fusion::Sockets::NetPeerGroupMap::EntryState value);
    // static field const value: static public Fusion.Sockets.NetPeerGroupMap/EntryState Used
    static constexpr const int Used = 2;
    // Get static field: static public Fusion.Sockets.NetPeerGroupMap/EntryState Used
    static ::Fusion::Sockets::NetPeerGroupMap::EntryState _get_Used();
    // Set static field: static public Fusion.Sockets.NetPeerGroupMap/EntryState Used
    static void _set_Used(::Fusion::Sockets::NetPeerGroupMap::EntryState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.Sockets.NetPeerGroupMap/EntryState
  #pragma pack(pop)
  static check_size<sizeof(NetPeerGroupMap::EntryState), 0 + sizeof(int)> __Fusion_Sockets_NetPeerGroupMap_EntryStateSizeCheck;
  static_assert(sizeof(NetPeerGroupMap::EntryState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"