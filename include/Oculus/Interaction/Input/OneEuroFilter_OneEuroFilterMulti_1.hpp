// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.OneEuroFilter
#include "Oculus/Interaction/Input/OneEuroFilter.hpp"
// Including type: Oculus.Interaction.Input.IOneEuroFilter`1
#include "Oculus/Interaction/Input/IOneEuroFilter_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1, "Oculus.Interaction.Input", "OneEuroFilter/OneEuroFilterMulti`1");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.Input.OneEuroFilter/OneEuroFilterMulti`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TData>
  class OneEuroFilter::OneEuroFilterMulti_1 : public ::Il2CppObject/*, public ::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*/ {
    public:
    public:
    // private TData <Value>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TData Value;
    // private readonly System.Func`2<System.Single[],TData> _arrayToType
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<::ArrayW<float>, TData>* arrayToType;
    // Field size check
    static_assert(sizeof(::System::Func_2<::ArrayW<float>, TData>*) == 0x8);
    // private readonly System.Func`3<TData,System.Int32,System.Single> _getValAtIndex
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_3<TData, int, float>* getValAtIndex;
    // Field size check
    static_assert(sizeof(::System::Func_3<TData, int, float>*) == 0x8);
    // private readonly Oculus.Interaction.Input.IOneEuroFilter`1<System.Single>[] _filters
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float>*> filters;
    // Field size check
    static_assert(sizeof(::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float>*>) == 0x8);
    // private readonly System.Single[] _componentValues
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<float> componentValues;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IOneEuroFilter_1<TData>
    operator ::Oculus::Interaction::Input::IOneEuroFilter_1<TData>() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private TData <Value>k__BackingField
    [[deprecated("Use field access instead!")]] TData& dyn_$Value$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::dyn_$Value$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Value>k__BackingField"))->offset;
      return *reinterpret_cast<TData*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<System.Single[],TData> _arrayToType
    [[deprecated("Use field access instead!")]] ::System::Func_2<::ArrayW<float>, TData>*& dyn__arrayToType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::dyn__arrayToType");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_arrayToType"))->offset;
      return *reinterpret_cast<::System::Func_2<::ArrayW<float>, TData>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`3<TData,System.Int32,System.Single> _getValAtIndex
    [[deprecated("Use field access instead!")]] ::System::Func_3<TData, int, float>*& dyn__getValAtIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::dyn__getValAtIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_getValAtIndex"))->offset;
      return *reinterpret_cast<::System::Func_3<TData, int, float>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Oculus.Interaction.Input.IOneEuroFilter`1<System.Single>[] _filters
    [[deprecated("Use field access instead!")]] ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float>*>& dyn__filters() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::dyn__filters");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_filters"))->offset;
      return *reinterpret_cast<::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float>*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Single[] _componentValues
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__componentValues() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::dyn__componentValues");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_componentValues"))->offset;
      return *reinterpret_cast<::ArrayW<float>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TData get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TData get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::get_Value");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1<TData>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TData, false>(this, ___internal__method);
    }
    // private System.Void set_Value(TData value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Value(TData value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::set_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Int32 numComponents, System.Func`2<System.Single[],TData> arrayToType, System.Func`3<TData,System.Int32,System.Single> getValAtIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneEuroFilter::OneEuroFilterMulti_1<TData>* New_ctor(int numComponents, ::System::Func_2<::ArrayW<float>, TData>* arrayToType, ::System::Func_3<TData, int, float>* getValAtIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneEuroFilter::OneEuroFilterMulti_1<TData>*, creationType>(numComponents, arrayToType, getValAtIndex)));
    }
    // public System.Void SetProperties(in Oculus.Interaction.Input.OneEuroFilterPropertyBlock properties)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetProperties(ByRef<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock> properties) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::SetProperties");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetProperties", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(properties)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(properties));
    }
    // public TData Step(TData newValue, System.Single deltaTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TData Step(TData newValue, float deltaTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::Step");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1<TData>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TData, false>(this, ___internal__method, newValue, deltaTime);
    }
    // public System.Void Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::Reset");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1<TData>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void Oculus.Interaction.Input.IOneEuroFilter<TData>.SetProperties(in Oculus.Interaction.Input.OneEuroFilterPropertyBlock properties)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Oculus_Interaction_Input_IOneEuroFilter$TData$_SetProperties(ByRef<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock> properties) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1::Oculus.Interaction.Input.IOneEuroFilter<TData>.SetProperties");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilterMulti_1<TData>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(properties));
    }
  }; // Oculus.Interaction.Input.OneEuroFilter/OneEuroFilterMulti`1
  // Could not write size check! Type: Oculus.Interaction.Input.OneEuroFilter/OneEuroFilterMulti`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
