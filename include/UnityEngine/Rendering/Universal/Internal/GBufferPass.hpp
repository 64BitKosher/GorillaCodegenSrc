// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderPass
#include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
// Including type: UnityEngine.Rendering.FilteringSettings
#include "UnityEngine/Rendering/FilteringSettings.hpp"
// Including type: UnityEngine.Rendering.RenderStateBlock
#include "UnityEngine/Rendering/RenderStateBlock.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Rendering.Universal.UniversalRenderer
#include "UnityEngine/Rendering/Universal/UniversalRenderer.hpp"
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
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraph
  class RenderGraph;
  // Skipping declaration: TextureHandle because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // Forward declaring type: GBufferPass
  class GBufferPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::GBufferPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::GBufferPass*, "UnityEngine.Rendering.Universal.Internal", "GBufferPass");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.GBufferPass
  // [TokenAttribute] Offset: FFFFFFFF
  class GBufferPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData
    class PassData;
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::GBufferPass::$$c
    class $$c;
    public:
    // private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ProfilingSampler*) == 0x8);
    // private UnityEngine.Rendering.Universal.Internal.DeferredLights m_DeferredLights
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::DeferredLights*) == 0x8);
    // private UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    // Size: 0x18
    // Offset: 0xF0
    ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::FilteringSettings) == 0x18);
    // private UnityEngine.Rendering.RenderStateBlock m_RenderStateBlock
    // Size: 0x6C
    // Offset: 0x108
    ::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RenderStateBlock) == 0x6C);
    // private UnityEngine.Rendering.Universal.Internal.GBufferPass/PassData m_PassData
    // Size: 0x8
    // Offset: 0x178
    ::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData* m_PassData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData*) == 0x8);
    public:
    // Get static field: static private readonly System.Int32 s_CameraNormalsTextureID
    static int _get_s_CameraNormalsTextureID();
    // Set static field: static private readonly System.Int32 s_CameraNormalsTextureID
    static void _set_s_CameraNormalsTextureID(int value);
    // Get static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagLit
    static ::UnityEngine::Rendering::ShaderTagId _get_s_ShaderTagLit();
    // Set static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagLit
    static void _set_s_ShaderTagLit(::UnityEngine::Rendering::ShaderTagId value);
    // Get static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagSimpleLit
    static ::UnityEngine::Rendering::ShaderTagId _get_s_ShaderTagSimpleLit();
    // Set static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagSimpleLit
    static void _set_s_ShaderTagSimpleLit(::UnityEngine::Rendering::ShaderTagId value);
    // Get static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagUnlit
    static ::UnityEngine::Rendering::ShaderTagId _get_s_ShaderTagUnlit();
    // Set static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagUnlit
    static void _set_s_ShaderTagUnlit(::UnityEngine::Rendering::ShaderTagId value);
    // Get static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagUniversalGBuffer
    static ::UnityEngine::Rendering::ShaderTagId _get_s_ShaderTagUniversalGBuffer();
    // Set static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagUniversalGBuffer
    static void _set_s_ShaderTagUniversalGBuffer(::UnityEngine::Rendering::ShaderTagId value);
    // Get static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagUniversalMaterialType
    static ::UnityEngine::Rendering::ShaderTagId _get_s_ShaderTagUniversalMaterialType();
    // Set static field: static private UnityEngine.Rendering.ShaderTagId s_ShaderTagUniversalMaterialType
    static void _set_s_ShaderTagUniversalMaterialType(::UnityEngine::Rendering::ShaderTagId value);
    // Get static field: static private UnityEngine.Rendering.ShaderTagId[] s_ShaderTagValues
    static ::ArrayW<::UnityEngine::Rendering::ShaderTagId> _get_s_ShaderTagValues();
    // Set static field: static private UnityEngine.Rendering.ShaderTagId[] s_ShaderTagValues
    static void _set_s_ShaderTagValues(::ArrayW<::UnityEngine::Rendering::ShaderTagId> value);
    // Get static field: static private UnityEngine.Rendering.RenderStateBlock[] s_RenderStateBlocks
    static ::ArrayW<::UnityEngine::Rendering::RenderStateBlock> _get_s_RenderStateBlocks();
    // Set static field: static private UnityEngine.Rendering.RenderStateBlock[] s_RenderStateBlocks
    static void _set_s_RenderStateBlocks(::ArrayW<::UnityEngine::Rendering::RenderStateBlock> value);
    // Get instance field reference: private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ProfilingSampler*& dyn_m_ProfilingSampler();
    // Get instance field reference: private UnityEngine.Rendering.Universal.Internal.DeferredLights m_DeferredLights
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& dyn_m_DeferredLights();
    // Get instance field reference: private UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::FilteringSettings& dyn_m_FilteringSettings();
    // Get instance field reference: private UnityEngine.Rendering.RenderStateBlock m_RenderStateBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RenderStateBlock& dyn_m_RenderStateBlock();
    // Get instance field reference: private UnityEngine.Rendering.Universal.Internal.GBufferPass/PassData m_PassData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData*& dyn_m_PassData();
    // public System.Void .ctor(UnityEngine.Rendering.Universal.RenderPassEvent evt, UnityEngine.Rendering.RenderQueueRange renderQueueRange, UnityEngine.LayerMask layerMask, UnityEngine.Rendering.StencilState stencilState, System.Int32 stencilReference, UnityEngine.Rendering.Universal.Internal.DeferredLights deferredLights)
    // Offset: 0x5317748
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GBufferPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int stencilReference, ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::GBufferPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GBufferPass*, creationType>(evt, renderQueueRange, layerMask, stencilState, stencilReference, deferredLights)));
    }
    // public System.Void Dispose()
    // Offset: 0x5317CFC
    void Dispose();
    // static private System.Void ExecutePass(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Rendering.Universal.Internal.GBufferPass/PassData data, ref UnityEngine.Rendering.Universal.RenderingData renderingData, System.Boolean useRenderGraph)
    // Offset: 0x53182B4
    static void ExecutePass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData* data, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, bool useRenderGraph);
    // System.Void Render(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph, UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle cameraColor, UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle cameraDepth, ref UnityEngine.Rendering.Universal.RenderingData renderingData, ref UnityEngine.Rendering.Universal.UniversalRenderer/RenderGraphFrameResources frameResources)
    // Offset: 0x5318600
    void Render(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle cameraColor, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle cameraDepth, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ByRef<::UnityEngine::Rendering::Universal::UniversalRenderer::RenderGraphFrameResources*> frameResources);
    // public override System.Void Configure(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.RenderTextureDescriptor cameraTextureDescriptor)
    // Offset: 0x5317D18
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Configure(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.RenderTextureDescriptor cameraTextureDescriptor)
    void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x531800C
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // static private System.Void .cctor()
    // Offset: 0x5318F7C
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::.cctor()
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.Internal.GBufferPass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::GBufferPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::GBufferPass::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::GBufferPass::*)()>(&UnityEngine::Rendering::Universal::Internal::GBufferPass::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::GBufferPass*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::GBufferPass::ExecutePass
// Il2CppName: ExecutePass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::Internal::GBufferPass::PassData*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, bool)>(&UnityEngine::Rendering::Universal::Internal::GBufferPass::ExecutePass)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.Internal", "GBufferPass/PassData")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    static auto* useRenderGraph = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::GBufferPass*), "ExecutePass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, data, renderingData, useRenderGraph});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::GBufferPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ByRef<::UnityEngine::Rendering::Universal::UniversalRenderer::RenderGraphFrameResources*>)>(&UnityEngine::Rendering::Universal::Internal::GBufferPass::Render)> {
  static const MethodInfo* get() {
    static auto* renderGraph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* cameraColor = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->byval_arg;
    static auto* cameraDepth = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    static auto* frameResources = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "UniversalRenderer/RenderGraphFrameResources")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::GBufferPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderGraph, cameraColor, cameraDepth, renderingData, frameResources});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::GBufferPass::Configure
// Il2CppName: Configure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&UnityEngine::Rendering::Universal::Internal::GBufferPass::Configure)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* cameraTextureDescriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::GBufferPass*), "Configure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, cameraTextureDescriptor});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::GBufferPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::GBufferPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::GBufferPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::GBufferPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::Internal::GBufferPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::GBufferPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
