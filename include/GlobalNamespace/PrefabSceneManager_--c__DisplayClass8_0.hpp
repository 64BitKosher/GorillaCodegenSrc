// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PrefabSceneManager
#include "GlobalNamespace/PrefabSceneManager.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRAnchor
  struct OVRAnchor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0*, "", "PrefabSceneManager/<>c__DisplayClass8_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PrefabSceneManager/<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PrefabSceneManager::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0::$$CreateSceneAnchors$b__0$d
    struct $$CreateSceneAnchors$b__0$d;
    public:
    // public PrefabSceneManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PrefabSceneManager* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrefabSceneManager*) == 0x8);
    // public System.Guid floorUuid
    // Size: 0x10
    // Offset: 0x18
    ::System::Guid floorUuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // public System.Guid ceilingUuid
    // Size: 0x10
    // Offset: 0x28
    ::System::Guid ceilingUuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // public System.Guid[] wallUuids
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::Guid> wallUuids;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Guid>) == 0x8);
    // public UnityEngine.GameObject roomGameObject
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* roomGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: public PrefabSceneManager <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrefabSceneManager*& dyn_$$4__this();
    // Get instance field reference: public System.Guid floorUuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_floorUuid();
    // Get instance field reference: public System.Guid ceilingUuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_ceilingUuid();
    // Get instance field reference: public System.Guid[] wallUuids
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Guid>& dyn_wallUuids();
    // Get instance field reference: public UnityEngine.GameObject roomGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_roomGameObject();
    // public System.Void .ctor()
    // Offset: 0x29422E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabSceneManager::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabSceneManager::$$c__DisplayClass8_0*, creationType>()));
    }
    // System.Threading.Tasks.Task <CreateSceneAnchors>b__0(OVRAnchor anchor)
    // Offset: 0x29422F0
    ::System::Threading::Tasks::Task* $CreateSceneAnchors$b__0(::GlobalNamespace::OVRAnchor anchor);
  }; // PrefabSceneManager/<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(PrefabSceneManager::$$c__DisplayClass8_0), 64 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_PrefabSceneManager_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(PrefabSceneManager::$$c__DisplayClass8_0) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0::$CreateSceneAnchors$b__0
// Il2CppName: <CreateSceneAnchors>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0::*)(::GlobalNamespace::OVRAnchor)>(&GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0::$CreateSceneAnchors$b__0)> {
  static const MethodInfo* get() {
    static auto* anchor = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrefabSceneManager::$$c__DisplayClass8_0*), "<CreateSceneAnchors>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchor});
  }
};
