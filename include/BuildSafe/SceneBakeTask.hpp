// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BuildSafe.SceneBakeMode
#include "BuildSafe/SceneBakeMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
// Completed forward declares
// Type namespace: BuildSafe
namespace BuildSafe {
  // Forward declaring type: SceneBakeTask
  class SceneBakeTask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BuildSafe::SceneBakeTask);
DEFINE_IL2CPP_ARG_TYPE(::BuildSafe::SceneBakeTask*, "BuildSafe", "SceneBakeTask");
// Type namespace: BuildSafe
namespace BuildSafe {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: BuildSafe.SceneBakeTask
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneBakeTask : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BuildSafe.SceneBakeMode m_bakeMode
    // Size: 0x4
    // Offset: 0x20
    ::BuildSafe::SceneBakeMode m_bakeMode;
    // Field size check
    static_assert(sizeof(::BuildSafe::SceneBakeMode) == 0x4);
    // private System.Int32 m_callbackOrder
    // Size: 0x4
    // Offset: 0x24
    int m_callbackOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_runIfInactive
    // Size: 0x1
    // Offset: 0x28
    bool m_runIfInactive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private BuildSafe.SceneBakeMode m_bakeMode
    [[deprecated("Use field access instead!")]] ::BuildSafe::SceneBakeMode& dyn_m_bakeMode();
    // Get instance field reference: private System.Int32 m_callbackOrder
    [[deprecated("Use field access instead!")]] int& dyn_m_callbackOrder();
    // Get instance field reference: private System.Boolean m_runIfInactive
    [[deprecated("Use field access instead!")]] bool& dyn_m_runIfInactive();
    // public BuildSafe.SceneBakeMode get_bakeMode()
    // Offset: 0x2816D60
    ::BuildSafe::SceneBakeMode get_bakeMode();
    // public System.Void set_bakeMode(BuildSafe.SceneBakeMode value)
    // Offset: 0x2816D68
    void set_bakeMode(::BuildSafe::SceneBakeMode value);
    // public System.Int32 get_callbackOrder()
    // Offset: 0x2816D70
    int get_callbackOrder();
    // public System.Void set_callbackOrder(System.Int32 value)
    // Offset: 0x2816D78
    void set_callbackOrder(int value);
    // public System.Boolean get_runIfInactive()
    // Offset: 0x2816D80
    bool get_runIfInactive();
    // public System.Void set_runIfInactive(System.Boolean value)
    // Offset: 0x2816D88
    void set_runIfInactive(bool value);
    // public System.Void OnSceneBake(UnityEngine.SceneManagement.Scene scene, BuildSafe.SceneBakeMode mode)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnSceneBake(::UnityEngine::SceneManagement::Scene scene, ::BuildSafe::SceneBakeMode mode);
    // private System.Void ForceRun()
    // Offset: 0x2816D94
    void ForceRun();
    // protected System.Void .ctor()
    // Offset: 0x2816D50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneBakeTask* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BuildSafe::SceneBakeTask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneBakeTask*, creationType>()));
    }
  }; // BuildSafe.SceneBakeTask
  #pragma pack(pop)
  static check_size<sizeof(SceneBakeTask), 40 + sizeof(bool)> __BuildSafe_SceneBakeTaskSizeCheck;
  static_assert(sizeof(SceneBakeTask) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::get_bakeMode
// Il2CppName: get_bakeMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BuildSafe::SceneBakeMode (BuildSafe::SceneBakeTask::*)()>(&BuildSafe::SceneBakeTask::get_bakeMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneBakeTask*), "get_bakeMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::set_bakeMode
// Il2CppName: set_bakeMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BuildSafe::SceneBakeTask::*)(::BuildSafe::SceneBakeMode)>(&BuildSafe::SceneBakeTask::set_bakeMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("BuildSafe", "SceneBakeMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneBakeTask*), "set_bakeMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::get_callbackOrder
// Il2CppName: get_callbackOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BuildSafe::SceneBakeTask::*)()>(&BuildSafe::SceneBakeTask::get_callbackOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneBakeTask*), "get_callbackOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::set_callbackOrder
// Il2CppName: set_callbackOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BuildSafe::SceneBakeTask::*)(int)>(&BuildSafe::SceneBakeTask::set_callbackOrder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneBakeTask*), "set_callbackOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::get_runIfInactive
// Il2CppName: get_runIfInactive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BuildSafe::SceneBakeTask::*)()>(&BuildSafe::SceneBakeTask::get_runIfInactive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneBakeTask*), "get_runIfInactive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::set_runIfInactive
// Il2CppName: set_runIfInactive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BuildSafe::SceneBakeTask::*)(bool)>(&BuildSafe::SceneBakeTask::set_runIfInactive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneBakeTask*), "set_runIfInactive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::OnSceneBake
// Il2CppName: OnSceneBake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BuildSafe::SceneBakeTask::*)(::UnityEngine::SceneManagement::Scene, ::BuildSafe::SceneBakeMode)>(&BuildSafe::SceneBakeTask::OnSceneBake)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("BuildSafe", "SceneBakeMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneBakeTask*), "OnSceneBake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, mode});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::ForceRun
// Il2CppName: ForceRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BuildSafe::SceneBakeTask::*)()>(&BuildSafe::SceneBakeTask::ForceRun)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SceneBakeTask*), "ForceRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BuildSafe::SceneBakeTask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!