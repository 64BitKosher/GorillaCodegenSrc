// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Technie::PhysicsCreator::Rigid
namespace Technie::PhysicsCreator::Rigid {
  // Forward declaring type: Hull
  class Hull;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: MeshCollider
  class MeshCollider;
}
// Forward declaring namespace: Technie::PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: RigidColliderCreatorChild
  class RigidColliderCreatorChild;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: HullMapping
  class HullMapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::HullMapping);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::HullMapping*, "Technie.PhysicsCreator", "HullMapping");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.HullMapping
  // [TokenAttribute] Offset: FFFFFFFF
  class HullMapping : public ::Il2CppObject {
    public:
    public:
    // public Technie.PhysicsCreator.Rigid.Hull sourceHull
    // Size: 0x8
    // Offset: 0x10
    ::Technie::PhysicsCreator::Rigid::Hull* sourceHull;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::Rigid::Hull*) == 0x8);
    // public UnityEngine.Collider generatedCollider
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Collider* generatedCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // public UnityEngine.MeshCollider[] autoGeneratedColliders
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::MeshCollider*> autoGeneratedColliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MeshCollider*>) == 0x8);
    // public Technie.PhysicsCreator.RigidColliderCreatorChild targetChild
    // Size: 0x8
    // Offset: 0x28
    ::Technie::PhysicsCreator::RigidColliderCreatorChild* targetChild;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::RigidColliderCreatorChild*) == 0x8);
    // public Technie.PhysicsCreator.RigidColliderCreatorChild[] targetAutoGeneratedChilds
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Technie::PhysicsCreator::RigidColliderCreatorChild*> targetAutoGeneratedChilds;
    // Field size check
    static_assert(sizeof(::ArrayW<::Technie::PhysicsCreator::RigidColliderCreatorChild*>) == 0x8);
    public:
    // Get instance field reference: public Technie.PhysicsCreator.Rigid.Hull sourceHull
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::Rigid::Hull*& dyn_sourceHull();
    // Get instance field reference: public UnityEngine.Collider generatedCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_generatedCollider();
    // Get instance field reference: public UnityEngine.MeshCollider[] autoGeneratedColliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::MeshCollider*>& dyn_autoGeneratedColliders();
    // Get instance field reference: public Technie.PhysicsCreator.RigidColliderCreatorChild targetChild
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::RigidColliderCreatorChild*& dyn_targetChild();
    // Get instance field reference: public Technie.PhysicsCreator.RigidColliderCreatorChild[] targetAutoGeneratedChilds
    [[deprecated("Use field access instead!")]] ::ArrayW<::Technie::PhysicsCreator::RigidColliderCreatorChild*>& dyn_targetAutoGeneratedChilds();
    // public System.Void AddAutoChild(Technie.PhysicsCreator.RigidColliderCreatorChild newChild, UnityEngine.MeshCollider newCollider)
    // Offset: 0x502D67C
    void AddAutoChild(::Technie::PhysicsCreator::RigidColliderCreatorChild* newChild, ::UnityEngine::MeshCollider* newCollider);
    // public System.Void .ctor()
    // Offset: 0x502D9A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HullMapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::HullMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HullMapping*, creationType>()));
    }
  }; // Technie.PhysicsCreator.HullMapping
  #pragma pack(pop)
  static check_size<sizeof(HullMapping), 48 + sizeof(::ArrayW<::Technie::PhysicsCreator::RigidColliderCreatorChild*>)> __Technie_PhysicsCreator_HullMappingSizeCheck;
  static_assert(sizeof(HullMapping) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::HullMapping::AddAutoChild
// Il2CppName: AddAutoChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::HullMapping::*)(::Technie::PhysicsCreator::RigidColliderCreatorChild*, ::UnityEngine::MeshCollider*)>(&Technie::PhysicsCreator::HullMapping::AddAutoChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "RigidColliderCreatorChild")->byval_arg;
    static auto* newCollider = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshCollider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::HullMapping*), "AddAutoChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild, newCollider});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::HullMapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
