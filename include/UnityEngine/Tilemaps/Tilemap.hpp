// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.GridLayout
#include "UnityEngine/GridLayout.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Vector3Int
#include "UnityEngine/Vector3Int.hpp"
// Including type: UnityEngine.Tilemaps.TileData
#include "UnityEngine/Tilemaps/TileData.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: TileBase
  class TileBase;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: Tilemap
  class Tilemap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Tilemaps.Tilemap
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class Tilemap : public ::UnityEngine::GridLayout {
    public:
    // Nested type: ::UnityEngine::Tilemaps::Tilemap::SyncTile
    struct SyncTile;
    // Nested type: ::UnityEngine::Tilemaps::Tilemap::SyncTileCallbackSettings
    struct SyncTileCallbackSettings;
    // Size: 0x78
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Tilemaps.Tilemap/SyncTile
    // [TokenAttribute] Offset: FFFFFFFF
    // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
    struct SyncTile/*, public ::System::ValueType*/ {
      public:
      public:
      // UnityEngine.Vector3Int m_Position
      // Size: 0xC
      // Offset: 0x0
      ::UnityEngine::Vector3Int m_Position;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3Int) == 0xC);
      // Padding between fields: m_Position and: m_Tile
      char __padding0[0x4] = {};
      // UnityEngine.Tilemaps.TileBase m_Tile
      // Size: 0x8
      // Offset: 0x10
      ::UnityEngine::Tilemaps::TileBase* m_Tile;
      // Field size check
      static_assert(sizeof(::UnityEngine::Tilemaps::TileBase*) == 0x8);
      // UnityEngine.Tilemaps.TileData m_TileData
      // Size: 0x60
      // Offset: 0x18
      ::UnityEngine::Tilemaps::TileData m_TileData;
      // Field size check
      static_assert(sizeof(::UnityEngine::Tilemaps::TileData) == 0x60);
      public:
      // Creating value type constructor for type: SyncTile
      constexpr SyncTile(::UnityEngine::Vector3Int m_Position_ = {}, ::UnityEngine::Tilemaps::TileBase* m_Tile_ = {}, ::UnityEngine::Tilemaps::TileData m_TileData_ = {}) noexcept : m_Position{m_Position_}, m_Tile{m_Tile_}, m_TileData{m_TileData_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: UnityEngine.Vector3Int m_Position
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3Int& dyn_m_Position();
      // Get instance field reference: UnityEngine.Tilemaps.TileBase m_Tile
      [[deprecated("Use field access instead!")]] ::UnityEngine::Tilemaps::TileBase*& dyn_m_Tile();
      // Get instance field reference: UnityEngine.Tilemaps.TileData m_TileData
      [[deprecated("Use field access instead!")]] ::UnityEngine::Tilemaps::TileData& dyn_m_TileData();
    }; // UnityEngine.Tilemaps.Tilemap/SyncTile
    #pragma pack(pop)
    static check_size<sizeof(Tilemap::SyncTile), 24 + sizeof(::UnityEngine::Tilemaps::TileData)> __UnityEngine_Tilemaps_Tilemap_SyncTileSizeCheck;
    static_assert(sizeof(Tilemap::SyncTile) == 0x78);
    public:
    // private System.Boolean m_BufferSyncTile
    // Size: 0x1
    // Offset: 0x18
    bool m_BufferSyncTile;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Action`2<UnityEngine.Tilemaps.Tilemap,UnityEngine.Tilemaps.Tilemap/SyncTile[]> tilemapTileChanged
    static ::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::ArrayW<::UnityEngine::Tilemaps::Tilemap::SyncTile>>* _get_tilemapTileChanged();
    // Set static field: static private System.Action`2<UnityEngine.Tilemaps.Tilemap,UnityEngine.Tilemaps.Tilemap/SyncTile[]> tilemapTileChanged
    static void _set_tilemapTileChanged(::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::ArrayW<::UnityEngine::Tilemaps::Tilemap::SyncTile>>* value);
    // Get static field: static private System.Action`2<UnityEngine.Tilemaps.Tilemap,Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>> tilemapPositionsChanged
    static ::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* _get_tilemapPositionsChanged();
    // Set static field: static private System.Action`2<UnityEngine.Tilemaps.Tilemap,Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>> tilemapPositionsChanged
    static void _set_tilemapPositionsChanged(::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* value);
    // Get instance field reference: private System.Boolean m_BufferSyncTile
    [[deprecated("Use field access instead!")]] bool& dyn_m_BufferSyncTile();
    // System.Boolean get_bufferSyncTile()
    // Offset: 0x5578954
    bool get_bufferSyncTile();
    // static System.Boolean HasSyncTileCallback()
    // Offset: 0x557895C
    static bool HasSyncTileCallback();
    // static System.Boolean HasPositionsChangedCallback()
    // Offset: 0x55789AC
    static bool HasPositionsChangedCallback();
    // private System.Void HandleSyncTileCallback(UnityEngine.Tilemaps.Tilemap/SyncTile[] syncTiles)
    // Offset: 0x55789FC
    void HandleSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap::SyncTile> syncTiles);
    // private System.Void HandlePositionsChangedCallback(System.Int32 count, System.IntPtr positionsIntPtr)
    // Offset: 0x5578B8C
    void HandlePositionsChangedCallback(int count, ::System::IntPtr positionsIntPtr);
    // private System.Void SendTilemapTileChangedCallback(UnityEngine.Tilemaps.Tilemap/SyncTile[] syncTiles)
    // Offset: 0x5578A70
    void SendTilemapTileChangedCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap::SyncTile> syncTiles);
    // private System.Void SendTilemapPositionsChangedCallback(Unity.Collections.NativeArray`1<UnityEngine.Vector3Int> positions)
    // Offset: 0x5578C38
    void SendTilemapPositionsChangedCallback(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> positions);
    // public System.Void RefreshTile(UnityEngine.Vector3Int position)
    // Offset: 0x5577F7C
    void RefreshTile(::UnityEngine::Vector3Int position);
    // System.Void RefreshTilesNative(System.Void* positions, System.Int32 count)
    // Offset: 0x5578350
    void RefreshTilesNative(void* positions, int count);
    // System.Void GetSyncTileCallbackSettings(ref UnityEngine.Tilemaps.Tilemap/SyncTileCallbackSettings settings)
    // Offset: 0x5578DA0
    void GetSyncTileCallbackSettings(ByRef<::UnityEngine::Tilemaps::Tilemap::SyncTileCallbackSettings> settings);
    // private System.Void DoSyncTileCallback(UnityEngine.Tilemaps.Tilemap/SyncTile[] syncTiles)
    // Offset: 0x5578E40
    void DoSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap::SyncTile> syncTiles);
    // private System.Void DoPositionsChangedCallback(System.Int32 count, System.IntPtr positionsIntPtr)
    // Offset: 0x5578E44
    void DoPositionsChangedCallback(int count, ::System::IntPtr positionsIntPtr);
    // private System.Void RefreshTile_Injected(ref UnityEngine.Vector3Int position)
    // Offset: 0x5578D5C
    void RefreshTile_Injected(ByRef<::UnityEngine::Vector3Int> position);
  }; // UnityEngine.Tilemaps.Tilemap
  #pragma pack(pop)
  static check_size<sizeof(Tilemap), 24 + sizeof(bool)> __UnityEngine_Tilemaps_TilemapSizeCheck;
  static_assert(sizeof(Tilemap) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap::SyncTile, "UnityEngine.Tilemaps", "Tilemap/SyncTile");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_bufferSyncTile
