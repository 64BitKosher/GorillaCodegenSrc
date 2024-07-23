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
// Including type: Oculus.Interaction.Input.HandJointId
#include "Oculus/Interaction/Input/HandJointId.hpp"
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
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: JointDistanceActiveState
  class JointDistanceActiveState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::JointDistanceActiveState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::JointDistanceActiveState*, "Oculus.Interaction.PoseDetection", "JointDistanceActiveState");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.JointDistanceActiveState
  // [TokenAttribute] Offset: FFFFFFFF
  class JointDistanceActiveState : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IActiveState*/ {
    public:
    public:
    // private UnityEngine.Object _handA
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* handA;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHand HandA
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IHand* HandA;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // private Oculus.Interaction.Input.HandJointId _jointIdA
    // Size: 0x4
    // Offset: 0x30
    ::Oculus::Interaction::Input::HandJointId jointIdA;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::HandJointId) == 0x4);
    // Padding between fields: jointIdA and: handB
    char __padding2[0x4] = {};
    // private UnityEngine.Object _handB
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Object* handB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHand HandB
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::Input::IHand* HandB;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // private Oculus.Interaction.Input.HandJointId _jointIdB
    // Size: 0x4
    // Offset: 0x48
    ::Oculus::Interaction::Input::HandJointId jointIdB;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::HandJointId) == 0x4);
    // private System.Single _distance
    // Size: 0x4
    // Offset: 0x4C
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _thresholdWidth
    // Size: 0x4
    // Offset: 0x50
    float thresholdWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minTimeInState
    // Size: 0x4
    // Offset: 0x54
    float minTimeInState;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _activeState
    // Size: 0x1
    // Offset: 0x58
    bool activeState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _internalState
    // Size: 0x1
    // Offset: 0x59
    bool internalState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: internalState and: lastStateChangeTime
    char __padding10[0x2] = {};
    // private System.Single _lastStateChangeTime
    // Size: 0x4
    // Offset: 0x5C
    float lastStateChangeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lastStateUpdateFrame
    // Size: 0x4
    // Offset: 0x60
    int lastStateUpdateFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IActiveState
    operator ::Oculus::Interaction::IActiveState() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IActiveState*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _handA
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__handA();
    // Get instance field reference: private Oculus.Interaction.Input.IHand HandA
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_HandA();
    // Get instance field reference: private Oculus.Interaction.Input.HandJointId _jointIdA
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::HandJointId& dyn__jointIdA();
    // Get instance field reference: private UnityEngine.Object _handB
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__handB();
    // Get instance field reference: private Oculus.Interaction.Input.IHand HandB
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_HandB();
    // Get instance field reference: private Oculus.Interaction.Input.HandJointId _jointIdB
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::HandJointId& dyn__jointIdB();
    // Get instance field reference: private System.Single _distance
    [[deprecated("Use field access instead!")]] float& dyn__distance();
    // Get instance field reference: private System.Single _thresholdWidth
    [[deprecated("Use field access instead!")]] float& dyn__thresholdWidth();
    // Get instance field reference: private System.Single _minTimeInState
    [[deprecated("Use field access instead!")]] float& dyn__minTimeInState();
    // Get instance field reference: private System.Boolean _activeState
    [[deprecated("Use field access instead!")]] bool& dyn__activeState();
    // Get instance field reference: private System.Boolean _internalState
    [[deprecated("Use field access instead!")]] bool& dyn__internalState();
    // Get instance field reference: private System.Single _lastStateChangeTime
    [[deprecated("Use field access instead!")]] float& dyn__lastStateChangeTime();
    // Get instance field reference: private System.Int32 _lastStateUpdateFrame
    [[deprecated("Use field access instead!")]] int& dyn__lastStateUpdateFrame();
    // public System.Boolean get_Active()
    // Offset: 0x47ED6E8
    bool get_Active();
    // protected System.Void Awake()
    // Offset: 0x47ED79C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47ED83C
    void Start();
    // protected System.Void Update()
    // Offset: 0x47ED840
    void Update();
    // private System.Void UpdateActiveState()
    // Offset: 0x47ED720
    void UpdateActiveState();
    // private System.Boolean JointDistanceWithinThreshold()
    // Offset: 0x47ED844
    bool JointDistanceWithinThreshold();
    // public System.Void InjectAllJointDistanceActiveState(Oculus.Interaction.Input.IHand handA, Oculus.Interaction.Input.HandJointId jointIdA, Oculus.Interaction.Input.IHand handB, Oculus.Interaction.Input.HandJointId jointIdB)
    // Offset: 0x47EDA48
    void InjectAllJointDistanceActiveState(::Oculus::Interaction::Input::IHand* handA, ::Oculus::Interaction::Input::HandJointId jointIdA, ::Oculus::Interaction::Input::IHand* handB, ::Oculus::Interaction::Input::HandJointId jointIdB);
    // public System.Void InjectHandA(Oculus.Interaction.Input.IHand handA)
    // Offset: 0x47EDA8C
    void InjectHandA(::Oculus::Interaction::Input::IHand* handA);
    // public System.Void InjectJointIdA(Oculus.Interaction.Input.HandJointId jointIdA)
    // Offset: 0x47EDC2C
    void InjectJointIdA(::Oculus::Interaction::Input::HandJointId jointIdA);
    // public System.Void InjectHandB(Oculus.Interaction.Input.IHand handB)
    // Offset: 0x47EDB5C
    void InjectHandB(::Oculus::Interaction::Input::IHand* handB);
    // public System.Void InjectJointIdB(Oculus.Interaction.Input.HandJointId jointIdB)
    // Offset: 0x47EDC34
    void InjectJointIdB(::Oculus::Interaction::Input::HandJointId jointIdB);
    // public System.Void InjectOptionalDistance(System.Single val)
    // Offset: 0x47EDC3C
    void InjectOptionalDistance(float val);
    // public System.Void InjectOptionalThresholdWidth(System.Single val)
    // Offset: 0x47EDC44
    void InjectOptionalThresholdWidth(float val);
    // public System.Void InjectOptionalMinTimeInState(System.Single val)
    // Offset: 0x47EDC4C
    void InjectOptionalMinTimeInState(float val);
    // public System.Void .ctor()
    // Offset: 0x47EDC54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JointDistanceActiveState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::JointDistanceActiveState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JointDistanceActiveState*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.JointDistanceActiveState
  #pragma pack(pop)
  static check_size<sizeof(JointDistanceActiveState), 96 + sizeof(int)> __Oculus_Interaction_PoseDetection_JointDistanceActiveStateSizeCheck;
  static_assert(sizeof(JointDistanceActiveState) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)()>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)()>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)()>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)()>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::UpdateActiveState
