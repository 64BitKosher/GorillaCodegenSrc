// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderer
#include "UnityEngine/Rendering/Universal/ScriptableRenderer.hpp"
// Including type: UnityEngine.Rendering.Universal.RenderingData
#include "UnityEngine/Rendering/Universal/RenderingData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/BeginXRPassData");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.ScriptableRenderer/BeginXRPassData
  // [TokenAttribute] Offset: FFFFFFFF
  class ScriptableRenderer::BeginXRPassData : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.Universal.RenderingData renderingData
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::RenderingData renderingData;
    // public UnityEngine.Rendering.Universal.CameraData cameraData
    // Size: 0x210
    // Offset: 0x2C8
    ::UnityEngine::Rendering::Universal::CameraData cameraData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::CameraData) == 0x210);
    public:
    // Get instance field reference: public UnityEngine.Rendering.Universal.RenderingData renderingData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::RenderingData& dyn_renderingData();
    // Get instance field reference: public UnityEngine.Rendering.Universal.CameraData cameraData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::CameraData& dyn_cameraData();
    // public System.Void .ctor()
    // Offset: 0x52BB508
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableRenderer::BeginXRPassData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRPassData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableRenderer::BeginXRPassData*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ScriptableRenderer/BeginXRPassData
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRPassData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
