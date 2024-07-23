// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRMeshAttributes
#include "GlobalNamespace/OVRMeshAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRMeshData
  struct OVRMeshData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshData, "", "OVRMeshData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRMeshData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRMeshData/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Mesh mesh
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public OVRMeshAttributes baseAttributes
    // Size: 0x30
    // Offset: 0x10
    ::GlobalNamespace::OVRMeshAttributes baseAttributes;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRMeshAttributes) == 0x30);
    // public OVRMeshAttributes[] morphTargets
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::OVRMeshAttributes> morphTargets;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRMeshAttributes>) == 0x8);
    public:
    // Creating value type constructor for type: OVRMeshData
    constexpr OVRMeshData(::UnityEngine::Mesh* mesh_ = {}, ::UnityEngine::Material* material_ = {}, ::GlobalNamespace::OVRMeshAttributes baseAttributes_ = {}, ::ArrayW<::GlobalNamespace::OVRMeshAttributes> morphTargets_ = ::ArrayW<::GlobalNamespace::OVRMeshAttributes>(static_cast<void*>(nullptr))) noexcept : mesh{mesh_}, material{material_}, baseAttributes{baseAttributes_}, morphTargets{morphTargets_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Mesh mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_mesh();
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public OVRMeshAttributes baseAttributes
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRMeshAttributes& dyn_baseAttributes();
    // Get instance field reference: public OVRMeshAttributes[] morphTargets
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRMeshAttributes>& dyn_morphTargets();
  }; // OVRMeshData
  #pragma pack(pop)
  static check_size<sizeof(OVRMeshData), 64 + sizeof(::ArrayW<::GlobalNamespace::OVRMeshAttributes>)> __GlobalNamespace_OVRMeshDataSizeCheck;
  static_assert(sizeof(OVRMeshData) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"