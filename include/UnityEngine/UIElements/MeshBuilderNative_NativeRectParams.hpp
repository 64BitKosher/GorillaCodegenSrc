// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.MeshBuilderNative
#include "UnityEngine/UIElements/MeshBuilderNative.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.ScaleMode
#include "UnityEngine/ScaleMode.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.UIElements.MeshBuilderNative/NativeColorPage
#include "UnityEngine/UIElements/MeshBuilderNative_NativeColorPage.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshBuilderNative::NativeRectParams, "UnityEngine.UIElements", "MeshBuilderNative/NativeRectParams");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0xA4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.MeshBuilderNative/NativeRectParams
  // [TokenAttribute] Offset: FFFFFFFF
  struct MeshBuilderNative::NativeRectParams/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Rect rect
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Rect rect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect subRect
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Rect subRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect uv
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Rect uv;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect uvRegion
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Rect uvRegion;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.ScaleMode scaleMode
    // Size: 0x4
    // Offset: 0x50
    ::UnityEngine::ScaleMode scaleMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::ScaleMode) == 0x4);
    // public UnityEngine.Vector2 topLeftRadius
    // Size: 0x8
    // Offset: 0x54
    ::UnityEngine::Vector2 topLeftRadius;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 topRightRadius
    // Size: 0x8
    // Offset: 0x5C
    ::UnityEngine::Vector2 topRightRadius;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 bottomRightRadius
    // Size: 0x8
    // Offset: 0x64
    ::UnityEngine::Vector2 bottomRightRadius;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 bottomLeftRadius
    // Size: 0x8
    // Offset: 0x6C
    ::UnityEngine::Vector2 bottomLeftRadius;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 contentSize
    // Size: 0x8
    // Offset: 0x74
    ::UnityEngine::Vector2 contentSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 textureSize
    // Size: 0x8
    // Offset: 0x7C
    ::UnityEngine::Vector2 textureSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Single texturePixelsPerPoint
    // Size: 0x4
    // Offset: 0x84
    float texturePixelsPerPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 leftSlice
    // Size: 0x4
    // Offset: 0x88
    int leftSlice;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 topSlice
    // Size: 0x4
    // Offset: 0x8C
    int topSlice;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 rightSlice
    // Size: 0x4
    // Offset: 0x90
    int rightSlice;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 bottomSlice
    // Size: 0x4
    // Offset: 0x94
    int bottomSlice;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single sliceScale
    // Size: 0x4
    // Offset: 0x98
    float sliceScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.UIElements.MeshBuilderNative/NativeColorPage colorPage
    // Size: 0x8
    // Offset: 0x9C
    ::UnityEngine::UIElements::MeshBuilderNative::NativeColorPage colorPage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::MeshBuilderNative::NativeColorPage) == 0x8);
    public:
    // Creating value type constructor for type: NativeRectParams
    constexpr NativeRectParams(::UnityEngine::Rect rect_ = {}, ::UnityEngine::Rect subRect_ = {}, ::UnityEngine::Rect uv_ = {}, ::UnityEngine::Rect uvRegion_ = {}, ::UnityEngine::Color color_ = {}, ::UnityEngine::ScaleMode scaleMode_ = {}, ::UnityEngine::Vector2 topLeftRadius_ = {}, ::UnityEngine::Vector2 topRightRadius_ = {}, ::UnityEngine::Vector2 bottomRightRadius_ = {}, ::UnityEngine::Vector2 bottomLeftRadius_ = {}, ::UnityEngine::Vector2 contentSize_ = {}, ::UnityEngine::Vector2 textureSize_ = {}, float texturePixelsPerPoint_ = {}, int leftSlice_ = {}, int topSlice_ = {}, int rightSlice_ = {}, int bottomSlice_ = {}, float sliceScale_ = {}, ::UnityEngine::UIElements::MeshBuilderNative::NativeColorPage colorPage_ = {}) noexcept : rect{rect_}, subRect{subRect_}, uv{uv_}, uvRegion{uvRegion_}, color{color_}, scaleMode{scaleMode_}, topLeftRadius{topLeftRadius_}, topRightRadius{topRightRadius_}, bottomRightRadius{bottomRightRadius_}, bottomLeftRadius{bottomLeftRadius_}, contentSize{contentSize_}, textureSize{textureSize_}, texturePixelsPerPoint{texturePixelsPerPoint_}, leftSlice{leftSlice_}, topSlice{topSlice_}, rightSlice{rightSlice_}, bottomSlice{bottomSlice_}, sliceScale{sliceScale_}, colorPage{colorPage_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Rect rect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_rect();
    // Get instance field reference: public UnityEngine.Rect subRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_subRect();
    // Get instance field reference: public UnityEngine.Rect uv
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_uv();
    // Get instance field reference: public UnityEngine.Rect uvRegion
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_uvRegion();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public UnityEngine.ScaleMode scaleMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::ScaleMode& dyn_scaleMode();
    // Get instance field reference: public UnityEngine.Vector2 topLeftRadius
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_topLeftRadius();
    // Get instance field reference: public UnityEngine.Vector2 topRightRadius
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_topRightRadius();
    // Get instance field reference: public UnityEngine.Vector2 bottomRightRadius
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_bottomRightRadius();
    // Get instance field reference: public UnityEngine.Vector2 bottomLeftRadius
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_bottomLeftRadius();
    // Get instance field reference: public UnityEngine.Vector2 contentSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_contentSize();
    // Get instance field reference: public UnityEngine.Vector2 textureSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_textureSize();
    // Get instance field reference: public System.Single texturePixelsPerPoint
    [[deprecated("Use field access instead!")]] float& dyn_texturePixelsPerPoint();
    // Get instance field reference: public System.Int32 leftSlice
    [[deprecated("Use field access instead!")]] int& dyn_leftSlice();
    // Get instance field reference: public System.Int32 topSlice
    [[deprecated("Use field access instead!")]] int& dyn_topSlice();
    // Get instance field reference: public System.Int32 rightSlice
    [[deprecated("Use field access instead!")]] int& dyn_rightSlice();
    // Get instance field reference: public System.Int32 bottomSlice
    [[deprecated("Use field access instead!")]] int& dyn_bottomSlice();
    // Get instance field reference: public System.Single sliceScale
    [[deprecated("Use field access instead!")]] float& dyn_sliceScale();
    // Get instance field reference: public UnityEngine.UIElements.MeshBuilderNative/NativeColorPage colorPage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::MeshBuilderNative::NativeColorPage& dyn_colorPage();
  }; // UnityEngine.UIElements.MeshBuilderNative/NativeRectParams
  #pragma pack(pop)
  static check_size<sizeof(MeshBuilderNative::NativeRectParams), 156 + sizeof(::UnityEngine::UIElements::MeshBuilderNative::NativeColorPage)> __UnityEngine_UIElements_MeshBuilderNative_NativeRectParamsSizeCheck;
  static_assert(sizeof(MeshBuilderNative::NativeRectParams) == 0xA4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
