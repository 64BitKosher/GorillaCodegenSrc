// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaScoreBoard
  class GorillaScoreBoard;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaScoreboardSpawner
  class GorillaScoreboardSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaScoreboardSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaScoreboardSpawner*, "", "GorillaScoreboardSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5A
  #pragma pack(push, 1)
  // Autogenerated type: GorillaScoreboardSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaScoreboardSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::GorillaScoreboardSpawner::$UpdateBoard$d__14
    class $UpdateBoard$d__14;
    public:
    // public System.String gameType
    // Size: 0x8
    // Offset: 0x20
    ::StringW gameType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean includeMMR
    // Size: 0x1
    // Offset: 0x28
    bool includeMMR;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: includeMMR and: scoreboardPrefab
    char __padding1[0x7] = {};
    // public UnityEngine.GameObject scoreboardPrefab
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* scoreboardPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject notInRoomText
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* notInRoomText;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject controllingParentGameObject
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* controllingParentGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Boolean isActive
    // Size: 0x1
    // Offset: 0x48
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isActive and: currentScoreboard
    char __padding5[0x7] = {};
    // public GorillaScoreBoard currentScoreboard
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::GorillaScoreBoard* currentScoreboard;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaScoreBoard*) == 0x8);
    // public System.Boolean lastVisible
    // Size: 0x1
    // Offset: 0x58
    bool lastVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean forOverlay
    // Size: 0x1
    // Offset: 0x59
    bool forOverlay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String gameType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_gameType();
    // Get instance field reference: public System.Boolean includeMMR
    [[deprecated("Use field access instead!")]] bool& dyn_includeMMR();
    // Get instance field reference: public UnityEngine.GameObject scoreboardPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_scoreboardPrefab();
    // Get instance field reference: public UnityEngine.GameObject notInRoomText
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_notInRoomText();
    // Get instance field reference: public UnityEngine.GameObject controllingParentGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_controllingParentGameObject();
    // Get instance field reference: public System.Boolean isActive
    [[deprecated("Use field access instead!")]] bool& dyn_isActive();
    // Get instance field reference: public GorillaScoreBoard currentScoreboard
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaScoreBoard*& dyn_currentScoreboard();
    // Get instance field reference: public System.Boolean lastVisible
    [[deprecated("Use field access instead!")]] bool& dyn_lastVisible();
    // Get instance field reference: public System.Boolean forOverlay
    [[deprecated("Use field access instead!")]] bool& dyn_forOverlay();
    // public System.Void Awake()
    // Offset: 0x273DED8
    void Awake();
    // private System.Void Start()
    // Offset: 0x273DF64
    void Start();
    // public System.Boolean IsCurrentScoreboard()
    // Offset: 0x273E078
    bool IsCurrentScoreboard();
    // public System.Void OnJoinedRoom()
    // Offset: 0x273E098
    void OnJoinedRoom();
    // public System.Boolean IsVisible()
    // Offset: 0x273E28C
    bool IsVisible();
    // private System.Collections.IEnumerator UpdateBoard()
    // Offset: 0x273DEF8
    ::System::Collections::IEnumerator* UpdateBoard();
    // public System.Void OnLeftRoom()
    // Offset: 0x273E31C
    void OnLeftRoom();
    // public System.Void Cleanup()
    // Offset: 0x273E3A8
    void Cleanup();
    // public System.Void .ctor()
    // Offset: 0x273E460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaScoreboardSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaScoreboardSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaScoreboardSpawner*, creationType>()));
    }
  }; // GorillaScoreboardSpawner
  #pragma pack(pop)
  static check_size<sizeof(GorillaScoreboardSpawner), 89 + sizeof(bool)> __GlobalNamespace_GorillaScoreboardSpawnerSizeCheck;
  static_assert(sizeof(GorillaScoreboardSpawner) == 0x5A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreboardSpawner::*)()>(&GlobalNamespace::GorillaScoreboardSpawner::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreboardSpawner*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreboardSpawner::*)()>(&GlobalNamespace::GorillaScoreboardSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreboardSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::IsCurrentScoreboard
// Il2CppName: IsCurrentScoreboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaScoreboardSpawner::*)()>(&GlobalNamespace::GorillaScoreboardSpawner::IsCurrentScoreboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreboardSpawner*), "IsCurrentScoreboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::OnJoinedRoom
// Il2CppName: OnJoinedRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreboardSpawner::*)()>(&GlobalNamespace::GorillaScoreboardSpawner::OnJoinedRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreboardSpawner*), "OnJoinedRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::IsVisible
// Il2CppName: IsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaScoreboardSpawner::*)()>(&GlobalNamespace::GorillaScoreboardSpawner::IsVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreboardSpawner*), "IsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::UpdateBoard
// Il2CppName: UpdateBoard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::GorillaScoreboardSpawner::*)()>(&GlobalNamespace::GorillaScoreboardSpawner::UpdateBoard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreboardSpawner*), "UpdateBoard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::OnLeftRoom
// Il2CppName: OnLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreboardSpawner::*)()>(&GlobalNamespace::GorillaScoreboardSpawner::OnLeftRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreboardSpawner*), "OnLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreboardSpawner::*)()>(&GlobalNamespace::GorillaScoreboardSpawner::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreboardSpawner*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreboardSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
