// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Burst.LowLevel.BurstCompilerService
#include "Unity/Burst/LowLevel/BurstCompilerService.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType, "Unity.Burst.LowLevel", "BurstCompilerService/BurstLogType");
// Type namespace: Unity.Burst.LowLevel
namespace Unity::Burst::LowLevel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.LowLevel.BurstCompilerService/BurstLogType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BurstCompilerService::BurstLogType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BurstLogType
    constexpr BurstLogType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Info
    static constexpr const int Info = 0;
    // Get static field: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Info
    static ::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType _get_Info();
    // Set static field: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Info
    static void _set_Info(::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType value);
    // static field const value: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Warning
    static constexpr const int Warning = 1;
    // Get static field: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Warning
    static ::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType _get_Warning();
    // Set static field: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Warning
    static void _set_Warning(::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType value);
    // static field const value: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Error
    static constexpr const int Error = 2;
    // Get static field: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Error
    static ::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType _get_Error();
    // Set static field: static public Unity.Burst.LowLevel.BurstCompilerService/BurstLogType Error
    static void _set_Error(::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.Burst.LowLevel.BurstCompilerService/BurstLogType
  #pragma pack(pop)
  static check_size<sizeof(BurstCompilerService::BurstLogType), 0 + sizeof(int)> __Unity_Burst_LowLevel_BurstCompilerService_BurstLogTypeSizeCheck;
  static_assert(sizeof(BurstCompilerService::BurstLogType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"