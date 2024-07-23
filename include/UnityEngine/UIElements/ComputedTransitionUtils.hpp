// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.ComputedTransitionProperty
#include "UnityEngine/UIElements/ComputedTransitionProperty.hpp"
// Including type: UnityEngine.UIElements.StylePropertyName
#include "UnityEngine/UIElements/StylePropertyName.hpp"
// Including type: UnityEngine.UIElements.TimeValue
#include "UnityEngine/UIElements/TimeValue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ComputedStyle
  struct ComputedStyle;
  // Forward declaring type: EasingMode
  struct EasingMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UIElements::StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Skipping declaration: StylePropertyId because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ComputedTransitionUtils
  class ComputedTransitionUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ComputedTransitionUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ComputedTransitionUtils*, "UnityEngine.UIElements", "ComputedTransitionUtils");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ComputedTransitionUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ComputedTransitionUtils : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::ComputedTransitionUtils::$$c
    class $$c;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.UIElements.ComputedTransitionProperty> s_ComputedTransitionsBuffer
    static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* _get_s_ComputedTransitionsBuffer();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.UIElements.ComputedTransitionProperty> s_ComputedTransitionsBuffer
    static void _set_s_ComputedTransitionsBuffer(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* value);
    // static System.Void UpdateComputedTransitions(ref UnityEngine.UIElements.ComputedStyle computedStyle)
    // Offset: 0x568CC04
    static void UpdateComputedTransitions(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);
    // static System.Boolean HasTransitionProperty(ref UnityEngine.UIElements.ComputedStyle computedStyle, UnityEngine.UIElements.StyleSheets.StylePropertyId id)
    // Offset: 0x568CE24
    static bool HasTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);
    // static System.Boolean GetTransitionProperty(ref UnityEngine.UIElements.ComputedStyle computedStyle, UnityEngine.UIElements.StyleSheets.StylePropertyId id, out UnityEngine.UIElements.ComputedTransitionProperty result)
    // Offset: 0x568CEF0
    static bool GetTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<::UnityEngine::UIElements::ComputedTransitionProperty> result);
    // static private UnityEngine.UIElements.ComputedTransitionProperty[] GetOrComputeTransitionPropertyData(ref UnityEngine.UIElements.ComputedStyle computedStyle)
    // Offset: 0x568CC80
    static ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty> GetOrComputeTransitionPropertyData(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);
    // static private System.Int32 GetTransitionHashCode(ref UnityEngine.UIElements.ComputedStyle cs)
    // Offset: 0x568D034
    static int GetTransitionHashCode(ByRef<::UnityEngine::UIElements::ComputedStyle> cs);
    // static System.Boolean SameTransitionProperty(ref UnityEngine.UIElements.ComputedStyle x, ref UnityEngine.UIElements.ComputedStyle y)
    // Offset: 0x568D7C8
    static bool SameTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> x, ByRef<::UnityEngine::UIElements::ComputedStyle> y);
    // static private System.Boolean SameTransitionProperty(System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyName> a, System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyName> b)
    // Offset: 0x568D908
    static bool SameTransitionProperty(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* a, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* b);
    // static private System.Boolean SameTransitionProperty(System.Collections.Generic.List`1<UnityEngine.UIElements.TimeValue> a, System.Collections.Generic.List`1<UnityEngine.UIElements.TimeValue> b)
    // Offset: 0x568DA00
    static bool SameTransitionProperty(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* a, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* b);
    // static private System.Void ComputeTransitionPropertyData(ref UnityEngine.UIElements.ComputedStyle computedStyle, System.Collections.Generic.List`1<UnityEngine.UIElements.ComputedTransitionProperty> outData)
    // Offset: 0x568D4BC
    static void ComputeTransitionPropertyData(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* outData);
    // static private T GetWrappingTransitionData(System.Collections.Generic.List`1<T> list, System.Int32 i, T defaultValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetWrappingTransitionData(::System::Collections::Generic::List_1<T>* list, int i, T defaultValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ComputedTransitionUtils::GetWrappingTransitionData");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.UIElements", "ComputedTransitionUtils", "GetWrappingTransitionData", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(i), ::il2cpp_utils::ExtractType(defaultValue)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list, i, defaultValue);
    }
    // static private System.Int32 ConvertTransitionTime(UnityEngine.UIElements.TimeValue time)
    // Offset: 0x568DAEC
    static int ConvertTransitionTime(::UnityEngine::UIElements::TimeValue time);
    // static private System.Func`2<System.Single,System.Single> ConvertTransitionFunction(UnityEngine.UIElements.EasingMode mode)
    // Offset: 0x568DBE8
    static ::System::Func_2<float, float>* ConvertTransitionFunction(::UnityEngine::UIElements::EasingMode mode);
    // static private System.Void .cctor()
    // Offset: 0x568E890
    static void _cctor();
  }; // UnityEngine.UIElements.ComputedTransitionUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::UpdateComputedTransitions
