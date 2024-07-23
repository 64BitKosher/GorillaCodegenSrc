// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GTZone
#include "GlobalNamespace/GTZone.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ZoneData
  class ZoneData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ZoneManagement
  class ZoneManagement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ZoneManagement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ZoneManagement*, "", "ZoneManagement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: ZoneManagement
  // [TokenAttribute] Offset: FFFFFFFF
  class ZoneManagement : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean <hasInstance>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool hasInstance;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasInstance and: zones
    char __padding0[0x7] = {};
    // private ZoneData[] zones
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::ZoneData*> zones;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ZoneData*>) == 0x8);
    // private UnityEngine.GameObject[] allObjects
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> allObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private System.Boolean[] objectActivationState
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<bool> objectActivationState;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // public System.Action onZoneChanged
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* onZoneChanged;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> scenesLoaded
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::HashSet_1<::StringW>* scenesLoaded;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> scenesRequested
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::HashSet_1<::StringW>* scenesRequested;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> sceneForceStayLoaded
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::HashSet_1<::StringW>* sceneForceStayLoaded;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> scenesToUnload
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::StringW>* scenesToUnload;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Get static field: static public ZoneManagement instance
    static ::GlobalNamespace::ZoneManagement* _get_instance();
    // Set static field: static public ZoneManagement instance
    static void _set_instance(::GlobalNamespace::ZoneManagement* value);
    // Get instance field reference: private System.Boolean <hasInstance>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$hasInstance$k__BackingField();
    // Get instance field reference: private ZoneData[] zones
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::ZoneData*>& dyn_zones();
    // Get instance field reference: private UnityEngine.GameObject[] allObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_allObjects();
    // Get instance field reference: private System.Boolean[] objectActivationState
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_objectActivationState();
    // Get instance field reference: public System.Action onZoneChanged
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onZoneChanged();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> scenesLoaded
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::StringW>*& dyn_scenesLoaded();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> scenesRequested
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::StringW>*& dyn_scenesRequested();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> sceneForceStayLoaded
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::StringW>*& dyn_sceneForceStayLoaded();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> scenesToUnload
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_scenesToUnload();
    // public System.Boolean get_hasInstance()
    // Offset: 0x2899FC0
    bool get_hasInstance();
    // private System.Void set_hasInstance(System.Boolean value)
    // Offset: 0x2899FC8
    void set_hasInstance(bool value);
    // private System.Void Awake()
    // Offset: 0x2899FD4
    void Awake();
    // static public System.Void SetActiveZone(GTZone zone)
    // Offset: 0x289A410
    static void SetActiveZone(::GlobalNamespace::GTZone zone);
    // static public System.Void SetActiveZones(GTZone[] zones)
    // Offset: 0x2899ECC
    static void SetActiveZones(::ArrayW<::GlobalNamespace::GTZone> zones);
    // static public System.Boolean IsInZone(GTZone zone)
    // Offset: 0x289AE30
    static bool IsInZone(::GlobalNamespace::GTZone zone);
    // public UnityEngine.GameObject GetPrimaryGameObject(GTZone zone)
    // Offset: 0x289AF48
    ::UnityEngine::GameObject* GetPrimaryGameObject(::GlobalNamespace::GTZone zone);
    // static public System.Void AddSceneToForceStayLoaded(System.String sceneName)
    // Offset: 0x289AF78
    static void AddSceneToForceStayLoaded(::StringW sceneName);
    // static public System.Void RemoveSceneFromForceStayLoaded(System.String sceneName)
    // Offset: 0x289B040
    static void RemoveSceneFromForceStayLoaded(::StringW sceneName);
    // static public System.Void FindInstance()
    // Offset: 0x289A474
    static void FindInstance();
    // public System.Boolean IsSceneLoaded(GTZone gtZone)
    // Offset: 0x289B108
    bool IsSceneLoaded(::GlobalNamespace::GTZone gtZone);
    // public System.Boolean IsZoneActive(GTZone zone)
    // Offset: 0x289B1D4
    bool IsZoneActive(::GlobalNamespace::GTZone zone);
    // public System.Collections.Generic.HashSet`1<System.String> GetAllLoadedScenes()
    // Offset: 0x289B1F4
    ::System::Collections::Generic::HashSet_1<::StringW>* GetAllLoadedScenes();
    // public System.Boolean IsSceneLoaded(System.String sceneName)
    // Offset: 0x289B1FC
    bool IsSceneLoaded(::StringW sceneName);
    // private System.Void Initialize()
    // Offset: 0x289A0E0
    void Initialize();
    // private System.Void SetZones(GTZone[] newActiveZones)
    // Offset: 0x289A590
    void SetZones(::ArrayW<::GlobalNamespace::GTZone> newActiveZones);
    // private ZoneData GetZoneData(GTZone zone)
    // Offset: 0x289AEEC
    ::GlobalNamespace::ZoneData* GetZoneData(::GlobalNamespace::GTZone zone);
    // public System.Void .ctor()
    // Offset: 0x289B254
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZoneManagement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ZoneManagement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZoneManagement*, creationType>()));
    }
  }; // ZoneManagement
  #pragma pack(pop)
  static check_size<sizeof(ZoneManagement), 96 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __GlobalNamespace_ZoneManagementSizeCheck;
  static_assert(sizeof(ZoneManagement) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::get_hasInstance
// Il2CppName: get_hasInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ZoneManagement::*)()>(&GlobalNamespace::ZoneManagement::get_hasInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "get_hasInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::set_hasInstance
// Il2CppName: set_hasInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ZoneManagement::*)(bool)>(&GlobalNamespace::ZoneManagement::set_hasInstance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "set_hasInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ZoneManagement::*)()>(&GlobalNamespace::ZoneManagement::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::SetActiveZone
// Il2CppName: SetActiveZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::GTZone)>(&GlobalNamespace::ZoneManagement::SetActiveZone)> {
  static const MethodInfo* get() {
    static auto* zone = &::il2cpp_utils::GetClassFromName("", "GTZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "SetActiveZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zone});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::SetActiveZones
// Il2CppName: SetActiveZones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::GlobalNamespace::GTZone>)>(&GlobalNamespace::ZoneManagement::SetActiveZones)> {
  static const MethodInfo* get() {
    static auto* zones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "GTZone"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "SetActiveZones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zones});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::IsInZone
// Il2CppName: IsInZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::GTZone)>(&GlobalNamespace::ZoneManagement::IsInZone)> {
  static const MethodInfo* get() {
    static auto* zone = &::il2cpp_utils::GetClassFromName("", "GTZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "IsInZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zone});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::GetPrimaryGameObject
// Il2CppName: GetPrimaryGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&GlobalNamespace::ZoneManagement::GetPrimaryGameObject)> {
  static const MethodInfo* get() {
    static auto* zone = &::il2cpp_utils::GetClassFromName("", "GTZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "GetPrimaryGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zone});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::AddSceneToForceStayLoaded
// Il2CppName: AddSceneToForceStayLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::ZoneManagement::AddSceneToForceStayLoaded)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "AddSceneToForceStayLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::RemoveSceneFromForceStayLoaded
// Il2CppName: RemoveSceneFromForceStayLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::ZoneManagement::RemoveSceneFromForceStayLoaded)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "RemoveSceneFromForceStayLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::FindInstance
// Il2CppName: FindInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ZoneManagement::FindInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "FindInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::IsSceneLoaded
// Il2CppName: IsSceneLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&GlobalNamespace::ZoneManagement::IsSceneLoaded)> {
  static const MethodInfo* get() {
    static auto* gtZone = &::il2cpp_utils::GetClassFromName("", "GTZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "IsSceneLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gtZone});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::IsZoneActive
// Il2CppName: IsZoneActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&GlobalNamespace::ZoneManagement::IsZoneActive)> {
  static const MethodInfo* get() {
    static auto* zone = &::il2cpp_utils::GetClassFromName("", "GTZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "IsZoneActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zone});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::GetAllLoadedScenes
// Il2CppName: GetAllLoadedScenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (GlobalNamespace::ZoneManagement::*)()>(&GlobalNamespace::ZoneManagement::GetAllLoadedScenes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "GetAllLoadedScenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::IsSceneLoaded
// Il2CppName: IsSceneLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ZoneManagement::*)(::StringW)>(&GlobalNamespace::ZoneManagement::IsSceneLoaded)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "IsSceneLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ZoneManagement::*)()>(&GlobalNamespace::ZoneManagement::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::SetZones
// Il2CppName: SetZones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ZoneManagement::*)(::ArrayW<::GlobalNamespace::GTZone>)>(&GlobalNamespace::ZoneManagement::SetZones)> {
  static const MethodInfo* get() {
    static auto* newActiveZones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "GTZone"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "SetZones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newActiveZones});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::GetZoneData
// Il2CppName: GetZoneData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ZoneData* (GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&GlobalNamespace::ZoneManagement::GetZoneData)> {
  static const MethodInfo* get() {
    static auto* zone = &::il2cpp_utils::GetClassFromName("", "GTZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ZoneManagement*), "GetZoneData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zone});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ZoneManagement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
