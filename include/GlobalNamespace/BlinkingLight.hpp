// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BuildSafe.SceneBakeTask
#include "BuildSafe/SceneBakeTask.hpp"
// Including type: SRand
#include "GlobalNamespace/SRand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
// Forward declaring namespace: BuildSafe
namespace BuildSafe {
  // Skipping declaration: SceneBakeMode because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BlinkingLight
  class BlinkingLight;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BlinkingLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlinkingLight*, "", "BlinkingLight");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BlinkingLight
  // [TokenAttribute] Offset: FFFFFFFF
  class BlinkingLight : public ::BuildSafe::SceneBakeTask {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    public:
    // private UnityEngine.Material[] materialArray
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Material*> materialArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    public:
    // Get static field: static private SRand gColor
    static ::GlobalNamespace::SRand _get_gColor();
    // Set static field: static private SRand gColor
    static void _set_gColor(::GlobalNamespace::SRand value);
    // Get instance field reference: private UnityEngine.Material[] materialArray
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_materialArray();
    // static private System.Void .cctor()
    // Offset: 0x26E05EC
    static void _cctor();
    // public override System.Void OnSceneBake(UnityEngine.SceneManagement.Scene scene, BuildSafe.SceneBakeMode mode)
    // Offset: 0x26E0508
    // Implemented from: BuildSafe.SceneBakeTask
    // Base method: System.Void SceneBakeTask::OnSceneBake(UnityEngine.SceneManagement.Scene scene, BuildSafe.SceneBakeMode mode)
    void OnSceneBake(::UnityEngine::SceneManagement::Scene scene, ::BuildSafe::SceneBakeMode mode);
    // public System.Void .ctor()
    // Offset: 0x26E05E4
    // Implemented from: BuildSafe.SceneBakeTask
    // Base method: System.Void SceneBakeTask::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlinkingLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BlinkingLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlinkingLight*, creationType>()));
    }
  }; // BlinkingLight
  #pragma pack(pop)
  static check_size<sizeof(BlinkingLight), 48 + sizeof(::ArrayW<::UnityEngine::Material*>)> __GlobalNamespace_BlinkingLightSizeCheck;
  static_assert(sizeof(BlinkingLight) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BlinkingLight::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BlinkingLight::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlinkingLight*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlinkingLight::OnSceneBake
// Il2CppName: OnSceneBake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlinkingLight::*)(::UnityEngine::SceneManagement::Scene, ::BuildSafe::SceneBakeMode)>(&GlobalNamespace::BlinkingLight::OnSceneBake)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("BuildSafe", "SceneBakeMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlinkingLight*), "OnSceneBake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, mode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlinkingLight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
