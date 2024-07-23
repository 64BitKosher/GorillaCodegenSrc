// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Jobs.IJobParallelForTransformExtensions
#include "UnityEngine/Jobs/IJobParallelForTransformExtensions.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic`1
#include "Unity/Collections/LowLevel/Unsafe/BurstLike_SharedStatic_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Unity.Jobs.LowLevel.Unsafe.JobRanges
#include "Unity/Jobs/LowLevel/Unsafe/JobRanges.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Jobs
namespace UnityEngine::Jobs {
  // Skipping declaration: TransformJobData because it is already included!
  // Skipping declaration: ExecuteJobFunction because it is already included!
  // Forward declaring type: IJobParallelForTransform
  class IJobParallelForTransform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1, "UnityEngine.Jobs", "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1");
// Type namespace: UnityEngine.Jobs
namespace UnityEngine::Jobs {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::TransformJobData<T>
    struct TransformJobData;
    // Nested type: ::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::ExecuteJobFunction<T>
    class ExecuteJobFunction;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData
    // [TokenAttribute] Offset: FFFFFFFF
    struct TransformJobData : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType*/ {
      public:
      using declaring_type = IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>;
      static constexpr std::string_view NESTED_NAME = "TransformJobData";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public System.IntPtr TransformAccessArray
      // Size: 0x8
      // Offset: 0x0
      ::System::IntPtr TransformAccessArray;
      // Field size check
      static_assert(sizeof(::System::IntPtr) == 0x8);
      // public System.Int32 IsReadOnly
      // Size: 0x4
      // Offset: 0x0
      int IsReadOnly;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TransformJobData
      constexpr TransformJobData(::System::IntPtr TransformAccessArray_ = {}, int IsReadOnly_ = {}) noexcept : TransformAccessArray{TransformAccessArray_}, IsReadOnly{IsReadOnly_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.IntPtr TransformAccessArray
      [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_TransformAccessArray() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::TransformJobData::dyn_TransformAccessArray");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "TransformAccessArray"))->offset;
        return *reinterpret_cast<::System::IntPtr*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 IsReadOnly
      [[deprecated("Use field access instead!")]] int& dyn_IsReadOnly() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::TransformJobData::dyn_IsReadOnly");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "IsReadOnly"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData
    // Could not write size check! Type: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/ExecuteJobFunction
    // [TokenAttribute] Offset: FFFFFFFF
    class ExecuteJobFunction : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>;
      static constexpr std::string_view NESTED_NAME = "ExecuteJobFunction";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>::ExecuteJobFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::ExecuteJobFunction::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>::ExecuteJobFunction*, creationType>(object, method)));
      }
      // public System.Void Invoke(ref T jobData, System.IntPtr additionalPtr, System.IntPtr bufferRangePatchData, ref Unity.Jobs.LowLevel.Unsafe.JobRanges ranges, System.Int32 jobIndex)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Invoke(ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int jobIndex) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::ExecuteJobFunction::Invoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>::ExecuteJobFunction*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(jobData), additionalPtr, bufferRangePatchData, byref(ranges), jobIndex);
      }
    }; // UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/ExecuteJobFunction
    // Could not write size check! Type: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/ExecuteJobFunction is generic, or has no fields that are valid for size checks!
    // Creating value type constructor for type: TransformParallelForLoopStruct_1
    constexpr TransformParallelForLoopStruct_1() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static readonly Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic`1<System.IntPtr> jobReflectionData
    static ::Unity::Collections::LowLevel::Unsafe::BurstLike::SharedStatic_1<::System::IntPtr> _get_jobReflectionData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::_get_jobReflectionData");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Unity::Collections::LowLevel::Unsafe::BurstLike::SharedStatic_1<::System::IntPtr>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>>::get(), "jobReflectionData"));
    }
    // Autogenerated static field setter
    // Set static field: static readonly Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic`1<System.IntPtr> jobReflectionData
    static void _set_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike::SharedStatic_1<::System::IntPtr> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::_set_jobReflectionData");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>>::get(), "jobReflectionData", value));
    }
    // static System.Void Initialize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Initialize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::Initialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>>::get(), "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static public System.Void Execute(ref T jobData, System.IntPtr jobData2, System.IntPtr bufferRangePatchData, ref Unity.Jobs.LowLevel.Unsafe.JobRanges ranges, System.Int32 jobIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Execute(ByRef<T> jobData, ::System::IntPtr jobData2, ::System::IntPtr bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int jobIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::Execute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>>::get(), "Execute", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jobData), ::il2cpp_utils::ExtractType(jobData2), ::il2cpp_utils::ExtractType(bufferRangePatchData), ::il2cpp_utils::ExtractType(ranges), ::il2cpp_utils::ExtractType(jobIndex)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, byref(jobData), jobData2, bufferRangePatchData, byref(ranges), jobIndex);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1
  // Could not write size check! Type: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
