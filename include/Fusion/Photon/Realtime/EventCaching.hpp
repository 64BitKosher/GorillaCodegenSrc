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
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: EventCaching
  struct EventCaching;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::EventCaching, "Fusion.Photon.Realtime", "EventCaching");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.EventCaching
  // [TokenAttribute] Offset: FFFFFFFF
  struct EventCaching/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: EventCaching
    constexpr EventCaching(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Photon.Realtime.EventCaching DoNotCache
    static constexpr const uint8_t DoNotCache = 0u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching DoNotCache
    static ::Fusion::Photon::Realtime::EventCaching _get_DoNotCache();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching DoNotCache
    static void _set_DoNotCache(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching MergeCache
    static constexpr const uint8_t MergeCache = 1u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching MergeCache
    static ::Fusion::Photon::Realtime::EventCaching _get_MergeCache();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching MergeCache
    static void _set_MergeCache(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching ReplaceCache
    static constexpr const uint8_t ReplaceCache = 2u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching ReplaceCache
    static ::Fusion::Photon::Realtime::EventCaching _get_ReplaceCache();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching ReplaceCache
    static void _set_ReplaceCache(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching RemoveCache
    static constexpr const uint8_t RemoveCache = 3u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching RemoveCache
    static ::Fusion::Photon::Realtime::EventCaching _get_RemoveCache();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching RemoveCache
    static void _set_RemoveCache(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching AddToRoomCache
    static constexpr const uint8_t AddToRoomCache = 4u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching AddToRoomCache
    static ::Fusion::Photon::Realtime::EventCaching _get_AddToRoomCache();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching AddToRoomCache
    static void _set_AddToRoomCache(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching AddToRoomCacheGlobal
    static constexpr const uint8_t AddToRoomCacheGlobal = 5u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching AddToRoomCacheGlobal
    static ::Fusion::Photon::Realtime::EventCaching _get_AddToRoomCacheGlobal();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching AddToRoomCacheGlobal
    static void _set_AddToRoomCacheGlobal(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching RemoveFromRoomCache
    static constexpr const uint8_t RemoveFromRoomCache = 6u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching RemoveFromRoomCache
    static ::Fusion::Photon::Realtime::EventCaching _get_RemoveFromRoomCache();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching RemoveFromRoomCache
    static void _set_RemoveFromRoomCache(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching RemoveFromRoomCacheForActorsLeft
    static constexpr const uint8_t RemoveFromRoomCacheForActorsLeft = 7u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching RemoveFromRoomCacheForActorsLeft
    static ::Fusion::Photon::Realtime::EventCaching _get_RemoveFromRoomCacheForActorsLeft();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching RemoveFromRoomCacheForActorsLeft
    static void _set_RemoveFromRoomCacheForActorsLeft(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching SliceIncreaseIndex
    static constexpr const uint8_t SliceIncreaseIndex = 10u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching SliceIncreaseIndex
    static ::Fusion::Photon::Realtime::EventCaching _get_SliceIncreaseIndex();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching SliceIncreaseIndex
    static void _set_SliceIncreaseIndex(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching SliceSetIndex
    static constexpr const uint8_t SliceSetIndex = 11u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching SliceSetIndex
    static ::Fusion::Photon::Realtime::EventCaching _get_SliceSetIndex();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching SliceSetIndex
    static void _set_SliceSetIndex(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching SlicePurgeIndex
    static constexpr const uint8_t SlicePurgeIndex = 12u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching SlicePurgeIndex
    static ::Fusion::Photon::Realtime::EventCaching _get_SlicePurgeIndex();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching SlicePurgeIndex
    static void _set_SlicePurgeIndex(::Fusion::Photon::Realtime::EventCaching value);
    // static field const value: static public Fusion.Photon.Realtime.EventCaching SlicePurgeUpToIndex
    static constexpr const uint8_t SlicePurgeUpToIndex = 13u;
    // Get static field: static public Fusion.Photon.Realtime.EventCaching SlicePurgeUpToIndex
    static ::Fusion::Photon::Realtime::EventCaching _get_SlicePurgeUpToIndex();
    // Set static field: static public Fusion.Photon.Realtime.EventCaching SlicePurgeUpToIndex
    static void _set_SlicePurgeUpToIndex(::Fusion::Photon::Realtime::EventCaching value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Fusion.Photon.Realtime.EventCaching
  #pragma pack(pop)
  static check_size<sizeof(EventCaching), 0 + sizeof(uint8_t)> __Fusion_Photon_Realtime_EventCachingSizeCheck;
  static_assert(sizeof(EventCaching) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"