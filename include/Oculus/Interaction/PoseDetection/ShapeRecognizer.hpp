// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: Oculus.Interaction.Input.HandFinger
#include "Oculus/Interaction/Input/HandFinger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: ShapeRecognizer
  class ShapeRecognizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::ShapeRecognizer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::ShapeRecognizer*, "Oculus.Interaction.PoseDetection", "ShapeRecognizer");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.ShapeRecognizer
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class ShapeRecognizer : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList
    class FingerFeatureConfigList;
    // Nested type: ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig
    class FingerFeatureConfig;
    // Nested type: ::Oculus::Interaction::PoseDetection::ShapeRecognizer::$$c__DisplayClass22_0
    struct $$c__DisplayClass22_0;
    // Nested type: ::Oculus::Interaction::PoseDetection::ShapeRecognizer::$GetFingerFeatureConfigs$d__21
    class $GetFingerFeatureConfigs$d__21;
    public:
    // private System.String _shapeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW shapeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _thumbFeatureConfigs
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList* thumbFeatureConfigs;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*) == 0x8);
    // private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _indexFeatureConfigs
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList* indexFeatureConfigs;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*) == 0x8);
    // private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _middleFeatureConfigs
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList* middleFeatureConfigs;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*) == 0x8);
    // private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _ringFeatureConfigs
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList* ringFeatureConfigs;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*) == 0x8);
    // private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _pinkyFeatureConfigs
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList* pinkyFeatureConfigs;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _shapeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__shapeName();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _thumbFeatureConfigs
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*& dyn__thumbFeatureConfigs();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _indexFeatureConfigs
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*& dyn__indexFeatureConfigs();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _middleFeatureConfigs
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*& dyn__middleFeatureConfigs();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _ringFeatureConfigs
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*& dyn__ringFeatureConfigs();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList _pinkyFeatureConfigs
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*& dyn__pinkyFeatureConfigs();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> get_ThumbFeatureConfigs()
    // Offset: 0x47F2068
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* get_ThumbFeatureConfigs();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> get_IndexFeatureConfigs()
    // Offset: 0x47F2084
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* get_IndexFeatureConfigs();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> get_MiddleFeatureConfigs()
    // Offset: 0x47F20A0
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* get_MiddleFeatureConfigs();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> get_RingFeatureConfigs()
    // Offset: 0x47F20BC
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* get_RingFeatureConfigs();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> get_PinkyFeatureConfigs()
    // Offset: 0x47F20D8
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* get_PinkyFeatureConfigs();
    // public System.String get_ShapeName()
    // Offset: 0x47F20F4
    ::StringW get_ShapeName();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> GetFingerFeatureConfigs(Oculus.Interaction.Input.HandFinger finger)
    // Offset: 0x47F20FC
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* GetFingerFeatureConfigs(::Oculus::Interaction::Input::HandFinger finger);
    // public System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> GetFingerFeatureConfigs()
    // Offset: 0x47F21CC
    ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>* GetFingerFeatureConfigs();
    // public System.Void InjectAllShapeRecognizer(System.Collections.Generic.IDictionary`2<Oculus.Interaction.Input.HandFinger,Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[]> fingerFeatureConfigs)
    // Offset: 0x47F227C
    void InjectAllShapeRecognizer(::System::Collections::Generic::IDictionary_2<::Oculus::Interaction::Input::HandFinger, ::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>>* fingerFeatureConfigs);
    // public System.Void InjectThumbFeatureConfigs(Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[] configs)
    // Offset: 0x47F24E4
    void InjectThumbFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*> configs);
    // public System.Void InjectIndexFeatureConfigs(Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[] configs)
    // Offset: 0x47F25D8
    void InjectIndexFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*> configs);
    // public System.Void InjectMiddleFeatureConfigs(Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[] configs)
    // Offset: 0x47F269C
    void InjectMiddleFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*> configs);
    // public System.Void InjectRingFeatureConfigs(Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[] configs)
    // Offset: 0x47F2760
    void InjectRingFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*> configs);
    // public System.Void InjectPinkyFeatureConfigs(Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[] configs)
    // Offset: 0x47F2824
    void InjectPinkyFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*> configs);
    // public System.Void InjectShapeName(System.String shapeName)
    // Offset: 0x47F28E8
    void InjectShapeName(::StringW shapeName);
    // public System.Void .ctor()
    // Offset: 0x47F28F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShapeRecognizer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::ShapeRecognizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShapeRecognizer*, creationType>()));
    }
    // static Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList <InjectAllShapeRecognizer>g__ReadFeatureConfigs|22_0(Oculus.Interaction.Input.HandFinger finger, ref Oculus.Interaction.PoseDetection.ShapeRecognizer/<>c__DisplayClass22_0 )
    // Offset: 0x47F232C
    static ::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList* $InjectAllShapeRecognizer$g__ReadFeatureConfigs_22_0(::Oculus::Interaction::Input::HandFinger finger, ByRef<::Oculus::Interaction::PoseDetection::ShapeRecognizer::$$c__DisplayClass22_0> param_1);
  }; // Oculus.Interaction.PoseDetection.ShapeRecognizer
  #pragma pack(pop)
  static check_size<sizeof(ShapeRecognizer), 64 + sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList*)> __Oculus_Interaction_PoseDetection_ShapeRecognizerSizeCheck;
  static_assert(sizeof(ShapeRecognizer) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::get_ThumbFeatureConfigs
// Il2CppName: get_ThumbFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)()>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::get_ThumbFeatureConfigs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "get_ThumbFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::get_IndexFeatureConfigs
// Il2CppName: get_IndexFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)()>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::get_IndexFeatureConfigs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "get_IndexFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::get_MiddleFeatureConfigs
// Il2CppName: get_MiddleFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)()>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::get_MiddleFeatureConfigs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "get_MiddleFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::get_RingFeatureConfigs
// Il2CppName: get_RingFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)()>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::get_RingFeatureConfigs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "get_RingFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::get_PinkyFeatureConfigs
// Il2CppName: get_PinkyFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)()>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::get_PinkyFeatureConfigs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "get_PinkyFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::get_ShapeName
// Il2CppName: get_ShapeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)()>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::get_ShapeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "get_ShapeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::GetFingerFeatureConfigs
// Il2CppName: GetFingerFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>* (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)(::Oculus::Interaction::Input::HandFinger)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::GetFingerFeatureConfigs)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "GetFingerFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::GetFingerFeatureConfigs
// Il2CppName: GetFingerFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>*>>* (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)()>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::GetFingerFeatureConfigs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "GetFingerFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectAllShapeRecognizer
// Il2CppName: InjectAllShapeRecognizer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)(::System::Collections::Generic::IDictionary_2<::Oculus::Interaction::Input::HandFinger, ::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>>*)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectAllShapeRecognizer)> {
  static const MethodInfo* get() {
    static auto* fingerFeatureConfigs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "ShapeRecognizer/FingerFeatureConfig"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "InjectAllShapeRecognizer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fingerFeatureConfigs});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectThumbFeatureConfigs
// Il2CppName: InjectThumbFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectThumbFeatureConfigs)> {
  static const MethodInfo* get() {
    static auto* configs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "ShapeRecognizer/FingerFeatureConfig"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "InjectThumbFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configs});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectIndexFeatureConfigs
// Il2CppName: InjectIndexFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectIndexFeatureConfigs)> {
  static const MethodInfo* get() {
    static auto* configs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "ShapeRecognizer/FingerFeatureConfig"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "InjectIndexFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configs});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectMiddleFeatureConfigs
// Il2CppName: InjectMiddleFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectMiddleFeatureConfigs)> {
  static const MethodInfo* get() {
    static auto* configs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "ShapeRecognizer/FingerFeatureConfig"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "InjectMiddleFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configs});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectRingFeatureConfigs
// Il2CppName: InjectRingFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectRingFeatureConfigs)> {
  static const MethodInfo* get() {
    static auto* configs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "ShapeRecognizer/FingerFeatureConfig"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "InjectRingFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configs});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectPinkyFeatureConfigs
// Il2CppName: InjectPinkyFeatureConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfig*>)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectPinkyFeatureConfigs)> {
  static const MethodInfo* get() {
    static auto* configs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "ShapeRecognizer/FingerFeatureConfig"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "InjectPinkyFeatureConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configs});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectShapeName
// Il2CppName: InjectShapeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::ShapeRecognizer::*)(::StringW)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::InjectShapeName)> {
  static const MethodInfo* get() {
    static auto* shapeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "InjectShapeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shapeName});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::ShapeRecognizer::$InjectAllShapeRecognizer$g__ReadFeatureConfigs_22_0
// Il2CppName: <InjectAllShapeRecognizer>g__ReadFeatureConfigs|22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::ShapeRecognizer::FingerFeatureConfigList* (*)(::Oculus::Interaction::Input::HandFinger, ByRef<::Oculus::Interaction::PoseDetection::ShapeRecognizer::$$c__DisplayClass22_0>)>(&Oculus::Interaction::PoseDetection::ShapeRecognizer::$InjectAllShapeRecognizer$g__ReadFeatureConfigs_22_0)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    static auto* param_1 = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "ShapeRecognizer/<>c__DisplayClass22_0")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::ShapeRecognizer*), "<InjectAllShapeRecognizer>g__ReadFeatureConfigs|22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger, param_1});
  }
};
