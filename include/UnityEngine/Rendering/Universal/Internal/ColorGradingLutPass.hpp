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
// Forward declaring namespace: UnityEngine::Rendering::Universal::Internal
namespace UnityEngine::Rendering::Universal::Internal {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
  // Forward declaring type: FilterMode
  struct FilterMode;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: PostProcessData
  class PostProcessData;
  // Forward declaring type: PostProcessingData
  struct PostProcessingData;
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
  // Forward declaring type: ColorGradingLutPass
  class ColorGradingLutPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*, "UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorGradingLutPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData
    class PassData;
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ShaderConstants
    class ShaderConstants;
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::$$c
    class $$c;
    public:
    // private readonly UnityEngine.Material m_LutBuilderLdr
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Material* m_LutBuilderLdr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private readonly UnityEngine.Material m_LutBuilderHdr
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::Material* m_LutBuilderHdr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // readonly UnityEngine.Experimental.Rendering.GraphicsFormat m_HdrLutFormat
    // Size: 0x4
    // Offset: 0xF0
    ::UnityEngine::Experimental::Rendering::GraphicsFormat m_HdrLutFormat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // readonly UnityEngine.Experimental.Rendering.GraphicsFormat m_LdrLutFormat
    // Size: 0x4
    // Offset: 0xF4
    ::UnityEngine::Experimental::Rendering::GraphicsFormat m_LdrLutFormat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // private UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass/PassData m_PassData
    // Size: 0x8
    // Offset: 0xF8
    ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData* m_PassData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData*) == 0x8);
    // private UnityEngine.Rendering.RTHandle m_InternalLut
    // Size: 0x8
    // Offset: 0x100
    ::UnityEngine::Rendering::RTHandle* m_InternalLut;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // private System.Boolean m_AllowColorGradingACESHDR
    // Size: 0x1
    // Offset: 0x108
    bool m_AllowColorGradingACESHDR;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly UnityEngine.Material m_LutBuilderLdr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_LutBuilderLdr();
    // Get instance field reference: private readonly UnityEngine.Material m_LutBuilderHdr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_LutBuilderHdr();
    // Get instance field reference: readonly UnityEngine.Experimental.Rendering.GraphicsFormat m_HdrLutFormat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::GraphicsFormat& dyn_m_HdrLutFormat();
    // Get instance field reference: readonly UnityEngine.Experimental.Rendering.GraphicsFormat m_LdrLutFormat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::GraphicsFormat& dyn_m_LdrLutFormat();
    // Get instance field reference: private UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass/PassData m_PassData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData*& dyn_m_PassData();
    // Get instance field reference: private UnityEngine.Rendering.RTHandle m_InternalLut
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_m_InternalLut();
    // Get instance field reference: private System.Boolean m_AllowColorGradingACESHDR
    [[deprecated("Use field access instead!")]] bool& dyn_m_AllowColorGradingACESHDR();
    // public System.Void .ctor(UnityEngine.Rendering.Universal.RenderPassEvent evt, UnityEngine.Rendering.Universal.PostProcessData data)
    // Offset: 0x530E4EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorGradingLutPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorGradingLutPass*, creationType>(evt, data)));
    }
    // public System.Void Setup(in UnityEngine.Rendering.RTHandle internalLut)
    // Offset: 0x530E87C
    void Setup(ByRef<::UnityEngine::Rendering::RTHandle*> internalLut);
    // public System.Void ConfigureDescriptor(in UnityEngine.Rendering.Universal.PostProcessingData postProcessingData, out UnityEngine.RenderTextureDescriptor descriptor, out UnityEngine.FilterMode filterMode)
    // Offset: 0x530E890
    void ConfigureDescriptor(ByRef<::UnityEngine::Rendering::Universal::PostProcessingData> postProcessingData, ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, ByRef<::UnityEngine::FilterMode> filterMode);
    // static private System.Void ExecutePass(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass/PassData passData, ref UnityEngine.Rendering.Universal.RenderingData renderingData, UnityEngine.Rendering.RTHandle internalLutTarget)
    // Offset: 0x530EA04
    static void ExecutePass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData* passData, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ::UnityEngine::Rendering::RTHandle* internalLutTarget);
    // System.Void Render(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph, out UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle internalColorLut, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x530FC24
    void Render(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> internalColorLut, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public System.Void Cleanup()
    // Offset: 0x530FFD4
    void Cleanup();
    // private UnityEngine.Material <.ctor>g__Load|7_0(UnityEngine.Shader shader)
    // Offset: 0x530E71C
    ::UnityEngine::Material* $_ctor$g__Load_7_0(::UnityEngine::Shader* shader);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x530E914
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
  }; // UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(ByRef<::UnityEngine::Rendering::RTHandle*>)>(&UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Setup)> {
  static const MethodInfo* get() {
    static auto* internalLut = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalLut});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ConfigureDescriptor
// Il2CppName: ConfigureDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(ByRef<::UnityEngine::Rendering::Universal::PostProcessingData>, ByRef<::UnityEngine::RenderTextureDescriptor>, ByRef<::UnityEngine::FilterMode>)>(&UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ConfigureDescriptor)> {
  static const MethodInfo* get() {
    static auto* postProcessingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "PostProcessingData")->this_arg;
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    static auto* filterMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*), "ConfigureDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{postProcessingData, descriptor, filterMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ExecutePass
// Il2CppName: ExecutePass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ExecutePass)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* passData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass/PassData")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    static auto* internalLutTarget = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*), "ExecutePass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, passData, renderingData, internalLutTarget});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Render)> {
  static const MethodInfo* get() {
    static auto* renderGraph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* internalColorLut = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->this_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderGraph, internalColorLut, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)()>(&UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::$_ctor$g__Load_7_0
// Il2CppName: <.ctor>g__Load|7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(::UnityEngine::Shader*)>(&UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::$_ctor$g__Load_7_0)> {
  static const MethodInfo* get() {
    static auto* shader = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*), "<.ctor>g__Load|7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shader});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};