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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::CameraDeviceIntrinsicsParameters, "", "OVRPlugin/CameraDeviceIntrinsicsParameters");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/CameraDeviceIntrinsicsParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::CameraDeviceIntrinsicsParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single fx
    // Size: 0x4
    // Offset: 0x0
    float fx;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fy
    // Size: 0x4
    // Offset: 0x4
    float fy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cx
    // Size: 0x4
    // Offset: 0x8
    float cx;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cy
    // Size: 0x4
    // Offset: 0xC
    float cy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Double disto0
    // Size: 0x8
    // Offset: 0x10
    double disto0;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double disto1
    // Size: 0x8
    // Offset: 0x18
    double disto1;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double disto2
    // Size: 0x8
    // Offset: 0x20
    double disto2;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double disto3
    // Size: 0x8
    // Offset: 0x28
    double disto3;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double disto4
    // Size: 0x8
    // Offset: 0x30
    double disto4;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single v_fov
    // Size: 0x4
    // Offset: 0x38
    float v_fov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single h_fov
    // Size: 0x4
    // Offset: 0x3C
    float h_fov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single d_fov
    // Size: 0x4
    // Offset: 0x40
    float d_fov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 w
    // Size: 0x4
    // Offset: 0x44
    int w;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 h
    // Size: 0x4
    // Offset: 0x48
    int h;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CameraDeviceIntrinsicsParameters
    constexpr CameraDeviceIntrinsicsParameters(float fx_ = {}, float fy_ = {}, float cx_ = {}, float cy_ = {}, double disto0_ = {}, double disto1_ = {}, double disto2_ = {}, double disto3_ = {}, double disto4_ = {}, float v_fov_ = {}, float h_fov_ = {}, float d_fov_ = {}, int w_ = {}, int h_ = {}) noexcept : fx{fx_}, fy{fy_}, cx{cx_}, cy{cy_}, disto0{disto0_}, disto1{disto1_}, disto2{disto2_}, disto3{disto3_}, disto4{disto4_}, v_fov{v_fov_}, h_fov{h_fov_}, d_fov{d_fov_}, w{w_}, h{h_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Single fx
    [[deprecated("Use field access instead!")]] float& dyn_fx();
    // Get instance field reference: private System.Single fy
    [[deprecated("Use field access instead!")]] float& dyn_fy();
    // Get instance field reference: private System.Single cx
    [[deprecated("Use field access instead!")]] float& dyn_cx();
    // Get instance field reference: private System.Single cy
    [[deprecated("Use field access instead!")]] float& dyn_cy();
    // Get instance field reference: private System.Double disto0
    [[deprecated("Use field access instead!")]] double& dyn_disto0();
    // Get instance field reference: private System.Double disto1
    [[deprecated("Use field access instead!")]] double& dyn_disto1();
    // Get instance field reference: private System.Double disto2
    [[deprecated("Use field access instead!")]] double& dyn_disto2();
    // Get instance field reference: private System.Double disto3
    [[deprecated("Use field access instead!")]] double& dyn_disto3();
    // Get instance field reference: private System.Double disto4
    [[deprecated("Use field access instead!")]] double& dyn_disto4();
    // Get instance field reference: private System.Single v_fov
    [[deprecated("Use field access instead!")]] float& dyn_v_fov();
    // Get instance field reference: private System.Single h_fov
    [[deprecated("Use field access instead!")]] float& dyn_h_fov();
    // Get instance field reference: private System.Single d_fov
    [[deprecated("Use field access instead!")]] float& dyn_d_fov();
    // Get instance field reference: private System.Int32 w
    [[deprecated("Use field access instead!")]] int& dyn_w();
    // Get instance field reference: private System.Int32 h
    [[deprecated("Use field access instead!")]] int& dyn_h();
  }; // OVRPlugin/CameraDeviceIntrinsicsParameters
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraDeviceIntrinsicsParameters), 72 + sizeof(int)> __GlobalNamespace_OVRPlugin_CameraDeviceIntrinsicsParametersSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraDeviceIntrinsicsParameters) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
