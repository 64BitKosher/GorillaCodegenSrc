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
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BuilderBumpGlow
  class BuilderBumpGlow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BuilderBumpGlow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BuilderBumpGlow*, "", "BuilderBumpGlow");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BuilderBumpGlow
  // [TokenAttribute] Offset: FFFFFFFF
  class BuilderBumpGlow : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.MeshRenderer glowRenderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MeshRenderer* glowRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private System.Single blendIn
    // Size: 0x4
    // Offset: 0x28
    float blendIn;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single intensity
    // Size: 0x4
    // Offset: 0x2C
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.MeshRenderer glowRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_glowRenderer();
    // Get instance field reference: private System.Single blendIn
    [[deprecated("Use field access instead!")]] float& dyn_blendIn();
    // Get instance field reference: private System.Single intensity
    [[deprecated("Use field access instead!")]] float& dyn_intensity();
    // public System.Void Awake()
    // Offset: 0x26E0670
    void Awake();
    // public System.Void SetIntensity(System.Single intensity)
    // Offset: 0x26E0684
    void SetIntensity(float intensity);
    // public System.Void SetBlendIn(System.Single blendIn)
    // Offset: 0x26E068C
    void SetBlendIn(float blendIn);
    // private System.Void UpdateRender()
    // Offset: 0x26E0680
    void UpdateRender();
    // public System.Void .ctor()
    // Offset: 0x26E0694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuilderBumpGlow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuilderBumpGlow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuilderBumpGlow*, creationType>()));
    }
  }; // BuilderBumpGlow
  #pragma pack(pop)
  static check_size<sizeof(BuilderBumpGlow), 44 + sizeof(float)> __GlobalNamespace_BuilderBumpGlowSizeCheck;
  static_assert(sizeof(BuilderBumpGlow) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BuilderBumpGlow::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuilderBumpGlow::*)()>(&GlobalNamespace::BuilderBumpGlow::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuilderBumpGlow*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuilderBumpGlow::SetIntensity
// Il2CppName: SetIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuilderBumpGlow::*)(float)>(&GlobalNamespace::BuilderBumpGlow::SetIntensity)> {
  static const MethodInfo* get() {
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuilderBumpGlow*), "SetIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intensity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuilderBumpGlow::SetBlendIn
// Il2CppName: SetBlendIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuilderBumpGlow::*)(float)>(&GlobalNamespace::BuilderBumpGlow::SetBlendIn)> {
  static const MethodInfo* get() {
    static auto* blendIn = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuilderBumpGlow*), "SetBlendIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blendIn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuilderBumpGlow::UpdateRender
// Il2CppName: UpdateRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuilderBumpGlow::*)()>(&GlobalNamespace::BuilderBumpGlow::UpdateRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuilderBumpGlow*), "UpdateRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuilderBumpGlow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
