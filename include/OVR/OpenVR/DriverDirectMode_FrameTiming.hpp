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
  // Forward declaring type: DriverDirectMode_FrameTiming
  struct DriverDirectMode_FrameTiming;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::DriverDirectMode_FrameTiming, "OVR.OpenVR", "DriverDirectMode_FrameTiming");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.DriverDirectMode_FrameTiming
  // [TokenAttribute] Offset: FFFFFFFF
  struct DriverDirectMode_FrameTiming/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 m_nSize
    // Size: 0x4
    // Offset: 0x0
    uint m_nSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumFramePresents
    // Size: 0x4
    // Offset: 0x4
    uint m_nNumFramePresents;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumMisPresented
    // Size: 0x4
    // Offset: 0x8
    uint m_nNumMisPresented;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumDroppedFrames
    // Size: 0x4
    // Offset: 0xC
    uint m_nNumDroppedFrames;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nReprojectionFlags
    // Size: 0x4
    // Offset: 0x10
    uint m_nReprojectionFlags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: DriverDirectMode_FrameTiming
    constexpr DriverDirectMode_FrameTiming(uint m_nSize_ = {}, uint m_nNumFramePresents_ = {}, uint m_nNumMisPresented_ = {}, uint m_nNumDroppedFrames_ = {}, uint m_nReprojectionFlags_ = {}) noexcept : m_nSize{m_nSize_}, m_nNumFramePresents{m_nNumFramePresents_}, m_nNumMisPresented{m_nNumMisPresented_}, m_nNumDroppedFrames{m_nNumDroppedFrames_}, m_nReprojectionFlags{m_nReprojectionFlags_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 m_nSize
    [[deprecated("Use field access instead!")]] uint& dyn_m_nSize();
    // Get instance field reference: public System.UInt32 m_nNumFramePresents
    [[deprecated("Use field access instead!")]] uint& dyn_m_nNumFramePresents();
    // Get instance field reference: public System.UInt32 m_nNumMisPresented
    [[deprecated("Use field access instead!")]] uint& dyn_m_nNumMisPresented();
    // Get instance field reference: public System.UInt32 m_nNumDroppedFrames
    [[deprecated("Use field access instead!")]] uint& dyn_m_nNumDroppedFrames();
    // Get instance field reference: public System.UInt32 m_nReprojectionFlags
    [[deprecated("Use field access instead!")]] uint& dyn_m_nReprojectionFlags();
  }; // OVR.OpenVR.DriverDirectMode_FrameTiming
  #pragma pack(pop)
  static check_size<sizeof(DriverDirectMode_FrameTiming), 16 + sizeof(uint)> __OVR_OpenVR_DriverDirectMode_FrameTimingSizeCheck;
  static_assert(sizeof(DriverDirectMode_FrameTiming) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
