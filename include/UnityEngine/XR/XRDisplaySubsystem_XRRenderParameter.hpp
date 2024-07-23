// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem
#include "UnityEngine/XR/XRDisplaySubsystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem::XRRenderParameter, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderParameter");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0xDD
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct XRDisplaySubsystem::XRRenderParameter/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Matrix4x4 view
    // Size: 0x40
    // Offset: 0x0
    ::UnityEngine::Matrix4x4 view;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // public UnityEngine.Matrix4x4 projection
    // Size: 0x40
    // Offset: 0x40
    ::UnityEngine::Matrix4x4 projection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // public UnityEngine.Rect viewport
    // Size: 0x10
    // Offset: 0x80
    ::UnityEngine::Rect viewport;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Mesh occlusionMesh
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::Mesh* occlusionMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public System.Int32 textureArraySlice
    // Size: 0x4
    // Offset: 0x98
    int textureArraySlice;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Matrix4x4 previousView
    // Size: 0x40
    // Offset: 0x9C
    ::UnityEngine::Matrix4x4 previousView;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // public System.Boolean isPreviousViewValid
    // Size: 0x1
    // Offset: 0xDC
    bool isPreviousViewValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: XRRenderParameter
    constexpr XRRenderParameter(::UnityEngine::Matrix4x4 view_ = {}, ::UnityEngine::Matrix4x4 projection_ = {}, ::UnityEngine::Rect viewport_ = {}, ::UnityEngine::Mesh* occlusionMesh_ = {}, int textureArraySlice_ = {}, ::UnityEngine::Matrix4x4 previousView_ = {}, bool isPreviousViewValid_ = {}) noexcept : view{view_}, projection{projection_}, viewport{viewport_}, occlusionMesh{occlusionMesh_}, textureArraySlice{textureArraySlice_}, previousView{previousView_}, isPreviousViewValid{isPreviousViewValid_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Matrix4x4 view
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_view();
    // Get instance field reference: public UnityEngine.Matrix4x4 projection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_projection();
    // Get instance field reference: public UnityEngine.Rect viewport
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_viewport();
    // Get instance field reference: public UnityEngine.Mesh occlusionMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_occlusionMesh();
    // Get instance field reference: public System.Int32 textureArraySlice
    [[deprecated("Use field access instead!")]] int& dyn_textureArraySlice();
    // Get instance field reference: public UnityEngine.Matrix4x4 previousView
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_previousView();
    // Get instance field reference: public System.Boolean isPreviousViewValid
    [[deprecated("Use field access instead!")]] bool& dyn_isPreviousViewValid();
  }; // UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
  #pragma pack(pop)
  static check_size<sizeof(XRDisplaySubsystem::XRRenderParameter), 220 + sizeof(bool)> __UnityEngine_XR_XRDisplaySubsystem_XRRenderParameterSizeCheck;
  static_assert(sizeof(XRDisplaySubsystem::XRRenderParameter) == 0xDD);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
