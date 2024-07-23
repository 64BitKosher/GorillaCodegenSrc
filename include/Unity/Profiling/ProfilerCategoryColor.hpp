// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Unity.Profiling
namespace Unity::Profiling {
  // Forward declaring type: ProfilerCategoryColor
  struct ProfilerCategoryColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerCategoryColor, "Unity.Profiling", "ProfilerCategoryColor");
// Type namespace: Unity.Profiling
namespace Unity::Profiling {
  // Size: 0x2
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Profiling.ProfilerCategoryColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct ProfilerCategoryColor/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt16 value__
    // Size: 0x2
    // Offset: 0x0
    uint16_t value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: ProfilerCategoryColor
    constexpr ProfilerCategoryColor(uint16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Render
    static constexpr const uint16_t Render = 0u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Render
    static ::Unity::Profiling::ProfilerCategoryColor _get_Render();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Render
    static void _set_Render(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Scripts
    static constexpr const uint16_t Scripts = 1u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Scripts
    static ::Unity::Profiling::ProfilerCategoryColor _get_Scripts();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Scripts
    static void _set_Scripts(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor BurstJobs
    static constexpr const uint16_t BurstJobs = 2u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor BurstJobs
    static ::Unity::Profiling::ProfilerCategoryColor _get_BurstJobs();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor BurstJobs
    static void _set_BurstJobs(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Other
    static constexpr const uint16_t Other = 3u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Other
    static ::Unity::Profiling::ProfilerCategoryColor _get_Other();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Other
    static void _set_Other(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Physics
    static constexpr const uint16_t Physics = 4u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Physics
    static ::Unity::Profiling::ProfilerCategoryColor _get_Physics();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Physics
    static void _set_Physics(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Animation
    static constexpr const uint16_t Animation = 5u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Animation
    static ::Unity::Profiling::ProfilerCategoryColor _get_Animation();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Animation
    static void _set_Animation(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Audio
    static constexpr const uint16_t Audio = 6u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Audio
    static ::Unity::Profiling::ProfilerCategoryColor _get_Audio();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Audio
    static void _set_Audio(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor AudioJob
    static constexpr const uint16_t AudioJob = 7u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor AudioJob
    static ::Unity::Profiling::ProfilerCategoryColor _get_AudioJob();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor AudioJob
    static void _set_AudioJob(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor AudioUpdateJob
    static constexpr const uint16_t AudioUpdateJob = 8u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor AudioUpdateJob
    static ::Unity::Profiling::ProfilerCategoryColor _get_AudioUpdateJob();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor AudioUpdateJob
    static void _set_AudioUpdateJob(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Lighting
    static constexpr const uint16_t Lighting = 9u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Lighting
    static ::Unity::Profiling::ProfilerCategoryColor _get_Lighting();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Lighting
    static void _set_Lighting(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor GC
    static constexpr const uint16_t GC = 10u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor GC
    static ::Unity::Profiling::ProfilerCategoryColor _get_GC();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor GC
    static void _set_GC(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor VSync
    static constexpr const uint16_t VSync = 11u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor VSync
    static ::Unity::Profiling::ProfilerCategoryColor _get_VSync();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor VSync
    static void _set_VSync(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Memory
    static constexpr const uint16_t Memory = 12u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Memory
    static ::Unity::Profiling::ProfilerCategoryColor _get_Memory();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Memory
    static void _set_Memory(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Internal
    static constexpr const uint16_t Internal = 13u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Internal
    static ::Unity::Profiling::ProfilerCategoryColor _get_Internal();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Internal
    static void _set_Internal(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor UI
    static constexpr const uint16_t UI = 14u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor UI
    static ::Unity::Profiling::ProfilerCategoryColor _get_UI();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor UI
    static void _set_UI(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Build
    static constexpr const uint16_t Build = 15u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Build
    static ::Unity::Profiling::ProfilerCategoryColor _get_Build();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Build
    static void _set_Build(::Unity::Profiling::ProfilerCategoryColor value);
    // static field const value: static public Unity.Profiling.ProfilerCategoryColor Input
    static constexpr const uint16_t Input = 16u;
    // Get static field: static public Unity.Profiling.ProfilerCategoryColor Input
    static ::Unity::Profiling::ProfilerCategoryColor _get_Input();
    // Set static field: static public Unity.Profiling.ProfilerCategoryColor Input
    static void _set_Input(::Unity::Profiling::ProfilerCategoryColor value);
    // Get instance field reference: public System.UInt16 value__
    [[deprecated("Use field access instead!")]] uint16_t& dyn_value__();
  }; // Unity.Profiling.ProfilerCategoryColor
  #pragma pack(pop)
  static check_size<sizeof(ProfilerCategoryColor), 0 + sizeof(uint16_t)> __Unity_Profiling_ProfilerCategoryColorSizeCheck;
  static_assert(sizeof(ProfilerCategoryColor) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
