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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalDrawFowardEmissiveSystem
  class DecalDrawFowardEmissiveSystem;
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalForwardEmissivePass
  class DecalForwardEmissivePass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*, "UnityEngine.Rendering.Universal", "DecalForwardEmissivePass");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalForwardEmissivePass
  // [TokenAttribute] Offset: FFFFFFFF
  class DecalForwardEmissivePass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    public:
    // private UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    // Size: 0x18
    // Offset: 0xE0
    ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::FilteringSettings) == 0x18);
    // private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    // Size: 0x8
    // Offset: 0xF8
    ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ProfilingSampler*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Rendering.ShaderTagId> m_ShaderTagIdList
    // Size: 0x8
    // Offset: 0x100
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*) == 0x8);
    // private UnityEngine.Rendering.Universal.DecalDrawFowardEmissiveSystem m_DrawSystem
    // Size: 0x8
    // Offset: 0x108
    ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* m_DrawSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::FilteringSettings& dyn_m_FilteringSettings();
    // Get instance field reference: private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ProfilingSampler*& dyn_m_ProfilingSampler();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Rendering.ShaderTagId> m_ShaderTagIdList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& dyn_m_ShaderTagIdList();
    // Get instance field reference: private UnityEngine.Rendering.Universal.DecalDrawFowardEmissiveSystem m_DrawSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*& dyn_m_DrawSystem();
    // public System.Void .ctor(UnityEngine.Rendering.Universal.DecalDrawFowardEmissiveSystem drawSystem)
    // Offset: 0x52A1330
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecalForwardEmissivePass* New_ctor(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* drawSystem) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecalForwardEmissivePass*, creationType>(drawSystem)));
    }
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52A1598
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
  }; // UnityEngine.Rendering.Universal.DecalForwardEmissivePass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalForwardEmissivePass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalForwardEmissivePass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalForwardEmissivePass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::DecalForwardEmissivePass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalForwardEmissivePass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};