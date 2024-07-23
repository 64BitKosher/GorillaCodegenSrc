// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ModifiableContactPair
  struct ModifiableContactPair;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableContactPair, "UnityEngine", "ModifiableContactPair");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x68
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ModifiableContactPair
  // [TokenAttribute] Offset: FFFFFFFF
  struct ModifiableContactPair/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.IntPtr actor
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr actor;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr otherActor
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr otherActor;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr shape
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr shape;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr otherShape
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr otherShape;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion otherRotation
    // Size: 0x10
    // Offset: 0x3C
    ::UnityEngine::Quaternion otherRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 otherPosition
    // Size: 0xC
    // Offset: 0x4C
    ::UnityEngine::Vector3 otherPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Int32 numContacts
    // Size: 0x4
    // Offset: 0x58
    int numContacts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numContacts and: contacts
    char __padding8[0x4] = {};
    // private System.IntPtr contacts
    // Size: 0x8
    // Offset: 0x60
    ::System::IntPtr contacts;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ModifiableContactPair
    constexpr ModifiableContactPair(::System::IntPtr actor_ = {}, ::System::IntPtr otherActor_ = {}, ::System::IntPtr shape_ = {}, ::System::IntPtr otherShape_ = {}, ::UnityEngine::Quaternion rotation_ = {}, ::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Quaternion otherRotation_ = {}, ::UnityEngine::Vector3 otherPosition_ = {}, int numContacts_ = {}, ::System::IntPtr contacts_ = {}) noexcept : actor{actor_}, otherActor{otherActor_}, shape{shape_}, otherShape{otherShape_}, rotation{rotation_}, position{position_}, otherRotation{otherRotation_}, otherPosition{otherPosition_}, numContacts{numContacts_}, contacts{contacts_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.IntPtr actor
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_actor();
    // Get instance field reference: private System.IntPtr otherActor
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_otherActor();
    // Get instance field reference: private System.IntPtr shape
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_shape();
    // Get instance field reference: private System.IntPtr otherShape
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_otherShape();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotation();
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion otherRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_otherRotation();
    // Get instance field reference: public UnityEngine.Vector3 otherPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_otherPosition();
    // Get instance field reference: private System.Int32 numContacts
    [[deprecated("Use field access instead!")]] int& dyn_numContacts();
    // Get instance field reference: private System.IntPtr contacts
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_contacts();
  }; // UnityEngine.ModifiableContactPair
  #pragma pack(pop)
  static check_size<sizeof(ModifiableContactPair), 96 + sizeof(::System::IntPtr)> __UnityEngine_ModifiableContactPairSizeCheck;
  static_assert(sizeof(ModifiableContactPair) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"