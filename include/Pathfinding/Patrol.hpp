// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.VersionedMonoBehaviour
#include "Pathfinding/VersionedMonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IAstarAI
  class IAstarAI;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Patrol
  class Patrol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Patrol);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Patrol*, "Pathfinding", "Patrol");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Patrol
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [UniqueComponentAttribute] Offset: FFFFFFFF
  class Patrol : public ::Pathfinding::VersionedMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // public UnityEngine.Transform[] targets
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Transform*> targets;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x30
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x34
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Pathfinding.IAstarAI agent
    // Size: 0x8
    // Offset: 0x38
    ::Pathfinding::IAstarAI* agent;
    // Field size check
    static_assert(sizeof(::Pathfinding::IAstarAI*) == 0x8);
    // private System.Single switchTime
    // Size: 0x4
    // Offset: 0x40
    float switchTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform[] targets
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_targets();
    // Get instance field reference: public System.Single delay
    [[deprecated("Use field access instead!")]] float& dyn_delay();
    // Get instance field reference: private System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: private Pathfinding.IAstarAI agent
    [[deprecated("Use field access instead!")]] ::Pathfinding::IAstarAI*& dyn_agent();
    // Get instance field reference: private System.Single switchTime
    [[deprecated("Use field access instead!")]] float& dyn_switchTime();
    // private System.Void Update()
    // Offset: 0x2988CC0
    void Update();
    // protected override System.Void Awake()
    // Offset: 0x2988C5C
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::Awake()
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x2988F88
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Patrol* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Patrol::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Patrol*, creationType>()));
    }
  }; // Pathfinding.Patrol
  #pragma pack(pop)
  static check_size<sizeof(Patrol), 64 + sizeof(float)> __Pathfinding_PatrolSizeCheck;
  static_assert(sizeof(Patrol) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Patrol::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Patrol::*)()>(&Pathfinding::Patrol::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Patrol*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Patrol::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Patrol::*)()>(&Pathfinding::Patrol::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Patrol*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Patrol::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
