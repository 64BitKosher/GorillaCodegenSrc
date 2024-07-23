// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rendering.ScriptableRenderContext
#include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraphParameters
  struct RenderGraphParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphParameters");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderGraphParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String executionName
    // Size: 0x8
    // Offset: 0x0
    ::StringW executionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 currentFrameIndex
    // Size: 0x4
    // Offset: 0x8
    int currentFrameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean rendererListCulling
    // Size: 0x1
    // Offset: 0xC
    bool rendererListCulling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rendererListCulling and: scriptableRenderContext
    char __padding2[0x3] = {};
    // public UnityEngine.Rendering.ScriptableRenderContext scriptableRenderContext
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ScriptableRenderContext) == 0x8);
    // public UnityEngine.Rendering.CommandBuffer commandBuffer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer*) == 0x8);
    public:
    // Creating value type constructor for type: RenderGraphParameters
    constexpr RenderGraphParameters(::StringW executionName_ = {}, int currentFrameIndex_ = {}, bool rendererListCulling_ = {}, ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext_ = {}, ::UnityEngine::Rendering::CommandBuffer* commandBuffer_ = {}) noexcept : executionName{executionName_}, currentFrameIndex{currentFrameIndex_}, rendererListCulling{rendererListCulling_}, scriptableRenderContext{scriptableRenderContext_}, commandBuffer{commandBuffer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String executionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_executionName();
    // Get instance field reference: public System.Int32 currentFrameIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentFrameIndex();
    // Get instance field reference: public System.Boolean rendererListCulling
    [[deprecated("Use field access instead!")]] bool& dyn_rendererListCulling();
    // Get instance field reference: public UnityEngine.Rendering.ScriptableRenderContext scriptableRenderContext
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ScriptableRenderContext& dyn_scriptableRenderContext();
    // Get instance field reference: public UnityEngine.Rendering.CommandBuffer commandBuffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CommandBuffer*& dyn_commandBuffer();
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphParameters
  #pragma pack(pop)
  static check_size<sizeof(RenderGraphParameters), 24 + sizeof(::UnityEngine::Rendering::CommandBuffer*)> __UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphParametersSizeCheck;
  static_assert(sizeof(RenderGraphParameters) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"