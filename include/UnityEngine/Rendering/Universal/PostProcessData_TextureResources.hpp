// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.PostProcessData
#include "UnityEngine/Rendering/Universal/PostProcessData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessData::TextureResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessData::TextureResources*, "UnityEngine.Rendering.Universal", "PostProcessData/TextureResources");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.PostProcessData/TextureResources
  // [TokenAttribute] Offset: FFFFFFFF
  // [ReloadGroupAttribute] Offset: FFFFFFFF
  class PostProcessData::TextureResources : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Texture2D[] blueNoise16LTex
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Texture2D*> blueNoise16LTex;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Texture2D*>) == 0x8);
    // public UnityEngine.Texture2D[] filmGrainTex
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Texture2D*> filmGrainTex;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Texture2D*>) == 0x8);
    // public UnityEngine.Texture2D smaaAreaTex
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Texture2D* smaaAreaTex;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public UnityEngine.Texture2D smaaSearchTex
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Texture2D* smaaSearchTex;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Texture2D[] blueNoise16LTex
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Texture2D*>& dyn_blueNoise16LTex();
    // Get instance field reference: public UnityEngine.Texture2D[] filmGrainTex
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Texture2D*>& dyn_filmGrainTex();
    // Get instance field reference: public UnityEngine.Texture2D smaaAreaTex
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_smaaAreaTex();
    // Get instance field reference: public UnityEngine.Texture2D smaaSearchTex
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_smaaSearchTex();
    // public System.Void .ctor()
    // Offset: 0x5291CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PostProcessData::TextureResources* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::PostProcessData::TextureResources::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PostProcessData::TextureResources*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.PostProcessData/TextureResources
  #pragma pack(pop)
  static check_size<sizeof(PostProcessData::TextureResources), 40 + sizeof(::UnityEngine::Texture2D*)> __UnityEngine_Rendering_Universal_PostProcessData_TextureResourcesSizeCheck;
  static_assert(sizeof(PostProcessData::TextureResources) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessData::TextureResources::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
