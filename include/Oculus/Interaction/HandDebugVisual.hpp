// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IHandVisual
#include "Oculus/Interaction/IHandVisual.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Pose
  struct Pose;
  // Forward declaring type: Space
  struct Space;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
  // Forward declaring type: HandJointId
  struct HandJointId;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: HandDebugVisual
  class HandDebugVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandDebugVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandDebugVisual*, "Oculus.Interaction", "HandDebugVisual");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandDebugVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class HandDebugVisual : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IHandVisual*/ {
    public:
    // Nested type: ::Oculus::Interaction::HandDebugVisual::$$c
    class $$c;
    public:
    // private UnityEngine.Object _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private System.Boolean <ForceOffVisibility>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool ForceOffVisibility;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ForceOffVisibility and: WhenHandVisualUpdated
    char __padding1[0x7] = {};
    // private System.Action WhenHandVisualUpdated
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* WhenHandVisualUpdated;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _isVisible
    // Size: 0x1
    // Offset: 0x38
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x39
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IHandVisual
    operator ::Oculus::Interaction::IHandVisual() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IHandVisual*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private System.Boolean <ForceOffVisibility>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ForceOffVisibility$k__BackingField();
    // Get instance field reference: private System.Action WhenHandVisualUpdated
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_WhenHandVisualUpdated();
    // Get instance field reference: private System.Boolean _isVisible
    [[deprecated("Use field access instead!")]] bool& dyn__isVisible();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public Oculus.Interaction.Input.IHand get_Hand()
    // Offset: 0x47C620C
    ::Oculus::Interaction::Input::IHand* get_Hand();
    // public System.Boolean get_ForceOffVisibility()
    // Offset: 0x47C6254
    bool get_ForceOffVisibility();
    // public System.Void set_ForceOffVisibility(System.Boolean value)
    // Offset: 0x47C625C
    void set_ForceOffVisibility(bool value);
    // public System.Boolean get_IsVisible()
    // Offset: 0x47C6268
    bool get_IsVisible();
    // public System.Void add_WhenHandVisualUpdated(System.Action value)
    // Offset: 0x47C6270
    void add_WhenHandVisualUpdated(::System::Action* value);
    // public System.Void remove_WhenHandVisualUpdated(System.Action value)
    // Offset: 0x47C630C
    void remove_WhenHandVisualUpdated(::System::Action* value);
    // protected System.Void Start()
    // Offset: 0x47C63A8
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47C63E0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47C64EC
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0x47C6634
    void LateUpdate();
    // private System.Void OnDrawGizmos()
    // Offset: 0x47C68E0
    void OnDrawGizmos();
    // private System.Void Draw()
    // Offset: 0x47C6660
    void Draw();
    // public System.Void UpdateSkeleton()
    // Offset: 0x47C6AC8
    void UpdateSkeleton();
    // public UnityEngine.Pose GetJointPose(Oculus.Interaction.Input.HandJointId jointId, UnityEngine.Space space)
    // Offset: 0x47C6BC4
    ::UnityEngine::Pose GetJointPose(::Oculus::Interaction::Input::HandJointId jointId, ::UnityEngine::Space space);
    // public System.Void .ctor()
    // Offset: 0x47C6D6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandDebugVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandDebugVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandDebugVisual*, creationType>()));
    }
  }; // Oculus.Interaction.HandDebugVisual
  #pragma pack(pop)
  static check_size<sizeof(HandDebugVisual), 57 + sizeof(bool)> __Oculus_Interaction_HandDebugVisualSizeCheck;
  static_assert(sizeof(HandDebugVisual) == 0x3A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::get_Hand
// Il2CppName: get_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHand* (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::get_Hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "get_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::get_ForceOffVisibility
// Il2CppName: get_ForceOffVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::get_ForceOffVisibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "get_ForceOffVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::set_ForceOffVisibility
// Il2CppName: set_ForceOffVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)(bool)>(&Oculus::Interaction::HandDebugVisual::set_ForceOffVisibility)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "set_ForceOffVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::get_IsVisible
// Il2CppName: get_IsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::get_IsVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "get_IsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::add_WhenHandVisualUpdated
// Il2CppName: add_WhenHandVisualUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)(::System::Action*)>(&Oculus::Interaction::HandDebugVisual::add_WhenHandVisualUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "add_WhenHandVisualUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::remove_WhenHandVisualUpdated
// Il2CppName: remove_WhenHandVisualUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)(::System::Action*)>(&Oculus::Interaction::HandDebugVisual::remove_WhenHandVisualUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "remove_WhenHandVisualUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::Draw
// Il2CppName: Draw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::Draw)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "Draw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::UpdateSkeleton
// Il2CppName: UpdateSkeleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandDebugVisual::*)()>(&Oculus::Interaction::HandDebugVisual::UpdateSkeleton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "UpdateSkeleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::GetJointPose
// Il2CppName: GetJointPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::HandDebugVisual::*)(::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Space)>(&Oculus::Interaction::HandDebugVisual::GetJointPose)> {
  static const MethodInfo* get() {
    static auto* jointId = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    static auto* space = &::il2cpp_utils::GetClassFromName("UnityEngine", "Space")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandDebugVisual*), "GetJointPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointId, space});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandDebugVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