// Il2CppName: UpdateActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)()>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::UpdateActiveState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "UpdateActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::JointDistanceWithinThreshold
// Il2CppName: JointDistanceWithinThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)()>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::JointDistanceWithinThreshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "JointDistanceWithinThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectAllJointDistanceActiveState
// Il2CppName: InjectAllJointDistanceActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::HandJointId, ::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::HandJointId)>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectAllJointDistanceActiveState)> {
  static const MethodInfo* get() {
    static auto* handA = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* jointIdA = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    static auto* handB = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* jointIdB = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "InjectAllJointDistanceActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handA, jointIdA, handB, jointIdB});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectHandA
// Il2CppName: InjectHandA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectHandA)> {
  static const MethodInfo* get() {
    static auto* handA = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "InjectHandA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handA});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectJointIdA
// Il2CppName: InjectJointIdA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)(::Oculus::Interaction::Input::HandJointId)>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectJointIdA)> {
  static const MethodInfo* get() {
    static auto* jointIdA = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "InjectJointIdA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointIdA});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectHandB
// Il2CppName: InjectHandB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectHandB)> {
  static const MethodInfo* get() {
    static auto* handB = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "InjectHandB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handB});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectJointIdB
// Il2CppName: InjectJointIdB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)(::Oculus::Interaction::Input::HandJointId)>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectJointIdB)> {
  static const MethodInfo* get() {
    static auto* jointIdB = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "InjectJointIdB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointIdB});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectOptionalDistance
// Il2CppName: InjectOptionalDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)(float)>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectOptionalDistance)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "InjectOptionalDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectOptionalThresholdWidth
// Il2CppName: InjectOptionalThresholdWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)(float)>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectOptionalThresholdWidth)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "InjectOptionalThresholdWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectOptionalMinTimeInState
// Il2CppName: InjectOptionalMinTimeInState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::JointDistanceActiveState::*)(float)>(&Oculus::Interaction::PoseDetection::JointDistanceActiveState::InjectOptionalMinTimeInState)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointDistanceActiveState*), "InjectOptionalMinTimeInState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDistanceActiveState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!