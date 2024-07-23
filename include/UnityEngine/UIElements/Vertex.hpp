// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Vertex
  struct Vertex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vertex, "UnityEngine.UIElements", "Vertex");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.Vertex
  // [TokenAttribute] Offset: FFFFFFFF
  struct Vertex/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Color32 tint
    // Size: 0x4
    // Offset: 0xC
    ::UnityEngine::Color32 tint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.Vector2 uv
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 uv;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // UnityEngine.Color32 xformClipPages
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::Color32 xformClipPages;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // UnityEngine.Color32 ids
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::Color32 ids;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // UnityEngine.Color32 flags
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Color32 flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // UnityEngine.Color32 opacityColorPages
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::Color32 opacityColorPages;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // UnityEngine.Color32 settingIndex
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::Color32 settingIndex;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // UnityEngine.Vector4 circle
    // Size: 0x10
    // Offset: 0x2C
    ::UnityEngine::Vector4 circle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // System.Single textureId
    // Size: 0x4
    // Offset: 0x3C
    float textureId;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Vertex
    constexpr Vertex(::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Color32 tint_ = {}, ::UnityEngine::Vector2 uv_ = {}, ::UnityEngine::Color32 xformClipPages_ = {}, ::UnityEngine::Color32 ids_ = {}, ::UnityEngine::Color32 flags_ = {}, ::UnityEngine::Color32 opacityColorPages_ = {}, ::UnityEngine::Color32 settingIndex_ = {}, ::UnityEngine::Vector4 circle_ = {}, float textureId_ = {}) noexcept : position{position_}, tint{tint_}, uv{uv_}, xformClipPages{xformClipPages_}, ids{ids_}, flags{flags_}, opacityColorPages{opacityColorPages_}, settingIndex{settingIndex_}, circle{circle_}, textureId{textureId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly System.Single nearZ
    static float _get_nearZ();
    // Set static field: static public readonly System.Single nearZ
    static void _set_nearZ(float value);
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Color32 tint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_tint();
    // Get instance field reference: public UnityEngine.Vector2 uv
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_uv();
    // Get instance field reference: UnityEngine.Color32 xformClipPages
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_xformClipPages();
    // Get instance field reference: UnityEngine.Color32 ids
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_ids();
    // Get instance field reference: UnityEngine.Color32 flags
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_flags();
    // Get instance field reference: UnityEngine.Color32 opacityColorPages
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_opacityColorPages();
    // Get instance field reference: UnityEngine.Color32 settingIndex
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_settingIndex();
    // Get instance field reference: UnityEngine.Vector4 circle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_circle();
    // Get instance field reference: System.Single textureId
    [[deprecated("Use field access instead!")]] float& dyn_textureId();
  }; // UnityEngine.UIElements.Vertex
  #pragma pack(pop)
  static check_size<sizeof(Vertex), 60 + sizeof(float)> __UnityEngine_UIElements_VertexSizeCheck;
  static_assert(sizeof(Vertex) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"