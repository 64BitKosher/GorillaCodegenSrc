// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3Int
  struct Vector3Int;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: ITilemap
  class ITilemap;
  // Forward declaring type: TileData
  struct TileData;
  // Forward declaring type: TileAnimationData
  struct TileAnimationData;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: TileBase
  class TileBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Tilemaps::TileBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileBase*, "UnityEngine.Tilemaps", "TileBase");
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Tilemaps.TileBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  class TileBase : public ::UnityEngine::ScriptableObject {
    public:
    // public System.Void RefreshTile(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap)
    // Offset: 0x5578848
    void RefreshTile(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap);
    // public System.Void GetTileData(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap, ref UnityEngine.Tilemaps.TileData tileData)
    // Offset: 0x5578860
    void GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileData> tileData);
    // private UnityEngine.Tilemaps.TileData GetTileDataNoRef(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap)
    // Offset: 0x5578864
    ::UnityEngine::Tilemaps::TileData GetTileDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap);
    // public System.Boolean GetTileAnimationData(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap, ref UnityEngine.Tilemaps.TileAnimationData tileAnimationData)
    // Offset: 0x55788B0
    bool GetTileAnimationData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileAnimationData> tileAnimationData);
    // private UnityEngine.Tilemaps.TileAnimationData GetTileAnimationDataNoRef(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap)
    // Offset: 0x55788B8
    ::UnityEngine::Tilemaps::TileAnimationData GetTileAnimationDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap);
    // private System.Void GetTileAnimationDataRef(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap, ref UnityEngine.Tilemaps.TileAnimationData tileAnimationData, ref System.Boolean hasAnimation)
    // Offset: 0x55788FC
    void GetTileAnimationDataRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileAnimationData> tileAnimationData, ByRef<bool> hasAnimation);
    // public System.Boolean StartUp(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap, UnityEngine.GameObject go)
    // Offset: 0x5578924
    bool StartUp(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go);
    // private System.Void StartUpRef(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap, UnityEngine.GameObject go, ref System.Boolean startUpInvokedByUser)
    // Offset: 0x557892C
    void StartUpRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go, ByRef<bool> startUpInvokedByUser);
    // protected System.Void .ctor()
    // Offset: 0x5578840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TileBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Tilemaps::TileBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TileBase*, creationType>()));
    }
  }; // UnityEngine.Tilemaps.TileBase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::RefreshTile
// Il2CppName: RefreshTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(&UnityEngine::Tilemaps::TileBase::RefreshTile)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileBase*), "RefreshTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::GetTileData
// Il2CppName: GetTileData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileData>)>(&UnityEngine::Tilemaps::TileBase::GetTileData)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    static auto* tileData = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "TileData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileBase*), "GetTileData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap, tileData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::GetTileDataNoRef
// Il2CppName: GetTileDataNoRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::TileData (UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(&UnityEngine::Tilemaps::TileBase::GetTileDataNoRef)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileBase*), "GetTileDataNoRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::GetTileAnimationData
// Il2CppName: GetTileAnimationData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileAnimationData>)>(&UnityEngine::Tilemaps::TileBase::GetTileAnimationData)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    static auto* tileAnimationData = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "TileAnimationData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileBase*), "GetTileAnimationData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap, tileAnimationData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::GetTileAnimationDataNoRef
// Il2CppName: GetTileAnimationDataNoRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::TileAnimationData (UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(&UnityEngine::Tilemaps::TileBase::GetTileAnimationDataNoRef)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileBase*), "GetTileAnimationDataNoRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::GetTileAnimationDataRef
// Il2CppName: GetTileAnimationDataRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileAnimationData>, ByRef<bool>)>(&UnityEngine::Tilemaps::TileBase::GetTileAnimationDataRef)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    static auto* tileAnimationData = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "TileAnimationData")->this_arg;
    static auto* hasAnimation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileBase*), "GetTileAnimationDataRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap, tileAnimationData, hasAnimation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::StartUp
// Il2CppName: StartUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*)>(&UnityEngine::Tilemaps::TileBase::StartUp)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileBase*), "StartUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap, go});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::StartUpRef
// Il2CppName: StartUpRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*, ByRef<bool>)>(&UnityEngine::Tilemaps::TileBase::StartUpRef)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* startUpInvokedByUser = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileBase*), "StartUpRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap, go, startUpInvokedByUser});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
