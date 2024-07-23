// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector2
  struct Vector2;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SimpleResizable
  class SimpleResizable;
  // Forward declaring type: Spawnable
  class Spawnable;
  // Forward declaring type: OVRSceneAnchor
  class OVRSceneAnchor;
  // Forward declaring type: OVRSemanticClassification
  class OVRSemanticClassification;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FurnitureSpawner
  class FurnitureSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FurnitureSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FurnitureSpawner*, "", "FurnitureSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: FurnitureSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: FFFFFFFF
  class FurnitureSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject RoomLightPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* RoomLightPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public SimpleResizable FallbackPrefab
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SimpleResizable* FallbackPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleResizable*) == 0x8);
    // public System.Collections.Generic.List`1<Spawnable> SpawnablePrefabs
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::GlobalNamespace::Spawnable*>* SpawnablePrefabs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::Spawnable*>*) == 0x8);
    // private OVRSceneAnchor _sceneAnchor
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OVRSceneAnchor* sceneAnchor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSceneAnchor*) == 0x8);
    // private OVRSemanticClassification _classification
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::OVRSemanticClassification* classification;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSemanticClassification*) == 0x8);
    // private System.Int32 _frameCounter
    // Size: 0x4
    // Offset: 0x48
    int frameCounter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private UnityEngine.GameObject _roomLightRef
    static ::UnityEngine::GameObject* _get__roomLightRef();
    // Set static field: static private UnityEngine.GameObject _roomLightRef
    static void _set__roomLightRef(::UnityEngine::GameObject* value);
    // Get instance field reference: public UnityEngine.GameObject RoomLightPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_RoomLightPrefab();
    // Get instance field reference: public SimpleResizable FallbackPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleResizable*& dyn_FallbackPrefab();
    // Get instance field reference: public System.Collections.Generic.List`1<Spawnable> SpawnablePrefabs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::Spawnable*>*& dyn_SpawnablePrefabs();
    // Get instance field reference: private OVRSceneAnchor _sceneAnchor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSceneAnchor*& dyn__sceneAnchor();
    // Get instance field reference: private OVRSemanticClassification _classification
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSemanticClassification*& dyn__classification();
    // Get instance field reference: private System.Int32 _frameCounter
    [[deprecated("Use field access instead!")]] int& dyn__frameCounter();
    // private System.Void Start()
    // Offset: 0x2946C84
    void Start();
    // private System.Void SpawnSpawnable()
    // Offset: 0x2946E9C
    void SpawnSpawnable();
    // private System.Boolean FindValidSpawnable(out SimpleResizable currentSpawnable)
    // Offset: 0x29472EC
    bool FindValidSpawnable(ByRef<::GlobalNamespace::SimpleResizable*> currentSpawnable);
    // private System.Void AddRoomLight()
    // Offset: 0x2946D24
    void AddRoomLight();
    // private System.Void GetVolumeFromTopPlane(UnityEngine.Transform plane, UnityEngine.Vector2 dimensions, System.Single height, out UnityEngine.Vector3 position, out UnityEngine.Quaternion rotation, out UnityEngine.Vector3 localScale)
    // Offset: 0x2947558
    void GetVolumeFromTopPlane(::UnityEngine::Transform* plane, ::UnityEngine::Vector2 dimensions, float height, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Vector3> localScale);
    // public System.Void .ctor()
    // Offset: 0x2947A40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FurnitureSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FurnitureSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FurnitureSpawner*, creationType>()));
    }
  }; // FurnitureSpawner
  #pragma pack(pop)
  static check_size<sizeof(FurnitureSpawner), 72 + sizeof(int)> __GlobalNamespace_FurnitureSpawnerSizeCheck;
  static_assert(sizeof(FurnitureSpawner) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FurnitureSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FurnitureSpawner::*)()>(&GlobalNamespace::FurnitureSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FurnitureSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FurnitureSpawner::SpawnSpawnable
// Il2CppName: SpawnSpawnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FurnitureSpawner::*)()>(&GlobalNamespace::FurnitureSpawner::SpawnSpawnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FurnitureSpawner*), "SpawnSpawnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FurnitureSpawner::FindValidSpawnable
// Il2CppName: FindValidSpawnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FurnitureSpawner::*)(ByRef<::GlobalNamespace::SimpleResizable*>)>(&GlobalNamespace::FurnitureSpawner::FindValidSpawnable)> {
  static const MethodInfo* get() {
    static auto* currentSpawnable = &::il2cpp_utils::GetClassFromName("", "SimpleResizable")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FurnitureSpawner*), "FindValidSpawnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentSpawnable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FurnitureSpawner::AddRoomLight
// Il2CppName: AddRoomLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FurnitureSpawner::*)()>(&GlobalNamespace::FurnitureSpawner::AddRoomLight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FurnitureSpawner*), "AddRoomLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FurnitureSpawner::GetVolumeFromTopPlane
// Il2CppName: GetVolumeFromTopPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FurnitureSpawner::*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::FurnitureSpawner::GetVolumeFromTopPlane)> {
  static const MethodInfo* get() {
    static auto* plane = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* dimensions = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* localScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FurnitureSpawner*), "GetVolumeFromTopPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plane, dimensions, height, position, rotation, localScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FurnitureSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
