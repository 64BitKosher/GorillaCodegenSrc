// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.PoseDetection.IFingerFeatureStateProvider
#include "Oculus/Interaction/PoseDetection/IFingerFeatureStateProvider.hpp"
// Including type: Oculus.Interaction.Input.HandFinger
#include "Oculus/Interaction/Input/HandFinger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: FingerFeatureStateDictionary
  class FingerFeatureStateDictionary;
  // Forward declaring type: FingerShapes
  class FingerShapes;
  // Forward declaring type: FingerFeature
  struct FingerFeature;
  // Forward declaring type: FeatureStateActiveMode
  struct FeatureStateActiveMode;
  // Forward declaring type: FingerFeatureStateThresholds
  class FingerFeatureStateThresholds;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
  // Forward declaring type: ReadOnlyHandJointPoses
  class ReadOnlyHandJointPoses;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: FingerFeatureStateProvider
  class FingerFeatureStateProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.FingerFeatureStateProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class FingerFeatureStateProvider : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*/ {
    public:
    // Nested type: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds
    struct FingerStateThresholds;
    // Nested type: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c
    class $$c;
    // Nested type: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/FingerStateThresholds
    // [TokenAttribute] Offset: FFFFFFFF
    struct FingerStateThresholds/*, public ::System::ValueType*/ {
      public:
      public:
      // public Oculus.Interaction.Input.HandFinger Finger
      // Size: 0x4
      // Offset: 0x0
      ::Oculus::Interaction::Input::HandFinger Finger;
      // Field size check
      static_assert(sizeof(::Oculus::Interaction::Input::HandFinger) == 0x4);
      // Padding between fields: Finger and: StateThresholds
      char __padding0[0x4] = {};
      // public Oculus.Interaction.PoseDetection.FingerFeatureStateThresholds StateThresholds
      // Size: 0x8
      // Offset: 0x8
      ::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds* StateThresholds;
      // Field size check
      static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds*) == 0x8);
      public:
      // Creating value type constructor for type: FingerStateThresholds
      constexpr FingerStateThresholds(::Oculus::Interaction::Input::HandFinger Finger_ = {}, ::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds* StateThresholds_ = {}) noexcept : Finger{Finger_}, StateThresholds{StateThresholds_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public Oculus.Interaction.Input.HandFinger Finger
      [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::HandFinger& dyn_Finger();
      // Get instance field reference: public Oculus.Interaction.PoseDetection.FingerFeatureStateThresholds StateThresholds
      [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds*& dyn_StateThresholds();
    }; // Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/FingerStateThresholds
    #pragma pack(pop)
    static check_size<sizeof(FingerFeatureStateProvider::FingerStateThresholds), 8 + sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds*)> __Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_FingerStateThresholdsSizeCheck;
    static_assert(sizeof(FingerFeatureStateProvider::FingerStateThresholds) == 0x10);
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
    // private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/FingerStateThresholds> _fingerStateThresholds
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds>* fingerStateThresholds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds>*) == 0x8);
    // private System.Boolean _disableProactiveEvaluation
    // Size: 0x1
    // Offset: 0x38
    bool disableProactiveEvaluation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x39
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: state
    char __padding4[0x6] = {};
    // private Oculus.Interaction.PoseDetection.FingerFeatureStateDictionary _state
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary* state;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*) == 0x8);
    // private System.Func`1<System.Single> _timeProvider
    // Size: 0x8
    // Offset: 0x48
    ::System::Func_1<float>* timeProvider;
    // Field size check
    static_assert(sizeof(::System::Func_1<float>*) == 0x8);
    // private Oculus.Interaction.PoseDetection.FingerShapes _fingerShapes
    // Size: 0x8
    // Offset: 0x50
    ::Oculus::Interaction::PoseDetection::FingerShapes* fingerShapes;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerShapes*) == 0x8);
    // private Oculus.Interaction.Input.ReadOnlyHandJointPoses _handJointPoses
    // Size: 0x8
    // Offset: 0x58
    ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* handJointPoses;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider
    operator ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(this);
    }
    // Get static field: static private readonly Oculus.Interaction.PoseDetection.FingerShapes <DefaultFingerShapes>k__BackingField
    static ::Oculus::Interaction::PoseDetection::FingerShapes* _get_$DefaultFingerShapes$k__BackingField();
    // Set static field: static private readonly Oculus.Interaction.PoseDetection.FingerShapes <DefaultFingerShapes>k__BackingField
    static void _set_$DefaultFingerShapes$k__BackingField(::Oculus::Interaction::PoseDetection::FingerShapes* value);
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_$Hand$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/FingerStateThresholds> _fingerStateThresholds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds>*& dyn__fingerStateThresholds();
    // Get instance field reference: private System.Boolean _disableProactiveEvaluation
    [[deprecated("Use field access instead!")]] bool& dyn__disableProactiveEvaluation();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.FingerFeatureStateDictionary _state
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*& dyn__state();
    // Get instance field reference: private System.Func`1<System.Single> _timeProvider
    [[deprecated("Use field access instead!")]] ::System::Func_1<float>*& dyn__timeProvider();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.FingerShapes _fingerShapes
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::FingerShapes*& dyn__fingerShapes();
    // Get instance field reference: private Oculus.Interaction.Input.ReadOnlyHandJointPoses _handJointPoses
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*& dyn__handJointPoses();
    // public Oculus.Interaction.Input.IHand get_Hand()
    // Offset: 0x47E923C
    ::Oculus::Interaction::Input::IHand* get_Hand();
    // private System.Void set_Hand(Oculus.Interaction.Input.IHand value)
    // Offset: 0x47E9244
    void set_Hand(::Oculus::Interaction::Input::IHand* value);
    // static public Oculus.Interaction.PoseDetection.FingerShapes get_DefaultFingerShapes()
    // Offset: 0x47E924C
    static ::Oculus::Interaction::PoseDetection::FingerShapes* get_DefaultFingerShapes();
    // protected System.Void Awake()
    // Offset: 0x47E92A4
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47E93A4
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47E94C4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47E9954
    void OnDisable();
    // private System.Void ReadStateThresholds()
    // Offset: 0x47E95CC
    void ReadStateThresholds();
    // private System.Void HandDataAvailable()
    // Offset: 0x47E9AD4
    void HandDataAvailable();
    // public System.Boolean GetCurrentState(Oculus.Interaction.Input.HandFinger finger, Oculus.Interaction.PoseDetection.FingerFeature fingerFeature, out System.String currentState)
    // Offset: 0x47E9C7C
    bool GetCurrentState(::Oculus::Interaction::Input::HandFinger finger, ::Oculus::Interaction::PoseDetection::FingerFeature fingerFeature, ByRef<::StringW> currentState);
    // private System.String GetCurrentFingerFeatureState(Oculus.Interaction.Input.HandFinger finger, Oculus.Interaction.PoseDetection.FingerFeature fingerFeature)
    // Offset: 0x47E9D1C
    ::StringW GetCurrentFingerFeatureState(::Oculus::Interaction::Input::HandFinger finger, ::Oculus::Interaction::PoseDetection::FingerFeature fingerFeature);
    // public System.Nullable`1<System.Single> GetFeatureValue(Oculus.Interaction.Input.HandFinger finger, Oculus.Interaction.PoseDetection.FingerFeature fingerFeature)
    // Offset: 0x47E9D8C
    ::System::Nullable_1<float> GetFeatureValue(::Oculus::Interaction::Input::HandFinger finger, ::Oculus::Interaction::PoseDetection::FingerFeature fingerFeature);
    // private System.Boolean IsDataValid()
    // Offset: 0x47E9CF4
    bool IsDataValid();
    // public Oculus.Interaction.PoseDetection.FingerShapes GetValueProvider(Oculus.Interaction.Input.HandFinger finger)
    // Offset: 0x47E9E2C
    ::Oculus::Interaction::PoseDetection::FingerShapes* GetValueProvider(::Oculus::Interaction::Input::HandFinger finger);
    // public System.Boolean IsStateActive(Oculus.Interaction.Input.HandFinger finger, Oculus.Interaction.PoseDetection.FingerFeature feature, Oculus.Interaction.PoseDetection.FeatureStateActiveMode mode, System.String stateId)
    // Offset: 0x47E9E34
    bool IsStateActive(::Oculus::Interaction::Input::HandFinger finger, ::Oculus::Interaction::PoseDetection::FingerFeature feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode mode, ::StringW stateId);
    // public System.Void InjectAllFingerFeatureStateProvider(Oculus.Interaction.Input.IHand hand, System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/FingerStateThresholds> fingerStateThresholds, Oculus.Interaction.PoseDetection.FingerShapes fingerShapes, System.Boolean disableProactiveEvaluation)
    // Offset: 0x47E9E8C
    void InjectAllFingerFeatureStateProvider(::Oculus::Interaction::Input::IHand* hand, ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds>* fingerStateThresholds, ::Oculus::Interaction::PoseDetection::FingerShapes* fingerShapes, bool disableProactiveEvaluation);
    // public System.Void InjectHand(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x47E9EE4
    void InjectHand(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void InjectFingerStateThresholds(System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/FingerStateThresholds> fingerStateThresholds)
    // Offset: 0x47E9FB4
    void InjectFingerStateThresholds(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds>* fingerStateThresholds);
    // public System.Void InjectFingerShapes(Oculus.Interaction.PoseDetection.FingerShapes fingerShapes)
    // Offset: 0x47E9FBC
    void InjectFingerShapes(::Oculus::Interaction::PoseDetection::FingerShapes* fingerShapes);
    // public System.Void InjectDisableProactiveEvaluation(System.Boolean disableProactiveEvaluation)
    // Offset: 0x47E9FC4
    void InjectDisableProactiveEvaluation(bool disableProactiveEvaluation);
    // public System.Void InjectOptionalTimeProvider(System.Func`1<System.Single> timeProvider)
    // Offset: 0x47E9FD0
    void InjectOptionalTimeProvider(::System::Func_1<float>* timeProvider);
    // public System.Void .ctor()
    // Offset: 0x47E9FD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerFeatureStateProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerFeatureStateProvider*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x47EA078
    static void _cctor();
  }; // Oculus.Interaction.PoseDetection.FingerFeatureStateProvider
  #pragma pack(pop)
  static check_size<sizeof(FingerFeatureStateProvider), 88 + sizeof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*)> __Oculus_Interaction_PoseDetection_FingerFeatureStateProviderSizeCheck;
  static_assert(sizeof(FingerFeatureStateProvider) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds, "Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider/FingerStateThresholds");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::get_Hand
