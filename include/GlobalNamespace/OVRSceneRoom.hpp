// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IOVRSceneComponent
#include "GlobalNamespace/IOVRSceneComponent.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: OVRAnchor
#include "GlobalNamespace/OVRAnchor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRScenePlane
  class OVRScenePlane;
  // Forward declaring type: OVRSceneAnchor
  class OVRSceneAnchor;
  // Forward declaring type: OVRSceneManager
  class OVRSceneManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSceneRoom
  class OVRSceneRoom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSceneRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneRoom*, "", "OVRSceneRoom");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneRoom
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class OVRSceneRoom : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IOVRSceneComponent*/ {
    public:
    public:
    // private OVRScenePlane <Floor>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRScenePlane* Floor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRScenePlane*) == 0x8);
    // private OVRScenePlane <Ceiling>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRScenePlane* Ceiling;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRScenePlane*) == 0x8);
    // private OVRScenePlane[] <Walls>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::OVRScenePlane*> Walls;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRScenePlane*>) == 0x8);
    // System.Collections.Generic.List`1<OVRScenePlane> _walls
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* walls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Guid,System.Int32> _orderedRoomGuids
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::System::Guid, int>* orderedRoomGuids;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Guid, int>*) == 0x8);
    // private System.Comparison`1<OVRScenePlane> _wallOrderComparer
    // Size: 0x8
    // Offset: 0x48
    ::System::Comparison_1<::GlobalNamespace::OVRScenePlane*>* wallOrderComparer;
    // Field size check
    static_assert(sizeof(::System::Comparison_1<::GlobalNamespace::OVRScenePlane*>*) == 0x8);
    // private OVRSceneAnchor _sceneAnchor
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::OVRSceneAnchor* sceneAnchor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSceneAnchor*) == 0x8);
    // private OVRSceneManager _sceneManager
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::OVRSceneManager* sceneManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSceneManager*) == 0x8);
    // System.Collections.Generic.HashSet`1<System.Guid> _uuidToQuery
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::HashSet_1<::System::Guid>* uuidToQuery;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::System::Guid>*) == 0x8);
    // private System.Collections.Generic.List`1<OVRAnchor> _roomAnchors
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomAnchors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*) == 0x8);
    // private System.Int32 _taskCount
    // Size: 0x4
    // Offset: 0x70
    int taskCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: taskCount and: onFetchAnchorsCompleted
    char __padding10[0x4] = {};
    // private System.Action`1<System.Boolean> _onFetchAnchorsCompleted
    // Size: 0x8
    // Offset: 0x78
    ::System::Action_1<bool>* onFetchAnchorsCompleted;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // private System.Action`2<System.Boolean,OVRAnchor> _onAnchorLocalizationCompleted
    // Size: 0x8
    // Offset: 0x80
    ::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>* onAnchorLocalizationCompleted;
    // Field size check
    static_assert(sizeof(::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IOVRSceneComponent
    operator ::GlobalNamespace::IOVRSceneComponent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IOVRSceneComponent*>(this);
    }
    // Get static field: static readonly System.Collections.Generic.Dictionary`2<System.Guid,OVRSceneRoom> SceneRooms
    static ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneRoom*>* _get_SceneRooms();
    // Set static field: static readonly System.Collections.Generic.Dictionary`2<System.Guid,OVRSceneRoom> SceneRooms
    static void _set_SceneRooms(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneRoom*>* value);
    // Get static field: static readonly System.Collections.Generic.List`1<OVRSceneRoom> SceneRoomsList
    static ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneRoom*>* _get_SceneRoomsList();
    // Set static field: static readonly System.Collections.Generic.List`1<OVRSceneRoom> SceneRoomsList
    static void _set_SceneRoomsList(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneRoom*>* value);
    // Get instance field reference: private OVRScenePlane <Floor>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRScenePlane*& dyn_$Floor$k__BackingField();
    // Get instance field reference: private OVRScenePlane <Ceiling>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRScenePlane*& dyn_$Ceiling$k__BackingField();
    // Get instance field reference: private OVRScenePlane[] <Walls>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRScenePlane*>& dyn_$Walls$k__BackingField();
    // Get instance field reference: System.Collections.Generic.List`1<OVRScenePlane> _walls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*& dyn__walls();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Guid,System.Int32> _orderedRoomGuids
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Guid, int>*& dyn__orderedRoomGuids();
    // Get instance field reference: private System.Comparison`1<OVRScenePlane> _wallOrderComparer
    [[deprecated("Use field access instead!")]] ::System::Comparison_1<::GlobalNamespace::OVRScenePlane*>*& dyn__wallOrderComparer();
    // Get instance field reference: private OVRSceneAnchor _sceneAnchor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSceneAnchor*& dyn__sceneAnchor();
    // Get instance field reference: private OVRSceneManager _sceneManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSceneManager*& dyn__sceneManager();
    // Get instance field reference: System.Collections.Generic.HashSet`1<System.Guid> _uuidToQuery
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::System::Guid>*& dyn__uuidToQuery();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRAnchor> _roomAnchors
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& dyn__roomAnchors();
    // Get instance field reference: private System.Int32 _taskCount
    [[deprecated("Use field access instead!")]] int& dyn__taskCount();
    // Get instance field reference: private System.Action`1<System.Boolean> _onFetchAnchorsCompleted
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn__onFetchAnchorsCompleted();
    // Get instance field reference: private System.Action`2<System.Boolean,OVRAnchor> _onAnchorLocalizationCompleted
    [[deprecated("Use field access instead!")]] ::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>*& dyn__onAnchorLocalizationCompleted();
    // public OVRScenePlane get_Floor()
    // Offset: 0x4925720
    ::GlobalNamespace::OVRScenePlane* get_Floor();
    // private System.Void set_Floor(OVRScenePlane value)
    // Offset: 0x4925728
    void set_Floor(::GlobalNamespace::OVRScenePlane* value);
    // public OVRScenePlane get_Ceiling()
    // Offset: 0x4925730
    ::GlobalNamespace::OVRScenePlane* get_Ceiling();
    // private System.Void set_Ceiling(OVRScenePlane value)
    // Offset: 0x4925738
    void set_Ceiling(::GlobalNamespace::OVRScenePlane* value);
    // public OVRScenePlane[] get_Walls()
    // Offset: 0x4925740
    ::ArrayW<::GlobalNamespace::OVRScenePlane*> get_Walls();
    // private System.Void set_Walls(OVRScenePlane[] value)
    // Offset: 0x4925748
    void set_Walls(::ArrayW<::GlobalNamespace::OVRScenePlane*> value);
    // private System.Void Awake()
    // Offset: 0x4925750
    void Awake();
    // private System.Void IOVRSceneComponent.Initialize()
    // Offset: 0x4925980
    void IOVRSceneComponent_Initialize();
    // System.Void LoadRoom()
    // Offset: 0x491E868
    void LoadRoom();
    // private System.Void OnFetchAnchorsCompleted(System.Boolean success)
    // Offset: 0x4926148
    void OnFetchAnchorsCompleted(bool success);
    // private System.Void OnLocalizationCompleted(System.Boolean success, OVRAnchor anchor)
    // Offset: 0x4926520
    void OnLocalizationCompleted(bool success, ::GlobalNamespace::OVRAnchor anchor);
    // private System.Void UpdateRoomInformation(OVRScenePlane plane)
    // Offset: 0x49268D8
    void UpdateRoomInformation(::GlobalNamespace::OVRScenePlane* plane);
    // private System.Void GetUuidsToQuery()
    // Offset: 0x4925A98
    void GetUuidsToQuery();
    // private System.Void OnDestroy()
    // Offset: 0x4926D40
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x4926DF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneRoom* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSceneRoom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneRoom*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4926FC4
    static void _cctor();
    // private System.Int32 <Awake>b__24_0(OVRScenePlane planeA, OVRScenePlane planeB)
    // Offset: 0x49270B4
    int $Awake$b__24_0(::GlobalNamespace::OVRScenePlane* planeA, ::GlobalNamespace::OVRScenePlane* planeB);
    // private System.Boolean <Awake>g__TryGetUuid|24_1(OVRScenePlane plane, out System.Int32 index)
    // Offset: 0x4927114
    bool $Awake$g__TryGetUuid_24_1(::GlobalNamespace::OVRScenePlane* plane, ByRef<int> index);
  }; // OVRSceneRoom
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneRoom), 128 + sizeof(::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>*)> __GlobalNamespace_OVRSceneRoomSizeCheck;
  static_assert(sizeof(OVRSceneRoom) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::get_Floor
// Il2CppName: get_Floor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRScenePlane* (GlobalNamespace::OVRSceneRoom::*)()>(&GlobalNamespace::OVRSceneRoom::get_Floor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "get_Floor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::set_Floor
// Il2CppName: set_Floor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)(::GlobalNamespace::OVRScenePlane*)>(&GlobalNamespace::OVRSceneRoom::set_Floor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRScenePlane")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "set_Floor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::get_Ceiling
// Il2CppName: get_Ceiling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRScenePlane* (GlobalNamespace::OVRSceneRoom::*)()>(&GlobalNamespace::OVRSceneRoom::get_Ceiling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "get_Ceiling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::set_Ceiling
// Il2CppName: set_Ceiling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)(::GlobalNamespace::OVRScenePlane*)>(&GlobalNamespace::OVRSceneRoom::set_Ceiling)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRScenePlane")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "set_Ceiling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::get_Walls
// Il2CppName: get_Walls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::OVRScenePlane*> (GlobalNamespace::OVRSceneRoom::*)()>(&GlobalNamespace::OVRSceneRoom::get_Walls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "get_Walls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::set_Walls
// Il2CppName: set_Walls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)(::ArrayW<::GlobalNamespace::OVRScenePlane*>)>(&GlobalNamespace::OVRSceneRoom::set_Walls)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "OVRScenePlane"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "set_Walls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)()>(&GlobalNamespace::OVRSceneRoom::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::IOVRSceneComponent_Initialize
// Il2CppName: IOVRSceneComponent.Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)()>(&GlobalNamespace::OVRSceneRoom::IOVRSceneComponent_Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "IOVRSceneComponent.Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::LoadRoom
// Il2CppName: LoadRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)()>(&GlobalNamespace::OVRSceneRoom::LoadRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "LoadRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::OnFetchAnchorsCompleted
// Il2CppName: OnFetchAnchorsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)(bool)>(&GlobalNamespace::OVRSceneRoom::OnFetchAnchorsCompleted)> {
  static const MethodInfo* get() {
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "OnFetchAnchorsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{success});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::OnLocalizationCompleted
// Il2CppName: OnLocalizationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)(bool, ::GlobalNamespace::OVRAnchor)>(&GlobalNamespace::OVRSceneRoom::OnLocalizationCompleted)> {
  static const MethodInfo* get() {
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* anchor = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "OnLocalizationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{success, anchor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::UpdateRoomInformation
// Il2CppName: UpdateRoomInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)(::GlobalNamespace::OVRScenePlane*)>(&GlobalNamespace::OVRSceneRoom::UpdateRoomInformation)> {
  static const MethodInfo* get() {
    static auto* plane = &::il2cpp_utils::GetClassFromName("", "OVRScenePlane")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "UpdateRoomInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plane});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::GetUuidsToQuery
// Il2CppName: GetUuidsToQuery
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)()>(&GlobalNamespace::OVRSceneRoom::GetUuidsToQuery)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "GetUuidsToQuery", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneRoom::*)()>(&GlobalNamespace::OVRSceneRoom::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSceneRoom::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::$Awake$b__24_0
// Il2CppName: <Awake>b__24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSceneRoom::*)(::GlobalNamespace::OVRScenePlane*, ::GlobalNamespace::OVRScenePlane*)>(&GlobalNamespace::OVRSceneRoom::$Awake$b__24_0)> {
  static const MethodInfo* get() {
    static auto* planeA = &::il2cpp_utils::GetClassFromName("", "OVRScenePlane")->byval_arg;
    static auto* planeB = &::il2cpp_utils::GetClassFromName("", "OVRScenePlane")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "<Awake>b__24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planeA, planeB});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneRoom::$Awake$g__TryGetUuid_24_1
// Il2CppName: <Awake>g__TryGetUuid|24_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneRoom::*)(::GlobalNamespace::OVRScenePlane*, ByRef<int>)>(&GlobalNamespace::OVRSceneRoom::$Awake$g__TryGetUuid_24_1)> {
  static const MethodInfo* get() {
    static auto* plane = &::il2cpp_utils::GetClassFromName("", "OVRScenePlane")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneRoom*), "<Awake>g__TryGetUuid|24_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plane, index});
  }
};
