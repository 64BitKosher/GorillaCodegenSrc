// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderPass
#include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraph
  class RenderGraph;
  // Forward declaring type: TextureHandle
  struct TextureHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DrawScreenSpaceUIPass
  class DrawScreenSpaceUIPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*, "UnityEngine.Rendering.Universal", "DrawScreenSpaceUIPass");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass
  // [TokenAttribute] Offset: FFFFFFFF
  class DrawScreenSpaceUIPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::PassData
    class PassData;
    // Nested type: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::$$c
    class $$c;
    public:
    // private UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass/PassData m_PassData
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::PassData* m_PassData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::PassData*) == 0x8);
    // private UnityEngine.Rendering.RTHandle m_ColorTarget
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::Rendering::RTHandle* m_ColorTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // private UnityEngine.Rendering.RTHandle m_DepthTarget
    // Size: 0x8
    // Offset: 0xF0
    ::UnityEngine::Rendering::RTHandle* m_DepthTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // private System.Boolean m_RenderOffscreen
    // Size: 0x1
    // Offset: 0xF8
    bool m_RenderOffscreen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass/PassData m_PassData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::PassData*& dyn_m_PassData();
    // Get instance field reference: private UnityEngine.Rendering.RTHandle m_ColorTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_m_ColorTarget();
    // Get instance field reference: private UnityEngine.Rendering.RTHandle m_DepthTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_m_DepthTarget();
    // Get instance field reference: private System.Boolean m_RenderOffscreen
    [[deprecated("Use field access instead!")]] bool& dyn_m_RenderOffscreen();
    // public UnityEngine.Rendering.RTHandle get_colorTarget()
    // Offset: 0x52C38E8
    ::UnityEngine::Rendering::RTHandle* get_colorTarget();
    // public System.Void .ctor(UnityEngine.Rendering.Universal.RenderPassEvent evt, System.Boolean renderOffscreen)
    // Offset: 0x52C38F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrawScreenSpaceUIPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool renderOffscreen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrawScreenSpaceUIPass*, creationType>(evt, renderOffscreen)));
    }
    // static public System.Void ConfigureDescriptor(ref UnityEngine.RenderTextureDescriptor descriptor)
    // Offset: 0x52C39FC
    static void ConfigureDescriptor(ByRef<::UnityEngine::RenderTextureDescriptor> descriptor);
    // static private System.Void ExecutePass(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass/PassData passData)
    // Offset: 0x52C3A24
    static void ExecutePass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::PassData* passData);
    // public System.Void Dispose()
    // Offset: 0x52C3A78
    void Dispose();
    // public System.Void Setup(UnityEngine.RenderTextureDescriptor descriptor, in UnityEngine.Rendering.RTHandle depthTexture)
    // Offset: 0x52C3A8C
    void Setup(::UnityEngine::RenderTextureDescriptor descriptor, ByRef<::UnityEngine::Rendering::RTHandle*> depthTexture);
    // System.Void RenderOffscreen(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph, out UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle output, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52C3F28
    void RenderOffscreen(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> output, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // System.Void RenderOverlay(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph, in UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle colorBuffer, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52C4264
    void RenderOverlay(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> colorBuffer, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52C3B70
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
  }; // UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::get_colorTarget
// Il2CppName: get_colorTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)()>(&UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::get_colorTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*), "get_colorTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureDescriptor
// Il2CppName: ConfigureDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::RenderTextureDescriptor>)>(&UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureDescriptor)> {
  static const MethodInfo* get() {
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*), "ConfigureDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{descriptor});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass
// Il2CppName: ExecutePass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::PassData*)>(&UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* passData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DrawScreenSpaceUIPass/PassData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*), "ExecutePass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, passData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)()>(&UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(::UnityEngine::RenderTextureDescriptor, ByRef<::UnityEngine::Rendering::RTHandle*>)>(&UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Setup)> {
  static const MethodInfo* get() {
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    static auto* depthTexture = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{descriptor, depthTexture});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOffscreen
// Il2CppName: RenderOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOffscreen)> {
  static const MethodInfo* get() {
    static auto* renderGraph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->this_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*), "RenderOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderGraph, output, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOverlay
// Il2CppName: RenderOverlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOverlay)> {
  static const MethodInfo* get() {
    static auto* renderGraph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* colorBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->this_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*), "RenderOverlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderGraph, colorBuffer, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
