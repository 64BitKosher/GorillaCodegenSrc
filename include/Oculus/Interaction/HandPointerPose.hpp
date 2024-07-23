// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IActiveState
#include "Oculus/Interaction/IActiveState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: HandPointerPose
  class HandPointerPose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandPointerPose);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandPointerPose*, "Oculus.Interaction", "HandPointerPose");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandPointerPose
  // [TokenAttribute] Offset: FFFFFFFF
  class HandPointerPose : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IActiveState*/ {
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
    // private UnityEngine.Vector3 _offset
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x3C
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IActiveState
    operator ::Oculus::Interaction::IActiveState() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IActiveState*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_$Hand$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 _offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__offset();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public Oculus.Interaction.Input.IHand get_Hand()
    // Offset: 0x47D1BFC
    ::Oculus::Interaction::Input::IHand* get_Hand();
    // private System.Void set_Hand(Oculus.Interaction.Input.IHand value)
    // Offset: 0x47D1C04
    void set_Hand(::Oculus::Interaction::Input::IHand* value);
    // public System.Boolean get_Active()
    // Offset: 0x47D1C0C
    bool get_Active();
    // protected System.Void Awake()
    // Offset: 0x47D1CB0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47D1D08
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47D1D40
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47D1E40
    void OnDisable();
    // private System.Void HandleHandUpdated()
    // Offset: 0x47D1F40
    void HandleHandUpdated();
    // public System.Void InjectAllHandPointerPose(Oculus.Interaction.Input.IHand hand, UnityEngine.Vector3 offset)
    // Offset: 0x47D205C
    void InjectAllHandPointerPose(::Oculus::Interaction::Input::IHand* hand, ::UnityEngine::Vector3 offset);
    // public System.Void InjectHand(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x47D2094
    void InjectHand(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void InjectOffset(UnityEngine.Vector3 offset)
    // Offset: 0x47D2164
    void InjectOffset(::UnityEngine::Vector3 offset);
    // public System.Void .ctor()
    // Offset: 0x47D2170
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandPointerPose* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandPointerPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandPointerPose*, creationType>()));
    }
  }; // Oculus.Interaction.HandPointerPose
  #pragma pack(pop)
  static check_size<sizeof(HandPointerPose), 60 + sizeof(bool)> __Oculus_Interaction_HandPointerPoseSizeCheck;
  static_assert(sizeof(HandPointerPose) == 0x3D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::get_Hand
// Il2CppName: get_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHand* (Oculus::Interaction::HandPointerPose::*)()>(&Oculus::Interaction::HandPointerPose::get_Hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "get_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::set_Hand
// Il2CppName: set_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::HandPointerPose::set_Hand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "set_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::HandPointerPose::*)()>(&Oculus::Interaction::HandPointerPose::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)()>(&Oculus::Interaction::HandPointerPose::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)()>(&Oculus::Interaction::HandPointerPose::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)()>(&Oculus::Interaction::HandPointerPose::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)()>(&Oculus::Interaction::HandPointerPose::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::HandleHandUpdated
// Il2CppName: HandleHandUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)()>(&Oculus::Interaction::HandPointerPose::HandleHandUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "HandleHandUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::InjectAllHandPointerPose
// Il2CppName: InjectAllHandPointerPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)(::Oculus::Interaction::Input::IHand*, ::UnityEngine::Vector3)>(&Oculus::Interaction::HandPointerPose::InjectAllHandPointerPose)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "InjectAllHandPointerPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, offset});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::InjectHand
// Il2CppName: InjectHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::HandPointerPose::InjectHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "InjectHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::InjectOffset
// Il2CppName: InjectOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandPointerPose::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::HandPointerPose::InjectOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandPointerPose*), "InjectOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandPointerPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
