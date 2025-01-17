// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSceneVolumeMeshFilter
#include "GlobalNamespace/OVRSceneVolumeMeshFilter.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Mesh/MeshDataArray
#include "UnityEngine/Mesh_MeshDataArray.hpp"
// Including type: Unity.Jobs.JobHandle
#include "Unity/Jobs/JobHandle.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRSceneAnchor
  class OVRSceneAnchor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshCollider
  class MeshCollider;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7*, "", "OVRSceneVolumeMeshFilter/<CreateVolumeMesh>d__7");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRSceneVolumeMeshFilter/<CreateVolumeMesh>d__7
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public OVRSceneVolumeMeshFilter <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRSceneVolumeMeshFilter* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSceneVolumeMeshFilter*) == 0x8);
    // private OVRSceneAnchor <sceneAnchor>5__2
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRSceneAnchor* $sceneAnchor$5__2;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSceneAnchor*) == 0x8);
    // private UnityEngine.Mesh/MeshDataArray <meshDataArray>5__3
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Mesh::MeshDataArray $meshDataArray$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh::MeshDataArray) == 0xC);
    // private Unity.Jobs.JobHandle <disposeVerticesJob>5__4
    // Size: 0xC
    // Offset: 0x40
    ::Unity::Jobs::JobHandle $disposeVerticesJob$5__4;
    // Field size check
    static_assert(sizeof(::Unity::Jobs::JobHandle) == 0xC);
    // private UnityEngine.MeshCollider <collider>5__5
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::MeshCollider* $collider$5__5;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshCollider*) == 0x8);
    // private Unity.Collections.NativeArray`1<System.Int32> <meshCountResults>5__6
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::Unity::Collections::NativeArray_1<int> $meshCountResults$5__6;
    // private Unity.Jobs.JobHandle <job>5__7
    // Size: 0xC
    // Offset: 0x68
    ::Unity::Jobs::JobHandle $job$5__7;
    // Field size check
    static_assert(sizeof(::Unity::Jobs::JobHandle) == 0xC);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public OVRSceneVolumeMeshFilter <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSceneVolumeMeshFilter*& dyn_$$4__this();
    // Get instance field reference: private OVRSceneAnchor <sceneAnchor>5__2
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSceneAnchor*& dyn_$sceneAnchor$5__2();
    // Get instance field reference: private UnityEngine.Mesh/MeshDataArray <meshDataArray>5__3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh::MeshDataArray& dyn_$meshDataArray$5__3();
    // Get instance field reference: private Unity.Jobs.JobHandle <disposeVerticesJob>5__4
    [[deprecated("Use field access instead!")]] ::Unity::Jobs::JobHandle& dyn_$disposeVerticesJob$5__4();
    // Get instance field reference: private UnityEngine.MeshCollider <collider>5__5
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshCollider*& dyn_$collider$5__5();
    // Get instance field reference: private Unity.Collections.NativeArray`1<System.Int32> <meshCountResults>5__6
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<int>& dyn_$meshCountResults$5__6();
    // Get instance field reference: private Unity.Jobs.JobHandle <job>5__7
    [[deprecated("Use field access instead!")]] ::Unity::Jobs::JobHandle& dyn_$job$5__7();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x492769C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4927AB0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x4927ACC
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x4928078
    void $$m__Finally1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x49280C8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x49280D0
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4928108
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // OVRSceneVolumeMeshFilter/<CreateVolumeMesh>d__7
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
