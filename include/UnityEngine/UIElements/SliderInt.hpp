// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseSlider`1
#include "UnityEngine/UIElements/BaseSlider_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Skipping declaration: DeltaSpeed because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: SliderInt
  class SliderInt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::SliderInt);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SliderInt*, "UnityEngine.UIElements", "SliderInt");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.SliderInt
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderInt : public ::UnityEngine::UIElements::BaseSlider_1<int> {
    public:
    // Nested type: ::UnityEngine::UIElements::SliderInt::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::SliderInt::UxmlTraits
    class UxmlTraits;
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static public readonly System.String labelUssClassName
    static ::StringW _get_labelUssClassName();
    // Set static field: static public readonly System.String labelUssClassName
    static void _set_labelUssClassName(::StringW value);
    // Get static field: static public readonly System.String inputUssClassName
    static ::StringW _get_inputUssClassName();
    // Set static field: static public readonly System.String inputUssClassName
    static void _set_inputUssClassName(::StringW value);
    // public System.Void .ctor(System.String label, System.Int32 start, System.Int32 end, UnityEngine.UIElements.SliderDirection direction, System.Single pageSize)
    // Offset: 0x562F0E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderInt* New_ctor(::StringW label, int start, int end, ::UnityEngine::UIElements::SliderDirection direction, float pageSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::SliderInt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderInt*, creationType>(label, start, end, direction, pageSize)));
    }
    // public System.Void ApplyInputDeviceDelta(UnityEngine.Vector3 delta, UnityEngine.UIElements.DeltaSpeed speed, System.Int32 startValue)
    // Offset: 0x562F390
    void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int startValue);
    // System.Int32 SliderLerpUnclamped(System.Int32 a, System.Int32 b, System.Single interpolant)
    // Offset: 0x562F55C
    int SliderLerpUnclamped(int a, int b, float interpolant);
    // System.Single SliderNormalizeValue(System.Int32 currentValue, System.Int32 lowerValue, System.Int32 higherValue)
    // Offset: 0x562F648
    float SliderNormalizeValue(int currentValue, int lowerValue, int higherValue);
    // System.Int32 ParseStringToValue(System.String stringValue)
    // Offset: 0x562F664
    int ParseStringToValue(::StringW stringValue);
    // System.Void ComputeValueFromKey(UnityEngine.UIElements.BaseSlider`1/SliderKey<System.Int32> sliderKey, System.Boolean isShift)
    // Offset: 0x562F9F8
    void ComputeValueFromKey(typename ::UnityEngine::UIElements::BaseSlider_1<int>::SliderKey sliderKey, bool isShift);
    // public System.Void .ctor()
    // Offset: 0x562F0CC
    // Implemented from: UnityEngine.UIElements.BindableElement
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderInt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::SliderInt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderInt*, creationType>()));
    }
    // public override System.Single get_pageSize()
    // Offset: 0x562F230
    // Implemented from: UnityEngine.UIElements.BaseSlider`1
    // Base method: System.Single BaseSlider_1::get_pageSize()
    float get_pageSize();
    // public override System.Void set_pageSize(System.Single value)
    // Offset: 0x562F278
    // Implemented from: UnityEngine.UIElements.BaseSlider`1
    // Base method: System.Void BaseSlider_1::set_pageSize(System.Single value)
    void set_pageSize(float value);
    // override System.Void ComputeValueAndDirectionFromClick(System.Single sliderLength, System.Single dragElementLength, System.Single dragElementPos, System.Single dragElementLastPos)
    // Offset: 0x562F690
    // Implemented from: UnityEngine.UIElements.BaseSlider`1
    // Base method: System.Void BaseSlider_1::ComputeValueAndDirectionFromClick(System.Single sliderLength, System.Single dragElementLength, System.Single dragElementPos, System.Single dragElementLastPos)
    void ComputeValueAndDirectionFromClick(float sliderLength, float dragElementLength, float dragElementPos, float dragElementLastPos);
    // static private System.Void .cctor()
    // Offset: 0x562FCD8
    // Implemented from: UnityEngine.UIElements.BaseSlider`1
    // Base method: System.Void BaseSlider_1::.cctor()
    // Base method: System.Void BaseField_1::.cctor()
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.SliderInt
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::ApplyInputDeviceDelta
// Il2CppName: ApplyInputDeviceDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::SliderInt::*)(::UnityEngine::Vector3, ::UnityEngine::UIElements::DeltaSpeed, int)>(&UnityEngine::UIElements::SliderInt::ApplyInputDeviceDelta)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DeltaSpeed")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt*), "ApplyInputDeviceDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta, speed, startValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::SliderLerpUnclamped
// Il2CppName: SliderLerpUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::SliderInt::*)(int, int, float)>(&UnityEngine::UIElements::SliderInt::SliderLerpUnclamped)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* interpolant = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt*), "SliderLerpUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, interpolant});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::SliderNormalizeValue
// Il2CppName: SliderNormalizeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::SliderInt::*)(int, int, int)>(&UnityEngine::UIElements::SliderInt::SliderNormalizeValue)> {
  static const MethodInfo* get() {
    static auto* currentValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lowerValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* higherValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt*), "SliderNormalizeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentValue, lowerValue, higherValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::ParseStringToValue
// Il2CppName: ParseStringToValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::SliderInt::*)(::StringW)>(&UnityEngine::UIElements::SliderInt::ParseStringToValue)> {
  static const MethodInfo* get() {
    static auto* stringValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt*), "ParseStringToValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::ComputeValueFromKey
// Il2CppName: ComputeValueFromKey
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::get_pageSize
// Il2CppName: get_pageSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::SliderInt::*)()>(&UnityEngine::UIElements::SliderInt::get_pageSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt*), "get_pageSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::set_pageSize
// Il2CppName: set_pageSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::SliderInt::*)(float)>(&UnityEngine::UIElements::SliderInt::set_pageSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt*), "set_pageSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::ComputeValueAndDirectionFromClick
// Il2CppName: ComputeValueAndDirectionFromClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::SliderInt::*)(float, float, float, float)>(&UnityEngine::UIElements::SliderInt::ComputeValueAndDirectionFromClick)> {
  static const MethodInfo* get() {
    static auto* sliderLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dragElementLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dragElementPos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dragElementLastPos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt*), "ComputeValueAndDirectionFromClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderLength, dragElementLength, dragElementPos, dragElementLastPos});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::SliderInt::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
