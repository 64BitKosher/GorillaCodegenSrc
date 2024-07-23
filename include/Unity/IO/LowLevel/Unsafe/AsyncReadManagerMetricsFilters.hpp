// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.IO.LowLevel.Unsafe.ProcessingState
#include "Unity/IO/LowLevel/Unsafe/ProcessingState.hpp"
// Including type: Unity.IO.LowLevel.Unsafe.FileReadType
#include "Unity/IO/LowLevel/Unsafe/FileReadType.hpp"
// Including type: Unity.IO.LowLevel.Unsafe.Priority
#include "Unity/IO/LowLevel/Unsafe/Priority.hpp"
// Including type: Unity.IO.LowLevel.Unsafe.AssetLoadingSubsystem
#include "Unity/IO/LowLevel/Unsafe/AssetLoadingSubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Unity.IO.LowLevel.Unsafe
namespace Unity::IO::LowLevel::Unsafe {
  // Forward declaring type: AsyncReadManagerMetricsFilters
  class AsyncReadManagerMetricsFilters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters);
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters*, "Unity.IO.LowLevel.Unsafe", "AsyncReadManagerMetricsFilters");
// Type namespace: Unity.IO.LowLevel.Unsafe
namespace Unity::IO::LowLevel::Unsafe {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeAsStructAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: FFFFFFFF
  class AsyncReadManagerMetricsFilters : public ::Il2CppObject {
    public:
    public:
    // System.UInt64[] TypeIDs
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint64_t> TypeIDs;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // Unity.IO.LowLevel.Unsafe.ProcessingState[] States
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState> States;
    // Field size check
    static_assert(sizeof(::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState>) == 0x8);
    // Unity.IO.LowLevel.Unsafe.FileReadType[] ReadTypes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType> ReadTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType>) == 0x8);
    // Unity.IO.LowLevel.Unsafe.Priority[] PriorityLevels
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority> PriorityLevels;
    // Field size check
    static_assert(sizeof(::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority>) == 0x8);
    // Unity.IO.LowLevel.Unsafe.AssetLoadingSubsystem[] Subsystems
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> Subsystems;
    // Field size check
    static_assert(sizeof(::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>) == 0x8);
    public:
    // Get instance field reference: System.UInt64[] TypeIDs
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_TypeIDs();
    // Get instance field reference: Unity.IO.LowLevel.Unsafe.ProcessingState[] States
    [[deprecated("Use field access instead!")]] ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState>& dyn_States();
    // Get instance field reference: Unity.IO.LowLevel.Unsafe.FileReadType[] ReadTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType>& dyn_ReadTypes();
    // Get instance field reference: Unity.IO.LowLevel.Unsafe.Priority[] PriorityLevels
    [[deprecated("Use field access instead!")]] ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority>& dyn_PriorityLevels();
    // Get instance field reference: Unity.IO.LowLevel.Unsafe.AssetLoadingSubsystem[] Subsystems
    [[deprecated("Use field access instead!")]] ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>& dyn_Subsystems();
  }; // Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters
  #pragma pack(pop)
  static check_size<sizeof(AsyncReadManagerMetricsFilters), 48 + sizeof(::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>)> __Unity_IO_LowLevel_Unsafe_AsyncReadManagerMetricsFiltersSizeCheck;
  static_assert(sizeof(AsyncReadManagerMetricsFilters) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
