// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityLayer
#include "GlobalNamespace/UnityLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: StaticLodGroup
  class StaticLodGroup;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: StaticLodManager
  class StaticLodManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::StaticLodManager);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::StaticLodManager*, "GorillaTag", "StaticLodManager");
// Type namespace: GorillaTag
namespace GorillaTag {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.StaticLodManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: FFFFFFFF
  class StaticLodManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GorillaTag::StaticLodManager::GroupInfo
    struct GroupInfo;
    // Size: 0x38
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: GorillaTag.StaticLodManager/GroupInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct GroupInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean isLoaded
      // Size: 0x1
      // Offset: 0x0
      bool isLoaded;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public System.Boolean componentEnabled
      // Size: 0x1
      // Offset: 0x1
      bool componentEnabled;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: componentEnabled and: center
      char __padding1[0x2] = {};
      // public UnityEngine.Vector3 center
      // Size: 0xC
      // Offset: 0x4
      ::UnityEngine::Vector3 center;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public System.Single radiusSq
      // Size: 0x4
      // Offset: 0x10
      float radiusSq;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Boolean uiEnabled
      // Size: 0x1
      // Offset: 0x14
      bool uiEnabled;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: uiEnabled and: uiEnableDistanceSq
      char __padding4[0x3] = {};
      // public System.Single uiEnableDistanceSq
      // Size: 0x4
      // Offset: 0x18
      float uiEnableDistanceSq;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: uiEnableDistanceSq and: uiTexts
      char __padding5[0x4] = {};
      // public UnityEngine.UI.Text[] uiTexts
      // Size: 0x8
      // Offset: 0x20
      ::ArrayW<::UnityEngine::UI::Text*> uiTexts;
      // Field size check
      static_assert(sizeof(::ArrayW<::UnityEngine::UI::Text*>) == 0x8);
      // public System.Boolean collidersEnabled
      // Size: 0x1
      // Offset: 0x28
      bool collidersEnabled;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: collidersEnabled and: collisionEnableDistanceSq
      char __padding7[0x3] = {};
      // public System.Single collisionEnableDistanceSq
      // Size: 0x4
      // Offset: 0x2C
      float collisionEnableDistanceSq;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public UnityEngine.Collider[] interactableColliders
      // Size: 0x8
      // Offset: 0x30
      ::ArrayW<::UnityEngine::Collider*> interactableColliders;
      // Field size check
      static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
      public:
      // Creating value type constructor for type: GroupInfo
      constexpr GroupInfo(bool isLoaded_ = {}, bool componentEnabled_ = {}, ::UnityEngine::Vector3 center_ = {}, float radiusSq_ = {}, bool uiEnabled_ = {}, float uiEnableDistanceSq_ = {}, ::ArrayW<::UnityEngine::UI::Text*> uiTexts_ = ::ArrayW<::UnityEngine::UI::Text*>(static_cast<void*>(nullptr)), bool collidersEnabled_ = {}, float collisionEnableDistanceSq_ = {}, ::ArrayW<::UnityEngine::Collider*> interactableColliders_ = ::ArrayW<::UnityEngine::Collider*>(static_cast<void*>(nullptr))) noexcept : isLoaded{isLoaded_}, componentEnabled{componentEnabled_}, center{center_}, radiusSq{radiusSq_}, uiEnabled{uiEnabled_}, uiEnableDistanceSq{uiEnableDistanceSq_}, uiTexts{uiTexts_}, collidersEnabled{collidersEnabled_}, collisionEnableDistanceSq{collisionEnableDistanceSq_}, interactableColliders{interactableColliders_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Boolean isLoaded
      [[deprecated("Use field access instead!")]] bool& dyn_isLoaded();
      // Get instance field reference: public System.Boolean componentEnabled
      [[deprecated("Use field access instead!")]] bool& dyn_componentEnabled();
      // Get instance field reference: public UnityEngine.Vector3 center
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_center();
      // Get instance field reference: public System.Single radiusSq
      [[deprecated("Use field access instead!")]] float& dyn_radiusSq();
      // Get instance field reference: public System.Boolean uiEnabled
      [[deprecated("Use field access instead!")]] bool& dyn_uiEnabled();
      // Get instance field reference: public System.Single uiEnableDistanceSq
      [[deprecated("Use field access instead!")]] float& dyn_uiEnableDistanceSq();
      // Get instance field reference: public UnityEngine.UI.Text[] uiTexts
      [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::UI::Text*>& dyn_uiTexts();
      // Get instance field reference: public System.Boolean collidersEnabled
      [[deprecated("Use field access instead!")]] bool& dyn_collidersEnabled();
      // Get instance field reference: public System.Single collisionEnableDistanceSq
      [[deprecated("Use field access instead!")]] float& dyn_collisionEnableDistanceSq();
      // Get instance field reference: public UnityEngine.Collider[] interactableColliders
      [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_interactableColliders();
    }; // GorillaTag.StaticLodManager/GroupInfo
    #pragma pack(pop)
    static check_size<sizeof(StaticLodManager::GroupInfo), 48 + sizeof(::ArrayW<::UnityEngine::Collider*>)> __GorillaTag_StaticLodManager_GroupInfoSizeCheck;
    static_assert(sizeof(StaticLodManager::GroupInfo) == 0x38);
    public:
    // private UnityEngine.Camera mainCamera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* mainCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private System.Boolean hasMainCamera
    // Size: 0x1
    // Offset: 0x28
    bool hasMainCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private readonly System.Collections.Generic.List`1<GorillaTag.StaticLodGroup> groupMonoBehaviours
    static ::System::Collections::Generic::List_1<::GorillaTag::StaticLodGroup*>* _get_groupMonoBehaviours();
    // Set static field: static private readonly System.Collections.Generic.List`1<GorillaTag.StaticLodGroup> groupMonoBehaviours
    static void _set_groupMonoBehaviours(::System::Collections::Generic::List_1<::GorillaTag::StaticLodGroup*>* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<GorillaTag.StaticLodManager/GroupInfo> groupInfos
    static ::System::Collections::Generic::List_1<::GorillaTag::StaticLodManager::GroupInfo>* _get_groupInfos();
    // Set static field: static private readonly System.Collections.Generic.List`1<GorillaTag.StaticLodManager/GroupInfo> groupInfos
    static void _set_groupInfos(::System::Collections::Generic::List_1<::GorillaTag::StaticLodManager::GroupInfo>* value);
    // Get static field: static private readonly System.Collections.Generic.Stack`1<System.Int32> freeSlots
    static ::System::Collections::Generic::Stack_1<int>* _get_freeSlots();
    // Set static field: static private readonly System.Collections.Generic.Stack`1<System.Int32> freeSlots
    static void _set_freeSlots(::System::Collections::Generic::Stack_1<int>* value);
    // Get static field: static private UnityLayer gorillaInteractableLayer
    static ::GlobalNamespace::UnityLayer _get_gorillaInteractableLayer();
    // Set static field: static private UnityLayer gorillaInteractableLayer
    static void _set_gorillaInteractableLayer(::GlobalNamespace::UnityLayer value);
    // Get instance field reference: private UnityEngine.Camera mainCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_mainCamera();
    // Get instance field reference: private System.Boolean hasMainCamera
    [[deprecated("Use field access instead!")]] bool& dyn_hasMainCamera();
    // private System.Void Awake()
    // Offset: 0x287B330
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x287B38C
    void OnEnable();
    // static public System.Int32 Register(GorillaTag.StaticLodGroup lodGroup)
    // Offset: 0x287A3BC
    static int Register(::GorillaTag::StaticLodGroup* lodGroup);
    // static public System.Void Unregister(System.Int32 lodGroupIndex)
    // Offset: 0x287B1F0
    static void Unregister(int lodGroupIndex);
    // static public System.Void SetEnabled(System.Int32 index, System.Boolean enable)
    // Offset: 0x287AFB4
    static void SetEnabled(int index, bool enable);
    // protected System.Void LateUpdate()
    // Offset: 0x287B414
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x287B818
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticLodManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::StaticLodManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticLodManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x287B820
    static void _cctor();
  }; // GorillaTag.StaticLodManager
  #pragma pack(pop)
  static check_size<sizeof(StaticLodManager), 40 + sizeof(bool)> __GorillaTag_StaticLodManagerSizeCheck;
  static_assert(sizeof(StaticLodManager) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::StaticLodManager::GroupInfo, "GorillaTag", "StaticLodManager/GroupInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::StaticLodManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::StaticLodManager::*)()>(&GorillaTag::StaticLodManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::StaticLodManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::StaticLodManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::StaticLodManager::*)()>(&GorillaTag::StaticLodManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::StaticLodManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::StaticLodManager::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GorillaTag::StaticLodGroup*)>(&GorillaTag::StaticLodManager::Register)> {
  static const MethodInfo* get() {
    static auto* lodGroup = &::il2cpp_utils::GetClassFromName("GorillaTag", "StaticLodGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::StaticLodManager*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lodGroup});
  }
};
// Writing MetadataGetter for method: GorillaTag::StaticLodManager::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&GorillaTag::StaticLodManager::Unregister)> {
  static const MethodInfo* get() {
    static auto* lodGroupIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::StaticLodManager*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lodGroupIndex});
  }
};
// Writing MetadataGetter for method: GorillaTag::StaticLodManager::SetEnabled
// Il2CppName: SetEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, bool)>(&GorillaTag::StaticLodManager::SetEnabled)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::StaticLodManager*), "SetEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, enable});
  }
};
// Writing MetadataGetter for method: GorillaTag::StaticLodManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::StaticLodManager::*)()>(&GorillaTag::StaticLodManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::StaticLodManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::StaticLodManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaTag::StaticLodManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GorillaTag::StaticLodManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::StaticLodManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
