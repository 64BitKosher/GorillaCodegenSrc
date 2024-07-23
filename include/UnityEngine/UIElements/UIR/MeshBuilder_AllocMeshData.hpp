// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIR.MeshBuilder
#include "UnityEngine/UIElements/UIR/MeshBuilder.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.TextureId
#include "UnityEngine/UIElements/TextureId.hpp"
// Including type: UnityEngine.UIElements.MeshGenerationContext/MeshFlags
#include "UnityEngine/UIElements/MeshGenerationContext_MeshFlags.hpp"
// Including type: UnityEngine.UIElements.UIR.BMPAlloc
#include "UnityEngine/UIElements/UIR/BMPAlloc.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: MeshWriteData
  class MeshWriteData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
  // [TokenAttribute] Offset: FFFFFFFF
  struct MeshBuilder::AllocMeshData/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData::Allocator
    class Allocator;
    public:
    // UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData/Allocator alloc
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData::Allocator* alloc;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData::Allocator*) == 0x8);
    // UnityEngine.Texture texture
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Texture* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // UnityEngine.UIElements.TextureId svgTexture
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::UIElements::TextureId svgTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextureId) == 0x4);
    // Padding between fields: svgTexture and: material
    char __padding2[0x4] = {};
    // UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // UnityEngine.UIElements.MeshGenerationContext/MeshFlags flags
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::UIElements::MeshGenerationContext::MeshFlags flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::MeshGenerationContext::MeshFlags) == 0x4);
    // UnityEngine.UIElements.UIR.BMPAlloc colorAlloc
    // Size: 0x8
    // Offset: 0x24
    ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::BMPAlloc) == 0x8);
    public:
    // Creating value type constructor for type: AllocMeshData
    constexpr AllocMeshData(::UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData::Allocator* alloc_ = {}, ::UnityEngine::Texture* texture_ = {}, ::UnityEngine::UIElements::TextureId svgTexture_ = {}, ::UnityEngine::Material* material_ = {}, ::UnityEngine::UIElements::MeshGenerationContext::MeshFlags flags_ = {}, ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc_ = {}) noexcept : alloc{alloc_}, texture{texture_}, svgTexture{svgTexture_}, material{material_}, flags{flags_}, colorAlloc{colorAlloc_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData/Allocator alloc
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData::Allocator*& dyn_alloc();
    // Get instance field reference: UnityEngine.Texture texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_texture();
    // Get instance field reference: UnityEngine.UIElements.TextureId svgTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextureId& dyn_svgTexture();
    // Get instance field reference: UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: UnityEngine.UIElements.MeshGenerationContext/MeshFlags flags
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::MeshGenerationContext::MeshFlags& dyn_flags();
    // Get instance field reference: UnityEngine.UIElements.UIR.BMPAlloc colorAlloc
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::BMPAlloc& dyn_colorAlloc();
    // UnityEngine.UIElements.MeshWriteData Allocate(System.UInt32 vertexCount, System.UInt32 indexCount)
    // Offset: 0x55CDD90
    ::UnityEngine::UIElements::MeshWriteData* Allocate(uint vertexCount, uint indexCount);
  }; // UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
  #pragma pack(pop)
  static check_size<sizeof(MeshBuilder::AllocMeshData), 36 + sizeof(::UnityEngine::UIElements::UIR::BMPAlloc)> __UnityEngine_UIElements_UIR_MeshBuilder_AllocMeshDataSizeCheck;
  static_assert(sizeof(MeshBuilder::AllocMeshData) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData::Allocate
// Il2CppName: Allocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData* (UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData::*)(uint, uint)>(&UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData::Allocate)> {
  static const MethodInfo* get() {
    static auto* vertexCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* indexCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::MeshBuilder::AllocMeshData), "Allocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexCount, indexCount});
  }
};
