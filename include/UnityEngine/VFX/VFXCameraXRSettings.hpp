// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXCameraXRSettings
  struct VFXCameraXRSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXCameraXRSettings, "UnityEngine.VFX", "VFXCameraXRSettings");
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.VFX.VFXCameraXRSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  struct VFXCameraXRSettings/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 viewTotal
    // Size: 0x4
    // Offset: 0x0
    uint viewTotal;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 viewCount
    // Size: 0x4
    // Offset: 0x4
    uint viewCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 viewOffset
    // Size: 0x4
    // Offset: 0x8
    uint viewOffset;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VFXCameraXRSettings
    constexpr VFXCameraXRSettings(uint viewTotal_ = {}, uint viewCount_ = {}, uint viewOffset_ = {}) noexcept : viewTotal{viewTotal_}, viewCount{viewCount_}, viewOffset{viewOffset_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 viewTotal
    [[deprecated("Use field access instead!")]] uint& dyn_viewTotal();
    // Get instance field reference: public System.UInt32 viewCount
    [[deprecated("Use field access instead!")]] uint& dyn_viewCount();
    // Get instance field reference: public System.UInt32 viewOffset
    [[deprecated("Use field access instead!")]] uint& dyn_viewOffset();
  }; // UnityEngine.VFX.VFXCameraXRSettings
  #pragma pack(pop)
  static check_size<sizeof(VFXCameraXRSettings), 8 + sizeof(uint)> __UnityEngine_VFX_VFXCameraXRSettingsSizeCheck;
  static_assert(sizeof(VFXCameraXRSettings) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
