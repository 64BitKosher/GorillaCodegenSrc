// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Technie.PhysicsCreator.Skinned.BoneJointType
#include "Technie/PhysicsCreator/Skinned/BoneJointType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator.Skinned
namespace Technie::PhysicsCreator::Skinned {
  // Forward declaring type: BoneData
  class BoneData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::Skinned::BoneData);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::Skinned::BoneData*, "Technie.PhysicsCreator.Skinned", "BoneData");
// Type namespace: Technie.PhysicsCreator.Skinned
namespace Technie::PhysicsCreator::Skinned {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.Skinned.BoneData
  // [TokenAttribute] Offset: FFFFFFFF
  class BoneData : public ::Il2CppObject {
    public:
    public:
    // public System.String targetBoneName
    // Size: 0x8
    // Offset: 0x10
    ::StringW targetBoneName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean addRigidbody
    // Size: 0x1
    // Offset: 0x18
    bool addRigidbody;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: addRigidbody and: mass
    char __padding1[0x3] = {};
    // public System.Single mass
    // Size: 0x4
    // Offset: 0x1C
    float mass;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single linearDrag
    // Size: 0x4
    // Offset: 0x20
    float linearDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single angularDrag
    // Size: 0x4
    // Offset: 0x24
    float angularDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean isKinematic
    // Size: 0x1
    // Offset: 0x28
    bool isKinematic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean addJoint
    // Size: 0x1
    // Offset: 0x29
    bool addJoint;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: addJoint and: jointType
    char __padding6[0x2] = {};
    // public Technie.PhysicsCreator.Skinned.BoneJointType jointType
    // Size: 0x4
    // Offset: 0x2C
    ::Technie::PhysicsCreator::Skinned::BoneJointType jointType;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::Skinned::BoneJointType) == 0x4);
    // public UnityEngine.Vector3 primaryAxis
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 primaryAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 secondaryAxis
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 secondaryAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single primaryLowerAngularLimit
    // Size: 0x4
    // Offset: 0x48
    float primaryLowerAngularLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single primaryUpperAngularLimit
    // Size: 0x4
    // Offset: 0x4C
    float primaryUpperAngularLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single secondaryAngularLimit
    // Size: 0x4
    // Offset: 0x50
    float secondaryAngularLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tertiaryAngularLimit
    // Size: 0x4
    // Offset: 0x54
    float tertiaryAngularLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single translationLimit
    // Size: 0x4
    // Offset: 0x58
    float translationLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single linearDamping
    // Size: 0x4
    // Offset: 0x5C
    float linearDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single angularDamping
    // Size: 0x4
    // Offset: 0x60
    float angularDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.String targetBoneName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_targetBoneName();
    // Get instance field reference: public System.Boolean addRigidbody
    [[deprecated("Use field access instead!")]] bool& dyn_addRigidbody();
    // Get instance field reference: public System.Single mass
    [[deprecated("Use field access instead!")]] float& dyn_mass();
    // Get instance field reference: public System.Single linearDrag
    [[deprecated("Use field access instead!")]] float& dyn_linearDrag();
    // Get instance field reference: public System.Single angularDrag
    [[deprecated("Use field access instead!")]] float& dyn_angularDrag();
    // Get instance field reference: public System.Boolean isKinematic
    [[deprecated("Use field access instead!")]] bool& dyn_isKinematic();
    // Get instance field reference: public System.Boolean addJoint
    [[deprecated("Use field access instead!")]] bool& dyn_addJoint();
    // Get instance field reference: public Technie.PhysicsCreator.Skinned.BoneJointType jointType
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::Skinned::BoneJointType& dyn_jointType();
    // Get instance field reference: public UnityEngine.Vector3 primaryAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_primaryAxis();
    // Get instance field reference: public UnityEngine.Vector3 secondaryAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_secondaryAxis();
    // Get instance field reference: public System.Single primaryLowerAngularLimit
    [[deprecated("Use field access instead!")]] float& dyn_primaryLowerAngularLimit();
    // Get instance field reference: public System.Single primaryUpperAngularLimit
    [[deprecated("Use field access instead!")]] float& dyn_primaryUpperAngularLimit();
    // Get instance field reference: public System.Single secondaryAngularLimit
    [[deprecated("Use field access instead!")]] float& dyn_secondaryAngularLimit();
    // Get instance field reference: public System.Single tertiaryAngularLimit
    [[deprecated("Use field access instead!")]] float& dyn_tertiaryAngularLimit();
    // Get instance field reference: public System.Single translationLimit
    [[deprecated("Use field access instead!")]] float& dyn_translationLimit();
    // Get instance field reference: public System.Single linearDamping
    [[deprecated("Use field access instead!")]] float& dyn_linearDamping();
    // Get instance field reference: public System.Single angularDamping
    [[deprecated("Use field access instead!")]] float& dyn_angularDamping();
    // public System.Void .ctor(UnityEngine.Transform src)
    // Offset: 0x5038424
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoneData* New_ctor(::UnityEngine::Transform* src) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::Skinned::BoneData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoneData*, creationType>(src)));
    }
    // public UnityEngine.Vector3 GetThirdAxis()
    // Offset: 0x50384FC
    ::UnityEngine::Vector3 GetThirdAxis();
  }; // Technie.PhysicsCreator.Skinned.BoneData
  #pragma pack(pop)
  static check_size<sizeof(BoneData), 96 + sizeof(float)> __Technie_PhysicsCreator_Skinned_BoneDataSizeCheck;
  static_assert(sizeof(BoneData) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::BoneData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::BoneData::GetThirdAxis
// Il2CppName: GetThirdAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Technie::PhysicsCreator::Skinned::BoneData::*)()>(&Technie::PhysicsCreator::Skinned::BoneData::GetThirdAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::BoneData*), "GetThirdAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
