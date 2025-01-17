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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
}
// Forward declaring namespace: Oculus::Interaction::GrabAPI
namespace Oculus::Interaction::GrabAPI {
  // Forward declaring type: HandGrabAPI
  class HandGrabAPI;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: HandPinchOffset
  class HandPinchOffset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandPinchOffset);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandPinchOffset*, "Oculus.Interaction", "HandPinchOffset");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandPinchOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class HandPinchOffset : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IHand* Hand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // private Oculus.Interaction.GrabAPI.HandGrabAPI _handGrabApi
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::GrabAPI::HandGrabAPI* handGrabApi;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabAPI::HandGrabAPI*) == 0x8);
    // private UnityEngine.Collider _collider
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x40
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_$Hand$k__BackingField();
    // Get instance field reference: private Oculus.Interaction.GrabAPI.HandGrabAPI _handGrabApi
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabAPI::HandGrabAPI*& dyn__handGrabApi();
    // Get instance field reference: private UnityEngine.Collider _collider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn__collider();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public Oculus.Interaction.Input.IHand get_Hand()
    // Offset: 0x47D16B4
    ::Oculus::Interaction::Input::IHand* get_Hand();
    // private System.Void set_Hand(Oculus.Interaction.Input.IHand value)
    // Offset: 0x47D16BC
    void set_Hand(::Oculus::Interaction::Input::IHand* value);
    // protected System.Void Awake()
    // Offset: 0x47D16C4
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47D171C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47D1754
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47D1854
    void OnDisable();
    // private System.Void HandleHandUpdated()
    // Offset: 0x47D1954
    void HandleHandUpdated();
    // public System.Void InjectAllHandPinchOffset(Oculus.Interaction.Input.IHand hand, Oculus.Interaction.GrabAPI.HandGrabAPI handGrabApi)
    // Offset: 0x47D1AEC
    void InjectAllHandPinchOffset(::Oculus::Interaction::Input::IHand* hand, ::Oculus::Interaction::GrabAPI::HandGrabAPI* handGrabApi);
    // public System.Void InjectHand(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x47D1B18
    void InjectHand(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void InjectHandGrabAPI(Oculus.Interaction.GrabAPI.HandGrabAPI handGrabApi)
    // Offset: 0x47D1BE4
    void InjectHandGrabAPI(::Oculus::Interaction::GrabAPI::HandGrabAPI* handGrabApi);
    // public System.Void InjectOptionalCollider(UnityEngine.Collider collider)
    // Offset: 0x47D1BEC
    void InjectOptionalCollider(::UnityEngine::Collider* collider);
    // public System.Void .ctor()
    // Offset: 0x47D1BF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandPinchOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandPinchOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandPinchOffset*, creationType>()));
    }
  }; // Oculus.Interaction.HandPinchOffset
  #pragma pack(pop)
  static check_size<sizeof(HandPinchOffset), 64 + sizeof(bool)> __Oculus_Interaction_HandPinchOffsetSizeCheck;
  static_assert(sizeof(HandPinchOffset) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::get_Hand
// Il2CppName: get_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHand* (Oculus::Interaction::HandPinchOffset::*)()>(&Oculus::Interaction::HandPinchOffset::get_Hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "get_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::set_Hand
// Il2CppName: set_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::HandPinchOffset::set_Hand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "set_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)()>(&Oculus::Interaction::HandPinchOffset::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)()>(&Oculus::Interaction::HandPinchOffset::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)()>(&Oculus::Interaction::HandPinchOffset::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)()>(&Oculus::Interaction::HandPinchOffset::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::HandleHandUpdated
// Il2CppName: HandleHandUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)()>(&Oculus::Interaction::HandPinchOffset::HandleHandUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "HandleHandUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::InjectAllHandPinchOffset
// Il2CppName: InjectAllHandPinchOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::GrabAPI::HandGrabAPI*)>(&Oculus::Interaction::HandPinchOffset::InjectAllHandPinchOffset)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* handGrabApi = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.GrabAPI", "HandGrabAPI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "InjectAllHandPinchOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, handGrabApi});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::InjectHand
// Il2CppName: InjectHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::HandPinchOffset::InjectHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "InjectHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::InjectHandGrabAPI
// Il2CppName: InjectHandGrabAPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)(::Oculus::Interaction::GrabAPI::HandGrabAPI*)>(&Oculus::Interaction::HandPinchOffset::InjectHandGrabAPI)> {
  static const MethodInfo* get() {
    static auto* handGrabApi = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.GrabAPI", "HandGrabAPI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "InjectHandGrabAPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handGrabApi});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::InjectOptionalCollider
// Il2CppName: InjectOptionalCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPinchOffset::*)(::UnityEngine::Collider*)>(&Oculus::Interaction::HandPinchOffset::InjectOptionalCollider)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPinchOffset*), "InjectOptionalCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPinchOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
