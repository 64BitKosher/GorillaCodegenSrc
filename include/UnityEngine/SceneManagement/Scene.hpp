// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SceneManagement.Scene
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct Scene/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Scene
    constexpr Scene(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private System.Int32 m_Handle
    [[deprecated("Use field access instead!")]] int& dyn_m_Handle();
    // static private System.Boolean IsValidInternal(System.Int32 sceneHandle)
    // Offset: 0x54DAC3C
    static bool IsValidInternal(int sceneHandle);
    // static private System.String GetPathInternal(System.Int32 sceneHandle)
    // Offset: 0x54DAC78
    static ::StringW GetPathInternal(int sceneHandle);
    // static private System.String GetNameInternal(System.Int32 sceneHandle)
    // Offset: 0x54DACB4
    static ::StringW GetNameInternal(int sceneHandle);
    // static private System.Boolean GetIsLoadedInternal(System.Int32 sceneHandle)
    // Offset: 0x54DACF0
    static bool GetIsLoadedInternal(int sceneHandle);
    // static private System.Boolean GetIsDirtyInternal(System.Int32 sceneHandle)
    // Offset: 0x54DAD2C
    static bool GetIsDirtyInternal(int sceneHandle);
    // static private System.Int32 GetBuildIndexInternal(System.Int32 sceneHandle)
    // Offset: 0x54DAD68
    static int GetBuildIndexInternal(int sceneHandle);
    // static private System.Int32 GetRootCountInternal(System.Int32 sceneHandle)
    // Offset: 0x54DADA4
    static int GetRootCountInternal(int sceneHandle);
    // static private System.Void GetRootGameObjectsInternal(System.Int32 sceneHandle, System.Object resultRootList)
    // Offset: 0x54DADE0
    static void GetRootGameObjectsInternal(int sceneHandle, ::Il2CppObject* resultRootList);
    // public System.Int32 get_handle()
    // Offset: 0x54DAE24
    int get_handle();
    // public System.Boolean IsValid()
    // Offset: 0x54DAE2C
    bool IsValid();
    // public System.String get_path()
    // Offset: 0x54DAE68
    ::StringW get_path();
    // public System.String get_name()
    // Offset: 0x54DAEA4
    ::StringW get_name();
    // public System.Boolean get_isLoaded()
    // Offset: 0x54DAEE0
    bool get_isLoaded();
    // public System.Int32 get_buildIndex()
    // Offset: 0x54DAF1C
    int get_buildIndex();
    // public System.Boolean get_isDirty()
    // Offset: 0x54DAF58
    bool get_isDirty();
    // public System.Int32 get_rootCount()
    // Offset: 0x54DAF94
    int get_rootCount();
    // public UnityEngine.GameObject[] GetRootGameObjects()
    // Offset: 0x54DAFD0
    ::ArrayW<::UnityEngine::GameObject*> GetRootGameObjects();
    // public System.Void GetRootGameObjects(System.Collections.Generic.List`1<UnityEngine.GameObject> rootGameObjects)
    // Offset: 0x54DB0A8
    void GetRootGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* rootGameObjects);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54DB334
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x54DB33C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.SceneManagement.Scene
  #pragma pack(pop)
  static check_size<sizeof(Scene), 0 + sizeof(int)> __UnityEngine_SceneManagement_SceneSizeCheck;
  static_assert(sizeof(Scene) == 0x4);
  // static public System.Boolean op_Equality(UnityEngine.SceneManagement.Scene lhs, UnityEngine.SceneManagement.Scene rhs)
  // Offset: 0x54DB31C
  bool operator ==(const ::UnityEngine::SceneManagement::Scene& lhs, const ::UnityEngine::SceneManagement::Scene& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.SceneManagement.Scene lhs, UnityEngine.SceneManagement.Scene rhs)
  // Offset: 0x54DB328
  bool operator !=(const ::UnityEngine::SceneManagement::Scene& lhs, const ::UnityEngine::SceneManagement::Scene& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::IsValidInternal
// Il2CppName: IsValidInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::SceneManagement::Scene::IsValidInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "IsValidInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetPathInternal
// Il2CppName: GetPathInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&UnityEngine::SceneManagement::Scene::GetPathInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetPathInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetNameInternal
// Il2CppName: GetNameInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&UnityEngine::SceneManagement::Scene::GetNameInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetNameInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetIsLoadedInternal
// Il2CppName: GetIsLoadedInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::SceneManagement::Scene::GetIsLoadedInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetIsLoadedInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetIsDirtyInternal
// Il2CppName: GetIsDirtyInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::SceneManagement::Scene::GetIsDirtyInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetIsDirtyInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetBuildIndexInternal
// Il2CppName: GetBuildIndexInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::SceneManagement::Scene::GetBuildIndexInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetBuildIndexInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetRootCountInternal
// Il2CppName: GetRootCountInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::SceneManagement::Scene::GetRootCountInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetRootCountInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetRootGameObjectsInternal
// Il2CppName: GetRootGameObjectsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Il2CppObject*)>(&UnityEngine::SceneManagement::Scene::GetRootGameObjectsInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* resultRootList = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetRootGameObjectsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle, resultRootList});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_handle
// Il2CppName: get_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_path
// Il2CppName: get_path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_isLoaded
// Il2CppName: get_isLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_isLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_isLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_buildIndex
// Il2CppName: get_buildIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_buildIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_buildIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_isDirty
// Il2CppName: get_isDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_isDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_isDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_rootCount
// Il2CppName: get_rootCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_rootCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_rootCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*> (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::GetRootGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SceneManagement::Scene::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&UnityEngine::SceneManagement::Scene::GetRootGameObjects)> {
  static const MethodInfo* get() {
    static auto* rootGameObjects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootGameObjects});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SceneManagement::Scene::*)(::Il2CppObject*)>(&UnityEngine::SceneManagement::Scene::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
