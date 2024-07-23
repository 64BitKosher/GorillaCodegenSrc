// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VoiceLoudnessReactorTransformRotationTarget
  class VoiceLoudnessReactorTransformRotationTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*, "", "VoiceLoudnessReactorTransformRotationTarget");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: VoiceLoudnessReactorTransformRotationTarget
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceLoudnessReactorTransformRotationTarget : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Quaternion initial
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Quaternion initial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion Max
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Quaternion Max;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public System.Single Scale
    // Size: 0x4
    // Offset: 0x38
    float Scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean UseSmoothedLoudness
    // Size: 0x1
    // Offset: 0x3C
    bool UseSmoothedLoudness;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: private UnityEngine.Quaternion initial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_initial();
    // Get instance field reference: public UnityEngine.Quaternion Max
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_Max();
    // Get instance field reference: public System.Single Scale
    [[deprecated("Use field access instead!")]] float& dyn_Scale();
    // Get instance field reference: public System.Boolean UseSmoothedLoudness
    [[deprecated("Use field access instead!")]] bool& dyn_UseSmoothedLoudness();
    // public UnityEngine.Quaternion get_Initial()
    // Offset: 0x27A66E0
    ::UnityEngine::Quaternion get_Initial();
    // public System.Void set_Initial(UnityEngine.Quaternion value)
    // Offset: 0x27A66EC
    void set_Initial(::UnityEngine::Quaternion value);
    // public System.Void .ctor()
    // Offset: 0x27A66F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceLoudnessReactorTransformRotationTarget* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceLoudnessReactorTransformRotationTarget*, creationType>()));
    }
  }; // VoiceLoudnessReactorTransformRotationTarget
  #pragma pack(pop)
  static check_size<sizeof(VoiceLoudnessReactorTransformRotationTarget), 60 + sizeof(bool)> __GlobalNamespace_VoiceLoudnessReactorTransformRotationTargetSizeCheck;
  static_assert(sizeof(VoiceLoudnessReactorTransformRotationTarget) == 0x3D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::get_Initial
// Il2CppName: get_Initial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::*)()>(&GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::get_Initial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*), "get_Initial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::set_Initial
// Il2CppName: set_Initial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::*)(::UnityEngine::Quaternion)>(&GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::set_Initial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*), "set_Initial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!