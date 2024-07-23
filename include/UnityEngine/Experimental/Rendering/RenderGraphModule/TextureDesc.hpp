// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureSizeMode
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureSizeMode.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Rendering.DepthBits
#include "UnityEngine/Rendering/DepthBits.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.FilterMode
#include "UnityEngine/FilterMode.hpp"
// Including type: UnityEngine.TextureWrapMode
#include "UnityEngine/TextureWrapMode.hpp"
// Including type: UnityEngine.Rendering.TextureDimension
#include "UnityEngine/Rendering/TextureDimension.hpp"
// Including type: UnityEngine.Rendering.MSAASamples
#include "UnityEngine/Rendering/MSAASamples.hpp"
// Including type: UnityEngine.RenderTextureMemoryless
#include "UnityEngine/RenderTextureMemoryless.hpp"
// Including type: UnityEngine.VRTextureUsage
#include "UnityEngine/VRTextureUsage.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.FastMemoryDesc
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/FastMemoryDesc.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScaleFunc
  class ScaleFunc;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: TextureDesc
  struct TextureDesc;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, "UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureDesc");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Size: 0x78
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureDesc
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextureDesc/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Experimental.Rendering.RenderGraphModule.TextureSizeMode sizeMode
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode sizeMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode) == 0x4);
    // public System.Int32 width
    // Size: 0x4
    // Offset: 0x4
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 height
    // Size: 0x4
    // Offset: 0x8
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 slices
    // Size: 0x4
    // Offset: 0xC
    int slices;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector2 scale
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 scale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Rendering.ScaleFunc func
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::ScaleFunc* func;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ScaleFunc*) == 0x8);
    // public UnityEngine.Rendering.DepthBits depthBufferBits
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Rendering::DepthBits depthBufferBits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DepthBits) == 0x4);
    // public UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // public UnityEngine.FilterMode filterMode
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::FilterMode filterMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::FilterMode) == 0x4);
    // public UnityEngine.TextureWrapMode wrapMode
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::TextureWrapMode wrapMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextureWrapMode) == 0x4);
    // public UnityEngine.Rendering.TextureDimension dimension
    // Size: 0x4
    // Offset: 0x30
    ::UnityEngine::Rendering::TextureDimension dimension;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::TextureDimension) == 0x4);
    // public System.Boolean enableRandomWrite
    // Size: 0x1
    // Offset: 0x34
    bool enableRandomWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean useMipMap
    // Size: 0x1
    // Offset: 0x35
    bool useMipMap;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean autoGenerateMips
    // Size: 0x1
    // Offset: 0x36
    bool autoGenerateMips;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isShadowMap
    // Size: 0x1
    // Offset: 0x37
    bool isShadowMap;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Int32 anisoLevel
    // Size: 0x4
    // Offset: 0x38
    int anisoLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single mipMapBias
    // Size: 0x4
    // Offset: 0x3C
    float mipMapBias;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Rendering.MSAASamples msaaSamples
    // Size: 0x4
    // Offset: 0x40
    ::UnityEngine::Rendering::MSAASamples msaaSamples;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MSAASamples) == 0x4);
    // public System.Boolean bindTextureMS
    // Size: 0x1
    // Offset: 0x44
    bool bindTextureMS;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean useDynamicScale
    // Size: 0x1
    // Offset: 0x45
    bool useDynamicScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useDynamicScale and: memoryless
    char __padding19[0x2] = {};
    // public UnityEngine.RenderTextureMemoryless memoryless
    // Size: 0x4
    // Offset: 0x48
    ::UnityEngine::RenderTextureMemoryless memoryless;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTextureMemoryless) == 0x4);
    // public UnityEngine.VRTextureUsage vrUsage
    // Size: 0x4
    // Offset: 0x4C
    ::UnityEngine::VRTextureUsage vrUsage;
    // Field size check
    static_assert(sizeof(::UnityEngine::VRTextureUsage) == 0x4);
    // public System.String name
    // Size: 0x8
    // Offset: 0x50
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Experimental.Rendering.RenderGraphModule.FastMemoryDesc fastMemoryDesc
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc) == 0xC);
    // public System.Boolean fallBackToBlackTexture
    // Size: 0x1
    // Offset: 0x64
    bool fallBackToBlackTexture;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean disableFallBackToImportedTexture
    // Size: 0x1
    // Offset: 0x65
    bool disableFallBackToImportedTexture;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean clearBuffer
    // Size: 0x1
    // Offset: 0x66
    bool clearBuffer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: clearBuffer and: clearColor
    char __padding26[0x1] = {};
    // public UnityEngine.Color clearColor
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Color clearColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating value type constructor for type: TextureDesc
    constexpr TextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode sizeMode_ = {}, int width_ = {}, int height_ = {}, int slices_ = {}, ::UnityEngine::Vector2 scale_ = {}, ::UnityEngine::Rendering::ScaleFunc* func_ = {}, ::UnityEngine::Rendering::DepthBits depthBufferBits_ = {}, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat_ = {}, ::UnityEngine::FilterMode filterMode_ = {}, ::UnityEngine::TextureWrapMode wrapMode_ = {}, ::UnityEngine::Rendering::TextureDimension dimension_ = {}, bool enableRandomWrite_ = {}, bool useMipMap_ = {}, bool autoGenerateMips_ = {}, bool isShadowMap_ = {}, int anisoLevel_ = {}, float mipMapBias_ = {}, ::UnityEngine::Rendering::MSAASamples msaaSamples_ = {}, bool bindTextureMS_ = {}, bool useDynamicScale_ = {}, ::UnityEngine::RenderTextureMemoryless memoryless_ = {}, ::UnityEngine::VRTextureUsage vrUsage_ = {}, ::StringW name_ = {}, ::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc_ = {}, bool fallBackToBlackTexture_ = {}, bool disableFallBackToImportedTexture_ = {}, bool clearBuffer_ = {}, ::UnityEngine::Color clearColor_ = {}) noexcept : sizeMode{sizeMode_}, width{width_}, height{height_}, slices{slices_}, scale{scale_}, func{func_}, depthBufferBits{depthBufferBits_}, colorFormat{colorFormat_}, filterMode{filterMode_}, wrapMode{wrapMode_}, dimension{dimension_}, enableRandomWrite{enableRandomWrite_}, useMipMap{useMipMap_}, autoGenerateMips{autoGenerateMips_}, isShadowMap{isShadowMap_}, anisoLevel{anisoLevel_}, mipMapBias{mipMapBias_}, msaaSamples{msaaSamples_}, bindTextureMS{bindTextureMS_}, useDynamicScale{useDynamicScale_}, memoryless{memoryless_}, vrUsage{vrUsage_}, name{name_}, fastMemoryDesc{fastMemoryDesc_}, fallBackToBlackTexture{fallBackToBlackTexture_}, disableFallBackToImportedTexture{disableFallBackToImportedTexture_}, clearBuffer{clearBuffer_}, clearColor{clearColor_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Experimental.Rendering.RenderGraphModule.TextureSizeMode sizeMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode& dyn_sizeMode();
    // Get instance field reference: public System.Int32 width
    [[deprecated("Use field access instead!")]] int& dyn_width();
    // Get instance field reference: public System.Int32 height
    [[deprecated("Use field access instead!")]] int& dyn_height();
    // Get instance field reference: public System.Int32 slices
    [[deprecated("Use field access instead!")]] int& dyn_slices();
    // Get instance field reference: public UnityEngine.Vector2 scale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_scale();
    // Get instance field reference: public UnityEngine.Rendering.ScaleFunc func
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ScaleFunc*& dyn_func();
    // Get instance field reference: public UnityEngine.Rendering.DepthBits depthBufferBits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DepthBits& dyn_depthBufferBits();
    // Get instance field reference: public UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::GraphicsFormat& dyn_colorFormat();
    // Get instance field reference: public UnityEngine.FilterMode filterMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::FilterMode& dyn_filterMode();
    // Get instance field reference: public UnityEngine.TextureWrapMode wrapMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextureWrapMode& dyn_wrapMode();
    // Get instance field reference: public UnityEngine.Rendering.TextureDimension dimension
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::TextureDimension& dyn_dimension();
    // Get instance field reference: public System.Boolean enableRandomWrite
    [[deprecated("Use field access instead!")]] bool& dyn_enableRandomWrite();
    // Get instance field reference: public System.Boolean useMipMap
    [[deprecated("Use field access instead!")]] bool& dyn_useMipMap();
    // Get instance field reference: public System.Boolean autoGenerateMips
    [[deprecated("Use field access instead!")]] bool& dyn_autoGenerateMips();
    // Get instance field reference: public System.Boolean isShadowMap
    [[deprecated("Use field access instead!")]] bool& dyn_isShadowMap();
    // Get instance field reference: public System.Int32 anisoLevel
    [[deprecated("Use field access instead!")]] int& dyn_anisoLevel();
    // Get instance field reference: public System.Single mipMapBias
    [[deprecated("Use field access instead!")]] float& dyn_mipMapBias();
    // Get instance field reference: public UnityEngine.Rendering.MSAASamples msaaSamples
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MSAASamples& dyn_msaaSamples();
    // Get instance field reference: public System.Boolean bindTextureMS
    [[deprecated("Use field access instead!")]] bool& dyn_bindTextureMS();
    // Get instance field reference: public System.Boolean useDynamicScale
    [[deprecated("Use field access instead!")]] bool& dyn_useDynamicScale();
    // Get instance field reference: public UnityEngine.RenderTextureMemoryless memoryless
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTextureMemoryless& dyn_memoryless();
    // Get instance field reference: public UnityEngine.VRTextureUsage vrUsage
    [[deprecated("Use field access instead!")]] ::UnityEngine::VRTextureUsage& dyn_vrUsage();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public UnityEngine.Experimental.Rendering.RenderGraphModule.FastMemoryDesc fastMemoryDesc
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc& dyn_fastMemoryDesc();
    // Get instance field reference: public System.Boolean fallBackToBlackTexture
    [[deprecated("Use field access instead!")]] bool& dyn_fallBackToBlackTexture();
    // Get instance field reference: public System.Boolean disableFallBackToImportedTexture
    [[deprecated("Use field access instead!")]] bool& dyn_disableFallBackToImportedTexture();
    // Get instance field reference: public System.Boolean clearBuffer
    [[deprecated("Use field access instead!")]] bool& dyn_clearBuffer();
    // Get instance field reference: public UnityEngine.Color clearColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_clearColor();
    // private System.Void InitDefaultValues(System.Boolean dynamicResolution, System.Boolean xrReady)
    // Offset: 0x523C900
    void InitDefaultValues(bool dynamicResolution, bool xrReady);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Boolean dynamicResolution, System.Boolean xrReady)
    // Offset: 0x523C9C8
    TextureDesc(int width, int height, bool dynamicResolution, bool xrReady);
    // public override System.Int32 GetHashCode()
    // Offset: 0x523CA00
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureDesc
  #pragma pack(pop)
  static check_size<sizeof(TextureDesc), 104 + sizeof(::UnityEngine::Color)> __UnityEngine_Experimental_Rendering_RenderGraphModule_TextureDescSizeCheck;
  static_assert(sizeof(TextureDesc) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc::InitDefaultValues
// Il2CppName: InitDefaultValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc::*)(bool, bool)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc::InitDefaultValues)> {
  static const MethodInfo* get() {
    static auto* dynamicResolution = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* xrReady = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc), "InitDefaultValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dynamicResolution, xrReady});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc::TextureDesc
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
