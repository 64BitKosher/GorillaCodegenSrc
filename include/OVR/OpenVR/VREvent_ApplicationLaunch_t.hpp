// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VREvent_ApplicationLaunch_t
  struct VREvent_ApplicationLaunch_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_ApplicationLaunch_t, "OVR.OpenVR", "VREvent_ApplicationLaunch_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_ApplicationLaunch_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_ApplicationLaunch_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 pid
    // Size: 0x4
    // Offset: 0x0
    uint pid;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 unArgsHandle
    // Size: 0x4
    // Offset: 0x4
    uint unArgsHandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_ApplicationLaunch_t
    constexpr VREvent_ApplicationLaunch_t(uint pid_ = {}, uint unArgsHandle_ = {}) noexcept : pid{pid_}, unArgsHandle{unArgsHandle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 pid
    [[deprecated("Use field access instead!")]] uint& dyn_pid();
    // Get instance field reference: public System.UInt32 unArgsHandle
    [[deprecated("Use field access instead!")]] uint& dyn_unArgsHandle();
  }; // OVR.OpenVR.VREvent_ApplicationLaunch_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_ApplicationLaunch_t), 4 + sizeof(uint)> __OVR_OpenVR_VREvent_ApplicationLaunch_tSizeCheck;
  static_assert(sizeof(VREvent_ApplicationLaunch_t) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
