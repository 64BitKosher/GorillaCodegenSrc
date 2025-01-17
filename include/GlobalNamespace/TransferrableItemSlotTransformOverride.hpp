// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GorillaTag.ISpawnable
#include "GorillaTag/ISpawnable.hpp"
// Including type: TransferrableObject/PositionState
#include "GlobalNamespace/TransferrableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SlotTransformOverride
  class SlotTransformOverride;
  // Skipping declaration: TransferrableObject because it is already included!
  // Forward declaring type: TransferrableObjectGripPosition
  class TransferrableObjectGripPosition;
  // Forward declaring type: AdvancedItemState
  class AdvancedItemState;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TransferrableItemSlotTransformOverride
  class TransferrableItemSlotTransformOverride;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TransferrableItemSlotTransformOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransferrableItemSlotTransformOverride*, "", "TransferrableItemSlotTransformOverride");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: TransferrableItemSlotTransformOverride
  // [TokenAttribute] Offset: FFFFFFFF
  class TransferrableItemSlotTransformOverride : public ::UnityEngine::MonoBehaviour/*, public ::GorillaTag::ISpawnable*/ {
    public:
    public:
    // public System.Collections.Generic.List`1<SlotTransformOverride> transformOverridesDeprecated
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>* transformOverridesDeprecated;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*) == 0x8);
    // public System.Collections.Generic.List`1<SlotTransformOverride> transformOverrides
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>* transformOverrides;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*) == 0x8);
    // public TransferrableObject/PositionState lastPosition
    // Size: 0x4
    // Offset: 0x30
    ::GlobalNamespace::TransferrableObject::PositionState lastPosition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TransferrableObject::PositionState) == 0x4);
    // Padding between fields: lastPosition and: followingTransferrableObject
    char __padding2[0x4] = {};
    // public TransferrableObject followingTransferrableObject
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::TransferrableObject* followingTransferrableObject;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TransferrableObject*) == 0x8);
    // public SlotTransformOverride defaultPosition
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SlotTransformOverride* defaultPosition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SlotTransformOverride*) == 0x8);
    // public UnityEngine.Transform defaultTransform
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* defaultTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform anchor
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* anchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean <GorillaTag.ISpawnable.IsSpawned>k__BackingField
    // Size: 0x1
    // Offset: 0x58
    bool IsSpawned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsSpawned and: transformFromPosition
    char __padding7[0x7] = {};
    // public System.Collections.Generic.Dictionary`2<TransferrableObject/PositionState,UnityEngine.Transform> transformFromPosition
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject::PositionState, ::UnityEngine::Transform*>* transformFromPosition;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject::PositionState, ::UnityEngine::Transform*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GorillaTag::ISpawnable
    operator ::GorillaTag::ISpawnable() noexcept {
      return *reinterpret_cast<::GorillaTag::ISpawnable*>(this);
    }
    // Get static field: static public System.Action`1<TransferrableObject> OnBringUpWindow
    static ::System::Action_1<::GlobalNamespace::TransferrableObject*>* _get_OnBringUpWindow();
    // Set static field: static public System.Action`1<TransferrableObject> OnBringUpWindow
    static void _set_OnBringUpWindow(::System::Action_1<::GlobalNamespace::TransferrableObject*>* value);
    // Get instance field reference: public System.Collections.Generic.List`1<SlotTransformOverride> transformOverridesDeprecated
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*& dyn_transformOverridesDeprecated();
    // Get instance field reference: public System.Collections.Generic.List`1<SlotTransformOverride> transformOverrides
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*& dyn_transformOverrides();
    // Get instance field reference: public TransferrableObject/PositionState lastPosition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TransferrableObject::PositionState& dyn_lastPosition();
    // Get instance field reference: public TransferrableObject followingTransferrableObject
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TransferrableObject*& dyn_followingTransferrableObject();
    // Get instance field reference: public SlotTransformOverride defaultPosition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SlotTransformOverride*& dyn_defaultPosition();
    // Get instance field reference: public UnityEngine.Transform defaultTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_defaultTransform();
    // Get instance field reference: public UnityEngine.Transform anchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_anchor();
    // Get instance field reference: private System.Boolean <GorillaTag.ISpawnable.IsSpawned>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$GorillaTag_ISpawnable_IsSpawned$k__BackingField();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<TransferrableObject/PositionState,UnityEngine.Transform> transformFromPosition
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject::PositionState, ::UnityEngine::Transform*>*& dyn_transformFromPosition();
    // private System.Boolean GorillaTag.ISpawnable.get_IsSpawned()
    // Offset: 0x26C4038
    bool GorillaTag_ISpawnable_get_IsSpawned();
    // private System.Void GorillaTag.ISpawnable.set_IsSpawned(System.Boolean value)
    // Offset: 0x26C4040
    void GorillaTag_ISpawnable_set_IsSpawned(bool value);
    // private System.Void GorillaTag.ISpawnable.OnSpawn()
    // Offset: 0x26C404C
    void GorillaTag_ISpawnable_OnSpawn();
    // private System.Void GorillaTag.ISpawnable.OnDespawn()
    // Offset: 0x26C4234
    void GorillaTag_ISpawnable_OnDespawn();
    // public System.Void AddGripPosition(TransferrableObject/PositionState state, TransferrableObjectGripPosition togp)
    // Offset: 0x26C4238
    void AddGripPosition(::GlobalNamespace::TransferrableObject::PositionState state, ::GlobalNamespace::TransferrableObjectGripPosition* togp);
    // private System.Void Update()
    // Offset: 0x26C4478
    void Update();
    // private System.Void Awake()
    // Offset: 0x26C457C
    void Awake();
    // public System.Void GenerateTransformFromPositionState()
    // Offset: 0x26C4580
    void GenerateTransformFromPositionState();
    // public UnityEngine.Transform GetTransformFromPositionState(TransferrableObject/PositionState currentState)
    // Offset: 0x26C4B54
    ::UnityEngine::Transform* GetTransformFromPositionState(::GlobalNamespace::TransferrableObject::PositionState currentState);
    // public System.Boolean GetTransformFromPositionState(TransferrableObject/PositionState currentState, AdvancedItemState advancedItemState, UnityEngine.Transform targetDockXf, out UnityEngine.Matrix4x4 matrix4X4)
    // Offset: 0x26C4BBC
    bool GetTransformFromPositionState(::GlobalNamespace::TransferrableObject::PositionState currentState, ::GlobalNamespace::AdvancedItemState* advancedItemState, ::UnityEngine::Transform* targetDockXf, ByRef<::UnityEngine::Matrix4x4> matrix4X4);
    // public AdvancedItemState GetAdvancedItemStateFromHand(TransferrableObject/PositionState currentState, UnityEngine.Transform handTransform, UnityEngine.Transform targetDock)
    // Offset: 0x26C4EB4
    ::GlobalNamespace::AdvancedItemState* GetAdvancedItemStateFromHand(::GlobalNamespace::TransferrableObject::PositionState currentState, ::UnityEngine::Transform* handTransform, ::UnityEngine::Transform* targetDock);
    // public System.Void Edit()
    // Offset: 0x26C520C
    void Edit();
    // public System.Void .ctor()
    // Offset: 0x26C529C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransferrableItemSlotTransformOverride* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TransferrableItemSlotTransformOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransferrableItemSlotTransformOverride*, creationType>()));
    }
    // private System.Boolean <Update>b__14_0(SlotTransformOverride x)
    // Offset: 0x26C52A4
    bool $Update$b__14_0(::GlobalNamespace::SlotTransformOverride* x);
  }; // TransferrableItemSlotTransformOverride
  #pragma pack(pop)
  static check_size<sizeof(TransferrableItemSlotTransformOverride), 96 + sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject::PositionState, ::UnityEngine::Transform*>*)> __GlobalNamespace_TransferrableItemSlotTransformOverrideSizeCheck;
  static_assert(sizeof(TransferrableItemSlotTransformOverride) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_get_IsSpawned
// Il2CppName: GorillaTag.ISpawnable.get_IsSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_get_IsSpawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "GorillaTag.ISpawnable.get_IsSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_set_IsSpawned
// Il2CppName: GorillaTag.ISpawnable.set_IsSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableItemSlotTransformOverride::*)(bool)>(&GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_set_IsSpawned)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "GorillaTag.ISpawnable.set_IsSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_OnSpawn
// Il2CppName: GorillaTag.ISpawnable.OnSpawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_OnSpawn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "GorillaTag.ISpawnable.OnSpawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_OnDespawn
// Il2CppName: GorillaTag.ISpawnable.OnDespawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&GlobalNamespace::TransferrableItemSlotTransformOverride::GorillaTag_ISpawnable_OnDespawn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "GorillaTag.ISpawnable.OnDespawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::AddGripPosition
// Il2CppName: AddGripPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::TransferrableObject::PositionState, ::GlobalNamespace::TransferrableObjectGripPosition*)>(&GlobalNamespace::TransferrableItemSlotTransformOverride::AddGripPosition)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "TransferrableObject/PositionState")->byval_arg;
    static auto* togp = &::il2cpp_utils::GetClassFromName("", "TransferrableObjectGripPosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "AddGripPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, togp});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&GlobalNamespace::TransferrableItemSlotTransformOverride::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&GlobalNamespace::TransferrableItemSlotTransformOverride::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::GenerateTransformFromPositionState
