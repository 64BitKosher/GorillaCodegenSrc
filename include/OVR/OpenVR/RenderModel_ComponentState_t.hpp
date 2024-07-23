// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_ComponentState_t, "OVR.OpenVR", "RenderModel_ComponentState_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x64
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.RenderModel_ComponentState_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_ComponentState_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVR.OpenVR.HmdMatrix34_t mTrackingToComponentRenderModel
    // Size: 0x30
    // Offset: 0x0
    ::OVR::OpenVR::HmdMatrix34_t mTrackingToComponentRenderModel;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::HmdMatrix34_t) == 0x30);
    // public OVR.OpenVR.HmdMatrix34_t mTrackingToComponentLocal
    // Size: 0x30
    // Offset: 0x30
    ::OVR::OpenVR::HmdMatrix34_t mTrackingToComponentLocal;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::HmdMatrix34_t) == 0x30);
    // public System.UInt32 uProperties
    // Size: 0x4
    // Offset: 0x60
    uint uProperties;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: RenderModel_ComponentState_t
    constexpr RenderModel_ComponentState_t(::OVR::OpenVR::HmdMatrix34_t mTrackingToComponentRenderModel_ = {}, ::OVR::OpenVR::HmdMatrix34_t mTrackingToComponentLocal_ = {}, uint uProperties_ = {}) noexcept : mTrackingToComponentRenderModel{mTrackingToComponentRenderModel_}, mTrackingToComponentLocal{mTrackingToComponentLocal_}, uProperties{uProperties_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.HmdMatrix34_t mTrackingToComponentRenderModel
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::HmdMatrix34_t& dyn_mTrackingToComponentRenderModel();
    // Get instance field reference: public OVR.OpenVR.HmdMatrix34_t mTrackingToComponentLocal
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::HmdMatrix34_t& dyn_mTrackingToComponentLocal();
    // Get instance field reference: public System.UInt32 uProperties
    [[deprecated("Use field access instead!")]] uint& dyn_uProperties();
  }; // OVR.OpenVR.RenderModel_ComponentState_t
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_ComponentState_t), 96 + sizeof(uint)> __OVR_OpenVR_RenderModel_ComponentState_tSizeCheck;
  static_assert(sizeof(RenderModel_ComponentState_t) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
