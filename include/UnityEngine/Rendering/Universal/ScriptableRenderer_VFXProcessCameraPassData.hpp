// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderer
#include "UnityEngine/Rendering/Universal/ScriptableRenderer.hpp"
// Including type: UnityEngine.Rendering.CullingResults
#include "UnityEngine/Rendering/CullingResults.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer::VFXProcessCameraPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer::VFXProcessCameraPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/VFXProcessCameraPassData");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ScriptableRenderer/VFXProcessCameraPassData
  // [TokenAttribute] Offset: FFFFFFFF
  class ScriptableRenderer::VFXProcessCameraPassData : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Rendering.CullingResults cullResults
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Rendering::CullingResults cullResults;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CullingResults) == 0x10);
    // UnityEngine.Camera camera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    public:
    // Get instance field reference: UnityEngine.Rendering.CullingResults cullResults
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CullingResults& dyn_cullResults();
    // Get instance field reference: UnityEngine.Camera camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_camera();
    // public System.Void .ctor()
    // Offset: 0x52BB4F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableRenderer::VFXProcessCameraPassData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScriptableRenderer::VFXProcessCameraPassData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableRenderer::VFXProcessCameraPassData*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ScriptableRenderer/VFXProcessCameraPassData
  #pragma pack(pop)
  static check_size<sizeof(ScriptableRenderer::VFXProcessCameraPassData), 32 + sizeof(::UnityEngine::Camera*)> __UnityEngine_Rendering_Universal_ScriptableRenderer_VFXProcessCameraPassDataSizeCheck;
  static_assert(sizeof(ScriptableRenderer::VFXProcessCameraPassData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRenderer::VFXProcessCameraPassData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
