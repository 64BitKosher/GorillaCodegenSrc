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
// Forward declaring namespace: Oculus::Interaction::Samples
namespace Oculus::Interaction::Samples {
  // Skipping declaration: Direction because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IInteractableView
  class IInteractableView;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Forward declaring type: ScaleAudioEvents
  class ScaleAudioEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Samples::ScaleAudioEvents);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Samples::ScaleAudioEvents*, "Oculus.Interaction.Samples", "ScaleAudioEvents");
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Samples.ScaleAudioEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class ScaleAudioEvents : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::Samples::ScaleAudioEvents::Direction
    struct Direction;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Interaction.Samples.ScaleAudioEvents/Direction
    // [TokenAttribute] Offset: FFFFFFFF
    struct Direction/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Direction
      constexpr Direction(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction None
      static constexpr const int None = 0;
      // Get static field: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction None
      static ::Oculus::Interaction::Samples::ScaleAudioEvents::Direction _get_None();
      // Set static field: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction None
      static void _set_None(::Oculus::Interaction::Samples::ScaleAudioEvents::Direction value);
      // static field const value: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction ScaleUp
      static constexpr const int ScaleUp = 1;
      // Get static field: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction ScaleUp
      static ::Oculus::Interaction::Samples::ScaleAudioEvents::Direction _get_ScaleUp();
      // Set static field: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction ScaleUp
      static void _set_ScaleUp(::Oculus::Interaction::Samples::ScaleAudioEvents::Direction value);
      // static field const value: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction ScaleDown
      static constexpr const int ScaleDown = 2;
      // Get static field: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction ScaleDown
      static ::Oculus::Interaction::Samples::ScaleAudioEvents::Direction _get_ScaleDown();
      // Set static field: static public Oculus.Interaction.Samples.ScaleAudioEvents/Direction ScaleDown
      static void _set_ScaleDown(::Oculus::Interaction::Samples::ScaleAudioEvents::Direction value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Oculus.Interaction.Samples.ScaleAudioEvents/Direction
    #pragma pack(pop)
    static check_size<sizeof(ScaleAudioEvents::Direction), 0 + sizeof(int)> __Oculus_Interaction_Samples_ScaleAudioEvents_DirectionSizeCheck;
    static_assert(sizeof(ScaleAudioEvents::Direction) == 0x4);
    public:
    // private UnityEngine.Object _interactableView
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* interactableView;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private UnityEngine.Transform _trackedTransform
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* trackedTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _stepSize
    // Size: 0x4
    // Offset: 0x30
    float stepSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _maxEventFreq
    // Size: 0x4
    // Offset: 0x34
    int maxEventFreq;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Events.UnityEvent _whenScalingStarted
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Events::UnityEvent* whenScalingStarted;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenScalingEnded
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Events::UnityEvent* whenScalingEnded;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenScaledUp
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Events::UnityEvent* whenScaledUp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenScaledDown
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Events::UnityEvent* whenScaledDown;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private Oculus.Interaction.IInteractableView InteractableView
    // Size: 0x8
    // Offset: 0x58
    ::Oculus::Interaction::IInteractableView* InteractableView;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IInteractableView*) == 0x8);
    // private System.Boolean _isScaling
    // Size: 0x1
    // Offset: 0x60
    bool isScaling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isScaling and: lastStep
    char __padding9[0x3] = {};
    // private UnityEngine.Vector3 _lastStep
    // Size: 0xC
    // Offset: 0x64
    ::UnityEngine::Vector3 lastStep;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _lastEventTime
    // Size: 0x4
    // Offset: 0x70
    float lastEventTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Oculus.Interaction.Samples.ScaleAudioEvents/Direction _direction
    // Size: 0x4
    // Offset: 0x74
    ::Oculus::Interaction::Samples::ScaleAudioEvents::Direction direction;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Samples::ScaleAudioEvents::Direction) == 0x4);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x78
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _interactableView
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__interactableView();
    // Get instance field reference: private UnityEngine.Transform _trackedTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__trackedTransform();
    // Get instance field reference: private System.Single _stepSize
    [[deprecated("Use field access instead!")]] float& dyn__stepSize();
    // Get instance field reference: private System.Int32 _maxEventFreq
    [[deprecated("Use field access instead!")]] int& dyn__maxEventFreq();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenScalingStarted
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenScalingStarted();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenScalingEnded
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenScalingEnded();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenScaledUp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenScaledUp();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenScaledDown
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenScaledDown();
    // Get instance field reference: private Oculus.Interaction.IInteractableView InteractableView
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IInteractableView*& dyn_InteractableView();
    // Get instance field reference: private System.Boolean _isScaling
    [[deprecated("Use field access instead!")]] bool& dyn__isScaling();
    // Get instance field reference: private UnityEngine.Vector3 _lastStep
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__lastStep();
    // Get instance field reference: private System.Single _lastEventTime
    [[deprecated("Use field access instead!")]] float& dyn__lastEventTime();
    // Get instance field reference: private Oculus.Interaction.Samples.ScaleAudioEvents/Direction _direction
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Samples::ScaleAudioEvents::Direction& dyn__direction();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public UnityEngine.Events.UnityEvent get_WhenScalingStarted()
    // Offset: 0x47A1420
    ::UnityEngine::Events::UnityEvent* get_WhenScalingStarted();
    // public UnityEngine.Events.UnityEvent get_WhenScalingEnded()
    // Offset: 0x47A1428
    ::UnityEngine::Events::UnityEvent* get_WhenScalingEnded();
    // public UnityEngine.Events.UnityEvent get_WhenScaledUp()
    // Offset: 0x47A1430
    ::UnityEngine::Events::UnityEvent* get_WhenScaledUp();
    // public UnityEngine.Events.UnityEvent get_WhenScaledDown()
    // Offset: 0x47A1438
    ::UnityEngine::Events::UnityEvent* get_WhenScaledDown();
    // private UnityEngine.Transform get_TrackedTransform()
    // Offset: 0x47A1440
    ::UnityEngine::Transform* get_TrackedTransform();
    // private System.Void ScalingStarted()
    // Offset: 0x47A14C0
    void ScalingStarted();
    // private System.Void ScalingEnded()
    // Offset: 0x47A14F8
    void ScalingEnded();
    // private System.Single GetTotalDelta(out Oculus.Interaction.Samples.ScaleAudioEvents/Direction direction)
    // Offset: 0x47A1514
    float GetTotalDelta(ByRef<::Oculus::Interaction::Samples::ScaleAudioEvents::Direction> direction);
    // private System.Void UpdateScaling()
    // Offset: 0x47A1634
    void UpdateScaling();
    // protected System.Void Awake()
    // Offset: 0x47A16F8
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47A1760
    void Start();
    // protected System.Void Update()
    // Offset: 0x47A1798
    void Update();
    // public System.Void .ctor()
    // Offset: 0x47A188C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleAudioEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Samples::ScaleAudioEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleAudioEvents*, creationType>()));
    }
  }; // Oculus.Interaction.Samples.ScaleAudioEvents
  #pragma pack(pop)
  static check_size<sizeof(ScaleAudioEvents), 120 + sizeof(bool)> __Oculus_Interaction_Samples_ScaleAudioEventsSizeCheck;
  static_assert(sizeof(ScaleAudioEvents) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Samples::ScaleAudioEvents::Direction, "Oculus.Interaction.Samples", "ScaleAudioEvents/Direction");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::get_WhenScalingStarted