// Il2CppName: UpdateComputedTransitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&UnityEngine::UIElements::ComputedTransitionUtils::UpdateComputedTransitions)> {
  static const MethodInfo* get() {
    static auto* computedStyle = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "UpdateComputedTransitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{computedStyle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::HasTransitionProperty
// Il2CppName: HasTransitionProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::UIElements::ComputedStyle>, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&UnityEngine::UIElements::ComputedTransitionUtils::HasTransitionProperty)> {
  static const MethodInfo* get() {
    static auto* computedStyle = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "StylePropertyId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "HasTransitionProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{computedStyle, id});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::GetTransitionProperty
// Il2CppName: GetTransitionProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::UIElements::ComputedStyle>, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ByRef<::UnityEngine::UIElements::ComputedTransitionProperty>)>(&UnityEngine::UIElements::ComputedTransitionUtils::GetTransitionProperty)> {
  static const MethodInfo* get() {
    static auto* computedStyle = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "StylePropertyId")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedTransitionProperty")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "GetTransitionProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{computedStyle, id, result});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::GetOrComputeTransitionPropertyData
// Il2CppName: GetOrComputeTransitionPropertyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty> (*)(ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&UnityEngine::UIElements::ComputedTransitionUtils::GetOrComputeTransitionPropertyData)> {
  static const MethodInfo* get() {
    static auto* computedStyle = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "GetOrComputeTransitionPropertyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{computedStyle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::GetTransitionHashCode
// Il2CppName: GetTransitionHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&UnityEngine::UIElements::ComputedTransitionUtils::GetTransitionHashCode)> {
  static const MethodInfo* get() {
    static auto* cs = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "GetTransitionHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cs});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::SameTransitionProperty
// Il2CppName: SameTransitionProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::UIElements::ComputedStyle>, ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&UnityEngine::UIElements::ComputedTransitionUtils::SameTransitionProperty)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "SameTransitionProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::SameTransitionProperty
// Il2CppName: SameTransitionProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*)>(&UnityEngine::UIElements::ComputedTransitionUtils::SameTransitionProperty)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StylePropertyName")})->byval_arg;
    static auto* b = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StylePropertyName")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "SameTransitionProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::SameTransitionProperty
// Il2CppName: SameTransitionProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*)>(&UnityEngine::UIElements::ComputedTransitionUtils::SameTransitionProperty)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TimeValue")})->byval_arg;
    static auto* b = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TimeValue")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "SameTransitionProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::ComputeTransitionPropertyData
// Il2CppName: ComputeTransitionPropertyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::UIElements::ComputedStyle>, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>*)>(&UnityEngine::UIElements::ComputedTransitionUtils::ComputeTransitionPropertyData)> {
  static const MethodInfo* get() {
    static auto* computedStyle = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedStyle")->this_arg;
    static auto* outData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ComputedTransitionProperty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "ComputeTransitionPropertyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{computedStyle, outData});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::GetWrappingTransitionData
// Il2CppName: GetWrappingTransitionData
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::ConvertTransitionTime
// Il2CppName: ConvertTransitionTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::UIElements::TimeValue)>(&UnityEngine::UIElements::ComputedTransitionUtils::ConvertTransitionTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TimeValue")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "ConvertTransitionTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::ConvertTransitionFunction
// Il2CppName: ConvertTransitionFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<float, float>* (*)(::UnityEngine::UIElements::EasingMode)>(&UnityEngine::UIElements::ComputedTransitionUtils::ConvertTransitionFunction)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EasingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), "ConvertTransitionFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedTransitionUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::ComputedTransitionUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedTransitionUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
