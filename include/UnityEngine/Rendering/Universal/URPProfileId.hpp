// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: URPProfileId
  struct URPProfileId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPProfileId, "UnityEngine.Rendering.Universal", "URPProfileId");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.URPProfileId
  // [TokenAttribute] Offset: FFFFFFFF
  struct URPProfileId/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: URPProfileId
    constexpr URPProfileId(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId UniversalRenderTotal
    static constexpr const int UniversalRenderTotal = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId UniversalRenderTotal
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_UniversalRenderTotal();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId UniversalRenderTotal
    static void _set_UniversalRenderTotal(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId UpdateVolumeFramework
    static constexpr const int UpdateVolumeFramework = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId UpdateVolumeFramework
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_UpdateVolumeFramework();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId UpdateVolumeFramework
    static void _set_UpdateVolumeFramework(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId RenderCameraStack
    static constexpr const int RenderCameraStack = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId RenderCameraStack
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_RenderCameraStack();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId RenderCameraStack
    static void _set_RenderCameraStack(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId AdditionalLightsShadow
    static constexpr const int AdditionalLightsShadow = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId AdditionalLightsShadow
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_AdditionalLightsShadow();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId AdditionalLightsShadow
    static void _set_AdditionalLightsShadow(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId ColorGradingLUT
    static constexpr const int ColorGradingLUT = 4;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId ColorGradingLUT
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_ColorGradingLUT();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId ColorGradingLUT
    static void _set_ColorGradingLUT(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId CopyColor
    static constexpr const int CopyColor = 5;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId CopyColor
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_CopyColor();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId CopyColor
    static void _set_CopyColor(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId CopyDepth
    static constexpr const int CopyDepth = 6;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId CopyDepth
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_CopyDepth();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId CopyDepth
    static void _set_CopyDepth(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId DepthNormalPrepass
    static constexpr const int DepthNormalPrepass = 7;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId DepthNormalPrepass
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_DepthNormalPrepass();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId DepthNormalPrepass
    static void _set_DepthNormalPrepass(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId DepthPrepass
    static constexpr const int DepthPrepass = 8;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId DepthPrepass
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_DepthPrepass();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId DepthPrepass
    static void _set_DepthPrepass(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId UpdateReflectionProbeAtlas
    static constexpr const int UpdateReflectionProbeAtlas = 9;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId UpdateReflectionProbeAtlas
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_UpdateReflectionProbeAtlas();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId UpdateReflectionProbeAtlas
    static void _set_UpdateReflectionProbeAtlas(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId DrawOpaqueObjects
    static constexpr const int DrawOpaqueObjects = 10;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId DrawOpaqueObjects
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_DrawOpaqueObjects();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId DrawOpaqueObjects
    static void _set_DrawOpaqueObjects(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId DrawTransparentObjects
    static constexpr const int DrawTransparentObjects = 11;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId DrawTransparentObjects
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_DrawTransparentObjects();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId DrawTransparentObjects
    static void _set_DrawTransparentObjects(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId DrawScreenSpaceUI
    static constexpr const int DrawScreenSpaceUI = 12;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId DrawScreenSpaceUI
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_DrawScreenSpaceUI();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId DrawScreenSpaceUI
    static void _set_DrawScreenSpaceUI(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId LightCookies
    static constexpr const int LightCookies = 13;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId LightCookies
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_LightCookies();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId LightCookies
    static void _set_LightCookies(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId MainLightShadow
    static constexpr const int MainLightShadow = 14;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId MainLightShadow
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_MainLightShadow();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId MainLightShadow
    static void _set_MainLightShadow(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId ResolveShadows
    static constexpr const int ResolveShadows = 15;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId ResolveShadows
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_ResolveShadows();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId ResolveShadows
    static void _set_ResolveShadows(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId SSAO
    static constexpr const int SSAO = 16;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId SSAO
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_SSAO();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId SSAO
    static void _set_SSAO(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId StopNaNs
    static constexpr const int StopNaNs = 17;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId StopNaNs
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_StopNaNs();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId StopNaNs
    static void _set_StopNaNs(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId SMAA
    static constexpr const int SMAA = 18;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId SMAA
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_SMAA();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId SMAA
    static void _set_SMAA(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId GaussianDepthOfField
    static constexpr const int GaussianDepthOfField = 19;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId GaussianDepthOfField
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_GaussianDepthOfField();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId GaussianDepthOfField
    static void _set_GaussianDepthOfField(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId BokehDepthOfField
    static constexpr const int BokehDepthOfField = 20;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId BokehDepthOfField
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_BokehDepthOfField();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId BokehDepthOfField
    static void _set_BokehDepthOfField(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId TemporalAA
    static constexpr const int TemporalAA = 21;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId TemporalAA
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_TemporalAA();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId TemporalAA
    static void _set_TemporalAA(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId MotionBlur
    static constexpr const int MotionBlur = 22;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId MotionBlur
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_MotionBlur();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId MotionBlur
    static void _set_MotionBlur(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId PaniniProjection
    static constexpr const int PaniniProjection = 23;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId PaniniProjection
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_PaniniProjection();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId PaniniProjection
    static void _set_PaniniProjection(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId UberPostProcess
    static constexpr const int UberPostProcess = 24;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId UberPostProcess
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_UberPostProcess();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId UberPostProcess
    static void _set_UberPostProcess(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId Bloom
    static constexpr const int Bloom = 25;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId Bloom
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_Bloom();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId Bloom
    static void _set_Bloom(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId LensFlareDataDrivenComputeOcclusion
    static constexpr const int LensFlareDataDrivenComputeOcclusion = 26;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId LensFlareDataDrivenComputeOcclusion
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_LensFlareDataDrivenComputeOcclusion();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId LensFlareDataDrivenComputeOcclusion
    static void _set_LensFlareDataDrivenComputeOcclusion(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId LensFlareDataDriven
    static constexpr const int LensFlareDataDriven = 27;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId LensFlareDataDriven
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_LensFlareDataDriven();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId LensFlareDataDriven
    static void _set_LensFlareDataDriven(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId MotionVectors
    static constexpr const int MotionVectors = 28;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId MotionVectors
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_MotionVectors();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId MotionVectors
    static void _set_MotionVectors(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId DrawFullscreen
    static constexpr const int DrawFullscreen = 29;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId DrawFullscreen
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_DrawFullscreen();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId DrawFullscreen
    static void _set_DrawFullscreen(::UnityEngine::Rendering::Universal::URPProfileId value);
    // static field const value: static public UnityEngine.Rendering.Universal.URPProfileId FinalBlit
    static constexpr const int FinalBlit = 30;
    // Get static field: static public UnityEngine.Rendering.Universal.URPProfileId FinalBlit
    static ::UnityEngine::Rendering::Universal::URPProfileId _get_FinalBlit();
    // Set static field: static public UnityEngine.Rendering.Universal.URPProfileId FinalBlit
    static void _set_FinalBlit(::UnityEngine::Rendering::Universal::URPProfileId value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.URPProfileId
  #pragma pack(pop)
  static check_size<sizeof(URPProfileId), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_URPProfileIdSizeCheck;
  static_assert(sizeof(URPProfileId) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
