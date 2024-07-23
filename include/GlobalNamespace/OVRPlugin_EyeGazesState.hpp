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
// Including type: OVRPlugin/EyeGazeState
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::EyeGazesState, "", "OVRPlugin/EyeGazesState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/EyeGazesState
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::EyeGazesState/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/EyeGazeState[] EyeGazes
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::GlobalNamespace::OVRPlugin::EyeGazeState> EyeGazes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::EyeGazeState>) == 0x8);
    // public System.Double Time
    // Size: 0x8
    // Offset: 0x8
    double Time;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: EyeGazesState
    constexpr EyeGazesState(::ArrayW<::GlobalNamespace::OVRPlugin::EyeGazeState> EyeGazes_ = ::ArrayW<::GlobalNamespace::OVRPlugin::EyeGazeState>(static_cast<void*>(nullptr)), double Time_ = {}) noexcept : EyeGazes{EyeGazes_}, Time{Time_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/EyeGazeState[] EyeGazes
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRPlugin::EyeGazeState>& dyn_EyeGazes();
    // Get instance field reference: public System.Double Time
    [[deprecated("Use field access instead!")]] double& dyn_Time();
  }; // OVRPlugin/EyeGazesState
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::EyeGazesState), 8 + sizeof(double)> __GlobalNamespace_OVRPlugin_EyeGazesStateSizeCheck;
  static_assert(sizeof(OVRPlugin::EyeGazesState) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
