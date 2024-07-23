// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Pathfinding.Int2
#include "Pathfinding/Int2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Examples
namespace Pathfinding::Examples {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Forward declaring type: ProceduralWorld
  class ProceduralWorld;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Examples::ProceduralWorld);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Examples::ProceduralWorld*, "Pathfinding.Examples", "ProceduralWorld");
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Examples.ProceduralWorld
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class ProceduralWorld : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Pathfinding::Examples::ProceduralWorld::RotationRandomness
    struct RotationRandomness;
    // Nested type: ::Pathfinding::Examples::ProceduralWorld::ProceduralPrefab
    class ProceduralPrefab;
    // Nested type: ::Pathfinding::Examples::ProceduralWorld::ProceduralTile
    class ProceduralTile;
    // Nested type: ::Pathfinding::Examples::ProceduralWorld::$GenerateTiles$d__13
    class $GenerateTiles$d__13;
    public:
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public Pathfinding.Examples.ProceduralWorld/ProceduralPrefab[] prefabs
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Pathfinding::Examples::ProceduralWorld::ProceduralPrefab*> prefabs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::Examples::ProceduralWorld::ProceduralPrefab*>) == 0x8);
    // public System.Int32 range
    // Size: 0x4
    // Offset: 0x30
    int range;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 disableAsyncLoadWithinRange
    // Size: 0x4
    // Offset: 0x34
    int disableAsyncLoadWithinRange;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single tileSize
    // Size: 0x4
    // Offset: 0x38
    float tileSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 subTiles
    // Size: 0x4
    // Offset: 0x3C
    int subTiles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean staticBatching
    // Size: 0x1
    // Offset: 0x40
    bool staticBatching;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: staticBatching and: tileGenerationQueue
    char __padding6[0x7] = {};
    // private System.Collections.Generic.Queue`1<System.Collections.IEnumerator> tileGenerationQueue
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>* tileGenerationQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Pathfinding.Int2,Pathfinding.Examples.ProceduralWorld/ProceduralTile> tiles
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2, ::Pathfinding::Examples::ProceduralWorld::ProceduralTile*>* tiles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2, ::Pathfinding::Examples::ProceduralWorld::ProceduralTile*>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public Pathfinding.Examples.ProceduralWorld/ProceduralPrefab[] prefabs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::Examples::ProceduralWorld::ProceduralPrefab*>& dyn_prefabs();
    // Get instance field reference: public System.Int32 range
    [[deprecated("Use field access instead!")]] int& dyn_range();
    // Get instance field reference: public System.Int32 disableAsyncLoadWithinRange
    [[deprecated("Use field access instead!")]] int& dyn_disableAsyncLoadWithinRange();
    // Get instance field reference: public System.Single tileSize
    [[deprecated("Use field access instead!")]] float& dyn_tileSize();
    // Get instance field reference: public System.Int32 subTiles
    [[deprecated("Use field access instead!")]] int& dyn_subTiles();
    // Get instance field reference: public System.Boolean staticBatching
    [[deprecated("Use field access instead!")]] bool& dyn_staticBatching();
    // Get instance field reference: private System.Collections.Generic.Queue`1<System.Collections.IEnumerator> tileGenerationQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*& dyn_tileGenerationQueue();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Pathfinding.Int2,Pathfinding.Examples.ProceduralWorld/ProceduralTile> tiles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2, ::Pathfinding::Examples::ProceduralWorld::ProceduralTile*>*& dyn_tiles();
    // private System.Void Start()
    // Offset: 0x2A44414
    void Start();
    // private System.Void Update()
    // Offset: 0x2A444A0
    void Update();
    // private System.Collections.IEnumerator GenerateTiles()
    // Offset: 0x2A44B38
    ::System::Collections::IEnumerator* GenerateTiles();
    // public System.Void .ctor()
    // Offset: 0x2A44F4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralWorld* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Examples::ProceduralWorld::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralWorld*, creationType>()));
    }
  }; // Pathfinding.Examples.ProceduralWorld
  #pragma pack(pop)
  static check_size<sizeof(ProceduralWorld), 80 + sizeof(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2, ::Pathfinding::Examples::ProceduralWorld::ProceduralTile*>*)> __Pathfinding_Examples_ProceduralWorldSizeCheck;
  static_assert(sizeof(ProceduralWorld) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::ProceduralWorld::*)()>(&Pathfinding::Examples::ProceduralWorld::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::ProceduralWorld::*)()>(&Pathfinding::Examples::ProceduralWorld::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::GenerateTiles
// Il2CppName: GenerateTiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Pathfinding::Examples::ProceduralWorld::*)()>(&Pathfinding::Examples::ProceduralWorld::GenerateTiles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld*), "GenerateTiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
