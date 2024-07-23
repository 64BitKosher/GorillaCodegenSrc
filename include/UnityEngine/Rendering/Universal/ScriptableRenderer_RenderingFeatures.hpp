// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderer
#include "UnityEngine/Rendering/Universal/ScriptableRenderer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderingFeatures");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
  // [TokenAttribute] Offset: FFFFFFFF
  class ScriptableRenderer::RenderingFeatures : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean <cameraStacking>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool cameraStacking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <msaa>k__BackingField
    // Size: 0x1
    // Offset: 0x11
    bool msaa;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean <cameraStacking>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$cameraStacking$k__BackingField();
    // Get instance field reference: private System.Boolean <msaa>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$msaa$k__BackingField();
    // public System.Boolean get_cameraStacking()
    // Offset: 0x52BB3F0
    bool get_cameraStacking();
    // public System.Void set_cameraStacking(System.Boolean value)
    // Offset: 0x52BB3F8
    void set_cameraStacking(bool value);
    // public System.Boolean get_msaa()
    // Offset: 0x52BB404
    bool get_msaa();
    // public System.Void set_msaa(System.Boolean value)
    // Offset: 0x52BB40C
    void set_msaa(bool value);
    // public System.Void .ctor()
    // Offset: 0x52BB418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableRenderer::RenderingFeatures* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableRenderer::RenderingFeatures*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
  #pragma pack(pop)
  static check_size<sizeof(ScriptableRenderer::RenderingFeatures), 17 + sizeof(bool)> __UnityEngine_Rendering_Universal_ScriptableRenderer_RenderingFeaturesSizeCheck;
  static_assert(sizeof(ScriptableRenderer::RenderingFeatures) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::get_cameraStacking
// Il2CppName: get_cameraStacking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::*)()>(&UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::get_cameraStacking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures*), "get_cameraStacking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::set_cameraStacking
// Il2CppName: set_cameraStacking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::*)(bool)>(&UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::set_cameraStacking)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures*), "set_cameraStacking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::get_msaa
// Il2CppName: get_msaa
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::*)()>(&UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::get_msaa)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures*), "get_msaa", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::set_msaa
// Il2CppName: set_msaa
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::*)(bool)>(&UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::set_msaa)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures*), "set_msaa", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRenderer::RenderingFeatures::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
