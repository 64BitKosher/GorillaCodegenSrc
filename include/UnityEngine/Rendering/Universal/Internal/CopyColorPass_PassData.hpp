// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.Internal.CopyColorPass
#include "UnityEngine/Rendering/Universal/Internal/CopyColorPass.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureHandle.hpp"
// Including type: UnityEngine.Rendering.Universal.Downsampling
#include "UnityEngine/Rendering/Universal/Downsampling.hpp"
// Including type: UnityEngine.Rendering.ClearFlag
#include "UnityEngine/Rendering/ClearFlag.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass/PassData");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData
  // [TokenAttribute] Offset: FFFFFFFF
  class CopyColorPass::PassData : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle source
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle source;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle) == 0x8);
    // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle destination
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle destination;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle) == 0x8);
    // System.Boolean useProceduralBlit
    // Size: 0x1
    // Offset: 0x20
    bool useProceduralBlit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean disableFoveatedRenderingForPass
    // Size: 0x1
    // Offset: 0x21
    bool disableFoveatedRenderingForPass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableFoveatedRenderingForPass and: cmd
    char __padding3[0x6] = {};
    // UnityEngine.Rendering.CommandBuffer cmd
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rendering::CommandBuffer* cmd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // UnityEngine.Material samplingMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* samplingMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // UnityEngine.Material copyColorMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* copyColorMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // UnityEngine.Rendering.Universal.Downsampling downsamplingMethod
    // Size: 0x4
    // Offset: 0x40
    ::UnityEngine::Rendering::Universal::Downsampling downsamplingMethod;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Downsampling) == 0x4);
    // UnityEngine.Rendering.ClearFlag clearFlag
    // Size: 0x4
    // Offset: 0x44
    ::UnityEngine::Rendering::ClearFlag clearFlag;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ClearFlag) == 0x4);
    // UnityEngine.Color clearColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color clearColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // System.Int32 sampleOffsetShaderHandle
    // Size: 0x4
    // Offset: 0x58
    int sampleOffsetShaderHandle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle source
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& dyn_source();
    // Get instance field reference: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle destination
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& dyn_destination();
    // Get instance field reference: System.Boolean useProceduralBlit
    [[deprecated("Use field access instead!")]] bool& dyn_useProceduralBlit();
    // Get instance field reference: System.Boolean disableFoveatedRenderingForPass
    [[deprecated("Use field access instead!")]] bool& dyn_disableFoveatedRenderingForPass();
    // Get instance field reference: UnityEngine.Rendering.CommandBuffer cmd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CommandBuffer*& dyn_cmd();
    // Get instance field reference: UnityEngine.Material samplingMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_samplingMaterial();
    // Get instance field reference: UnityEngine.Material copyColorMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_copyColorMaterial();
    // Get instance field reference: UnityEngine.Rendering.Universal.Downsampling downsamplingMethod
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Downsampling& dyn_downsamplingMethod();
    // Get instance field reference: UnityEngine.Rendering.ClearFlag clearFlag
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ClearFlag& dyn_clearFlag();
    // Get instance field reference: UnityEngine.Color clearColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_clearColor();
    // Get instance field reference: System.Int32 sampleOffsetShaderHandle
    [[deprecated("Use field access instead!")]] int& dyn_sampleOffsetShaderHandle();
    // public System.Void .ctor()
    // Offset: 0x5310704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CopyColorPass::PassData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CopyColorPass::PassData*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData
  #pragma pack(pop)
  static check_size<sizeof(CopyColorPass::PassData), 88 + sizeof(int)> __UnityEngine_Rendering_Universal_Internal_CopyColorPass_PassDataSizeCheck;
  static_assert(sizeof(CopyColorPass::PassData) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
