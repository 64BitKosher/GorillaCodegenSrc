// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: SceneSelection
  class SceneSelection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::SceneSelection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SceneSelection*, "UnityEngine.ProBuilder", "SceneSelection");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SceneSelection
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: FFFFFFFF
  class SceneSelection : public ::Il2CppObject/*, public ::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>*/ {
    public:
    public:
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> m_Vertices
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<int>* m_Vertices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> m_Edges
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* m_Edges;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> m_Faces
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* m_Faces;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*) == 0x8);
    // public System.Int32 vertex
    // Size: 0x4
    // Offset: 0x38
    int vertex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.ProBuilder.Edge edge
    // Size: 0x8
    // Offset: 0x3C
    ::UnityEngine::ProBuilder::Edge edge;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Edge) == 0x8);
    // Padding between fields: edge and: face
    char __padding6[0x4] = {};
    // public UnityEngine.ProBuilder.Face face
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::ProBuilder::Face* face;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Face*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>
    operator ::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>*>(this);
    }
    // Get instance field reference: public UnityEngine.GameObject gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_gameObject();
    // Get instance field reference: public UnityEngine.ProBuilder.ProBuilderMesh mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::ProBuilderMesh*& dyn_mesh();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> m_Vertices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_m_Vertices();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> m_Edges
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*& dyn_m_Edges();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> m_Faces
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*& dyn_m_Faces();
    // Get instance field reference: public System.Int32 vertex
    [[deprecated("Use field access instead!")]] int& dyn_vertex();
    // Get instance field reference: public UnityEngine.ProBuilder.Edge edge
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Edge& dyn_edge();
    // Get instance field reference: public UnityEngine.ProBuilder.Face face
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Face*& dyn_face();
    // public System.Collections.Generic.List`1<System.Int32> get_vertexes()
    // Offset: 0x51CF428
    ::System::Collections::Generic::List_1<int>* get_vertexes();
    // public System.Void set_vertexes(System.Collections.Generic.List`1<System.Int32> value)
    // Offset: 0x51CF430
    void set_vertexes(::System::Collections::Generic::List_1<int>* value);
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> get_edges()
    // Offset: 0x51CF438
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* get_edges();
    // public System.Void set_edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> value)
    // Offset: 0x51CF440
    void set_edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* value);
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> get_faces()
    // Offset: 0x51CF448
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* get_faces();
    // public System.Void set_faces(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> value)
    // Offset: 0x51CF450
    void set_faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* value);
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x51CF458
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(::UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(gameObject)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 vertex)
    // Offset: 0x51CF59C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int vertex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, vertex)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x51CF7EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, edge)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x51CFA3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, face)));
    }
    // System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<System.Int32> vertexes)
    // Offset: 0x51CF698
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int>* vertexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, vertexes)));
    }
    // System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x51CF8E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, edges)));
    }
    // System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x51CFB40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, faces)));
    }
    // public System.Void SetSingleFace(UnityEngine.ProBuilder.Face face)
    // Offset: 0x51CFC94
    void SetSingleFace(::UnityEngine::ProBuilder::Face* face);
    // public System.Void SetSingleVertex(System.Int32 vertex)
    // Offset: 0x51CFD78
    void SetSingleVertex(int vertex);
    // public System.Void SetSingleEdge(UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x51CFE1C
    void SetSingleEdge(::UnityEngine::ProBuilder::Edge edge);
    // public System.Void Clear()
    // Offset: 0x51CFEC0
    void Clear();
    // public System.Void CopyTo(UnityEngine.ProBuilder.SceneSelection dst)
    // Offset: 0x51CFF8C
    void CopyTo(::UnityEngine::ProBuilder::SceneSelection* dst);
    // public System.Boolean Equals(UnityEngine.ProBuilder.SceneSelection other)
    // Offset: 0x51D0334
    bool Equals(::UnityEngine::ProBuilder::SceneSelection* other);
    // public override System.String ToString()
    // Offset: 0x51D00D4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x51D0420
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x51D052C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.SceneSelection
  #pragma pack(pop)
  static check_size<sizeof(SceneSelection), 72 + sizeof(::UnityEngine::ProBuilder::Face*)> __UnityEngine_ProBuilder_SceneSelectionSizeCheck;
  static_assert(sizeof(SceneSelection) == 0x50);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.SceneSelection left, UnityEngine.ProBuilder.SceneSelection right)
  // Offset: 0x51D0680
  bool operator ==(::UnityEngine::ProBuilder::SceneSelection* left, ::UnityEngine::ProBuilder::SceneSelection& right);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.SceneSelection left, UnityEngine.ProBuilder.SceneSelection right)
  // Offset: 0x51D0688
  bool operator !=(::UnityEngine::ProBuilder::SceneSelection* left, ::UnityEngine::ProBuilder::SceneSelection& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::get_vertexes
// Il2CppName: get_vertexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int>* (UnityEngine::ProBuilder::SceneSelection::*)()>(&UnityEngine::ProBuilder::SceneSelection::get_vertexes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "get_vertexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::set_vertexes
// Il2CppName: set_vertexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SceneSelection::*)(::System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::SceneSelection::set_vertexes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "set_vertexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::get_edges
// Il2CppName: get_edges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* (UnityEngine::ProBuilder::SceneSelection::*)()>(&UnityEngine::ProBuilder::SceneSelection::get_edges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "get_edges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::set_edges
// Il2CppName: set_edges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SceneSelection::*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::SceneSelection::set_edges)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "set_edges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::get_faces
// Il2CppName: get_faces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (UnityEngine::ProBuilder::SceneSelection::*)()>(&UnityEngine::ProBuilder::SceneSelection::get_faces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "get_faces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::set_faces
// Il2CppName: set_faces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SceneSelection::*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::SceneSelection::set_faces)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "set_faces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::SetSingleFace
// Il2CppName: SetSingleFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::SceneSelection::SetSingleFace)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "SetSingleFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::SetSingleVertex
// Il2CppName: SetSingleVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SceneSelection::*)(int)>(&UnityEngine::ProBuilder::SceneSelection::SetSingleVertex)> {
  static const MethodInfo* get() {
    static auto* vertex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "SetSingleVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::SetSingleEdge
// Il2CppName: SetSingleEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::SceneSelection::SetSingleEdge)> {
  static const MethodInfo* get() {
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "SetSingleEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SceneSelection::*)()>(&UnityEngine::ProBuilder::SceneSelection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::SceneSelection*)>(&UnityEngine::ProBuilder::SceneSelection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* dst = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SceneSelection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dst});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SceneSelection::*)(::UnityEngine::ProBuilder::SceneSelection*)>(&UnityEngine::ProBuilder::SceneSelection::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SceneSelection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::SceneSelection::*)()>(&UnityEngine::ProBuilder::SceneSelection::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SceneSelection::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::SceneSelection::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SceneSelection::*)()>(&UnityEngine::ProBuilder::SceneSelection::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SceneSelection*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
