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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchFilterSettings
  struct BatchFilterSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchFilterSettings, "UnityEngine.Rendering", "BatchFilterSettings");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0xA
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.BatchFilterSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct BatchFilterSettings/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 renderingLayerMask
    // Size: 0x4
    // Offset: 0x0
    uint renderingLayerMask;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Byte layer
    // Size: 0x1
    // Offset: 0x4
    uint8_t layer;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_motionMode
    // Size: 0x1
    // Offset: 0x5
    uint8_t m_motionMode;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_shadowMode
    // Size: 0x1
    // Offset: 0x6
    uint8_t m_shadowMode;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_receiveShadows
    // Size: 0x1
    // Offset: 0x7
    uint8_t m_receiveShadows;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_staticShadowCaster
    // Size: 0x1
    // Offset: 0x8
    uint8_t m_staticShadowCaster;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_allDepthSorted
    // Size: 0x1
    // Offset: 0x9
    uint8_t m_allDepthSorted;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: BatchFilterSettings
    constexpr BatchFilterSettings(uint renderingLayerMask_ = {}, uint8_t layer_ = {}, uint8_t m_motionMode_ = {}, uint8_t m_shadowMode_ = {}, uint8_t m_receiveShadows_ = {}, uint8_t m_staticShadowCaster_ = {}, uint8_t m_allDepthSorted_ = {}) noexcept : renderingLayerMask{renderingLayerMask_}, layer{layer_}, m_motionMode{m_motionMode_}, m_shadowMode{m_shadowMode_}, m_receiveShadows{m_receiveShadows_}, m_staticShadowCaster{m_staticShadowCaster_}, m_allDepthSorted{m_allDepthSorted_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 renderingLayerMask
    [[deprecated("Use field access instead!")]] uint& dyn_renderingLayerMask();
    // Get instance field reference: public System.Byte layer
    [[deprecated("Use field access instead!")]] uint8_t& dyn_layer();
    // Get instance field reference: private System.Byte m_motionMode
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_motionMode();
    // Get instance field reference: private System.Byte m_shadowMode
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_shadowMode();
    // Get instance field reference: private System.Byte m_receiveShadows
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_receiveShadows();
    // Get instance field reference: private System.Byte m_staticShadowCaster
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_staticShadowCaster();
    // Get instance field reference: private System.Byte m_allDepthSorted
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_allDepthSorted();
  }; // UnityEngine.Rendering.BatchFilterSettings
  #pragma pack(pop)
  static check_size<sizeof(BatchFilterSettings), 9 + sizeof(uint8_t)> __UnityEngine_Rendering_BatchFilterSettingsSizeCheck;
  static_assert(sizeof(BatchFilterSettings) == 0xA);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
