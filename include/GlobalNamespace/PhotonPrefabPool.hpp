// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Photon.Pun.IPunPrefabPool
#include "Photon/Pun/IPunPrefabPool.hpp"
// Including type: ITickSystemPre
#include "GlobalNamespace/ITickSystemPre.hpp"
// Including type: PrefabType
#include "GlobalNamespace/PrefabType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
}
// Forward declaring namespace: Photon::Voice::Unity
namespace Photon::Voice::Unity {
  // Forward declaring type: RemoteVoiceLink
  class RemoteVoiceLink;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PhotonPrefabPool
  class PhotonPrefabPool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PhotonPrefabPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhotonPrefabPool*, "", "PhotonPrefabPool");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: PhotonPrefabPool
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotonPrefabPool : public ::UnityEngine::MonoBehaviour/*, public ::Photon::Pun::IPunPrefabPool, public ::GlobalNamespace::ITickSystemPre*/ {
    public:
    public:
    // private System.Boolean <ITickSystemPre.PreTickRunning>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool PreTickRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PreTickRunning and: networkPrefabsData
    char __padding0[0x7] = {};
    // private PrefabType[] networkPrefabsData
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::PrefabType> networkPrefabsData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PrefabType>) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> networkPrefabs
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GameObject*>* networkPrefabs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GameObject*>*) == 0x8);
    // private System.Collections.Generic.Queue`1<UnityEngine.GameObject> objectsWaiting
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* objectsWaiting;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<UnityEngine.GameObject> objectsQueued
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>* objectsQueued;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<UnityEngine.GameObject> netInstantiedObjects
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>* netInstantiedObjects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>*) == 0x8);
    // private System.Collections.Generic.List`1<Photon.Pun.PhotonView> tempViews
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::Photon::Pun::PhotonView*>* tempViews;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Photon::Pun::PhotonView*>*) == 0x8);
    // private System.Boolean waiting
    // Size: 0x1
    // Offset: 0x58
    bool waiting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunPrefabPool
    operator ::Photon::Pun::IPunPrefabPool() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunPrefabPool*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::ITickSystemPre
    operator ::GlobalNamespace::ITickSystemPre() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ITickSystemPre*>(this);
    }
    // Get instance field reference: private System.Boolean <ITickSystemPre.PreTickRunning>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ITickSystemPre_PreTickRunning$k__BackingField();
    // Get instance field reference: private PrefabType[] networkPrefabsData
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PrefabType>& dyn_networkPrefabsData();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> networkPrefabs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GameObject*>*& dyn_networkPrefabs();
    // Get instance field reference: private System.Collections.Generic.Queue`1<UnityEngine.GameObject> objectsWaiting
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>*& dyn_objectsWaiting();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.GameObject> objectsQueued
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>*& dyn_objectsQueued();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.GameObject> netInstantiedObjects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>*& dyn_netInstantiedObjects();
    // Get instance field reference: private System.Collections.Generic.List`1<Photon.Pun.PhotonView> tempViews
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Photon::Pun::PhotonView*>*& dyn_tempViews();
    // Get instance field reference: private System.Boolean waiting
    [[deprecated("Use field access instead!")]] bool& dyn_waiting();
    // private System.Boolean ITickSystemPre.get_PreTickRunning()
    // Offset: 0x26F8D6C
    bool ITickSystemPre_get_PreTickRunning();
    // private System.Void ITickSystemPre.set_PreTickRunning(System.Boolean value)
    // Offset: 0x26F8D74
    void ITickSystemPre_set_PreTickRunning(bool value);
    // private System.Void Start()
    // Offset: 0x26F8D80
    void Start();
    // public System.Void AddPrefab(UnityEngine.GameObject go, System.String name)
    // Offset: 0x26F8F5C
    void AddPrefab(::UnityEngine::GameObject* go, ::StringW name);
    // private UnityEngine.GameObject Photon.Pun.IPunPrefabPool.Instantiate(System.String prefabId, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x26F9030
    ::UnityEngine::GameObject* Photon_Pun_IPunPrefabPool_Instantiate(::StringW prefabId, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // private System.Void Photon.Pun.IPunPrefabPool.Destroy(UnityEngine.GameObject gameObject)
    // Offset: 0x26F91B8
    void Photon_Pun_IPunPrefabPool_Destroy(::UnityEngine::GameObject* gameObject);
    // private System.Void ITickSystemPre.PreTick()
    // Offset: 0x26F934C
    void ITickSystemPre_PreTick();
    // private System.Void CheckVOIPSettings(Photon.Voice.Unity.RemoteVoiceLink voiceLink)
    // Offset: 0x26F9540
    void CheckVOIPSettings(::Photon::Voice::Unity::RemoteVoiceLink* voiceLink);
    // public System.Void .ctor()
    // Offset: 0x26F97B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonPrefabPool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PhotonPrefabPool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonPrefabPool*, creationType>()));
    }
  }; // PhotonPrefabPool
  #pragma pack(pop)
  static check_size<sizeof(PhotonPrefabPool), 88 + sizeof(bool)> __GlobalNamespace_PhotonPrefabPoolSizeCheck;
  static_assert(sizeof(PhotonPrefabPool) == 0x59);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::ITickSystemPre_get_PreTickRunning
// Il2CppName: ITickSystemPre.get_PreTickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PhotonPrefabPool::*)()>(&GlobalNamespace::PhotonPrefabPool::ITickSystemPre_get_PreTickRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhotonPrefabPool*), "ITickSystemPre.get_PreTickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::ITickSystemPre_set_PreTickRunning
// Il2CppName: ITickSystemPre.set_PreTickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhotonPrefabPool::*)(bool)>(&GlobalNamespace::PhotonPrefabPool::ITickSystemPre_set_PreTickRunning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhotonPrefabPool*), "ITickSystemPre.set_PreTickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhotonPrefabPool::*)()>(&GlobalNamespace::PhotonPrefabPool::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhotonPrefabPool*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::AddPrefab
// Il2CppName: AddPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhotonPrefabPool::*)(::UnityEngine::GameObject*, ::StringW)>(&GlobalNamespace::PhotonPrefabPool::AddPrefab)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhotonPrefabPool*), "AddPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPool_Instantiate
// Il2CppName: Photon.Pun.IPunPrefabPool.Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::PhotonPrefabPool::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPool_Instantiate)> {
  static const MethodInfo* get() {
    static auto* prefabId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhotonPrefabPool*), "Photon.Pun.IPunPrefabPool.Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefabId, position, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPool_Destroy
// Il2CppName: Photon.Pun.IPunPrefabPool.Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhotonPrefabPool::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPool_Destroy)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhotonPrefabPool*), "Photon.Pun.IPunPrefabPool.Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::ITickSystemPre_PreTick
// Il2CppName: ITickSystemPre.PreTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhotonPrefabPool::*)()>(&GlobalNamespace::PhotonPrefabPool::ITickSystemPre_PreTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhotonPrefabPool*), "ITickSystemPre.PreTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::CheckVOIPSettings
// Il2CppName: CheckVOIPSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhotonPrefabPool::*)(::Photon::Voice::Unity::RemoteVoiceLink*)>(&GlobalNamespace::PhotonPrefabPool::CheckVOIPSettings)> {
  static const MethodInfo* get() {
    static auto* voiceLink = &::il2cpp_utils::GetClassFromName("Photon.Voice.Unity", "RemoteVoiceLink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhotonPrefabPool*), "CheckVOIPSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{voiceLink});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhotonPrefabPool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!