// Il2CppName: get_bufferSyncTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Tilemaps::Tilemap::*)()>(&UnityEngine::Tilemaps::Tilemap::get_bufferSyncTile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_bufferSyncTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::HasSyncTileCallback
// Il2CppName: HasSyncTileCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Tilemaps::Tilemap::HasSyncTileCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "HasSyncTileCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::HasPositionsChangedCallback
// Il2CppName: HasPositionsChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Tilemaps::Tilemap::HasPositionsChangedCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "HasPositionsChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::HandleSyncTileCallback
// Il2CppName: HandleSyncTileCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<::UnityEngine::Tilemaps::Tilemap::SyncTile>)>(&UnityEngine::Tilemaps::Tilemap::HandleSyncTileCallback)> {
  static const MethodInfo* get() {
    static auto* syncTiles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "Tilemap/SyncTile"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "HandleSyncTileCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncTiles});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::HandlePositionsChangedCallback
// Il2CppName: HandlePositionsChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(int, ::System::IntPtr)>(&UnityEngine::Tilemaps::Tilemap::HandlePositionsChangedCallback)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* positionsIntPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "HandlePositionsChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count, positionsIntPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::SendTilemapTileChangedCallback
// Il2CppName: SendTilemapTileChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<::UnityEngine::Tilemaps::Tilemap::SyncTile>)>(&UnityEngine::Tilemaps::Tilemap::SendTilemapTileChangedCallback)> {
  static const MethodInfo* get() {
    static auto* syncTiles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "Tilemap/SyncTile"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "SendTilemapTileChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncTiles});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::SendTilemapPositionsChangedCallback
// Il2CppName: SendTilemapPositionsChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>)>(&UnityEngine::Tilemaps::Tilemap::SendTilemapPositionsChangedCallback)> {
  static const MethodInfo* get() {
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "SendTilemapPositionsChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::RefreshTile
// Il2CppName: RefreshTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(::UnityEngine::Vector3Int)>(&UnityEngine::Tilemaps::Tilemap::RefreshTile)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "RefreshTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::RefreshTilesNative
// Il2CppName: RefreshTilesNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(void*, int)>(&UnityEngine::Tilemaps::Tilemap::RefreshTilesNative)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "RefreshTilesNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetSyncTileCallbackSettings
// Il2CppName: GetSyncTileCallbackSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(ByRef<::UnityEngine::Tilemaps::Tilemap::SyncTileCallbackSettings>)>(&UnityEngine::Tilemaps::Tilemap::GetSyncTileCallbackSettings)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "Tilemap/SyncTileCallbackSettings")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "GetSyncTileCallbackSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::DoSyncTileCallback
// Il2CppName: DoSyncTileCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<::UnityEngine::Tilemaps::Tilemap::SyncTile>)>(&UnityEngine::Tilemaps::Tilemap::DoSyncTileCallback)> {
  static const MethodInfo* get() {
    static auto* syncTiles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "Tilemap/SyncTile"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "DoSyncTileCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncTiles});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::DoPositionsChangedCallback
// Il2CppName: DoPositionsChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(int, ::System::IntPtr)>(&UnityEngine::Tilemaps::Tilemap::DoPositionsChangedCallback)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* positionsIntPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "DoPositionsChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count, positionsIntPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected
// Il2CppName: RefreshTile_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(ByRef<::UnityEngine::Vector3Int>)>(&UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "RefreshTile_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
