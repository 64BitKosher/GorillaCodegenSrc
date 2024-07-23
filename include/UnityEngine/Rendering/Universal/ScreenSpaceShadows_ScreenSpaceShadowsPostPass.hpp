// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScreenSpaceShadows
#include "UnityEngine/Rendering/Universal/ScreenSpaceShadows.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderPass
#include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
  // Forward declaring type: RTHandle
  class RTHandle;
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
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows/ScreenSpaceShadowsPostPass");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPostPass
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenSpaceShadows::ScreenSpaceShadowsPostPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Get static field: static private System.String m_ProfilerTag
    static ::StringW _get_m_ProfilerTag();
    // Set static field: static private System.String m_ProfilerTag
    static void _set_m_ProfilerTag(::StringW value);
    // Get static field: static private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    static ::UnityEngine::Rendering::ProfilingSampler* _get_m_ProfilingSampler();
    // Set static field: static private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    static void _set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static private readonly UnityEngine.Rendering.RTHandle k_CurrentActive
    static ::UnityEngine::Rendering::RTHandle* _get_k_CurrentActive();
    // Set static field: static private readonly UnityEngine.Rendering.RTHandle k_CurrentActive
    static void _set_k_CurrentActive(::UnityEngine::Rendering::RTHandle* value);
    // public override System.Void Configure(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.RenderTextureDescriptor cameraTextureDescriptor)
    // Offset: 0x52D7FF4
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Configure(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.RenderTextureDescriptor cameraTextureDescriptor)
    void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52D8058
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public System.Void .ctor()
    // Offset: 0x52D7340
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenSpaceShadows::ScreenSpaceShadowsPostPass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenSpaceShadows::ScreenSpaceShadowsPostPass*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x52D8204
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::.cctor()
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPostPass
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::Configure
// Il2CppName: Configure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::Configure)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* cameraTextureDescriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass*), "Configure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, cameraTextureDescriptor});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPostPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
