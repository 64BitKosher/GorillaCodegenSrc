// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.Internal.GBufferPass
#include "UnityEngine/Rendering/Universal/Internal/GBufferPass.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureHandle.hpp"
// Including type: UnityEngine.Rendering.Universal.RenderingData
#include "UnityEngine/Rendering/Universal/RenderingData.hpp"
// Including type: UnityEngine.Rendering.FilteringSettings
#include "UnityEngine/Rendering/FilteringSettings.hpp"
// Including type: UnityEngine.Rendering.DrawingSettings
#include "UnityEngine/Rendering/DrawingSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal::Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // Forward declaring type: DeferredLights
  class DeferredLights;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData*, "UnityEngine.Rendering.Universal.Internal", "GBufferPass/PassData");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.GBufferPass/PassData
  // [TokenAttribute] Offset: FFFFFFFF
  class GBufferPass::PassData : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle[] gbuffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> gbuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>) == 0x8);
    // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle depth
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle depth;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle) == 0x8);
    // UnityEngine.Rendering.Universal.RenderingData renderingData
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::UnityEngine::Rendering::Universal::RenderingData renderingData;
    // UnityEngine.Rendering.Universal.Internal.DeferredLights deferredLights
    // Size: 0x8
    // Offset: 0x2D8
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::DeferredLights*) == 0x8);
    // UnityEngine.Rendering.FilteringSettings filteringSettings
    // Size: 0x18
    // Offset: 0x2E0
    ::UnityEngine::Rendering::FilteringSettings filteringSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::FilteringSettings) == 0x18);
    // UnityEngine.Rendering.DrawingSettings drawingSettings
    // Size: 0xC4
    // Offset: 0x2F8
    ::UnityEngine::Rendering::DrawingSettings drawingSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DrawingSettings) == 0xC4);
    public:
    // Get instance field reference: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle[] gbuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>& dyn_gbuffer();
    // Get instance field reference: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle depth
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& dyn_depth();
    // Get instance field reference: UnityEngine.Rendering.Universal.RenderingData renderingData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::RenderingData& dyn_renderingData();
    // Get instance field reference: UnityEngine.Rendering.Universal.Internal.DeferredLights deferredLights
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& dyn_deferredLights();
    // Get instance field reference: UnityEngine.Rendering.FilteringSettings filteringSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::FilteringSettings& dyn_filteringSettings();
    // Get instance field reference: UnityEngine.Rendering.DrawingSettings drawingSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DrawingSettings& dyn_drawingSettings();
    // public System.Void .ctor()
    // Offset: 0x5317CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GBufferPass::PassData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GBufferPass::PassData*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.Internal.GBufferPass/PassData
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
