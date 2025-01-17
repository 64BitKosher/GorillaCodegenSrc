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
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: PixelPerfectBackgroundPass
  class PixelPerfectBackgroundPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass*, "UnityEngine.Rendering.Universal", "PixelPerfectBackgroundPass");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.PixelPerfectBackgroundPass
  // [TokenAttribute] Offset: FFFFFFFF
  class PixelPerfectBackgroundPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Get static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingScope
    static ::UnityEngine::Rendering::ProfilingSampler* _get_m_ProfilingScope();
    // Set static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingScope
    static void _set_m_ProfilingScope(::UnityEngine::Rendering::ProfilingSampler* value);
    // public System.Void .ctor(UnityEngine.Rendering.Universal.RenderPassEvent evt)
    // Offset: 0x52818A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PixelPerfectBackgroundPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PixelPerfectBackgroundPass*, creationType>(evt)));
    }
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x5281914
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // static private System.Void .cctor()
    // Offset: 0x5281A88
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::.cctor()
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.PixelPerfectBackgroundPass
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
