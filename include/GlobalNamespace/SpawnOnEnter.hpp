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
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SpawnOnEnter
  class SpawnOnEnter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SpawnOnEnter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnOnEnter*, "", "SpawnOnEnter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SpawnOnEnter
  // [TokenAttribute] Offset: FFFFFFFF
  class SpawnOnEnter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject prefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* prefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single cooldown
    // Size: 0x4
    // Offset: 0x28
    float cooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastSpawnTime
    // Size: 0x4
    // Offset: 0x2C
    float lastSpawnTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.GameObject prefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_prefab();
    // Get instance field reference: public System.Single cooldown
    [[deprecated("Use field access instead!")]] float& dyn_cooldown();
    // Get instance field reference: private System.Single lastSpawnTime
    [[deprecated("Use field access instead!")]] float& dyn_lastSpawnTime();
    // public System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x269CA60
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x269CB14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnOnEnter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnOnEnter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnOnEnter*, creationType>()));
    }
  }; // SpawnOnEnter
  #pragma pack(pop)
  static check_size<sizeof(SpawnOnEnter), 44 + sizeof(float)> __GlobalNamespace_SpawnOnEnterSizeCheck;
  static_assert(sizeof(SpawnOnEnter) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnOnEnter::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnOnEnter::*)(::UnityEngine::Collider*)>(&GlobalNamespace::SpawnOnEnter::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnOnEnter*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnOnEnter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
