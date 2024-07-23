// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Examples.ProceduralWorld
#include "Pathfinding/Examples/ProceduralWorld.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Examples
namespace Pathfinding::Examples {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Examples::ProceduralWorld::ProceduralTile);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Examples::ProceduralWorld::ProceduralTile*, "Pathfinding.Examples", "ProceduralWorld/ProceduralTile");
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Examples.ProceduralWorld/ProceduralTile
  // [TokenAttribute] Offset: FFFFFFFF
  class ProceduralWorld::ProceduralTile : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::Examples::ProceduralWorld::ProceduralTile::$Generate$d__11
    class $Generate$d__11;
    // Nested type: ::Pathfinding::Examples::ProceduralWorld::ProceduralTile::$InternalGenerate$d__16
    class $InternalGenerate$d__16;
    public:
    // private System.Int32 x
    // Size: 0x4
    // Offset: 0x10
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 z
    // Size: 0x4
    // Offset: 0x14
    int z;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Random rnd
    // Size: 0x8
    // Offset: 0x18
    ::System::Random* rnd;
    // Field size check
    static_assert(sizeof(::System::Random*) == 0x8);
    // private Pathfinding.Examples.ProceduralWorld world
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::Examples::ProceduralWorld* world;
    // Field size check
    static_assert(sizeof(::Pathfinding::Examples::ProceduralWorld*) == 0x8);
    // private System.Boolean <destroyed>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool destroyed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: destroyed and: root
    char __padding4[0x7] = {};
    // private UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Collections.IEnumerator ie
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::IEnumerator* ie;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: private System.Int32 z
    [[deprecated("Use field access instead!")]] int& dyn_z();
    // Get instance field reference: private System.Random rnd
    [[deprecated("Use field access instead!")]] ::System::Random*& dyn_rnd();
    // Get instance field reference: private Pathfinding.Examples.ProceduralWorld world
    [[deprecated("Use field access instead!")]] ::Pathfinding::Examples::ProceduralWorld*& dyn_world();
    // Get instance field reference: private System.Boolean <destroyed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$destroyed$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform root
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_root();
    // Get instance field reference: private System.Collections.IEnumerator ie
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_ie();
    // public System.Boolean get_destroyed()
    // Offset: 0x2A450A4
    bool get_destroyed();
    // private System.Void set_destroyed(System.Boolean value)
    // Offset: 0x2A450AC
    void set_destroyed(bool value);
    // public System.Void .ctor(Pathfinding.Examples.ProceduralWorld world, System.Int32 x, System.Int32 z)
    // Offset: 0x2A44D04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralWorld::ProceduralTile* New_ctor(::Pathfinding::Examples::ProceduralWorld* world, int x, int z) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Examples::ProceduralWorld::ProceduralTile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralWorld::ProceduralTile*, creationType>(world, x, z)));
    }
    // public System.Collections.IEnumerator Generate()
    // Offset: 0x2A44DB4
    ::System::Collections::IEnumerator* Generate();
    // public System.Void ForceFinish()
    // Offset: 0x2A44E20
    void ForceFinish();
    // private UnityEngine.Vector3 RandomInside()
    // Offset: 0x2A450E0
    ::UnityEngine::Vector3 RandomInside();
    // private UnityEngine.Vector3 RandomInside(System.Single px, System.Single pz)
    // Offset: 0x2A45174
    ::UnityEngine::Vector3 RandomInside(float px, float pz);
    // private UnityEngine.Quaternion RandomYRot(Pathfinding.Examples.ProceduralWorld/ProceduralPrefab prefab)
    // Offset: 0x2A4521C
    ::UnityEngine::Quaternion RandomYRot(::Pathfinding::Examples::ProceduralWorld::ProceduralPrefab* prefab);
    // private System.Collections.IEnumerator InternalGenerate()
    // Offset: 0x2A452E4
    ::System::Collections::IEnumerator* InternalGenerate();
    // public System.Void Destroy()
    // Offset: 0x2A44BA4
    void Destroy();
  }; // Pathfinding.Examples.ProceduralWorld/ProceduralTile
  #pragma pack(pop)
  static check_size<sizeof(ProceduralWorld::ProceduralTile), 56 + sizeof(::System::Collections::IEnumerator*)> __Pathfinding_Examples_ProceduralWorld_ProceduralTileSizeCheck;
  static_assert(sizeof(ProceduralWorld::ProceduralTile) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::get_destroyed
// Il2CppName: get_destroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)()>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::get_destroyed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "get_destroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::set_destroyed
// Il2CppName: set_destroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)(bool)>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::set_destroyed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "set_destroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::Generate
// Il2CppName: Generate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)()>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::Generate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "Generate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::ForceFinish
// Il2CppName: ForceFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)()>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::ForceFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "ForceFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::RandomInside
// Il2CppName: RandomInside
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)()>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::RandomInside)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "RandomInside", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::RandomInside
// Il2CppName: RandomInside
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)(float, float)>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::RandomInside)> {
  static const MethodInfo* get() {
    static auto* px = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pz = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "RandomInside", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{px, pz});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::RandomYRot
// Il2CppName: RandomYRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)(::Pathfinding::Examples::ProceduralWorld::ProceduralPrefab*)>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::RandomYRot)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("Pathfinding.Examples", "ProceduralWorld/ProceduralPrefab")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "RandomYRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::InternalGenerate
// Il2CppName: InternalGenerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)()>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::InternalGenerate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "InternalGenerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::ProceduralWorld::ProceduralTile::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::ProceduralWorld::ProceduralTile::*)()>(&Pathfinding::Examples::ProceduralWorld::ProceduralTile::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::ProceduralWorld::ProceduralTile*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
