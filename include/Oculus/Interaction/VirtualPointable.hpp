// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IPointable
#include "Oculus/Interaction/IPointable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: UniqueIdentifier
  class UniqueIdentifier;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: VirtualPointable
  class VirtualPointable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::VirtualPointable);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::VirtualPointable*, "Oculus.Interaction", "VirtualPointable");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.VirtualPointable
  // [TokenAttribute] Offset: FFFFFFFF
  class VirtualPointable : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IPointable*/ {
    public:
    // Nested type: ::Oculus::Interaction::VirtualPointable::$$c
    class $$c;
    public:
    // private System.Boolean _grabFlag
    // Size: 0x1
    // Offset: 0x20
    bool grabFlag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: grabFlag and: WhenPointerEventRaised
    char __padding0[0x7] = {};
    // private System.Action`1<Oculus.Interaction.PointerEvent> WhenPointerEventRaised
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::Oculus::Interaction::PointerEvent>* WhenPointerEventRaised;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Oculus::Interaction::PointerEvent>*) == 0x8);
    // private Oculus.Interaction.UniqueIdentifier _id
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::UniqueIdentifier* id;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::UniqueIdentifier*) == 0x8);
    // private System.Boolean _currentlyGrabbing
    // Size: 0x1
    // Offset: 0x38
    bool currentlyGrabbing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IPointable
    operator ::Oculus::Interaction::IPointable() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IPointable*>(this);
    }
    // Get instance field reference: private System.Boolean _grabFlag
    [[deprecated("Use field access instead!")]] bool& dyn__grabFlag();
    // Get instance field reference: private System.Action`1<Oculus.Interaction.PointerEvent> WhenPointerEventRaised
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Oculus::Interaction::PointerEvent>*& dyn_WhenPointerEventRaised();
    // Get instance field reference: private Oculus.Interaction.UniqueIdentifier _id
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::UniqueIdentifier*& dyn__id();
    // Get instance field reference: private System.Boolean _currentlyGrabbing
    [[deprecated("Use field access instead!")]] bool& dyn__currentlyGrabbing();
    // public System.Void add_WhenPointerEventRaised(System.Action`1<Oculus.Interaction.PointerEvent> value)
    // Offset: 0x47C4EB0
    void add_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>* value);
    // public System.Void remove_WhenPointerEventRaised(System.Action`1<Oculus.Interaction.PointerEvent> value)
    // Offset: 0x47C4F60
    void remove_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>* value);
    // protected System.Void Awake()
    // Offset: 0x47C5010
    void Awake();
    // protected System.Void Update()
    // Offset: 0x47C5074
    void Update();
    // public System.Void SetGrabFlag(System.Boolean grabFlag)
    // Offset: 0x47C5348
    void SetGrabFlag(bool grabFlag);
    // protected System.Void OnDestroy()
    // Offset: 0x47C5354
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x47C53B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VirtualPointable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::VirtualPointable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VirtualPointable*, creationType>()));
    }
  }; // Oculus.Interaction.VirtualPointable
  #pragma pack(pop)
  static check_size<sizeof(VirtualPointable), 56 + sizeof(bool)> __Oculus_Interaction_VirtualPointableSizeCheck;
  static_assert(sizeof(VirtualPointable) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::VirtualPointable::add_WhenPointerEventRaised
// Il2CppName: add_WhenPointerEventRaised
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualPointable::*)(::System::Action_1<::Oculus::Interaction::PointerEvent>*)>(&Oculus::Interaction::VirtualPointable::add_WhenPointerEventRaised)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PointerEvent")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualPointable*), "add_WhenPointerEventRaised", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualPointable::remove_WhenPointerEventRaised
// Il2CppName: remove_WhenPointerEventRaised
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualPointable::*)(::System::Action_1<::Oculus::Interaction::PointerEvent>*)>(&Oculus::Interaction::VirtualPointable::remove_WhenPointerEventRaised)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PointerEvent")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualPointable*), "remove_WhenPointerEventRaised", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualPointable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualPointable::*)()>(&Oculus::Interaction::VirtualPointable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualPointable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualPointable::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualPointable::*)()>(&Oculus::Interaction::VirtualPointable::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualPointable*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualPointable::SetGrabFlag
// Il2CppName: SetGrabFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualPointable::*)(bool)>(&Oculus::Interaction::VirtualPointable::SetGrabFlag)> {
  static const MethodInfo* get() {
    static auto* grabFlag = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualPointable*), "SetGrabFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabFlag});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualPointable::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualPointable::*)()>(&Oculus::Interaction::VirtualPointable::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualPointable*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualPointable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