// Il2CppName: GenerateTransformFromPositionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&GlobalNamespace::TransferrableItemSlotTransformOverride::GenerateTransformFromPositionState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "GenerateTransformFromPositionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::GetTransformFromPositionState
// Il2CppName: GetTransformFromPositionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::TransferrableObject::PositionState)>(&GlobalNamespace::TransferrableItemSlotTransformOverride::GetTransformFromPositionState)> {
  static const MethodInfo* get() {
    static auto* currentState = &::il2cpp_utils::GetClassFromName("", "TransferrableObject/PositionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "GetTransformFromPositionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::GetTransformFromPositionState
// Il2CppName: GetTransformFromPositionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::TransferrableObject::PositionState, ::GlobalNamespace::AdvancedItemState*, ::UnityEngine::Transform*, ByRef<::UnityEngine::Matrix4x4>)>(&GlobalNamespace::TransferrableItemSlotTransformOverride::GetTransformFromPositionState)> {
  static const MethodInfo* get() {
    static auto* currentState = &::il2cpp_utils::GetClassFromName("", "TransferrableObject/PositionState")->byval_arg;
    static auto* advancedItemState = &::il2cpp_utils::GetClassFromName("", "AdvancedItemState")->byval_arg;
    static auto* targetDockXf = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* matrix4X4 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "GetTransformFromPositionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentState, advancedItemState, targetDockXf, matrix4X4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::GetAdvancedItemStateFromHand
// Il2CppName: GetAdvancedItemStateFromHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AdvancedItemState* (GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::TransferrableObject::PositionState, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&GlobalNamespace::TransferrableItemSlotTransformOverride::GetAdvancedItemStateFromHand)> {
  static const MethodInfo* get() {
    static auto* currentState = &::il2cpp_utils::GetClassFromName("", "TransferrableObject/PositionState")->byval_arg;
    static auto* handTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* targetDock = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "GetAdvancedItemStateFromHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentState, handTransform, targetDock});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::Edit
// Il2CppName: Edit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableItemSlotTransformOverride::*)()>(&GlobalNamespace::TransferrableItemSlotTransformOverride::Edit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "Edit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TransferrableItemSlotTransformOverride::$Update$b__14_0
// Il2CppName: <Update>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TransferrableItemSlotTransformOverride::*)(::GlobalNamespace::SlotTransformOverride*)>(&GlobalNamespace::TransferrableItemSlotTransformOverride::$Update$b__14_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "SlotTransformOverride")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableItemSlotTransformOverride*), "<Update>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
