// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::MeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshRenderer*, "UnityEngine", "MeshRenderer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MeshRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class MeshRenderer : public ::UnityEngine::Renderer {
    public:
    // private System.Void DontStripMeshRenderer()
    // Offset: 0x549EE0C
    void DontStripMeshRenderer();
    // public UnityEngine.Mesh get_additionalVertexStreams()
    // Offset: 0x549EE10
    ::UnityEngine::Mesh* get_additionalVertexStreams();
    // public System.Void set_additionalVertexStreams(UnityEngine.Mesh value)
    // Offset: 0x549EE4C
    void set_additionalVertexStreams(::UnityEngine::Mesh* value);
    // public UnityEngine.Mesh get_enlightenVertexStream()
    // Offset: 0x549EE90
    ::UnityEngine::Mesh* get_enlightenVertexStream();
    // public System.Void set_enlightenVertexStream(UnityEngine.Mesh value)
    // Offset: 0x549EECC
    void set_enlightenVertexStream(::UnityEngine::Mesh* value);
    // public System.Int32 get_subMeshStartIndex()
    // Offset: 0x549EF10
    int get_subMeshStartIndex();
    // public System.Void .ctor()
    // Offset: 0x549EF4C
    // Implemented from: UnityEngine.Renderer
    // Base method: System.Void Renderer::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::MeshRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshRenderer*, creationType>()));
    }
  }; // UnityEngine.MeshRenderer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::DontStripMeshRenderer
// Il2CppName: DontStripMeshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshRenderer::*)()>(&UnityEngine::MeshRenderer::DontStripMeshRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshRenderer*), "DontStripMeshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::get_additionalVertexStreams
// Il2CppName: get_additionalVertexStreams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (UnityEngine::MeshRenderer::*)()>(&UnityEngine::MeshRenderer::get_additionalVertexStreams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshRenderer*), "get_additionalVertexStreams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::set_additionalVertexStreams
// Il2CppName: set_additionalVertexStreams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshRenderer::*)(::UnityEngine::Mesh*)>(&UnityEngine::MeshRenderer::set_additionalVertexStreams)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshRenderer*), "set_additionalVertexStreams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::get_enlightenVertexStream
// Il2CppName: get_enlightenVertexStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (UnityEngine::MeshRenderer::*)()>(&UnityEngine::MeshRenderer::get_enlightenVertexStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshRenderer*), "get_enlightenVertexStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::set_enlightenVertexStream
// Il2CppName: set_enlightenVertexStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshRenderer::*)(::UnityEngine::Mesh*)>(&UnityEngine::MeshRenderer::set_enlightenVertexStream)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshRenderer*), "set_enlightenVertexStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::get_subMeshStartIndex
// Il2CppName: get_subMeshStartIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::MeshRenderer::*)()>(&UnityEngine::MeshRenderer::get_subMeshStartIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshRenderer*), "get_subMeshStartIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
