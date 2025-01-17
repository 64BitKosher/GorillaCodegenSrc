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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VoiceLoudnessReactorBlendShapeTarget
  class VoiceLoudnessReactorBlendShapeTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*, "", "VoiceLoudnessReactorBlendShapeTarget");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: VoiceLoudnessReactorBlendShapeTarget
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceLoudnessReactorBlendShapeTarget : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.SkinnedMeshRenderer SkinnedMeshRenderer
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::SkinnedMeshRenderer* SkinnedMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // public System.Int32 BlendShapeIndex
    // Size: 0x4
    // Offset: 0x18
    int BlendShapeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single minValue
    // Size: 0x4
    // Offset: 0x1C
    float minValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxValue
    // Size: 0x4
    // Offset: 0x20
    float maxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean UseSmoothedLoudness
    // Size: 0x1
    // Offset: 0x24
    bool UseSmoothedLoudness;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.SkinnedMeshRenderer SkinnedMeshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::SkinnedMeshRenderer*& dyn_SkinnedMeshRenderer();
    // Get instance field reference: public System.Int32 BlendShapeIndex
    [[deprecated("Use field access instead!")]] int& dyn_BlendShapeIndex();
    // Get instance field reference: public System.Single minValue
    [[deprecated("Use field access instead!")]] float& dyn_minValue();
    // Get instance field reference: public System.Single maxValue
    [[deprecated("Use field access instead!")]] float& dyn_maxValue();
    // Get instance field reference: public System.Boolean UseSmoothedLoudness
    [[deprecated("Use field access instead!")]] bool& dyn_UseSmoothedLoudness();
    // public System.Void .ctor()
    // Offset: 0x27A6650
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceLoudnessReactorBlendShapeTarget* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceLoudnessReactorBlendShapeTarget*, creationType>()));
    }
  }; // VoiceLoudnessReactorBlendShapeTarget
  #pragma pack(pop)
  static check_size<sizeof(VoiceLoudnessReactorBlendShapeTarget), 36 + sizeof(bool)> __GlobalNamespace_VoiceLoudnessReactorBlendShapeTargetSizeCheck;
  static_assert(sizeof(VoiceLoudnessReactorBlendShapeTarget) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
