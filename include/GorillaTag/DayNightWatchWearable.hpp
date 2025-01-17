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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BetterDayNightManager
  class BetterDayNightManager;
}
// Completed forward declares
// Type namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: DayNightWatchWearable
  class DayNightWatchWearable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::DayNightWatchWearable);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::DayNightWatchWearable*, "GorillaTag", "DayNightWatchWearable");
// Type namespace: GorillaTag
namespace GorillaTag {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.DayNightWatchWearable
  // [TokenAttribute] Offset: FFFFFFFF
  class DayNightWatchWearable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform clockNeedle
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* clockNeedle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 needleRotationAxis
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 needleRotationAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: needleRotationAxis and: dayNightManager
    char __padding1[0x4] = {};
    // private BetterDayNightManager dayNightManager
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BetterDayNightManager* dayNightManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BetterDayNightManager*) == 0x8);
    // private System.Single rotationDegree
    // Size: 0x4
    // Offset: 0x40
    float rotationDegree;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rotationDegree and: currentTimeOfDay
    char __padding3[0x4] = {};
    // private System.String currentTimeOfDay
    // Size: 0x8
    // Offset: 0x48
    ::StringW currentTimeOfDay;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Quaternion initialRotation
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Quaternion initialRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Transform clockNeedle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_clockNeedle();
    // Get instance field reference: public UnityEngine.Vector3 needleRotationAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_needleRotationAxis();
    // Get instance field reference: private BetterDayNightManager dayNightManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BetterDayNightManager*& dyn_dayNightManager();
    // Get instance field reference: private System.Single rotationDegree
    [[deprecated("Use field access instead!")]] float& dyn_rotationDegree();
    // Get instance field reference: private System.String currentTimeOfDay
    [[deprecated("Use field access instead!")]] ::StringW& dyn_currentTimeOfDay();
    // Get instance field reference: private UnityEngine.Quaternion initialRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_initialRotation();
    // private System.Void Start()
    // Offset: 0x287CB0C
    void Start();
    // private System.Void Update()
    // Offset: 0x287CC04
    void Update();
    // public System.Void .ctor()
    // Offset: 0x287CE40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DayNightWatchWearable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::DayNightWatchWearable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DayNightWatchWearable*, creationType>()));
    }
  }; // GorillaTag.DayNightWatchWearable
  #pragma pack(pop)
  static check_size<sizeof(DayNightWatchWearable), 80 + sizeof(::UnityEngine::Quaternion)> __GorillaTag_DayNightWatchWearableSizeCheck;
  static_assert(sizeof(DayNightWatchWearable) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::DayNightWatchWearable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::DayNightWatchWearable::*)()>(&GorillaTag::DayNightWatchWearable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::DayNightWatchWearable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::DayNightWatchWearable::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::DayNightWatchWearable::*)()>(&GorillaTag::DayNightWatchWearable::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::DayNightWatchWearable*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::DayNightWatchWearable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
