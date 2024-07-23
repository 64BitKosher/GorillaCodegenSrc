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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EdibleHoldable
  class EdibleHoldable;
  // Forward declaring type: GumBubble
  class GumBubble;
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BubbleGumEvents
  class BubbleGumEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BubbleGumEvents);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BubbleGumEvents*, "", "BubbleGumEvents");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BubbleGumEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class BubbleGumEvents : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BubbleGumEvents::EdibleState
    struct EdibleState;
    // Nested type: ::GlobalNamespace::BubbleGumEvents::$$c
    class $$c;
    public:
    // private EdibleHoldable _edible
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::EdibleHoldable* edible;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EdibleHoldable*) == 0x8);
    // private GumBubble _bubble
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GumBubble* bubble;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GumBubble*) == 0x8);
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GumBubble> gTargetCache
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::GumBubble*>* _get_gTargetCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GumBubble> gTargetCache
    static void _set_gTargetCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::GumBubble*>* value);
    // Get instance field reference: private EdibleHoldable _edible
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EdibleHoldable*& dyn__edible();
    // Get instance field reference: private GumBubble _bubble
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GumBubble*& dyn__bubble();
    // private System.Void OnEnable()
    // Offset: 0x26D4F14
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x26D5010
    void OnDisable();
    // public System.Void OnBiteView(VRRig rig, System.Int32 nextState)
    // Offset: 0x26D510C
    void OnBiteView(::GlobalNamespace::VRRig* rig, int nextState);
    // public System.Void OnBiteWorld(VRRig rig, System.Int32 nextState)
    // Offset: 0x26D54D4
    void OnBiteWorld(::GlobalNamespace::VRRig* rig, int nextState);
    // public System.Void OnBite(VRRig rig, System.Int32 nextState, System.Boolean isViewRig)
    // Offset: 0x26D5114
    void OnBite(::GlobalNamespace::VRRig* rig, int nextState, bool isViewRig);
    // public System.Void .ctor()
    // Offset: 0x26D54E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BubbleGumEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BubbleGumEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BubbleGumEvents*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x26D54EC
    static void _cctor();
  }; // BubbleGumEvents
  #pragma pack(pop)
  static check_size<sizeof(BubbleGumEvents), 40 + sizeof(::GlobalNamespace::GumBubble*)> __GlobalNamespace_BubbleGumEventsSizeCheck;
  static_assert(sizeof(BubbleGumEvents) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BubbleGumEvents::*)()>(&GlobalNamespace::BubbleGumEvents::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BubbleGumEvents*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BubbleGumEvents::*)()>(&GlobalNamespace::BubbleGumEvents::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BubbleGumEvents*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::OnBiteView
// Il2CppName: OnBiteView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BubbleGumEvents::*)(::GlobalNamespace::VRRig*, int)>(&GlobalNamespace::BubbleGumEvents::OnBiteView)> {
  static const MethodInfo* get() {
    static auto* rig = &::il2cpp_utils::GetClassFromName("", "VRRig")->byval_arg;
    static auto* nextState = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BubbleGumEvents*), "OnBiteView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rig, nextState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::OnBiteWorld
// Il2CppName: OnBiteWorld
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BubbleGumEvents::*)(::GlobalNamespace::VRRig*, int)>(&GlobalNamespace::BubbleGumEvents::OnBiteWorld)> {
  static const MethodInfo* get() {
    static auto* rig = &::il2cpp_utils::GetClassFromName("", "VRRig")->byval_arg;
    static auto* nextState = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BubbleGumEvents*), "OnBiteWorld", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rig, nextState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::OnBite
// Il2CppName: OnBite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BubbleGumEvents::*)(::GlobalNamespace::VRRig*, int, bool)>(&GlobalNamespace::BubbleGumEvents::OnBite)> {
  static const MethodInfo* get() {
    static auto* rig = &::il2cpp_utils::GetClassFromName("", "VRRig")->byval_arg;
    static auto* nextState = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isViewRig = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BubbleGumEvents*), "OnBite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rig, nextState, isViewRig});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BubbleGumEvents::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BubbleGumEvents*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};