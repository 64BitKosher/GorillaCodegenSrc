// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Skipping declaration: ExecuteJobFunction because it is already included!
  // Forward declaring type: IAnimationJob
  class IAnimationJob;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: ProcessAnimationJobStruct`1<T>
  template<typename T>
  struct ProcessAnimationJobStruct_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Animations::ProcessAnimationJobStruct_1, "UnityEngine.Animations", "ProcessAnimationJobStruct`1");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.ProcessAnimationJobStruct`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct ProcessAnimationJobStruct_1/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::Animations::ProcessAnimationJobStruct_1::ExecuteJobFunction<T>
    class ExecuteJobFunction;
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.Animations.ProcessAnimationJobStruct`1/ExecuteJobFunction
    // [TokenAttribute] Offset: FFFFFFFF
    class ExecuteJobFunction : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = ProcessAnimationJobStruct_1<T>;
      static constexpr std::string_view NESTED_NAME = "ExecuteJobFunction";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ProcessAnimationJobStruct_1<T>::ExecuteJobFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::ProcessAnimationJobStruct_1::ExecuteJobFunction::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ProcessAnimationJobStruct_1<T>::ExecuteJobFunction*, creationType>(object, method)));
      }
      // public System.Void Invoke(ref T data, System.IntPtr animationStreamPtr, System.IntPtr unusedPtr, ref Unity.Jobs.LowLevel.Unsafe.JobRanges ranges, System.Int32 jobIndex)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Invoke(ByRef<T> data, ::System::IntPtr animationStreamPtr, ::System::IntPtr unusedPtr, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int jobIndex) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::ProcessAnimationJobStruct_1::ExecuteJobFunction::Invoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::Animations::ProcessAnimationJobStruct_1<T>::ExecuteJobFunction*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(data), animationStreamPtr, unusedPtr, byref(ranges), jobIndex);
      }
    }; // UnityEngine.Animations.ProcessAnimationJobStruct`1/ExecuteJobFunction
    // Could not write size check! Type: UnityEngine.Animations.ProcessAnimationJobStruct`1/ExecuteJobFunction is generic, or has no fields that are valid for size checks!
    // Creating value type constructor for type: ProcessAnimationJobStruct_1
    constexpr ProcessAnimationJobStruct_1() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.IntPtr jobReflectionData
    static ::System::IntPtr _get_jobReflectionData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::ProcessAnimationJobStruct_1::_get_jobReflectionData");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::IntPtr>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ProcessAnimationJobStruct_1<T>>::get(), "jobReflectionData"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.IntPtr jobReflectionData
    static void _set_jobReflectionData(::System::IntPtr value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::ProcessAnimationJobStruct_1::_set_jobReflectionData");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ProcessAnimationJobStruct_1<T>>::get(), "jobReflectionData", value));
    }
    // static public System.IntPtr GetJobReflectionData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::IntPtr GetJobReflectionData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::ProcessAnimationJobStruct_1::GetJobReflectionData");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ProcessAnimationJobStruct_1<T>>::get(), "GetJobReflectionData", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::IntPtr, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static public System.Void Execute(ref T data, System.IntPtr animationStreamPtr, System.IntPtr methodIndex, ref Unity.Jobs.LowLevel.Unsafe.JobRanges ranges, System.Int32 jobIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Execute(ByRef<T> data, ::System::IntPtr animationStreamPtr, ::System::IntPtr methodIndex, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int jobIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::ProcessAnimationJobStruct_1::Execute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ProcessAnimationJobStruct_1<T>>::get(), "Execute", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data), ::il2cpp_utils::ExtractType(animationStreamPtr), ::il2cpp_utils::ExtractType(methodIndex), ::il2cpp_utils::ExtractType(ranges), ::il2cpp_utils::ExtractType(jobIndex)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, byref(data), animationStreamPtr, methodIndex, byref(ranges), jobIndex);
    }
  }; // UnityEngine.Animations.ProcessAnimationJobStruct`1
  // Could not write size check! Type: UnityEngine.Animations.ProcessAnimationJobStruct`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
