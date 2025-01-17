// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRendererData
#include "UnityEngine/Rendering/Universal/ScriptableRendererData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRendererData::DebugShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRendererData::DebugShaderResources*, "UnityEngine.Rendering.Universal", "ScriptableRendererData/DebugShaderResources");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources
  // [TokenAttribute] Offset: FFFFFFFF
  // [ReloadGroupAttribute] Offset: FFFFFFFF
  class ScriptableRendererData::DebugShaderResources : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Shader debugReplacementPS
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Shader* debugReplacementPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader hdrDebugViewPS
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Shader* hdrDebugViewPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Shader debugReplacementPS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_debugReplacementPS();
    // Get instance field reference: public UnityEngine.Shader hdrDebugViewPS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_hdrDebugViewPS();
    // public System.Void .ctor()
    // Offset: 0x52DC468
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableRendererData::DebugShaderResources* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScriptableRendererData::DebugShaderResources::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableRendererData::DebugShaderResources*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources
  #pragma pack(pop)
  static check_size<sizeof(ScriptableRendererData::DebugShaderResources), 24 + sizeof(::UnityEngine::Shader*)> __UnityEngine_Rendering_Universal_ScriptableRendererData_DebugShaderResourcesSizeCheck;
  static_assert(sizeof(ScriptableRendererData::DebugShaderResources) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::DebugShaderResources::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
