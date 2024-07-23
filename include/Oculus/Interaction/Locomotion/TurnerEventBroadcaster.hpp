// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster
#include "Oculus/Interaction/Locomotion/ILocomotionEventBroadcaster.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Locomotion
namespace Oculus::Interaction::Locomotion {
  // Skipping declaration: TurnMode because it is already included!
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IInteractor
  class IInteractor;
  // Forward declaring type: UniqueIdentifier
  class UniqueIdentifier;
  // Forward declaring type: InteractorStateChangeArgs
  struct InteractorStateChangeArgs;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IAxis1D
  class IAxis1D;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Forward declaring type: TurnerEventBroadcaster
  class TurnerEventBroadcaster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*, "Oculus.Interaction.Locomotion", "TurnerEventBroadcaster");
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Locomotion.TurnerEventBroadcaster
  // [TokenAttribute] Offset: FFFFFFFF
  class TurnerEventBroadcaster : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*/ {
    public:
    // Nested type: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode
    struct TurnMode;
    // Nested type: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct TurnMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TurnMode
      constexpr TurnMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode Snap
      static constexpr const int Snap = 0;
      // Get static field: static public Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode Snap
      static ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode _get_Snap();
      // Set static field: static public Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode Snap
      static void _set_Snap(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode value);
      // static field const value: static public Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode Smooth
      static constexpr const int Smooth = 1;
      // Get static field: static public Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode Smooth
      static ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode _get_Smooth();
      // Set static field: static public Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode Smooth
      static void _set_Smooth(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode
    #pragma pack(pop)
    static check_size<sizeof(TurnerEventBroadcaster::TurnMode), 0 + sizeof(int)> __Oculus_Interaction_Locomotion_TurnerEventBroadcaster_TurnModeSizeCheck;
    static_assert(sizeof(TurnerEventBroadcaster::TurnMode) == 0x4);
    public:
    // private UnityEngine.Object _interactor
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* interactor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IInteractor <Interactor>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::IInteractor* Interactor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IInteractor*) == 0x8);
    // private UnityEngine.Object _axis
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Object* axis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IAxis1D <Axis>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Interaction::Input::IAxis1D* Axis;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IAxis1D*) == 0x8);
    // private Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode _turnMethod
    // Size: 0x4
    // Offset: 0x40
    ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode turnMethod;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode) == 0x4);
    // private System.Single _snapTurnDegrees
    // Size: 0x4
    // Offset: 0x44
    float snapTurnDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _smoothTurnCurve
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* smoothTurnCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Boolean _fireSnapOnUnselect
    // Size: 0x1
    // Offset: 0x50
    bool fireSnapOnUnselect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fireSnapOnUnselect and: identifier
    char __padding7[0x7] = {};
    // private Oculus.Interaction.UniqueIdentifier _identifier
    // Size: 0x8
    // Offset: 0x58
    ::Oculus::Interaction::UniqueIdentifier* identifier;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::UniqueIdentifier*) == 0x8);
    // private System.Boolean _wasSelecting
    // Size: 0x1
    // Offset: 0x60
    bool wasSelecting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x61
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: whenLocomotionEventRaised
    char __padding10[0x6] = {};
    // private System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent> _whenLocomotionEventRaised
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* whenLocomotionEventRaised;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster
    operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _interactor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__interactor();
    // Get instance field reference: private Oculus.Interaction.IInteractor <Interactor>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IInteractor*& dyn_$Interactor$k__BackingField();
    // Get instance field reference: private UnityEngine.Object _axis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__axis();
    // Get instance field reference: private Oculus.Interaction.Input.IAxis1D <Axis>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IAxis1D*& dyn_$Axis$k__BackingField();
    // Get instance field reference: private Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode _turnMethod
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode& dyn__turnMethod();
    // Get instance field reference: private System.Single _snapTurnDegrees
    [[deprecated("Use field access instead!")]] float& dyn__snapTurnDegrees();
    // Get instance field reference: private UnityEngine.AnimationCurve _smoothTurnCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__smoothTurnCurve();
    // Get instance field reference: private System.Boolean _fireSnapOnUnselect
    [[deprecated("Use field access instead!")]] bool& dyn__fireSnapOnUnselect();
    // Get instance field reference: private Oculus.Interaction.UniqueIdentifier _identifier
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::UniqueIdentifier*& dyn__identifier();
    // Get instance field reference: private System.Boolean _wasSelecting
    [[deprecated("Use field access instead!")]] bool& dyn__wasSelecting();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent> _whenLocomotionEventRaised
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& dyn__whenLocomotionEventRaised();
    // private Oculus.Interaction.IInteractor get_Interactor()
    // Offset: 0x4810DD4
    ::Oculus::Interaction::IInteractor* get_Interactor();
    // private System.Void set_Interactor(Oculus.Interaction.IInteractor value)
    // Offset: 0x4810DDC
    void set_Interactor(::Oculus::Interaction::IInteractor* value);
    // private Oculus.Interaction.Input.IAxis1D get_Axis()
    // Offset: 0x4810DE4
    ::Oculus::Interaction::Input::IAxis1D* get_Axis();
    // private System.Void set_Axis(Oculus.Interaction.Input.IAxis1D value)
    // Offset: 0x4810DEC
    void set_Axis(::Oculus::Interaction::Input::IAxis1D* value);
    // public Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode get_TurnMethod()
    // Offset: 0x4810DF4
    ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode get_TurnMethod();
    // public System.Void set_TurnMethod(Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode value)
    // Offset: 0x4810DFC
    void set_TurnMethod(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode value);
    // public System.Single get_SnapTurnDegrees()
    // Offset: 0x4810E04
    float get_SnapTurnDegrees();
    // public System.Void set_SnapTurnDegrees(System.Single value)
    // Offset: 0x4810E0C
    void set_SnapTurnDegrees(float value);
    // public UnityEngine.AnimationCurve get_SmoothTurnCurve()
    // Offset: 0x4810E14
    ::UnityEngine::AnimationCurve* get_SmoothTurnCurve();
    // public System.Void set_SmoothTurnCurve(UnityEngine.AnimationCurve value)
    // Offset: 0x4810E1C
    void set_SmoothTurnCurve(::UnityEngine::AnimationCurve* value);
    // public System.Boolean get_FireSnapOnUnselect()
    // Offset: 0x4810E24
    bool get_FireSnapOnUnselect();
    // public System.Void set_FireSnapOnUnselect(System.Boolean value)
    // Offset: 0x4810E2C
    void set_FireSnapOnUnselect(bool value);
    // public System.Int32 get_Identifier()
    // Offset: 0x4810E38
    int get_Identifier();
    // protected System.Void Awake()
    // Offset: 0x4810E54
    void Awake();
    // protected System.Void Start()
    // Offset: 0x4810F18
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x4810F50
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x4811108
    void OnDisable();
    // public System.Void add_WhenLocomotionPerformed(System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent> value)
    // Offset: 0x48112CC
    void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* value);
    // public System.Void remove_WhenLocomotionPerformed(System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent> value)
    // Offset: 0x4811374
    void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* value);
    // private System.Void HandleStateChanged(Oculus.Interaction.InteractorStateChangeArgs obj)
    // Offset: 0x481141C
    void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs obj);
    // private System.Void HandlePostprocessed()
    // Offset: 0x4811430
    void HandlePostprocessed();
    // private System.Void ProcessSnapTurn(System.Single pointerOffset)
    // Offset: 0x4811764
    void ProcessSnapTurn(float pointerOffset);
    // private System.Void ProcessSmoothTurn(System.Single pointerOffset)
    // Offset: 0x4811810
    void ProcessSmoothTurn(float pointerOffset);
    // public System.Void InjectAllTurnerEventBroadcaster(Oculus.Interaction.IInteractor interactor, Oculus.Interaction.Input.IAxis1D axis)
    // Offset: 0x48118D8
    void InjectAllTurnerEventBroadcaster(::Oculus::Interaction::IInteractor* interactor, ::Oculus::Interaction::Input::IAxis1D* axis);
    // public System.Void InjectInteractor(Oculus.Interaction.IInteractor interactor)
    // Offset: 0x4811900
    void InjectInteractor(::Oculus::Interaction::IInteractor* interactor);
    // public System.Void InjectAxis(Oculus.Interaction.Input.IAxis1D axis)
    // Offset: 0x48119D0
    void InjectAxis(::Oculus::Interaction::Input::IAxis1D* axis);
    // public System.Void .ctor()
    // Offset: 0x4811AA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TurnerEventBroadcaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TurnerEventBroadcaster*, creationType>()));
    }
  }; // Oculus.Interaction.Locomotion.TurnerEventBroadcaster
  #pragma pack(pop)
  static check_size<sizeof(TurnerEventBroadcaster), 104 + sizeof(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)> __Oculus_Interaction_Locomotion_TurnerEventBroadcasterSizeCheck;
  static_assert(sizeof(TurnerEventBroadcaster) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode, "Oculus.Interaction.Locomotion", "TurnerEventBroadcaster/TurnMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Interactor
// Il2CppName: get_Interactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IInteractor* (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Interactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "get_Interactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_Interactor
// Il2CppName: set_Interactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::IInteractor*)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_Interactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "set_Interactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Axis
// Il2CppName: get_Axis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IAxis1D* (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Axis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "get_Axis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_Axis
// Il2CppName: set_Axis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::Input::IAxis1D*)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_Axis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "set_Axis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_TurnMethod
// Il2CppName: get_TurnMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_TurnMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "get_TurnMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_TurnMethod
// Il2CppName: set_TurnMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnMode)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_TurnMethod)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "TurnerEventBroadcaster/TurnMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "set_TurnMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_SnapTurnDegrees
// Il2CppName: get_SnapTurnDegrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_SnapTurnDegrees)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "get_SnapTurnDegrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_SnapTurnDegrees
// Il2CppName: set_SnapTurnDegrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(float)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_SnapTurnDegrees)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "set_SnapTurnDegrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_SmoothTurnCurve
// Il2CppName: get_SmoothTurnCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_SmoothTurnCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "get_SmoothTurnCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_SmoothTurnCurve
// Il2CppName: set_SmoothTurnCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::UnityEngine::AnimationCurve*)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_SmoothTurnCurve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "set_SmoothTurnCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_FireSnapOnUnselect
// Il2CppName: get_FireSnapOnUnselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_FireSnapOnUnselect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "get_FireSnapOnUnselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_FireSnapOnUnselect
// Il2CppName: set_FireSnapOnUnselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(bool)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_FireSnapOnUnselect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "set_FireSnapOnUnselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Identifier
// Il2CppName: get_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Identifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "get_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::add_WhenLocomotionPerformed
// Il2CppName: add_WhenLocomotionPerformed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::add_WhenLocomotionPerformed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "LocomotionEvent")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "add_WhenLocomotionPerformed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::remove_WhenLocomotionPerformed
// Il2CppName: remove_WhenLocomotionPerformed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::remove_WhenLocomotionPerformed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "LocomotionEvent")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "remove_WhenLocomotionPerformed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "InteractorStateChangeArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::HandlePostprocessed
// Il2CppName: HandlePostprocessed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::HandlePostprocessed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "HandlePostprocessed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::ProcessSnapTurn
// Il2CppName: ProcessSnapTurn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(float)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::ProcessSnapTurn)> {
  static const MethodInfo* get() {
    static auto* pointerOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "ProcessSnapTurn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerOffset});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::ProcessSmoothTurn
// Il2CppName: ProcessSmoothTurn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(float)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::ProcessSmoothTurn)> {
  static const MethodInfo* get() {
    static auto* pointerOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "ProcessSmoothTurn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerOffset});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectAllTurnerEventBroadcaster
// Il2CppName: InjectAllTurnerEventBroadcaster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::IInteractor*, ::Oculus::Interaction::Input::IAxis1D*)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectAllTurnerEventBroadcaster)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "InjectAllTurnerEventBroadcaster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, axis});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectInteractor
// Il2CppName: InjectInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::IInteractor*)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectInteractor)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "InjectInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectAxis
// Il2CppName: InjectAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::Input::IAxis1D*)>(&Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::TurnerEventBroadcaster*), "InjectAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::TurnerEventBroadcaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!