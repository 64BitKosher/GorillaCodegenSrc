// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Unity.Jobs.LowLevel.Unsafe
namespace Unity::Jobs::LowLevel::Unsafe {
  // Forward declaring type: JobRanges
  struct JobRanges;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobRanges, "Unity.Jobs.LowLevel.Unsafe", "JobRanges");
// Type namespace: Unity.Jobs.LowLevel.Unsafe
namespace Unity::Jobs::LowLevel::Unsafe {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Jobs.LowLevel.Unsafe.JobRanges
  // [TokenAttribute] Offset: FFFFFFFF
  struct JobRanges/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int32 BatchSize
    // Size: 0x4
    // Offset: 0x0
    int BatchSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 NumJobs
    // Size: 0x4
    // Offset: 0x4
    int NumJobs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 TotalIterationCount
    // Size: 0x4
    // Offset: 0x8
    int TotalIterationCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: TotalIterationCount and: StartEndIndex
    char __padding2[0x4] = {};
    // System.IntPtr StartEndIndex
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr StartEndIndex;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: JobRanges
    constexpr JobRanges(int BatchSize_ = {}, int NumJobs_ = {}, int TotalIterationCount_ = {}, ::System::IntPtr StartEndIndex_ = {}) noexcept : BatchSize{BatchSize_}, NumJobs{NumJobs_}, TotalIterationCount{TotalIterationCount_}, StartEndIndex{StartEndIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Int32 BatchSize
    [[deprecated("Use field access instead!")]] int& dyn_BatchSize();
    // Get instance field reference: System.Int32 NumJobs
    [[deprecated("Use field access instead!")]] int& dyn_NumJobs();
    // Get instance field reference: public System.Int32 TotalIterationCount
    [[deprecated("Use field access instead!")]] int& dyn_TotalIterationCount();
    // Get instance field reference: System.IntPtr StartEndIndex
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_StartEndIndex();
  }; // Unity.Jobs.LowLevel.Unsafe.JobRanges
  #pragma pack(pop)
  static check_size<sizeof(JobRanges), 16 + sizeof(::System::IntPtr)> __Unity_Jobs_LowLevel_Unsafe_JobRangesSizeCheck;
  static_assert(sizeof(JobRanges) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"