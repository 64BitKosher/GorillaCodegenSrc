// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Including type: UnityEngine.GraphicsBuffer
#include "UnityEngine/GraphicsBuffer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinQuality
  struct SkinQuality;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SkinnedMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SkinnedMeshRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  class SkinnedMeshRenderer : public ::UnityEngine::Renderer {
    public:
    // public UnityEngine.SkinQuality get_quality()
    // Offset: 0x549E6E0
    ::UnityEngine::SkinQuality get_quality();
    // public System.Void set_quality(UnityEngine.SkinQuality value)
    // Offset: 0x549E71C
    void set_quality(::UnityEngine::SkinQuality value);
    // public System.Boolean get_updateWhenOffscreen()
    // Offset: 0x549E760
    bool get_updateWhenOffscreen();
    // public System.Void set_updateWhenOffscreen(System.Boolean value)
    // Offset: 0x549E79C
    void set_updateWhenOffscreen(bool value);
    // public System.Boolean get_forceMatrixRecalculationPerRender()
    // Offset: 0x549E7E0
    bool get_forceMatrixRecalculationPerRender();
    // public System.Void set_forceMatrixRecalculationPerRender(System.Boolean value)
    // Offset: 0x549E81C
    void set_forceMatrixRecalculationPerRender(bool value);
    // public UnityEngine.Transform get_rootBone()
    // Offset: 0x549E860
    ::UnityEngine::Transform* get_rootBone();
    // public System.Void set_rootBone(UnityEngine.Transform value)
    // Offset: 0x549E89C
    void set_rootBone(::UnityEngine::Transform* value);
    // public UnityEngine.Transform[] get_bones()
    // Offset: 0x549E8E0
    ::ArrayW<::UnityEngine::Transform*> get_bones();
    // public System.Void set_bones(UnityEngine.Transform[] value)
    // Offset: 0x549E91C
    void set_bones(::ArrayW<::UnityEngine::Transform*> value);
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x549E960
    ::UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x549E99C
    void set_sharedMesh(::UnityEngine::Mesh* value);
    // public System.Boolean get_skinnedMotionVectors()
    // Offset: 0x549E9E0
    bool get_skinnedMotionVectors();
    // public System.Void set_skinnedMotionVectors(System.Boolean value)
    // Offset: 0x549EA1C
    void set_skinnedMotionVectors(bool value);
    // public System.Single GetBlendShapeWeight(System.Int32 index)
    // Offset: 0x549EA60
    float GetBlendShapeWeight(int index);
    // public System.Void SetBlendShapeWeight(System.Int32 index, System.Single value)
    // Offset: 0x549EAA4
    void SetBlendShapeWeight(int index, float value);
    // public System.Void BakeMesh(UnityEngine.Mesh mesh)
    // Offset: 0x549EAF8
    void BakeMesh(::UnityEngine::Mesh* mesh);
    // public System.Void BakeMesh(UnityEngine.Mesh mesh, System.Boolean useScale)
    // Offset: 0x549EB40
    void BakeMesh(::UnityEngine::Mesh* mesh, bool useScale);
    // public UnityEngine.GraphicsBuffer GetVertexBuffer()
    // Offset: 0x549EB94
    ::UnityEngine::GraphicsBuffer* GetVertexBuffer();
    // public UnityEngine.GraphicsBuffer GetPreviousVertexBuffer()
    // Offset: 0x549EC8C
    ::UnityEngine::GraphicsBuffer* GetPreviousVertexBuffer();
    // private UnityEngine.GraphicsBuffer GetVertexBufferImpl()
    // Offset: 0x549EC50
    ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl();
    // private UnityEngine.GraphicsBuffer GetPreviousVertexBufferImpl()
    // Offset: 0x549ED48
    ::UnityEngine::GraphicsBuffer* GetPreviousVertexBufferImpl();
    // public UnityEngine.GraphicsBuffer/Target get_vertexBufferTarget()
    // Offset: 0x549ED84
    ::UnityEngine::GraphicsBuffer::Target get_vertexBufferTarget();
    // public System.Void set_vertexBufferTarget(UnityEngine.GraphicsBuffer/Target value)
    // Offset: 0x549EDC0
    void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer::Target value);
    // public System.Void .ctor()
    // Offset: 0x549EE04
    // Implemented from: UnityEngine.Renderer
    // Base method: System.Void Renderer::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinnedMeshRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SkinnedMeshRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinnedMeshRenderer*, creationType>()));
    }
  }; // UnityEngine.SkinnedMeshRenderer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_quality
// Il2CppName: get_quality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SkinQuality (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_quality)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_quality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_quality
// Il2CppName: set_quality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::SkinQuality)>(&UnityEngine::SkinnedMeshRenderer::set_quality)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SkinQuality")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_quality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen
// Il2CppName: get_updateWhenOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_updateWhenOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen
// Il2CppName: set_updateWhenOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_updateWhenOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender
// Il2CppName: get_forceMatrixRecalculationPerRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_forceMatrixRecalculationPerRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender
// Il2CppName: set_forceMatrixRecalculationPerRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_forceMatrixRecalculationPerRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_rootBone
// Il2CppName: get_rootBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_rootBone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_rootBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_rootBone
// Il2CppName: set_rootBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Transform*)>(&UnityEngine::SkinnedMeshRenderer::set_rootBone)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_rootBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_bones
// Il2CppName: get_bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_bones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_bones
// Il2CppName: set_bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::ArrayW<::UnityEngine::Transform*>)>(&UnityEngine::SkinnedMeshRenderer::set_bones)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_sharedMesh
// Il2CppName: get_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_sharedMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_sharedMesh
// Il2CppName: set_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Mesh*)>(&UnityEngine::SkinnedMeshRenderer::set_sharedMesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors
// Il2CppName: get_skinnedMotionVectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_skinnedMotionVectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors
// Il2CppName: set_skinnedMotionVectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_skinnedMotionVectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight
// Il2CppName: GetBlendShapeWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SkinnedMeshRenderer::*)(int)>(&UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetBlendShapeWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight
// Il2CppName: SetBlendShapeWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(int, float)>(&UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetBlendShapeWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::BakeMesh
// Il2CppName: BakeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Mesh*)>(&UnityEngine::SkinnedMeshRenderer::BakeMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "BakeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::BakeMesh
// Il2CppName: BakeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Mesh*, bool)>(&UnityEngine::SkinnedMeshRenderer::BakeMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* useScale = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "BakeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, useScale});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetVertexBuffer
// Il2CppName: GetVertexBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::GetVertexBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetVertexBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBuffer
// Il2CppName: GetPreviousVertexBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetPreviousVertexBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetVertexBufferImpl
// Il2CppName: GetVertexBufferImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::GetVertexBufferImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetVertexBufferImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBufferImpl
// Il2CppName: GetPreviousVertexBufferImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBufferImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetPreviousVertexBufferImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_vertexBufferTarget
// Il2CppName: get_vertexBufferTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer::Target (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_vertexBufferTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_vertexBufferTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_vertexBufferTarget
// Il2CppName: set_vertexBufferTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::GraphicsBuffer::Target)>(&UnityEngine::SkinnedMeshRenderer::set_vertexBufferTarget)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GraphicsBuffer/Target")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_vertexBufferTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
