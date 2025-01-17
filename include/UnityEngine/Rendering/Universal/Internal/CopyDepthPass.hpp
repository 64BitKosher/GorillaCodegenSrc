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
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: CameraData
  struct CameraData;
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
  // Forward declaring type: CopyDepthPass
  class CopyDepthPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.CopyDepthPass
  // [TokenAttribute] Offset: FFFFFFFF
  class CopyDepthPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::PassData
    class PassData;
    // Nested type: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::$$c
    class $$c;
    public:
    // private UnityEngine.Rendering.RTHandle <source>k__BackingField
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Rendering::RTHandle* source;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // private UnityEngine.Rendering.RTHandle <destination>k__BackingField
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::Rendering::RTHandle* destination;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // private System.Int32 <MssaSamples>k__BackingField
    // Size: 0x4
    // Offset: 0xF0
    int MssaSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <CopyToDepth>k__BackingField
    // Size: 0x1
    // Offset: 0xF4
    bool CopyToDepth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.Material m_CopyDepthMaterial
    // Size: 0x8
    // Offset: 0xF8
    ::UnityEngine::Material* m_CopyDepthMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // System.Boolean m_CopyResolvedDepth
    // Size: 0x1
    // Offset: 0x100
    bool m_CopyResolvedDepth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_ShouldClear
    // Size: 0x1
    // Offset: 0x101
    bool m_ShouldClear;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.Rendering.Universal.Internal.CopyDepthPass/PassData m_PassData
    // Size: 0x8
    // Offset: 0x108
    ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::PassData* m_PassData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::PassData*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Rendering.RTHandle <source>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_$source$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.RTHandle <destination>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_$destination$k__BackingField();
    // Get instance field reference: private System.Int32 <MssaSamples>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$MssaSamples$k__BackingField();
    // Get instance field reference: private System.Boolean <CopyToDepth>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$CopyToDepth$k__BackingField();
    // Get instance field reference: private UnityEngine.Material m_CopyDepthMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_CopyDepthMaterial();
    // Get instance field reference: System.Boolean m_CopyResolvedDepth
    [[deprecated("Use field access instead!")]] bool& dyn_m_CopyResolvedDepth();
    // Get instance field reference: System.Boolean m_ShouldClear
    [[deprecated("Use field access instead!")]] bool& dyn_m_ShouldClear();
    // Get instance field reference: private UnityEngine.Rendering.Universal.Internal.CopyDepthPass/PassData m_PassData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::PassData*& dyn_m_PassData();
    // private UnityEngine.Rendering.RTHandle get_source()
    // Offset: 0x5311988
    ::UnityEngine::Rendering::RTHandle* get_source();
    // private System.Void set_source(UnityEngine.Rendering.RTHandle value)
    // Offset: 0x5311990
    void set_source(::UnityEngine::Rendering::RTHandle* value);
    // private UnityEngine.Rendering.RTHandle get_destination()
    // Offset: 0x5311998
    ::UnityEngine::Rendering::RTHandle* get_destination();
    // private System.Void set_destination(UnityEngine.Rendering.RTHandle value)
    // Offset: 0x53119A0
    void set_destination(::UnityEngine::Rendering::RTHandle* value);
    // System.Int32 get_MssaSamples()
    // Offset: 0x53119A8
    int get_MssaSamples();
    // System.Void set_MssaSamples(System.Int32 value)
    // Offset: 0x53119B0
    void set_MssaSamples(int value);
    // System.Boolean get_CopyToDepth()
    // Offset: 0x53119B8
    bool get_CopyToDepth();
    // System.Void set_CopyToDepth(System.Boolean value)
    // Offset: 0x53119C0
    void set_CopyToDepth(bool value);
    // public System.Void .ctor(UnityEngine.Rendering.Universal.RenderPassEvent evt, UnityEngine.Material copyDepthMaterial, System.Boolean shouldClear, System.Boolean copyToDepth, System.Boolean copyResolvedDepth)
    // Offset: 0x53119CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CopyDepthPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* copyDepthMaterial, bool shouldClear, bool copyToDepth, bool copyResolvedDepth) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CopyDepthPass*, creationType>(evt, copyDepthMaterial, shouldClear, copyToDepth, copyResolvedDepth)));
    }
    // public System.Void Setup(UnityEngine.Rendering.RTHandle source, UnityEngine.Rendering.RTHandle destination)
    // Offset: 0x5311B18
    void Setup(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination);
    // static private System.Void ExecutePass(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Rendering.Universal.Internal.CopyDepthPass/PassData passData, ref UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.CameraData cameraData, UnityEngine.Rendering.RTHandle source, UnityEngine.Rendering.RTHandle destination)
    // Offset: 0x5311D3C
    static void ExecutePass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::PassData* passData, ByRef<::UnityEngine::Rendering::CommandBuffer*> cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination);
    // System.Void Render(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph, out UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle destination, in UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle source, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x53125DC
    void Render(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> destination, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> source, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void OnCameraSetup(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5311B54
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::OnCameraSetup(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5311C5C
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void OnCameraCleanup(UnityEngine.Rendering.CommandBuffer cmd)
    // Offset: 0x5312528
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::OnCameraCleanup(UnityEngine.Rendering.CommandBuffer cmd)
    void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);
  }; // UnityEngine.Rendering.Universal.Internal.CopyDepthPass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_source
// Il2CppName: get_source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_source)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "get_source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_source
// Il2CppName: set_source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_source)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "set_source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_destination
// Il2CppName: get_destination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_destination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "get_destination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_destination
// Il2CppName: set_destination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_destination)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "set_destination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_MssaSamples
// Il2CppName: get_MssaSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_MssaSamples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "get_MssaSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_MssaSamples
// Il2CppName: set_MssaSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(int)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_MssaSamples)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "set_MssaSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepth
// Il2CppName: get_CopyToDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "get_CopyToDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepth
// Il2CppName: set_CopyToDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(bool)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "set_CopyToDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Setup)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, destination});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::ExecutePass
// Il2CppName: ExecutePass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::PassData*, ByRef<::UnityEngine::Rendering::CommandBuffer*>, ByRef<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::ExecutePass)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* passData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.Internal", "CopyDepthPass/PassData")->byval_arg;
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->this_arg;
    static auto* cameraData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "CameraData")->this_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "ExecutePass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, passData, cmd, cameraData, source, destination});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render)> {
  static const MethodInfo* get() {
    static auto* renderGraph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->this_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->this_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderGraph, destination, source, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraSetup
// Il2CppName: OnCameraSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraSetup)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "OnCameraSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraCleanup
// Il2CppName: OnCameraCleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraCleanup)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyDepthPass*), "OnCameraCleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd});
  }
};
