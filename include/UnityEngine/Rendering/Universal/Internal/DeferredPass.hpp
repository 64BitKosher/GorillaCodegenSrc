// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderPass
#include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureHandle.hpp"
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
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraph
  class RenderGraph;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // Forward declaring type: DeferredPass
  class DeferredPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredPass*, "UnityEngine.Rendering.Universal.Internal", "DeferredPass");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.DeferredPass
  // [TokenAttribute] Offset: FFFFFFFF
  class DeferredPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::DeferredPass::PassData
    class PassData;
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::DeferredPass::$$c
    class $$c;
    public:
    // private UnityEngine.Rendering.Universal.Internal.DeferredLights m_DeferredLights
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::DeferredLights*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::Universal::Internal::DeferredLights*
    constexpr operator ::UnityEngine::Rendering::Universal::Internal::DeferredLights*() const noexcept {
      return m_DeferredLights;
    }
    // Get instance field reference: private UnityEngine.Rendering.Universal.Internal.DeferredLights m_DeferredLights
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& dyn_m_DeferredLights();
    // public System.Void .ctor(UnityEngine.Rendering.Universal.RenderPassEvent evt, UnityEngine.Rendering.Universal.Internal.DeferredLights deferredLights)
    // Offset: 0x5312EFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeferredPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::DeferredPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeferredPass*, creationType>(evt, deferredLights)));
    }
    // System.Void Render(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph, UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle color, UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle depth, UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle[] gbuffer, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5313064
    void Render(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle color, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle depth, ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> gbuffer, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void Configure(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.RenderTextureDescriptor cameraTextureDescripor)
    // Offset: 0x5312FC8
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Configure(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.RenderTextureDescriptor cameraTextureDescripor)
    void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescripor);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5313048
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void OnCameraCleanup(UnityEngine.Rendering.CommandBuffer cmd)
    // Offset: 0x53133AC
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::OnCameraCleanup(UnityEngine.Rendering.CommandBuffer cmd)
    void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);
  }; // UnityEngine.Rendering.Universal.Internal.DeferredPass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DeferredPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DeferredPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DeferredPass::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::DeferredPass::Render)> {
  static const MethodInfo* get() {
    static auto* renderGraph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->byval_arg;
    static auto* gbuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle"), 1)->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DeferredPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderGraph, color, depth, gbuffer, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DeferredPass::Configure
// Il2CppName: Configure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DeferredPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&UnityEngine::Rendering::Universal::Internal::DeferredPass::Configure)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* cameraTextureDescripor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DeferredPass*), "Configure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, cameraTextureDescripor});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DeferredPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DeferredPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::DeferredPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DeferredPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::DeferredPass::OnCameraCleanup
// Il2CppName: OnCameraCleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::DeferredPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&UnityEngine::Rendering::Universal::Internal::DeferredPass::OnCameraCleanup)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::DeferredPass*), "OnCameraCleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd});
  }
};
