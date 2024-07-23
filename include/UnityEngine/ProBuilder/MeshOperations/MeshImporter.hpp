// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: MeshImportSettings
  class MeshImportSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: MeshImporter
  class MeshImporter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshImporter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshImporter*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshImporter
  // [TokenAttribute] Offset: FFFFFFFF
  class MeshImporter : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c
    class $$c;
    public:
    // private UnityEngine.Mesh m_SourceMesh
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Mesh* m_SourceMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Material[] m_SourceMaterials
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Material*> m_SourceMaterials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Destination
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ProBuilder::ProBuilderMesh* m_Destination;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // private UnityEngine.ProBuilder.Vertex[] m_Vertices
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::ProBuilder::Vertex*> m_Vertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ProBuilder::Vertex*>) == 0x8);
    public:
    // Get static field: static private readonly UnityEngine.ProBuilder.MeshOperations.MeshImportSettings k_DefaultImportSettings
    static ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* _get_k_DefaultImportSettings();
    // Set static field: static private readonly UnityEngine.ProBuilder.MeshOperations.MeshImportSettings k_DefaultImportSettings
    static void _set_k_DefaultImportSettings(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* value);
    // Get instance field reference: private UnityEngine.Mesh m_SourceMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_m_SourceMesh();
    // Get instance field reference: private UnityEngine.Material[] m_SourceMaterials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_m_SourceMaterials();
    // Get instance field reference: private UnityEngine.ProBuilder.ProBuilderMesh m_Destination
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::ProBuilderMesh*& dyn_m_Destination();
    // Get instance field reference: private UnityEngine.ProBuilder.Vertex[] m_Vertices
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ProBuilder::Vertex*>& dyn_m_Vertices();
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x521BCA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImporter* New_ctor(::UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::MeshImporter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImporter*, creationType>(gameObject)));
    }
    // public System.Void .ctor(UnityEngine.Mesh sourceMesh, UnityEngine.Material[] sourceMaterials, UnityEngine.ProBuilder.ProBuilderMesh destination)
    // Offset: 0x521BE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImporter* New_ctor(::UnityEngine::Mesh* sourceMesh, ::ArrayW<::UnityEngine::Material*> sourceMaterials, ::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::MeshImporter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImporter*, creationType>(sourceMesh, sourceMaterials, destination)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh destination)
    // Offset: 0x521BF74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImporter* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::MeshImporter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImporter*, creationType>(destination)));
    }
    // public System.Boolean Import(UnityEngine.GameObject go, UnityEngine.ProBuilder.MeshOperations.MeshImportSettings importSettings)
    // Offset: 0x521BFA4
    bool Import(::UnityEngine::GameObject* go, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);
    // public System.Void Import(UnityEngine.ProBuilder.MeshOperations.MeshImportSettings importSettings)
    // Offset: 0x521C14C
    void Import(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);
    // static private System.Void .cctor()
    // Offset: 0x521D4D8
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshImporter
  #pragma pack(pop)
  static check_size<sizeof(MeshImporter), 40 + sizeof(::ArrayW<::UnityEngine::ProBuilder::Vertex*>)> __UnityEngine_ProBuilder_MeshOperations_MeshImporterSizeCheck;
  static_assert(sizeof(MeshImporter) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(::UnityEngine::GameObject*, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*)>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* importSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.MeshOperations", "MeshImportSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, importSettings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*)>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import)> {
  static const MethodInfo* get() {
    static auto* importSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.MeshOperations", "MeshImportSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{importSettings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};