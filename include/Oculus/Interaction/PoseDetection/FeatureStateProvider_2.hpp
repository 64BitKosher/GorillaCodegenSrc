// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Skipping declaration: FeatureStateSnapshot because it is already included!
  // Forward declaring type: IFeatureStateThresholds`2<TFeature, TFeatureState>
  template<typename TFeature, typename TFeatureState>
  class IFeatureStateThresholds_2;
  // Forward declaring type: IFeatureThresholds`2<TFeature, TFeatureState>
  template<typename TFeature, typename TFeatureState>
  class IFeatureThresholds_2;
  // Forward declaring type: IFeatureStateThreshold`1<TFeatureState>
  template<typename TFeatureState>
  class IFeatureStateThreshold_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
  // Forward declaring type: IEquatable`1<T>
  template<typename T>
  class IEquatable_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: FeatureStateProvider`2<TFeature, TFeatureState>
  template<typename TFeature, typename TFeatureState>
  class FeatureStateProvider_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::PoseDetection::FeatureStateProvider_2, "Oculus.Interaction.PoseDetection", "FeatureStateProvider`2");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.PoseDetection.FeatureStateProvider`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TFeature, typename TFeatureState>
  class FeatureStateProvider_2 : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::FeatureStateSnapshot<TFeature, TFeatureState>
    struct FeatureStateSnapshot;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot
    // [TokenAttribute] Offset: FFFFFFFF
    struct FeatureStateSnapshot : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType*/ {
      public:
      using declaring_type = FeatureStateProvider_2<TFeature, TFeatureState>*;
      static constexpr std::string_view NESTED_NAME = "FeatureStateSnapshot";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public System.Boolean HasCurrentState
      // Size: 0x1
      // Offset: 0x0
      bool HasCurrentState;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public TFeatureState State
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TFeatureState State;
      // public TFeatureState DesiredState
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TFeatureState DesiredState;
      // public System.Int32 LastUpdatedFrameId
      // Size: 0x4
      // Offset: 0x0
      int LastUpdatedFrameId;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Double DesiredStateEntryTime
      // Size: 0x8
      // Offset: 0x0
      double DesiredStateEntryTime;
      // Field size check
      static_assert(sizeof(double) == 0x8);
      public:
      // Creating value type constructor for type: FeatureStateSnapshot
      constexpr FeatureStateSnapshot(bool HasCurrentState_ = {}, TFeatureState State_ = {}, TFeatureState DesiredState_ = {}, int LastUpdatedFrameId_ = {}, double DesiredStateEntryTime_ = {}) noexcept : HasCurrentState{HasCurrentState_}, State{State_}, DesiredState{DesiredState_}, LastUpdatedFrameId{LastUpdatedFrameId_}, DesiredStateEntryTime{DesiredStateEntryTime_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Boolean HasCurrentState
      [[deprecated("Use field access instead!")]] bool& dyn_HasCurrentState() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::FeatureStateSnapshot::dyn_HasCurrentState");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "HasCurrentState"))->offset;
        return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public TFeatureState State
      [[deprecated("Use field access instead!")]] TFeatureState& dyn_State() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::FeatureStateSnapshot::dyn_State");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "State"))->offset;
        return *reinterpret_cast<TFeatureState*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public TFeatureState DesiredState
      [[deprecated("Use field access instead!")]] TFeatureState& dyn_DesiredState() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::FeatureStateSnapshot::dyn_DesiredState");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "DesiredState"))->offset;
        return *reinterpret_cast<TFeatureState*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 LastUpdatedFrameId
      [[deprecated("Use field access instead!")]] int& dyn_LastUpdatedFrameId() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::FeatureStateSnapshot::dyn_LastUpdatedFrameId");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "LastUpdatedFrameId"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Double DesiredStateEntryTime
      [[deprecated("Use field access instead!")]] double& dyn_DesiredStateEntryTime() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::FeatureStateSnapshot::dyn_DesiredStateEntryTime");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "DesiredStateEntryTime"))->offset;
        return *reinterpret_cast<double*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot
    // Could not write size check! Type: Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot is generic, or has no fields that are valid for size checks!
    public:
    // private System.Int32 <LastUpdatedFrameId>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int LastUpdatedFrameId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot<TFeature,TFeatureState>[] _featureToCurrentState
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<typename ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature, TFeatureState>::FeatureStateSnapshot> featureToCurrentState;
    // Field size check
    static_assert(sizeof(::ArrayW<typename ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature, TFeatureState>::FeatureStateSnapshot>) == 0x8);
    // private Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState>[] _featureToThresholds
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*> featureToThresholds;
    // Field size check
    static_assert(sizeof(::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*>) == 0x8);
    // private readonly System.Func`2<TFeature,System.Nullable`1<System.Single>> _valueReader
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TFeature, ::System::Nullable_1<float>>* valueReader;
    // Field size check
    static_assert(sizeof(::System::Func_2<TFeature, ::System::Nullable_1<float>>*) == 0x8);
    // private readonly System.Func`2<TFeature,System.Int32> _featureToInt
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TFeature, int>* featureToInt;
    // Field size check
    static_assert(sizeof(::System::Func_2<TFeature, int>*) == 0x8);
    // private readonly System.Func`1<System.Single> _timeProvider
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<float>* timeProvider;
    // Field size check
    static_assert(sizeof(::System::Func_1<float>*) == 0x8);
    // private Oculus.Interaction.PoseDetection.IFeatureThresholds`2<TFeature,TFeatureState> _featureThresholds
    // Size: 0x8
    // Offset: 0x0
    ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature, TFeatureState>* featureThresholds;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature, TFeatureState>*) == 0x8);
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly TFeature[] FeatureEnumValues
    static ::ArrayW<TFeature> _get_FeatureEnumValues() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::_get_FeatureEnumValues");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::ArrayW<TFeature>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FeatureStateProvider_2<TFeature, TFeatureState>*>::get(), "FeatureEnumValues")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly TFeature[] FeatureEnumValues
    static void _set_FeatureEnumValues(::ArrayW<TFeature> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::_set_FeatureEnumValues");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FeatureStateProvider_2<TFeature, TFeatureState>*>::get(), "FeatureEnumValues", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <LastUpdatedFrameId>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$LastUpdatedFrameId$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::dyn_$LastUpdatedFrameId$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<LastUpdatedFrameId>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot<TFeature,TFeatureState>[] _featureToCurrentState
    [[deprecated("Use field access instead!")]] ::ArrayW<typename ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature, TFeatureState>::FeatureStateSnapshot>& dyn__featureToCurrentState() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::dyn__featureToCurrentState");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_featureToCurrentState"))->offset;
      return *reinterpret_cast<::ArrayW<typename ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature, TFeatureState>::FeatureStateSnapshot>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState>[] _featureToThresholds
    [[deprecated("Use field access instead!")]] ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*>& dyn__featureToThresholds() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::dyn__featureToThresholds");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_featureToThresholds"))->offset;
      return *reinterpret_cast<::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<TFeature,System.Nullable`1<System.Single>> _valueReader
    [[deprecated("Use field access instead!")]] ::System::Func_2<TFeature, ::System::Nullable_1<float>>*& dyn__valueReader() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::dyn__valueReader");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_valueReader"))->offset;
      return *reinterpret_cast<::System::Func_2<TFeature, ::System::Nullable_1<float>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<TFeature,System.Int32> _featureToInt
    [[deprecated("Use field access instead!")]] ::System::Func_2<TFeature, int>*& dyn__featureToInt() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::dyn__featureToInt");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_featureToInt"))->offset;
      return *reinterpret_cast<::System::Func_2<TFeature, int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`1<System.Single> _timeProvider
    [[deprecated("Use field access instead!")]] ::System::Func_1<float>*& dyn__timeProvider() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::dyn__timeProvider");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_timeProvider"))->offset;
      return *reinterpret_cast<::System::Func_1<float>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Oculus.Interaction.PoseDetection.IFeatureThresholds`2<TFeature,TFeatureState> _featureThresholds
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature, TFeatureState>*& dyn__featureThresholds() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::dyn__featureThresholds");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_featureThresholds"))->offset;
      return *reinterpret_cast<::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature, TFeatureState>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_LastUpdatedFrameId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_LastUpdatedFrameId() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::get_LastUpdatedFrameId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_LastUpdatedFrameId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void set_LastUpdatedFrameId(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_LastUpdatedFrameId(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::set_LastUpdatedFrameId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_LastUpdatedFrameId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // private System.Int32 EnumToInt(TFeature value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int EnumToInt(TFeature value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::EnumToInt");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EnumToInt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Func`2<TFeature,System.Nullable`1<System.Single>> valueReader, System.Func`2<TFeature,System.Int32> featureToInt, System.Func`1<System.Single> timeProvider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FeatureStateProvider_2<TFeature, TFeatureState>* New_ctor(::System::Func_2<TFeature, ::System::Nullable_1<float>>* valueReader, ::System::Func_2<TFeature, int>* featureToInt, ::System::Func_1<float>* timeProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FeatureStateProvider_2<TFeature, TFeatureState>*, creationType>(valueReader, featureToInt, timeProvider)));
    }
    // public System.Void InitializeThresholds(Oculus.Interaction.PoseDetection.IFeatureThresholds`2<TFeature,TFeatureState> featureThresholds)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InitializeThresholds(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature, TFeatureState>* featureThresholds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::InitializeThresholds");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InitializeThresholds", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(featureThresholds)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, featureThresholds);
    }
    // public Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState>[] ValidateFeatureThresholds(System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState>> featureStateThresholdsList)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*> ValidateFeatureThresholds(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*>* featureStateThresholdsList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::ValidateFeatureThresholds");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ValidateFeatureThresholds", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(featureStateThresholdsList)})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*>, false>(this, ___internal__method, featureStateThresholdsList);
    }
    // private System.Void InitializeStates()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InitializeStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::InitializeStates");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InitializeStates", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState> GetFeatureThresholds(TFeature feature)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>* GetFeatureThresholds(TFeature feature) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::GetFeatureThresholds");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetFeatureThresholds", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(feature)})));
      return ::il2cpp_utils::RunMethodRethrow<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*, false>(this, ___internal__method, feature);
    }
    // public TFeatureState GetCurrentFeatureState(TFeature feature)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TFeatureState GetCurrentFeatureState(TFeature feature) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::GetCurrentFeatureState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetCurrentFeatureState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(feature)})));
      return ::il2cpp_utils::RunMethodRethrow<TFeatureState, false>(this, ___internal__method, feature);
    }
    // private TFeatureState ReadDesiredState(System.Single value, System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.IFeatureStateThreshold`1<TFeatureState>> featureStateThresholds, TFeatureState previousState)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TFeatureState ReadDesiredState(float value, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>* featureStateThresholds, TFeatureState previousState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::ReadDesiredState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReadDesiredState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(featureStateThresholds), ::il2cpp_utils::ExtractType(previousState)})));
      return ::il2cpp_utils::RunMethodRethrow<TFeatureState, false>(this, ___internal__method, value, featureStateThresholds, previousState);
    }
    // private TFeatureState ReadDesiredState(System.Single value, System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.IFeatureStateThreshold`1<TFeatureState>> featureStateThresholds)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TFeatureState ReadDesiredState(float value, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>* featureStateThresholds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::ReadDesiredState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReadDesiredState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(featureStateThresholds)})));
      return ::il2cpp_utils::RunMethodRethrow<TFeatureState, false>(this, ___internal__method, value, featureStateThresholds);
    }
    // public System.Void ReadTouchedFeatureStates()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReadTouchedFeatureStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::ReadTouchedFeatureStates");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReadTouchedFeatureStates", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FeatureStateProvider_2::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FeatureStateProvider_2<TFeature, TFeatureState>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Oculus.Interaction.PoseDetection.FeatureStateProvider`2
  // Could not write size check! Type: Oculus.Interaction.PoseDetection.FeatureStateProvider`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
