// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::HapticsDesc, "", "OVRPlugin/HapticsDesc");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/HapticsDesc
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::HapticsDesc/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 SampleRateHz
    // Size: 0x4
    // Offset: 0x0
    int SampleRateHz;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 SampleSizeInBytes
    // Size: 0x4
    // Offset: 0x4
    int SampleSizeInBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MinimumSafeSamplesQueued
    // Size: 0x4
    // Offset: 0x8
    int MinimumSafeSamplesQueued;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MinimumBufferSamplesCount
    // Size: 0x4
    // Offset: 0xC
    int MinimumBufferSamplesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OptimalBufferSamplesCount
    // Size: 0x4
    // Offset: 0x10
    int OptimalBufferSamplesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MaximumBufferSamplesCount
    // Size: 0x4
    // Offset: 0x14
    int MaximumBufferSamplesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HapticsDesc
    constexpr HapticsDesc(int SampleRateHz_ = {}, int SampleSizeInBytes_ = {}, int MinimumSafeSamplesQueued_ = {}, int MinimumBufferSamplesCount_ = {}, int OptimalBufferSamplesCount_ = {}, int MaximumBufferSamplesCount_ = {}) noexcept : SampleRateHz{SampleRateHz_}, SampleSizeInBytes{SampleSizeInBytes_}, MinimumSafeSamplesQueued{MinimumSafeSamplesQueued_}, MinimumBufferSamplesCount{MinimumBufferSamplesCount_}, OptimalBufferSamplesCount{OptimalBufferSamplesCount_}, MaximumBufferSamplesCount{MaximumBufferSamplesCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 SampleRateHz
    [[deprecated("Use field access instead!")]] int& dyn_SampleRateHz();
    // Get instance field reference: public System.Int32 SampleSizeInBytes
    [[deprecated("Use field access instead!")]] int& dyn_SampleSizeInBytes();
    // Get instance field reference: public System.Int32 MinimumSafeSamplesQueued
    [[deprecated("Use field access instead!")]] int& dyn_MinimumSafeSamplesQueued();
    // Get instance field reference: public System.Int32 MinimumBufferSamplesCount
    [[deprecated("Use field access instead!")]] int& dyn_MinimumBufferSamplesCount();
    // Get instance field reference: public System.Int32 OptimalBufferSamplesCount
    [[deprecated("Use field access instead!")]] int& dyn_OptimalBufferSamplesCount();
    // Get instance field reference: public System.Int32 MaximumBufferSamplesCount
    [[deprecated("Use field access instead!")]] int& dyn_MaximumBufferSamplesCount();
  }; // OVRPlugin/HapticsDesc
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::HapticsDesc), 20 + sizeof(int)> __GlobalNamespace_OVRPlugin_HapticsDescSizeCheck;
  static_assert(sizeof(OVRPlugin::HapticsDesc) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
