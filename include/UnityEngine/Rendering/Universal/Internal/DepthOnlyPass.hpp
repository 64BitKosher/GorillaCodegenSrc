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
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal::Internal
namespace UnityEngine::Rendering::Universal::Internal {
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
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
  // Forward declaring type: TextureHandle
  struct TextureHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // Forward declaring type: DepthOnlyPass
  class DepthOnlyPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*, "UnityEngine.Rendering.Universal.Internal", "DepthOnlyPass");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass
  // [TokenAttribute] Offset: FFFFFFFF
  class DepthOnlyPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::PassData
    class PassData;
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::$$c
    class $$c;
    public:
    // private UnityEngine.Rendering.RTHandle <destination>k__BackingField
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Rendering::RTHandle* destination;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // private UnityEngine.Experimental.Rendering.GraphicsFormat depthStencilFormat
    // Size: 0x4
    // Offset: 0xE8
    ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // private UnityEngine.Rendering.ShaderTagId <shaderTagId>k__BackingField
    // Size: 0x4
    // Offset: 0xEC
    ::UnityEngine::Rendering::ShaderTagId shaderTagId;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ShaderTagId) == 0x4);
    // private UnityEngine.Rendering.Universal.Internal.DepthOnlyPass/PassData m_PassData
    // Size: 0x8
    // Offset: 0xF0
    ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::PassData* m_PassData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::PassData*) == 0x8);
    // private UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    // Size: 0x18
    // Offset: 0xF8
    ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::FilteringSettings) == 0x18);
    public:
    // Get static field: static private readonly UnityEngine.Rendering.ShaderTagId k_ShaderTagId
    static ::UnityEngine::Rendering::ShaderTagId _get_k_ShaderTagId();
    // Set static field: static private readonly UnityEngine.Rendering.ShaderTagId k_ShaderTagId
    static void _set_k_ShaderTagId(::UnityEngine::Rendering::ShaderTagId value);
    // Get instance field reference: private UnityEngine.Rendering.RTHandle <destination>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_$destination$k__BackingField();
    // Get instance field reference: private UnityEngine.Experimental.Rendering.GraphicsFormat depthStencilFormat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::GraphicsFormat& dyn_depthStencilFormat();
    // Get instance field reference: private UnityEngine.Rendering.ShaderTagId <shaderTagId>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ShaderTagId& dyn_$shaderTagId$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.Universal.Internal.DepthOnlyPass/PassData m_PassData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::PassData*& dyn_m_PassData();
    // Get instance field reference: private UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::FilteringSettings& dyn_m_FilteringSettings();
    // private UnityEngine.Rendering.RTHandle get_destination()
    // Offset: 0x531454C
    ::UnityEngine::Rendering::RTHandle* get_destination();
    // private System.Void set_destination(UnityEngine.Rendering.RTHandle value)
    // Offset: 0x5314554
    void set_destination(::UnityEngine::Rendering::RTHandle* value);
    // UnityEngine.Rendering.ShaderTagId get_shaderTagId()
    // Offset: 0x531455C
    ::UnityEngine::Rendering::ShaderTagId get_shaderTagId();
    // System.Void set_shaderTagId(UnityEngine.Rendering.ShaderTagId value)
    // Offset: 0x5314564
    void set_shaderTagId(::UnityEngine::Rendering::ShaderTagId value);
    // public System.Void .ctor(UnityEngine.Rendering.Universal.RenderPassEvent evt, UnityEngine.Rendering.RenderQueueRange renderQueueRange, UnityEngine.LayerMask layerMask)
    // Offset: 0x531456C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DepthOnlyPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DepthOnlyPass*, creationType>(evt, renderQueueRange, layerMask)));
    }
    // public System.Void Setup(UnityEngine.RenderTextureDescriptor baseDescriptor, UnityEngine.Rendering.RTHandle depthAttachmentHandle)
    // Offset: 0x5314740
    void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::RTHandle* depthAttachmentHandle);
    // static private System.Void ExecutePass(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Rendering.Universal.Internal.DepthOnlyPass/PassData passData, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5314810
    static void ExecutePass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::PassData* passData, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // System.Void Render(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph, out UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle cameraDepthTexture, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5314AC4
    void Render(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> cameraDepthTexture, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void OnCameraSetup(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5314774
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::OnCameraSetup(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5314A08
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // static private System.Void .cctor()
    // Offset: 0x5314E60
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::.cctor()
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.Internal.DepthOnlyPass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::get_destination
// Il2CppName: get_destination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)()>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::get_destination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "get_destination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::set_destination
// Il2CppName: set_destination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::set_destination)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "set_destination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::get_shaderTagId
// Il2CppName: get_shaderTagId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderTagId (UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)()>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::get_shaderTagId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "get_shaderTagId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::set_shaderTagId
// Il2CppName: set_shaderTagId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(::UnityEngine::Rendering::ShaderTagId)>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::set_shaderTagId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShaderTagId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "set_shaderTagId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Setup)> {
  static const MethodInfo* get() {
    static auto* baseDescriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    static auto* depthAttachmentHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseDescriptor, depthAttachmentHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::ExecutePass
// Il2CppName: ExecutePass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::PassData*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::ExecutePass)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* passData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.Internal", "DepthOnlyPass/PassData")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "ExecutePass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, passData, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Render)> {
  static const MethodInfo* get() {
    static auto* renderGraph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* cameraDepthTexture = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->this_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderGraph, cameraDepthTexture, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::OnCameraSetup
// Il2CppName: OnCameraSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::OnCameraSetup)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "OnCameraSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
