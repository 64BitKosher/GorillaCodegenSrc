// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // Forward declaring type: ScubaWatchWearable
  class ScubaWatchWearable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Cosmetics::ScubaWatchWearable);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Cosmetics::ScubaWatchWearable*, "GorillaTag.Cosmetics", "ScubaWatchWearable");
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.Cosmetics.ScubaWatchWearable
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class ScubaWatchWearable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean onLeftHand
    // Size: 0x1
    // Offset: 0x20
    bool onLeftHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: onLeftHand and: dialNeedle
    char __padding0[0x7] = {};
    // public UnityEngine.Transform dialNeedle
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* dialNeedle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Quaternion initialDialRotation
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Quaternion initialDialRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector2 depthRange
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Vector2 depthRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 dialRotationRange
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Vector2 dialRotationRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector3 dialRotationAxis
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 dialRotationAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single currentDepth
    // Size: 0x4
    // Offset: 0x5C
    float currentDepth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean onLeftHand
    [[deprecated("Use field access instead!")]] bool& dyn_onLeftHand();
    // Get instance field reference: public UnityEngine.Transform dialNeedle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_dialNeedle();
    // Get instance field reference: public UnityEngine.Quaternion initialDialRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_initialDialRotation();
    // Get instance field reference: public UnityEngine.Vector2 depthRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_depthRange();
    // Get instance field reference: public UnityEngine.Vector2 dialRotationRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_dialRotationRange();
    // Get instance field reference: public UnityEngine.Vector3 dialRotationAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_dialRotationAxis();
    // Get instance field reference: private System.Single currentDepth
    [[deprecated("Use field access instead!")]] float& dyn_currentDepth();
    // protected System.Void Update()
    // Offset: 0x28B2668
    void Update();
    // public System.Void .ctor()
    // Offset: 0x28B28B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScubaWatchWearable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Cosmetics::ScubaWatchWearable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScubaWatchWearable*, creationType>()));
    }
  }; // GorillaTag.Cosmetics.ScubaWatchWearable
  #pragma pack(pop)
  static check_size<sizeof(ScubaWatchWearable), 92 + sizeof(float)> __GorillaTag_Cosmetics_ScubaWatchWearableSizeCheck;
  static_assert(sizeof(ScubaWatchWearable) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Cosmetics::ScubaWatchWearable::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::ScubaWatchWearable::*)()>(&GorillaTag::Cosmetics::ScubaWatchWearable::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::ScubaWatchWearable*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::ScubaWatchWearable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
