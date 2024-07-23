// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Demo.WaterSpray
#include "Oculus/Interaction/Demo/WaterSpray.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: Oculus::Interaction::Demo
namespace Oculus::Interaction::Demo {
  // Forward declaring type: MeshBlit
  class MeshBlit;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Demo::WaterSpray::NonAlloc);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Demo::WaterSpray::NonAlloc*, "Oculus.Interaction.Demo", "WaterSpray/NonAlloc");
// Type namespace: Oculus.Interaction.Demo
namespace Oculus::Interaction::Demo {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Demo.WaterSpray/NonAlloc
  // [TokenAttribute] Offset: FFFFFFFF
  class WaterSpray::NonAlloc : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Collider[] _overlapResults
    static ::ArrayW<::UnityEngine::Collider*> _get__overlapResults();
    // Set static field: static public readonly UnityEngine.Collider[] _overlapResults
    static void _set__overlapResults(::ArrayW<::UnityEngine::Collider*> value);
    // Get static field: static public readonly System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.Demo.MeshBlit> _blits
    static ::System::Collections::Generic::Dictionary_2<int, ::Oculus::Interaction::Demo::MeshBlit*>* _get__blits();
    // Set static field: static public readonly System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.Demo.MeshBlit> _blits
    static void _set__blits(::System::Collections::Generic::Dictionary_2<int, ::Oculus::Interaction::Demo::MeshBlit*>* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.MeshFilter> _meshFilters
    static ::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* _get__meshFilters();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.MeshFilter> _meshFilters
    static void _set__meshFilters(::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* value);
    // Get static field: static private readonly System.Collections.Generic.HashSet`1<UnityEngine.Transform> _roots
    static ::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>* _get__roots();
    // Set static field: static private readonly System.Collections.Generic.HashSet`1<UnityEngine.Transform> _roots
    static void _set__roots(::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>* value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _block
    static ::UnityEngine::MaterialPropertyBlock* _get__block();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _block
    static void _set__block(::UnityEngine::MaterialPropertyBlock* value);
    // static public UnityEngine.MaterialPropertyBlock get_PropertyBlock()
    // Offset: 0x479ACCC
    static ::UnityEngine::MaterialPropertyBlock* get_PropertyBlock();
    // static public System.Collections.Generic.List`1<UnityEngine.MeshFilter> GetMeshFiltersInChildren(UnityEngine.Transform root)
    // Offset: 0x479A9EC
    static ::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* GetMeshFiltersInChildren(::UnityEngine::Transform* root);
    // static public System.Collections.Generic.HashSet`1<UnityEngine.Transform> GetRootsFromOverlapResults(System.Int32 hitCount)
    // Offset: 0x479A6FC
    static ::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>* GetRootsFromOverlapResults(int hitCount);
    // static private UnityEngine.Transform GetRoot(UnityEngine.Collider hit)
    // Offset: 0x479B41C
    static ::UnityEngine::Transform* GetRoot(::UnityEngine::Collider* hit);
    // static public System.Void CleanUpDestroyedBlits()
    // Offset: 0x479ADE0
    static void CleanUpDestroyedBlits();
    // static private System.Void .cctor()
    // Offset: 0x479B51C
    static void _cctor();
  }; // Oculus.Interaction.Demo.WaterSpray/NonAlloc
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Demo::WaterSpray::NonAlloc::get_PropertyBlock
// Il2CppName: get_PropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (*)()>(&Oculus::Interaction::Demo::WaterSpray::NonAlloc::get_PropertyBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Demo::WaterSpray::NonAlloc*), "get_PropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Demo::WaterSpray::NonAlloc::GetMeshFiltersInChildren
// Il2CppName: GetMeshFiltersInChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* (*)(::UnityEngine::Transform*)>(&Oculus::Interaction::Demo::WaterSpray::NonAlloc::GetMeshFiltersInChildren)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Demo::WaterSpray::NonAlloc*), "GetMeshFiltersInChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Demo::WaterSpray::NonAlloc::GetRootsFromOverlapResults
// Il2CppName: GetRootsFromOverlapResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>* (*)(int)>(&Oculus::Interaction::Demo::WaterSpray::NonAlloc::GetRootsFromOverlapResults)> {
  static const MethodInfo* get() {
    static auto* hitCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Demo::WaterSpray::NonAlloc*), "GetRootsFromOverlapResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitCount});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Demo::WaterSpray::NonAlloc::GetRoot
// Il2CppName: GetRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::UnityEngine::Collider*)>(&Oculus::Interaction::Demo::WaterSpray::NonAlloc::GetRoot)> {
  static const MethodInfo* get() {
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Demo::WaterSpray::NonAlloc*), "GetRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hit});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Demo::WaterSpray::NonAlloc::CleanUpDestroyedBlits
// Il2CppName: CleanUpDestroyedBlits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Demo::WaterSpray::NonAlloc::CleanUpDestroyedBlits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Demo::WaterSpray::NonAlloc*), "CleanUpDestroyedBlits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Demo::WaterSpray::NonAlloc::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Demo::WaterSpray::NonAlloc::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Demo::WaterSpray::NonAlloc*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
