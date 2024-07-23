// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VREvent_WebConsole_t
  struct VREvent_WebConsole_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_WebConsole_t, "OVR.OpenVR", "VREvent_WebConsole_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_WebConsole_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_WebConsole_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 webConsoleHandle
    // Size: 0x8
    // Offset: 0x0
    uint64_t webConsoleHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: VREvent_WebConsole_t
    constexpr VREvent_WebConsole_t(uint64_t webConsoleHandle_ = {}) noexcept : webConsoleHandle{webConsoleHandle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return webConsoleHandle;
    }
    // Get instance field reference: public System.UInt64 webConsoleHandle
    [[deprecated("Use field access instead!")]] uint64_t& dyn_webConsoleHandle();
  }; // OVR.OpenVR.VREvent_WebConsole_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_WebConsole_t), 0 + sizeof(uint64_t)> __OVR_OpenVR_VREvent_WebConsole_tSizeCheck;
  static_assert(sizeof(VREvent_WebConsole_t) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