// Il2CppName: get_WhenScalingStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::get_WhenScalingStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "get_WhenScalingStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::get_WhenScalingEnded
// Il2CppName: get_WhenScalingEnded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::get_WhenScalingEnded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "get_WhenScalingEnded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::get_WhenScaledUp
// Il2CppName: get_WhenScaledUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::get_WhenScaledUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "get_WhenScaledUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::get_WhenScaledDown
// Il2CppName: get_WhenScaledDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::get_WhenScaledDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "get_WhenScaledDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::get_TrackedTransform
// Il2CppName: get_TrackedTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::get_TrackedTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "get_TrackedTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::ScalingStarted
// Il2CppName: ScalingStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::ScalingStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "ScalingStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::ScalingEnded
// Il2CppName: ScalingEnded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::ScalingEnded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "ScalingEnded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::GetTotalDelta
// Il2CppName: GetTotalDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Samples::ScaleAudioEvents::*)(ByRef<::Oculus::Interaction::Samples::ScaleAudioEvents::Direction>)>(&Oculus::Interaction::Samples::ScaleAudioEvents::GetTotalDelta)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Samples", "ScaleAudioEvents/Direction")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "GetTotalDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::UpdateScaling
// Il2CppName: UpdateScaling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::UpdateScaling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "UpdateScaling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::ScaleAudioEvents::*)()>(&Oculus::Interaction::Samples::ScaleAudioEvents::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::ScaleAudioEvents*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::ScaleAudioEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!