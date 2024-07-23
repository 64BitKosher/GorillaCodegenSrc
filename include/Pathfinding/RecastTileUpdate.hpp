// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: RecastTileUpdate
  class RecastTileUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RecastTileUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RecastTileUpdate*, "Pathfinding", "RecastTileUpdate");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RecastTileUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class RecastTileUpdate : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static private System.Action`1<UnityEngine.Bounds> OnNeedUpdates
    static ::System::Action_1<::UnityEngine::Bounds>* _get_OnNeedUpdates();
    // Set static field: static private System.Action`1<UnityEngine.Bounds> OnNeedUpdates
    static void _set_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>* value);
    // static public System.Void add_OnNeedUpdates(System.Action`1<UnityEngine.Bounds> value)
    // Offset: 0x29BC450
    static void add_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>* value);
    // static public System.Void remove_OnNeedUpdates(System.Action`1<UnityEngine.Bounds> value)
    // Offset: 0x29BC51C
    static void remove_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>* value);
    // private System.Void Start()
    // Offset: 0x29BC5E8
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x29BC78C
    void OnDestroy();
    // public System.Void ScheduleUpdate()
    // Offset: 0x29BC5EC
    void ScheduleUpdate();
    // public System.Void .ctor()
    // Offset: 0x29BC790
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecastTileUpdate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RecastTileUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecastTileUpdate*, creationType>()));
    }
  }; // Pathfinding.RecastTileUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RecastTileUpdate::add_OnNeedUpdates
// Il2CppName: add_OnNeedUpdates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Bounds>*)>(&Pathfinding::RecastTileUpdate::add_OnNeedUpdates)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastTileUpdate*), "add_OnNeedUpdates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastTileUpdate::remove_OnNeedUpdates
// Il2CppName: remove_OnNeedUpdates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Bounds>*)>(&Pathfinding::RecastTileUpdate::remove_OnNeedUpdates)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastTileUpdate*), "remove_OnNeedUpdates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastTileUpdate::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastTileUpdate::*)()>(&Pathfinding::RecastTileUpdate::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastTileUpdate*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastTileUpdate::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastTileUpdate::*)()>(&Pathfinding::RecastTileUpdate::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastTileUpdate*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastTileUpdate::ScheduleUpdate
// Il2CppName: ScheduleUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastTileUpdate::*)()>(&Pathfinding::RecastTileUpdate::ScheduleUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastTileUpdate*), "ScheduleUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastTileUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
