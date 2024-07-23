// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: Oculus.Interaction.Input.HandFinger
#include "Oculus/Interaction/Input/HandFinger.hpp"
// Including type: Oculus.Interaction.PoseDetection.ShapeRecognizer
#include "Oculus/Interaction/PoseDetection/ShapeRecognizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection::Debug
namespace Oculus::Interaction::PoseDetection::Debug {
}
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: ShapeRecognizerActiveState
  class ShapeRecognizerActiveState;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Forward declaring type: HandShapeSkeletalDebugVisual
  class HandShapeSkeletalDebugVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "HandShapeSkeletalDebugVisual");
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.Debug.HandShapeSkeletalDebugVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class HandShapeSkeletalDebugVisual : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::$$c
    class $$c;
    // Nested type: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::$AllFeatureStates$d__4
    class $AllFeatureStates$d__4;
    public:
    // private Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState _shapeRecognizerActiveState
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState* shapeRecognizerActiveState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*) == 0x8);
    // private UnityEngine.GameObject _fingerFeatureDebugVisualPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* fingerFeatureDebugVisualPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState _shapeRecognizerActiveState
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*& dyn__shapeRecognizerActiveState();
    // Get instance field reference: private UnityEngine.GameObject _fingerFeatureDebugVisualPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__fingerFeatureDebugVisualPrefab();
    // protected System.Void Awake()
    // Offset: 0x47FAC20
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47FAC24
    void Start();
    // private System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> AllFeatureStates()
    // Offset: 0x47FB548
    ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>* AllFeatureStates();
    // public System.Void .ctor()
    // Offset: 0x47FB5F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandShapeSkeletalDebugVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandShapeSkeletalDebugVisual*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.Debug.HandShapeSkeletalDebugVisual
  #pragma pack(pop)
  static check_size<sizeof(HandShapeSkeletalDebugVisual), 40 + sizeof(::UnityEngine::GameObject*)> __Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisualSizeCheck;
  static_assert(sizeof(HandShapeSkeletalDebugVisual) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::AllFeatureStates
// Il2CppName: AllFeatureStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>* (Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::AllFeatureStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*), "AllFeatureStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!