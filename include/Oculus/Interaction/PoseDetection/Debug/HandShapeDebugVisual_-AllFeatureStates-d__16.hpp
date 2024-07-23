// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual
#include "Oculus/Interaction/PoseDetection/Debug/HandShapeDebugVisual.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: Oculus.Interaction.Input.HandFinger
#include "Oculus/Interaction/Input/HandFinger.hpp"
// Including type: Oculus.Interaction.PoseDetection.ShapeRecognizer
#include "Oculus/Interaction/PoseDetection/ShapeRecognizer.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*, "Oculus.Interaction.PoseDetection.Debug", "HandShapeDebugVisual/<AllFeatureStates>d__16");
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual/<AllFeatureStates>d__16
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HandShapeDebugVisual::$AllFeatureStates$d__16 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>, public ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>> <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*> $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x28
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual* $$4__this;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<Oculus.Interaction.PoseDetection.ShapeRecognizer> <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> <>7__wrap2
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>* $$7__wrap2;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>
    operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>
    operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>> <>2__current
    [[deprecated("Use field access instead!")]] ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual <>4__this
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<Oculus.Interaction.PoseDetection.ShapeRecognizer> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>*& dyn_$$7__wrap1();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> <>7__wrap2
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>*& dyn_$$7__wrap2();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x47FA0A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandShapeDebugVisual::$AllFeatureStates$d__16* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandShapeDebugVisual::$AllFeatureStates$d__16*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x47FA450
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x47FA500
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x47FAA28
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x47FA978
    void $$m__Finally2();
    // private System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>> System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current()
    // Offset: 0x47FAAD8
    ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*> System_Collections_Generic_IEnumerator$_Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList$Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig$_$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x47FAAE4
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x47FAB1C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator()
    // Offset: 0x47FAB78
    ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>* System_Collections_Generic_IEnumerable$_Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList$Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig$_$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x47FAC1C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual/<AllFeatureStates>d__16
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_Generic_IEnumerator$_Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList$Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig$_$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*> (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_Generic_IEnumerator$_Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList$Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig$_$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_Generic_IEnumerable$_Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList$Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig$_$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>* (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_Generic_IEnumerable$_Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList$Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig$_$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::*)()>(&Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual::$AllFeatureStates$d__16*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};