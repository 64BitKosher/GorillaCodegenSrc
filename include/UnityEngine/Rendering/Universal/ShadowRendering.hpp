// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.RenderTargetIdentifier
#include "UnityEngine/Rendering/RenderTargetIdentifier.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: Renderer2DData
  class Renderer2DData;
  // Forward declaring type: IRenderPass2D
  class IRenderPass2D;
  // Forward declaring type: RenderingData
  struct RenderingData;
  // Forward declaring type: Light2D
  class Light2D;
  // Forward declaring type: ShadowCaster2D
  class ShadowCaster2D;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ShadowRendering
  class ShadowRendering;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowRendering);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowRendering*, "UnityEngine.Rendering.Universal", "ShadowRendering");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ShadowRendering
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ShadowRendering : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Int32 k_LightPosID
    static int _get_k_LightPosID();
    // Set static field: static private readonly System.Int32 k_LightPosID
    static void _set_k_LightPosID(int value);
    // Get static field: static private readonly System.Int32 k_SelfShadowingID
    static int _get_k_SelfShadowingID();
    // Set static field: static private readonly System.Int32 k_SelfShadowingID
    static void _set_k_SelfShadowingID(int value);
    // Get static field: static private readonly System.Int32 k_ShadowStencilGroupID
    static int _get_k_ShadowStencilGroupID();
    // Set static field: static private readonly System.Int32 k_ShadowStencilGroupID
    static void _set_k_ShadowStencilGroupID(int value);
    // Get static field: static private readonly System.Int32 k_ShadowIntensityID
    static int _get_k_ShadowIntensityID();
    // Set static field: static private readonly System.Int32 k_ShadowIntensityID
    static void _set_k_ShadowIntensityID(int value);
    // Get static field: static private readonly System.Int32 k_ShadowVolumeIntensityID
    static int _get_k_ShadowVolumeIntensityID();
    // Set static field: static private readonly System.Int32 k_ShadowVolumeIntensityID
    static void _set_k_ShadowVolumeIntensityID(int value);
    // Get static field: static private readonly System.Int32 k_ShadowRadiusID
    static int _get_k_ShadowRadiusID();
    // Set static field: static private readonly System.Int32 k_ShadowRadiusID
    static void _set_k_ShadowRadiusID(int value);
    // Get static field: static private readonly System.Int32 k_ShadowColorMaskID
    static int _get_k_ShadowColorMaskID();
    // Set static field: static private readonly System.Int32 k_ShadowColorMaskID
    static void _set_k_ShadowColorMaskID(int value);
    // Get static field: static private readonly System.Int32 k_ShadowModelMatrixID
    static int _get_k_ShadowModelMatrixID();
    // Set static field: static private readonly System.Int32 k_ShadowModelMatrixID
    static void _set_k_ShadowModelMatrixID(int value);
    // Get static field: static private readonly System.Int32 k_ShadowModelInvMatrixID
    static int _get_k_ShadowModelInvMatrixID();
    // Set static field: static private readonly System.Int32 k_ShadowModelInvMatrixID
    static void _set_k_ShadowModelInvMatrixID(int value);
    // Get static field: static private readonly System.Int32 k_ShadowModelScaleID
    static int _get_k_ShadowModelScaleID();
    // Set static field: static private readonly System.Int32 k_ShadowModelScaleID
    static void _set_k_ShadowModelScaleID(int value);
    // Get static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadows
    static ::UnityEngine::Rendering::ProfilingSampler* _get_m_ProfilingSamplerShadows();
    // Set static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadows
    static void _set_m_ProfilingSamplerShadows(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadowsA
    static ::UnityEngine::Rendering::ProfilingSampler* _get_m_ProfilingSamplerShadowsA();
    // Set static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadowsA
    static void _set_m_ProfilingSamplerShadowsA(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadowsR
    static ::UnityEngine::Rendering::ProfilingSampler* _get_m_ProfilingSamplerShadowsR();
    // Set static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadowsR
    static void _set_m_ProfilingSamplerShadowsR(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadowsG
    static ::UnityEngine::Rendering::ProfilingSampler* _get_m_ProfilingSamplerShadowsG();
    // Set static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadowsG
    static void _set_m_ProfilingSamplerShadowsG(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadowsB
    static ::UnityEngine::Rendering::ProfilingSampler* _get_m_ProfilingSamplerShadowsB();
    // Set static field: static private readonly UnityEngine.Rendering.ProfilingSampler m_ProfilingSamplerShadowsB
    static void _set_m_ProfilingSamplerShadowsB(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static private UnityEngine.Rendering.RTHandle[] m_RenderTargets
    static ::ArrayW<::UnityEngine::Rendering::RTHandle*> _get_m_RenderTargets();
    // Set static field: static private UnityEngine.Rendering.RTHandle[] m_RenderTargets
    static void _set_m_RenderTargets(::ArrayW<::UnityEngine::Rendering::RTHandle*> value);
    // Get static field: static private System.Int32[] m_RenderTargetIds
    static ::ArrayW<int> _get_m_RenderTargetIds();
    // Set static field: static private System.Int32[] m_RenderTargetIds
    static void _set_m_RenderTargetIds(::ArrayW<int> value);
    // Get static field: static private UnityEngine.Rendering.RenderTargetIdentifier[] m_LightInputTextures
    static ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> _get_m_LightInputTextures();
    // Set static field: static private UnityEngine.Rendering.RenderTargetIdentifier[] m_LightInputTextures
    static void _set_m_LightInputTextures(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> value);
    // Get static field: static private readonly UnityEngine.Color[] k_ColorLookup
    static ::ArrayW<::UnityEngine::Color> _get_k_ColorLookup();
    // Set static field: static private readonly UnityEngine.Color[] k_ColorLookup
    static void _set_k_ColorLookup(::ArrayW<::UnityEngine::Color> value);
    // Get static field: static private readonly UnityEngine.Rendering.ProfilingSampler[] m_ProfilingSamplerShadowColorsLookup
    static ::ArrayW<::UnityEngine::Rendering::ProfilingSampler*> _get_m_ProfilingSamplerShadowColorsLookup();
    // Set static field: static private readonly UnityEngine.Rendering.ProfilingSampler[] m_ProfilingSamplerShadowColorsLookup
    static void _set_m_ProfilingSamplerShadowColorsLookup(::ArrayW<::UnityEngine::Rendering::ProfilingSampler*> value);
    // Get static field: static private System.UInt32 <maxTextureCount>k__BackingField
    static uint _get_$maxTextureCount$k__BackingField();
    // Set static field: static private System.UInt32 <maxTextureCount>k__BackingField
    static void _set_$maxTextureCount$k__BackingField(uint value);
    // static public System.UInt32 get_maxTextureCount()
    // Offset: 0x528E930
    static uint get_maxTextureCount();
    // static private System.Void set_maxTextureCount(System.UInt32 value)
    // Offset: 0x528E988
    static void set_maxTextureCount(uint value);
    // static public System.Void InitializeBudget(System.UInt32 maxTextureCount)
    // Offset: 0x528E9E4
    static void InitializeBudget(uint maxTextureCount);
    // static private UnityEngine.Material[] CreateMaterials(UnityEngine.Shader shader, System.Int32 pass)
    // Offset: 0x528ED88
    static ::ArrayW<::UnityEngine::Material*> CreateMaterials(::UnityEngine::Shader* shader, int pass);
    // static private UnityEngine.Material GetProjectedShadowMaterial(UnityEngine.Rendering.Universal.Renderer2DData rendererData, System.Int32 colorIndex)
    // Offset: 0x528EF08
    static ::UnityEngine::Material* GetProjectedShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int colorIndex);
    // static private UnityEngine.Material GetStencilOnlyShadowMaterial(UnityEngine.Rendering.Universal.Renderer2DData rendererData, System.Int32 colorIndex)
    // Offset: 0x528F018
    static ::UnityEngine::Material* GetStencilOnlyShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int colorIndex);
    // static private UnityEngine.Material GetSpriteSelfShadowMaterial(UnityEngine.Rendering.Universal.Renderer2DData rendererData, System.Int32 colorIndex)
    // Offset: 0x528F128
    static ::UnityEngine::Material* GetSpriteSelfShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int colorIndex);
    // static private UnityEngine.Material GetSpriteUnshadowMaterial(UnityEngine.Rendering.Universal.Renderer2DData rendererData, System.Int32 colorIndex)
    // Offset: 0x528F238
    static ::UnityEngine::Material* GetSpriteUnshadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int colorIndex);
    // static private UnityEngine.Material GetGeometryUnshadowMaterial(UnityEngine.Rendering.Universal.Renderer2DData rendererData, System.Int32 colorIndex)
    // Offset: 0x528F348
    static ::UnityEngine::Material* GetGeometryUnshadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int colorIndex);
    // static public System.Void CreateShadowRenderTexture(UnityEngine.Rendering.Universal.IRenderPass2D pass, UnityEngine.Rendering.Universal.RenderingData renderingData, UnityEngine.Rendering.CommandBuffer cmdBuffer, System.Int32 shadowIndex)
    // Offset: 0x528F458
    static void CreateShadowRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int shadowIndex);
    // static public System.Boolean PrerenderShadows(UnityEngine.Rendering.Universal.IRenderPass2D pass, UnityEngine.Rendering.Universal.RenderingData renderingData, UnityEngine.Rendering.CommandBuffer cmdBuffer, System.Int32 layerToRender, UnityEngine.Rendering.Universal.Light2D light, System.Int32 shadowIndex, System.Single shadowIntensity)
    // Offset: 0x528F6E8
    static bool PrerenderShadows(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int layerToRender, ::UnityEngine::Rendering::Universal::Light2D* light, int shadowIndex, float shadowIntensity);
    // static public System.Void SetGlobalShadowTexture(UnityEngine.Rendering.CommandBuffer cmdBuffer, UnityEngine.Rendering.Universal.Light2D light, System.Int32 shadowIndex)
    // Offset: 0x5290528
    static void SetGlobalShadowTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::Universal::Light2D* light, int shadowIndex);
    // static public System.Void DisableGlobalShadowTexture(UnityEngine.Rendering.CommandBuffer cmdBuffer)
    // Offset: 0x52906AC
    static void DisableGlobalShadowTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer);
    // static private System.Void CreateShadowRenderTexture(UnityEngine.Rendering.Universal.IRenderPass2D pass, System.Int32 handleId, UnityEngine.Rendering.Universal.RenderingData renderingData, UnityEngine.Rendering.CommandBuffer cmdBuffer)
    // Offset: 0x528F51C
    static void CreateShadowRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, int handleId, ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer);
    // static public System.Void ReleaseShadowRenderTexture(UnityEngine.Rendering.CommandBuffer cmdBuffer, System.Int32 shadowIndex)
    // Offset: 0x5290738
    static void ReleaseShadowRenderTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int shadowIndex);
    // static public System.Void SetShadowProjectionGlobals(UnityEngine.Rendering.CommandBuffer cmdBuffer, UnityEngine.Rendering.Universal.ShadowCaster2D shadowCaster)
    // Offset: 0x52907E8
    static void SetShadowProjectionGlobals(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::Universal::ShadowCaster2D* shadowCaster);
    // static public System.Boolean RenderShadows(UnityEngine.Rendering.Universal.IRenderPass2D pass, UnityEngine.Rendering.Universal.RenderingData renderingData, UnityEngine.Rendering.CommandBuffer cmdBuffer, System.Int32 layerToRender, UnityEngine.Rendering.Universal.Light2D light, System.Single shadowIntensity, UnityEngine.Rendering.RenderTargetIdentifier renderTexture, System.Int32 colorBit)
    // Offset: 0x528F8AC
    static bool RenderShadows(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int layerToRender, ::UnityEngine::Rendering::Universal::Light2D* light, float shadowIntensity, ::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, int colorBit);
    // static private System.Void .cctor()
    // Offset: 0x52908E0
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.ShadowRendering
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::get_maxTextureCount
// Il2CppName: get_maxTextureCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)()>(&UnityEngine::Rendering::Universal::ShadowRendering::get_maxTextureCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "get_maxTextureCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::set_maxTextureCount
// Il2CppName: set_maxTextureCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint)>(&UnityEngine::Rendering::Universal::ShadowRendering::set_maxTextureCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "set_maxTextureCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::InitializeBudget
// Il2CppName: InitializeBudget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint)>(&UnityEngine::Rendering::Universal::ShadowRendering::InitializeBudget)> {
  static const MethodInfo* get() {
    static auto* maxTextureCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "InitializeBudget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxTextureCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::CreateMaterials
// Il2CppName: CreateMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (*)(::UnityEngine::Shader*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::CreateMaterials)> {
  static const MethodInfo* get() {
    static auto* shader = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    static auto* pass = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "CreateMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shader, pass});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::GetProjectedShadowMaterial
// Il2CppName: GetProjectedShadowMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::GetProjectedShadowMaterial)> {
  static const MethodInfo* get() {
    static auto* rendererData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Renderer2DData")->byval_arg;
    static auto* colorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "GetProjectedShadowMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rendererData, colorIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::GetStencilOnlyShadowMaterial
// Il2CppName: GetStencilOnlyShadowMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::GetStencilOnlyShadowMaterial)> {
  static const MethodInfo* get() {
    static auto* rendererData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Renderer2DData")->byval_arg;
    static auto* colorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "GetStencilOnlyShadowMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rendererData, colorIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::GetSpriteSelfShadowMaterial
// Il2CppName: GetSpriteSelfShadowMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::GetSpriteSelfShadowMaterial)> {
  static const MethodInfo* get() {
    static auto* rendererData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Renderer2DData")->byval_arg;
    static auto* colorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "GetSpriteSelfShadowMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rendererData, colorIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::GetSpriteUnshadowMaterial
// Il2CppName: GetSpriteUnshadowMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::GetSpriteUnshadowMaterial)> {
  static const MethodInfo* get() {
    static auto* rendererData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Renderer2DData")->byval_arg;
    static auto* colorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "GetSpriteUnshadowMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rendererData, colorIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::GetGeometryUnshadowMaterial
// Il2CppName: GetGeometryUnshadowMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::GetGeometryUnshadowMaterial)> {
  static const MethodInfo* get() {
    static auto* rendererData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Renderer2DData")->byval_arg;
    static auto* colorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "GetGeometryUnshadowMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rendererData, colorIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture
// Il2CppName: CreateShadowRenderTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture)> {
  static const MethodInfo* get() {
    static auto* pass = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "IRenderPass2D")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->byval_arg;
    static auto* cmdBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* shadowIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "CreateShadowRenderTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pass, renderingData, cmdBuffer, shadowIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::PrerenderShadows
// Il2CppName: PrerenderShadows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, int, ::UnityEngine::Rendering::Universal::Light2D*, int, float)>(&UnityEngine::Rendering::Universal::ShadowRendering::PrerenderShadows)> {
  static const MethodInfo* get() {
    static auto* pass = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "IRenderPass2D")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->byval_arg;
    static auto* cmdBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* layerToRender = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Light2D")->byval_arg;
    static auto* shadowIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* shadowIntensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "PrerenderShadows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pass, renderingData, cmdBuffer, layerToRender, light, shadowIndex, shadowIntensity});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::SetGlobalShadowTexture
// Il2CppName: SetGlobalShadowTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::SetGlobalShadowTexture)> {
  static const MethodInfo* get() {
    static auto* cmdBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Light2D")->byval_arg;
    static auto* shadowIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "SetGlobalShadowTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmdBuffer, light, shadowIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::DisableGlobalShadowTexture
// Il2CppName: DisableGlobalShadowTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(&UnityEngine::Rendering::Universal::ShadowRendering::DisableGlobalShadowTexture)> {
  static const MethodInfo* get() {
    static auto* cmdBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "DisableGlobalShadowTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmdBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture
// Il2CppName: CreateShadowRenderTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, int, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*)>(&UnityEngine::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture)> {
  static const MethodInfo* get() {
    static auto* pass = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "IRenderPass2D")->byval_arg;
    static auto* handleId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->byval_arg;
    static auto* cmdBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "CreateShadowRenderTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pass, handleId, renderingData, cmdBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::ReleaseShadowRenderTexture
// Il2CppName: ReleaseShadowRenderTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::ReleaseShadowRenderTexture)> {
  static const MethodInfo* get() {
    static auto* cmdBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* shadowIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "ReleaseShadowRenderTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmdBuffer, shadowIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::SetShadowProjectionGlobals
// Il2CppName: SetShadowProjectionGlobals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ShadowCaster2D*)>(&UnityEngine::Rendering::Universal::ShadowRendering::SetShadowProjectionGlobals)> {
  static const MethodInfo* get() {
    static auto* cmdBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* shadowCaster = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "ShadowCaster2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "SetShadowProjectionGlobals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmdBuffer, shadowCaster});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::RenderShadows
// Il2CppName: RenderShadows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, int, ::UnityEngine::Rendering::Universal::Light2D*, float, ::UnityEngine::Rendering::RenderTargetIdentifier, int)>(&UnityEngine::Rendering::Universal::ShadowRendering::RenderShadows)> {
  static const MethodInfo* get() {
    static auto* pass = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "IRenderPass2D")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->byval_arg;
    static auto* cmdBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* layerToRender = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Light2D")->byval_arg;
    static auto* shadowIntensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* renderTexture = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    static auto* colorBit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), "RenderShadows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pass, renderingData, cmdBuffer, layerToRender, light, shadowIntensity, renderTexture, colorBit});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowRendering::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::ShadowRendering::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowRendering*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
