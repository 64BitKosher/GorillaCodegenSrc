// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshHit
  struct NavMeshHit;
  // Forward declaring type: NavMeshPath
  class NavMeshPath;
  // Forward declaring type: NavMeshDataInstance
  struct NavMeshDataInstance;
  // Forward declaring type: NavMeshData
  class NavMeshData;
  // Forward declaring type: NavMeshLinkInstance
  struct NavMeshLinkInstance;
  // Forward declaring type: NavMeshLinkData
  struct NavMeshLinkData;
  // Forward declaring type: NavMeshBuildSettings
  struct NavMeshBuildSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMesh
  class NavMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AI::NavMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMesh*, "UnityEngine.AI", "NavMesh");
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AI.NavMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  class NavMesh : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::AI::NavMesh::OnNavMeshPreUpdate
    class OnNavMeshPreUpdate;
    // Get static field: static public UnityEngine.AI.NavMesh/OnNavMeshPreUpdate onPreUpdate
    static ::UnityEngine::AI::NavMesh::OnNavMeshPreUpdate* _get_onPreUpdate();
    // Set static field: static public UnityEngine.AI.NavMesh/OnNavMeshPreUpdate onPreUpdate
    static void _set_onPreUpdate(::UnityEngine::AI::NavMesh::OnNavMeshPreUpdate* value);
    // static private System.Void Internal_CallOnNavMeshPreUpdate()
    // Offset: 0x544F11C
    static void Internal_CallOnNavMeshPreUpdate();
    // static public System.Boolean Raycast(UnityEngine.Vector3 sourcePosition, UnityEngine.Vector3 targetPosition, out UnityEngine.AI.NavMeshHit hit, System.Int32 areaMask)
    // Offset: 0x544F180
    static bool Raycast(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ByRef<::UnityEngine::AI::NavMeshHit> hit, int areaMask);
    // static public System.Boolean CalculatePath(UnityEngine.Vector3 sourcePosition, UnityEngine.Vector3 targetPosition, System.Int32 areaMask, UnityEngine.AI.NavMeshPath path)
    // Offset: 0x544F248
    static bool CalculatePath(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, int areaMask, ::UnityEngine::AI::NavMeshPath* path);
    // static private System.Boolean CalculatePathInternal(UnityEngine.Vector3 sourcePosition, UnityEngine.Vector3 targetPosition, System.Int32 areaMask, UnityEngine.AI.NavMeshPath path)
    // Offset: 0x544F310
    static bool CalculatePathInternal(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, int areaMask, ::UnityEngine::AI::NavMeshPath* path);
    // static public System.Boolean SamplePosition(UnityEngine.Vector3 sourcePosition, out UnityEngine.AI.NavMeshHit hit, System.Single maxDistance, System.Int32 areaMask)
    // Offset: 0x544F3D8
    static bool SamplePosition(::UnityEngine::Vector3 sourcePosition, ByRef<::UnityEngine::AI::NavMeshHit> hit, float maxDistance, int areaMask);
    // static public System.Int32 GetAreaFromName(System.String areaName)
    // Offset: 0x544F4AC
    static int GetAreaFromName(::StringW areaName);
    // static public UnityEngine.AI.NavMeshDataInstance AddNavMeshData(UnityEngine.AI.NavMeshData navMeshData, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x544F4E8
    static ::UnityEngine::AI::NavMeshDataInstance AddNavMeshData(::UnityEngine::AI::NavMeshData* navMeshData, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // static System.Boolean IsValidNavMeshDataHandle(System.Int32 handle)
    // Offset: 0x544EC50
    static bool IsValidNavMeshDataHandle(int handle);
    // static System.Boolean IsValidLinkHandle(System.Int32 handle)
    // Offset: 0x544EF00
    static bool IsValidLinkHandle(int handle);
    // static System.Boolean InternalSetOwner(System.Int32 dataID, System.Int32 ownerID)
    // Offset: 0x544EE28
    static bool InternalSetOwner(int dataID, int ownerID);
    // static System.Boolean InternalSetLinkOwner(System.Int32 linkID, System.Int32 ownerID)
    // Offset: 0x544F0D8
    static bool InternalSetLinkOwner(int linkID, int ownerID);
    // static System.Int32 AddNavMeshDataTransformedInternal(UnityEngine.AI.NavMeshData navMeshData, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x544F5F8
    static int AddNavMeshDataTransformedInternal(::UnityEngine::AI::NavMeshData* navMeshData, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // static System.Void RemoveNavMeshDataInternal(System.Int32 handle)
    // Offset: 0x544ECD8
    static void RemoveNavMeshDataInternal(int handle);
    // static public UnityEngine.AI.NavMeshLinkInstance AddLink(UnityEngine.AI.NavMeshLinkData link, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x544F6AC
    static ::UnityEngine::AI::NavMeshLinkInstance AddLink(::UnityEngine::AI::NavMeshLinkData link, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // static System.Int32 AddLinkInternal(UnityEngine.AI.NavMeshLinkData link, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x544F6DC
    static int AddLinkInternal(::UnityEngine::AI::NavMeshLinkData link, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // static System.Void RemoveLinkInternal(System.Int32 handle)
    // Offset: 0x544EF88
    static void RemoveLinkInternal(int handle);
    // static public UnityEngine.AI.NavMeshBuildSettings GetSettingsByID(System.Int32 agentTypeID)
    // Offset: 0x544F790
    static ::UnityEngine::AI::NavMeshBuildSettings GetSettingsByID(int agentTypeID);
    // static private System.Boolean Raycast_Injected(ref UnityEngine.Vector3 sourcePosition, ref UnityEngine.Vector3 targetPosition, out UnityEngine.AI.NavMeshHit hit, System.Int32 areaMask)
    // Offset: 0x544F1EC
    static bool Raycast_Injected(ByRef<::UnityEngine::Vector3> sourcePosition, ByRef<::UnityEngine::Vector3> targetPosition, ByRef<::UnityEngine::AI::NavMeshHit> hit, int areaMask);
    // static private System.Boolean CalculatePathInternal_Injected(ref UnityEngine.Vector3 sourcePosition, ref UnityEngine.Vector3 targetPosition, System.Int32 areaMask, UnityEngine.AI.NavMeshPath path)
    // Offset: 0x544F37C
    static bool CalculatePathInternal_Injected(ByRef<::UnityEngine::Vector3> sourcePosition, ByRef<::UnityEngine::Vector3> targetPosition, int areaMask, ::UnityEngine::AI::NavMeshPath* path);
    // static private System.Boolean SamplePosition_Injected(ref UnityEngine.Vector3 sourcePosition, out UnityEngine.AI.NavMeshHit hit, System.Single maxDistance, System.Int32 areaMask)
    // Offset: 0x544F448
    static bool SamplePosition_Injected(ByRef<::UnityEngine::Vector3> sourcePosition, ByRef<::UnityEngine::AI::NavMeshHit> hit, float maxDistance, int areaMask);
    // static private System.Int32 AddNavMeshDataTransformedInternal_Injected(UnityEngine.AI.NavMeshData navMeshData, ref UnityEngine.Vector3 position, ref UnityEngine.Quaternion rotation)
    // Offset: 0x544F658
    static int AddNavMeshDataTransformedInternal_Injected(::UnityEngine::AI::NavMeshData* navMeshData, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);
    // static private System.Int32 AddLinkInternal_Injected(ref UnityEngine.AI.NavMeshLinkData link, ref UnityEngine.Vector3 position, ref UnityEngine.Quaternion rotation)
    // Offset: 0x544F73C
    static int AddLinkInternal_Injected(ByRef<::UnityEngine::AI::NavMeshLinkData> link, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);
    // static private System.Void GetSettingsByID_Injected(System.Int32 agentTypeID, out UnityEngine.AI.NavMeshBuildSettings ret)
    // Offset: 0x544F7FC
    static void GetSettingsByID_Injected(int agentTypeID, ByRef<::UnityEngine::AI::NavMeshBuildSettings> ret);
  }; // UnityEngine.AI.NavMesh
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::Internal_CallOnNavMeshPreUpdate
// Il2CppName: Internal_CallOnNavMeshPreUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AI::NavMesh::Internal_CallOnNavMeshPreUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "Internal_CallOnNavMeshPreUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::AI::NavMeshHit>, int)>(&UnityEngine::AI::NavMesh::Raycast)> {
  static const MethodInfo* get() {
    static auto* sourcePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshHit")->this_arg;
    static auto* areaMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcePosition, targetPosition, hit, areaMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::CalculatePath
// Il2CppName: CalculatePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int, ::UnityEngine::AI::NavMeshPath*)>(&UnityEngine::AI::NavMesh::CalculatePath)> {
  static const MethodInfo* get() {
    static auto* sourcePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* areaMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "CalculatePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcePosition, targetPosition, areaMask, path});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::CalculatePathInternal
// Il2CppName: CalculatePathInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int, ::UnityEngine::AI::NavMeshPath*)>(&UnityEngine::AI::NavMesh::CalculatePathInternal)> {
  static const MethodInfo* get() {
    static auto* sourcePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* areaMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "CalculatePathInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcePosition, targetPosition, areaMask, path});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::SamplePosition
// Il2CppName: SamplePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ByRef<::UnityEngine::AI::NavMeshHit>, float, int)>(&UnityEngine::AI::NavMesh::SamplePosition)> {
  static const MethodInfo* get() {
    static auto* sourcePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* areaMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "SamplePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcePosition, hit, maxDistance, areaMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::GetAreaFromName
// Il2CppName: GetAreaFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::AI::NavMesh::GetAreaFromName)> {
  static const MethodInfo* get() {
    static auto* areaName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "GetAreaFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{areaName});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::AddNavMeshData
// Il2CppName: AddNavMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AI::NavMeshDataInstance (*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::AI::NavMesh::AddNavMeshData)> {
  static const MethodInfo* get() {
    static auto* navMeshData = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshData")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "AddNavMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{navMeshData, position, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::IsValidNavMeshDataHandle
// Il2CppName: IsValidNavMeshDataHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::AI::NavMesh::IsValidNavMeshDataHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "IsValidNavMeshDataHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::IsValidLinkHandle
// Il2CppName: IsValidLinkHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::AI::NavMesh::IsValidLinkHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "IsValidLinkHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::InternalSetOwner
// Il2CppName: InternalSetOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int)>(&UnityEngine::AI::NavMesh::InternalSetOwner)> {
  static const MethodInfo* get() {
    static auto* dataID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ownerID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "InternalSetOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataID, ownerID});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::InternalSetLinkOwner
// Il2CppName: InternalSetLinkOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int)>(&UnityEngine::AI::NavMesh::InternalSetLinkOwner)> {
  static const MethodInfo* get() {
    static auto* linkID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ownerID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "InternalSetLinkOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{linkID, ownerID});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::AddNavMeshDataTransformedInternal
// Il2CppName: AddNavMeshDataTransformedInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::AI::NavMesh::AddNavMeshDataTransformedInternal)> {
  static const MethodInfo* get() {
    static auto* navMeshData = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshData")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "AddNavMeshDataTransformedInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{navMeshData, position, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::RemoveNavMeshDataInternal
// Il2CppName: RemoveNavMeshDataInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::AI::NavMesh::RemoveNavMeshDataInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "RemoveNavMeshDataInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::AddLink
// Il2CppName: AddLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AI::NavMeshLinkInstance (*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::AI::NavMesh::AddLink)> {
  static const MethodInfo* get() {
    static auto* link = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshLinkData")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "AddLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{link, position, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::AddLinkInternal
// Il2CppName: AddLinkInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::AI::NavMesh::AddLinkInternal)> {
  static const MethodInfo* get() {
    static auto* link = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshLinkData")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "AddLinkInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{link, position, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::RemoveLinkInternal
// Il2CppName: RemoveLinkInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::AI::NavMesh::RemoveLinkInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "RemoveLinkInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::GetSettingsByID
// Il2CppName: GetSettingsByID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AI::NavMeshBuildSettings (*)(int)>(&UnityEngine::AI::NavMesh::GetSettingsByID)> {
  static const MethodInfo* get() {
    static auto* agentTypeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "GetSettingsByID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agentTypeID});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::Raycast_Injected
// Il2CppName: Raycast_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::AI::NavMeshHit>, int)>(&UnityEngine::AI::NavMesh::Raycast_Injected)> {
  static const MethodInfo* get() {
    static auto* sourcePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshHit")->this_arg;
    static auto* areaMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "Raycast_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcePosition, targetPosition, hit, areaMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::CalculatePathInternal_Injected
// Il2CppName: CalculatePathInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, int, ::UnityEngine::AI::NavMeshPath*)>(&UnityEngine::AI::NavMesh::CalculatePathInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* sourcePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* areaMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "CalculatePathInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcePosition, targetPosition, areaMask, path});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::SamplePosition_Injected
// Il2CppName: SamplePosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::AI::NavMeshHit>, float, int)>(&UnityEngine::AI::NavMesh::SamplePosition_Injected)> {
  static const MethodInfo* get() {
    static auto* sourcePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* areaMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "SamplePosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcePosition, hit, maxDistance, areaMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::AddNavMeshDataTransformedInternal_Injected
// Il2CppName: AddNavMeshDataTransformedInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::AI::NavMeshData*, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::AI::NavMesh::AddNavMeshDataTransformedInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* navMeshData = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshData")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "AddNavMeshDataTransformedInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{navMeshData, position, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::AddLinkInternal_Injected
// Il2CppName: AddLinkInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::UnityEngine::AI::NavMeshLinkData>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::AI::NavMesh::AddLinkInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* link = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshLinkData")->this_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "AddLinkInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{link, position, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMesh::GetSettingsByID_Injected
// Il2CppName: GetSettingsByID_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ByRef<::UnityEngine::AI::NavMeshBuildSettings>)>(&UnityEngine::AI::NavMesh::GetSettingsByID_Injected)> {
  static const MethodInfo* get() {
    static auto* agentTypeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine.AI", "NavMeshBuildSettings")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMesh*), "GetSettingsByID_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agentTypeID, ret});
  }
};