// Il2CppName: get_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHand* (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::get_Hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "get_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::set_Hand
// Il2CppName: set_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::set_Hand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "set_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::get_DefaultFingerShapes
// Il2CppName: get_DefaultFingerShapes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::FingerShapes* (*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::get_DefaultFingerShapes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "get_DefaultFingerShapes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::ReadStateThresholds
// Il2CppName: ReadStateThresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::ReadStateThresholds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "ReadStateThresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::HandDataAvailable
// Il2CppName: HandDataAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::HandDataAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "HandDataAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetCurrentState
// Il2CppName: GetCurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ByRef<::StringW>)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetCurrentState)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    static auto* fingerFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerFeature")->byval_arg;
    static auto* currentState = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "GetCurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger, fingerFeature, currentState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetCurrentFingerFeatureState
// Il2CppName: GetCurrentFingerFeatureState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetCurrentFingerFeatureState)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    static auto* fingerFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerFeature")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "GetCurrentFingerFeatureState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger, fingerFeature});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetFeatureValue
// Il2CppName: GetFeatureValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<float> (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetFeatureValue)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    static auto* fingerFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerFeature")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "GetFeatureValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger, fingerFeature});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::IsDataValid
// Il2CppName: IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetValueProvider
// Il2CppName: GetValueProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::FingerShapes* (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetValueProvider)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "GetValueProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::IsStateActive
// Il2CppName: IsStateActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, ::StringW)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::IsStateActive)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    static auto* feature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerFeature")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FeatureStateActiveMode")->byval_arg;
    static auto* stateId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "IsStateActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger, feature, mode, stateId});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectAllFingerFeatureStateProvider
// Il2CppName: InjectAllFingerFeatureStateProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*, ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds>*, ::Oculus::Interaction::PoseDetection::FingerShapes*, bool)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectAllFingerFeatureStateProvider)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* fingerStateThresholds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider/FingerStateThresholds")})->byval_arg;
    static auto* fingerShapes = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerShapes")->byval_arg;
    static auto* disableProactiveEvaluation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "InjectAllFingerFeatureStateProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, fingerStateThresholds, fingerShapes, disableProactiveEvaluation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectHand
// Il2CppName: InjectHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "InjectHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectFingerStateThresholds
// Il2CppName: InjectFingerStateThresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerStateThresholds>*)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectFingerStateThresholds)> {
  static const MethodInfo* get() {
    static auto* fingerStateThresholds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider/FingerStateThresholds")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "InjectFingerStateThresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fingerStateThresholds});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectFingerShapes
// Il2CppName: InjectFingerShapes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::FingerShapes*)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectFingerShapes)> {
  static const MethodInfo* get() {
    static auto* fingerShapes = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerShapes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "InjectFingerShapes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fingerShapes});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectDisableProactiveEvaluation
// Il2CppName: InjectDisableProactiveEvaluation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(bool)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectDisableProactiveEvaluation)> {
  static const MethodInfo* get() {
    static auto* disableProactiveEvaluation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "InjectDisableProactiveEvaluation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disableProactiveEvaluation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectOptionalTimeProvider
// Il2CppName: InjectOptionalTimeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::System::Func_1<float>*)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectOptionalTimeProvider)> {
  static const MethodInfo* get() {
    static auto* timeProvider = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), "InjectOptionalTimeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeProvider});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
