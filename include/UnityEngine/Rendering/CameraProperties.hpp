// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Rendering.CoreCameraValues
#include "UnityEngine/Rendering/CoreCameraValues.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CameraProperties
  struct CameraProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraProperties, "UnityEngine.Rendering", "CameraProperties");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x3E0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.CameraProperties
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct CameraProperties/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*/ {
    public:
    // Nested type: ::UnityEngine::Rendering::CameraProperties::$layerCullDistances$e__FixedBuffer
    struct $layerCullDistances$e__FixedBuffer;
    // Nested type: ::UnityEngine::Rendering::CameraProperties::$m_CameraCullPlanes$e__FixedBuffer
    struct $m_CameraCullPlanes$e__FixedBuffer;
    // Nested type: ::UnityEngine::Rendering::CameraProperties::$m_ShadowCullPlanes$e__FixedBuffer
    struct $m_ShadowCullPlanes$e__FixedBuffer;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $layerCullDistances$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single FixedElementField
      // Size: 0x4
      // Offset: 0x0
      float FixedElementField;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: $layerCullDistances$e__FixedBuffer
      constexpr $layerCullDistances$e__FixedBuffer(float FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator float
      constexpr operator float() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Single FixedElementField
      [[deprecated("Use field access instead!")]] float& dyn_FixedElementField();
    }; // UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(CameraProperties::$layerCullDistances$e__FixedBuffer), 0 + sizeof(float)> __UnityEngine_Rendering_CameraProperties_$layerCullDistances$e__FixedBufferSizeCheck;
    static_assert(sizeof(CameraProperties::$layerCullDistances$e__FixedBuffer) == 0x4);
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $m_CameraCullPlanes$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $m_CameraCullPlanes$e__FixedBuffer
      constexpr $m_CameraCullPlanes$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      [[deprecated("Use field access instead!")]] uint8_t& dyn_FixedElementField();
    }; // UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(CameraProperties::$m_CameraCullPlanes$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_Rendering_CameraProperties_$m_CameraCullPlanes$e__FixedBufferSizeCheck;
    static_assert(sizeof(CameraProperties::$m_CameraCullPlanes$e__FixedBuffer) == 0x1);
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $m_ShadowCullPlanes$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $m_ShadowCullPlanes$e__FixedBuffer
      constexpr $m_ShadowCullPlanes$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      [[deprecated("Use field access instead!")]] uint8_t& dyn_FixedElementField();
    }; // UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(CameraProperties::$m_ShadowCullPlanes$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_Rendering_CameraProperties_$m_ShadowCullPlanes$e__FixedBufferSizeCheck;
    static_assert(sizeof(CameraProperties::$m_ShadowCullPlanes$e__FixedBuffer) == 0x1);
    public:
    // private UnityEngine.Rect screenRect
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Rect screenRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private UnityEngine.Vector3 viewDir
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 viewDir;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single projectionNear
    // Size: 0x4
    // Offset: 0x1C
    float projectionNear;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single projectionFar
    // Size: 0x4
    // Offset: 0x20
    float projectionFar;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cameraNear
    // Size: 0x4
    // Offset: 0x24
    float cameraNear;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cameraFar
    // Size: 0x4
    // Offset: 0x28
    float cameraFar;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cameraAspect
    // Size: 0x4
    // Offset: 0x2C
    float cameraAspect;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Matrix4x4 cameraToWorld
    // Size: 0x40
    // Offset: 0x30
    ::UnityEngine::Matrix4x4 cameraToWorld;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Matrix4x4 actualWorldToClip
    // Size: 0x40
    // Offset: 0x70
    ::UnityEngine::Matrix4x4 actualWorldToClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Matrix4x4 cameraClipToWorld
    // Size: 0x40
    // Offset: 0xB0
    ::UnityEngine::Matrix4x4 cameraClipToWorld;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Matrix4x4 cameraWorldToClip
    // Size: 0x40
    // Offset: 0xF0
    ::UnityEngine::Matrix4x4 cameraWorldToClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Matrix4x4 implicitProjection
    // Size: 0x40
    // Offset: 0x130
    ::UnityEngine::Matrix4x4 implicitProjection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Matrix4x4 stereoWorldToClipLeft
    // Size: 0x40
    // Offset: 0x170
    ::UnityEngine::Matrix4x4 stereoWorldToClipLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Matrix4x4 stereoWorldToClipRight
    // Size: 0x40
    // Offset: 0x1B0
    ::UnityEngine::Matrix4x4 stereoWorldToClipRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Matrix4x4 worldToCamera
    // Size: 0x40
    // Offset: 0x1F0
    ::UnityEngine::Matrix4x4 worldToCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Vector3 up
    // Size: 0xC
    // Offset: 0x230
    ::UnityEngine::Vector3 up;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 right
    // Size: 0xC
    // Offset: 0x23C
    ::UnityEngine::Vector3 right;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 transformDirection
    // Size: 0xC
    // Offset: 0x248
    ::UnityEngine::Vector3 transformDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 cameraEuler
    // Size: 0xC
    // Offset: 0x254
    ::UnityEngine::Vector3 cameraEuler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 velocity
    // Size: 0xC
    // Offset: 0x260
    ::UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single farPlaneWorldSpaceLength
    // Size: 0x4
    // Offset: 0x26C
    float farPlaneWorldSpaceLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.UInt32 rendererCount
    // Size: 0x4
    // Offset: 0x270
    uint rendererCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer m_ShadowCullPlanes
    // Size: 0x1
    // Offset: 0x274
    ::UnityEngine::Rendering::CameraProperties::$m_ShadowCullPlanes$e__FixedBuffer m_ShadowCullPlanes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CameraProperties::$m_ShadowCullPlanes$e__FixedBuffer) == 0x1);
    // Padding between fields: m_ShadowCullPlanes and: m_CameraCullPlanes
    char __padding22[0x5F] = {};
    // UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer m_CameraCullPlanes
    // Size: 0x1
    // Offset: 0x2D4
    ::UnityEngine::Rendering::CameraProperties::$m_CameraCullPlanes$e__FixedBuffer m_CameraCullPlanes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CameraProperties::$m_CameraCullPlanes$e__FixedBuffer) == 0x1);
    // Padding between fields: m_CameraCullPlanes and: baseFarDistance
    char __padding23[0x5F] = {};
    // private System.Single baseFarDistance
    // Size: 0x4
    // Offset: 0x334
    float baseFarDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 shadowCullCenter
    // Size: 0xC
    // Offset: 0x338
    ::UnityEngine::Vector3 shadowCullCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer layerCullDistances
    // Size: 0x4
    // Offset: 0x344
    ::UnityEngine::Rendering::CameraProperties::$layerCullDistances$e__FixedBuffer layerCullDistances;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CameraProperties::$layerCullDistances$e__FixedBuffer) == 0x4);
    // Padding between fields: layerCullDistances and: layerCullSpherical
    char __padding26[0x7C] = {};
    // private System.Int32 layerCullSpherical
    // Size: 0x4
    // Offset: 0x3C4
    int layerCullSpherical;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Rendering.CoreCameraValues coreCameraValues
    // Size: 0xC
    // Offset: 0x3C8
    ::UnityEngine::Rendering::CoreCameraValues coreCameraValues;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CoreCameraValues) == 0xC);
    // private System.UInt32 cameraType
    // Size: 0x4
    // Offset: 0x3D4
    uint cameraType;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 projectionIsOblique
    // Size: 0x4
    // Offset: 0x3D8
    int projectionIsOblique;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 isImplicitProjectionMatrix
    // Size: 0x4
    // Offset: 0x3DC
    int isImplicitProjectionMatrix;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CameraProperties
    constexpr CameraProperties(::UnityEngine::Rect screenRect_ = {}, ::UnityEngine::Vector3 viewDir_ = {}, float projectionNear_ = {}, float projectionFar_ = {}, float cameraNear_ = {}, float cameraFar_ = {}, float cameraAspect_ = {}, ::UnityEngine::Matrix4x4 cameraToWorld_ = {}, ::UnityEngine::Matrix4x4 actualWorldToClip_ = {}, ::UnityEngine::Matrix4x4 cameraClipToWorld_ = {}, ::UnityEngine::Matrix4x4 cameraWorldToClip_ = {}, ::UnityEngine::Matrix4x4 implicitProjection_ = {}, ::UnityEngine::Matrix4x4 stereoWorldToClipLeft_ = {}, ::UnityEngine::Matrix4x4 stereoWorldToClipRight_ = {}, ::UnityEngine::Matrix4x4 worldToCamera_ = {}, ::UnityEngine::Vector3 up_ = {}, ::UnityEngine::Vector3 right_ = {}, ::UnityEngine::Vector3 transformDirection_ = {}, ::UnityEngine::Vector3 cameraEuler_ = {}, ::UnityEngine::Vector3 velocity_ = {}, float farPlaneWorldSpaceLength_ = {}, uint rendererCount_ = {}, ::UnityEngine::Rendering::CameraProperties::$m_ShadowCullPlanes$e__FixedBuffer m_ShadowCullPlanes_ = {}, ::UnityEngine::Rendering::CameraProperties::$m_CameraCullPlanes$e__FixedBuffer m_CameraCullPlanes_ = {}, float baseFarDistance_ = {}, ::UnityEngine::Vector3 shadowCullCenter_ = {}, ::UnityEngine::Rendering::CameraProperties::$layerCullDistances$e__FixedBuffer layerCullDistances_ = {}, int layerCullSpherical_ = {}, ::UnityEngine::Rendering::CoreCameraValues coreCameraValues_ = {}, uint cameraType_ = {}, int projectionIsOblique_ = {}, int isImplicitProjectionMatrix_ = {}) noexcept : screenRect{screenRect_}, viewDir{viewDir_}, projectionNear{projectionNear_}, projectionFar{projectionFar_}, cameraNear{cameraNear_}, cameraFar{cameraFar_}, cameraAspect{cameraAspect_}, cameraToWorld{cameraToWorld_}, actualWorldToClip{actualWorldToClip_}, cameraClipToWorld{cameraClipToWorld_}, cameraWorldToClip{cameraWorldToClip_}, implicitProjection{implicitProjection_}, stereoWorldToClipLeft{stereoWorldToClipLeft_}, stereoWorldToClipRight{stereoWorldToClipRight_}, worldToCamera{worldToCamera_}, up{up_}, right{right_}, transformDirection{transformDirection_}, cameraEuler{cameraEuler_}, velocity{velocity_}, farPlaneWorldSpaceLength{farPlaneWorldSpaceLength_}, rendererCount{rendererCount_}, m_ShadowCullPlanes{m_ShadowCullPlanes_}, m_CameraCullPlanes{m_CameraCullPlanes_}, baseFarDistance{baseFarDistance_}, shadowCullCenter{shadowCullCenter_}, layerCullDistances{layerCullDistances_}, layerCullSpherical{layerCullSpherical_}, coreCameraValues{coreCameraValues_}, cameraType{cameraType_}, projectionIsOblique{projectionIsOblique_}, isImplicitProjectionMatrix{isImplicitProjectionMatrix_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*>(this);
    }
    // static field const value: static private System.Int32 k_NumLayers
    static constexpr const int k_NumLayers = 32;
    // Get static field: static private System.Int32 k_NumLayers
    static int _get_k_NumLayers();
    // Set static field: static private System.Int32 k_NumLayers
    static void _set_k_NumLayers(int value);
    // static field const value: static private System.Int32 k_PlaneCount
    static constexpr const int k_PlaneCount = 6;
    // Get static field: static private System.Int32 k_PlaneCount
    static int _get_k_PlaneCount();
    // Set static field: static private System.Int32 k_PlaneCount
    static void _set_k_PlaneCount(int value);
    // Get instance field reference: private UnityEngine.Rect screenRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_screenRect();
    // Get instance field reference: private UnityEngine.Vector3 viewDir
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_viewDir();
    // Get instance field reference: private System.Single projectionNear
    [[deprecated("Use field access instead!")]] float& dyn_projectionNear();
    // Get instance field reference: private System.Single projectionFar
    [[deprecated("Use field access instead!")]] float& dyn_projectionFar();
    // Get instance field reference: private System.Single cameraNear
    [[deprecated("Use field access instead!")]] float& dyn_cameraNear();
    // Get instance field reference: private System.Single cameraFar
    [[deprecated("Use field access instead!")]] float& dyn_cameraFar();
    // Get instance field reference: private System.Single cameraAspect
    [[deprecated("Use field access instead!")]] float& dyn_cameraAspect();
    // Get instance field reference: private UnityEngine.Matrix4x4 cameraToWorld
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_cameraToWorld();
    // Get instance field reference: private UnityEngine.Matrix4x4 actualWorldToClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_actualWorldToClip();
    // Get instance field reference: private UnityEngine.Matrix4x4 cameraClipToWorld
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_cameraClipToWorld();
    // Get instance field reference: private UnityEngine.Matrix4x4 cameraWorldToClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_cameraWorldToClip();
    // Get instance field reference: private UnityEngine.Matrix4x4 implicitProjection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_implicitProjection();
    // Get instance field reference: private UnityEngine.Matrix4x4 stereoWorldToClipLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_stereoWorldToClipLeft();
    // Get instance field reference: private UnityEngine.Matrix4x4 stereoWorldToClipRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_stereoWorldToClipRight();
    // Get instance field reference: private UnityEngine.Matrix4x4 worldToCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_worldToCamera();
    // Get instance field reference: private UnityEngine.Vector3 up
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_up();
    // Get instance field reference: private UnityEngine.Vector3 right
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_right();
    // Get instance field reference: private UnityEngine.Vector3 transformDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_transformDirection();
    // Get instance field reference: private UnityEngine.Vector3 cameraEuler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_cameraEuler();
    // Get instance field reference: private UnityEngine.Vector3 velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_velocity();
    // Get instance field reference: private System.Single farPlaneWorldSpaceLength
    [[deprecated("Use field access instead!")]] float& dyn_farPlaneWorldSpaceLength();
    // Get instance field reference: private System.UInt32 rendererCount
    [[deprecated("Use field access instead!")]] uint& dyn_rendererCount();
    // Get instance field reference: UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer m_ShadowCullPlanes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CameraProperties::$m_ShadowCullPlanes$e__FixedBuffer& dyn_m_ShadowCullPlanes();
    // Get instance field reference: UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer m_CameraCullPlanes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CameraProperties::$m_CameraCullPlanes$e__FixedBuffer& dyn_m_CameraCullPlanes();
    // Get instance field reference: private System.Single baseFarDistance
    [[deprecated("Use field access instead!")]] float& dyn_baseFarDistance();
    // Get instance field reference: private UnityEngine.Vector3 shadowCullCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_shadowCullCenter();
    // Get instance field reference: UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer layerCullDistances
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CameraProperties::$layerCullDistances$e__FixedBuffer& dyn_layerCullDistances();
    // Get instance field reference: private System.Int32 layerCullSpherical
    [[deprecated("Use field access instead!")]] int& dyn_layerCullSpherical();
    // Get instance field reference: private UnityEngine.Rendering.CoreCameraValues coreCameraValues
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CoreCameraValues& dyn_coreCameraValues();
    // Get instance field reference: private System.UInt32 cameraType
    [[deprecated("Use field access instead!")]] uint& dyn_cameraType();
    // Get instance field reference: private System.Int32 projectionIsOblique
    [[deprecated("Use field access instead!")]] int& dyn_projectionIsOblique();
    // Get instance field reference: private System.Int32 isImplicitProjectionMatrix
    [[deprecated("Use field access instead!")]] int& dyn_isImplicitProjectionMatrix();
    // public UnityEngine.Plane GetShadowCullingPlane(System.Int32 index)
    // Offset: 0x54E5204
    ::UnityEngine::Plane GetShadowCullingPlane(int index);
    // public UnityEngine.Plane GetCameraCullingPlane(System.Int32 index)
    // Offset: 0x54E52E8
    ::UnityEngine::Plane GetCameraCullingPlane(int index);
    // public System.Boolean Equals(UnityEngine.Rendering.CameraProperties other)
    // Offset: 0x54E53CC
    bool Equals(::UnityEngine::Rendering::CameraProperties other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54E5A34
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54E5AEC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.CameraProperties
  #pragma pack(pop)
  static check_size<sizeof(CameraProperties), 988 + sizeof(int)> __UnityEngine_Rendering_CameraPropertiesSizeCheck;
  static_assert(sizeof(CameraProperties) == 0x3E0);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraProperties::$m_ShadowCullPlanes$e__FixedBuffer, "UnityEngine.Rendering", "CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraProperties::$m_CameraCullPlanes$e__FixedBuffer, "UnityEngine.Rendering", "CameraProperties/<m_CameraCullPlanes>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraProperties::$layerCullDistances$e__FixedBuffer, "UnityEngine.Rendering", "CameraProperties/<layerCullDistances>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::CameraProperties::GetShadowCullingPlane
// Il2CppName: GetShadowCullingPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (UnityEngine::Rendering::CameraProperties::*)(int)>(&UnityEngine::Rendering::CameraProperties::GetShadowCullingPlane)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CameraProperties), "GetShadowCullingPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CameraProperties::GetCameraCullingPlane
// Il2CppName: GetCameraCullingPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (UnityEngine::Rendering::CameraProperties::*)(int)>(&UnityEngine::Rendering::CameraProperties::GetCameraCullingPlane)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CameraProperties), "GetCameraCullingPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CameraProperties::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::CameraProperties::*)(::UnityEngine::Rendering::CameraProperties)>(&UnityEngine::Rendering::CameraProperties::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CameraProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CameraProperties), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CameraProperties::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::CameraProperties::*)(::Il2CppObject*)>(&UnityEngine::Rendering::CameraProperties::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CameraProperties), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CameraProperties::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::CameraProperties::*)()>(&UnityEngine::Rendering::CameraProperties::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CameraProperties), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
