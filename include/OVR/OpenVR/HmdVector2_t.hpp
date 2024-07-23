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
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdVector2_t, "OVR.OpenVR", "HmdVector2_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdVector2_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdVector2_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single v0
    // Size: 0x4
    // Offset: 0x0
    float v0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single v1
    // Size: 0x4
    // Offset: 0x4
    float v1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: HmdVector2_t
    constexpr HmdVector2_t(float v0_ = {}, float v1_ = {}) noexcept : v0{v0_}, v1{v1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single v0
    [[deprecated("Use field access instead!")]] float& dyn_v0();
    // Get instance field reference: public System.Single v1
    [[deprecated("Use field access instead!")]] float& dyn_v1();
  }; // OVR.OpenVR.HmdVector2_t
  #pragma pack(pop)
  static check_size<sizeof(HmdVector2_t), 4 + sizeof(float)> __OVR_OpenVR_HmdVector2_tSizeCheck;
  static_assert(sizeof(HmdVector2_t) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
