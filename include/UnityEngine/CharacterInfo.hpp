// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.FontStyle
#include "UnityEngine/FontStyle.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CharacterInfo
  struct CharacterInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterInfo, "UnityEngine", "CharacterInfo");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x31
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.CharacterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct CharacterInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Rect uv
    // Size: 0x10
    // Offset: 0x4
    ::UnityEngine::Rect uv;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect vert
    // Size: 0x10
    // Offset: 0x14
    ::UnityEngine::Rect vert;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public System.Single width
    // Size: 0x4
    // Offset: 0x24
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 size
    // Size: 0x4
    // Offset: 0x28
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.FontStyle style
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::FontStyle style;
    // Field size check
    static_assert(sizeof(::UnityEngine::FontStyle) == 0x4);
    // public System.Boolean flipped
    // Size: 0x1
    // Offset: 0x30
    bool flipped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: CharacterInfo
    constexpr CharacterInfo(int index_ = {}, ::UnityEngine::Rect uv_ = {}, ::UnityEngine::Rect vert_ = {}, float width_ = {}, int size_ = {}, ::UnityEngine::FontStyle style_ = {}, bool flipped_ = {}) noexcept : index{index_}, uv{uv_}, vert{vert_}, width{width_}, size{size_}, style{style_}, flipped{flipped_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public UnityEngine.Rect uv
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_uv();
    // Get instance field reference: public UnityEngine.Rect vert
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_vert();
    // Get instance field reference: public System.Single width
    [[deprecated("Use field access instead!")]] float& dyn_width();
    // Get instance field reference: public System.Int32 size
    [[deprecated("Use field access instead!")]] int& dyn_size();
    // Get instance field reference: public UnityEngine.FontStyle style
    [[deprecated("Use field access instead!")]] ::UnityEngine::FontStyle& dyn_style();
    // Get instance field reference: public System.Boolean flipped
    [[deprecated("Use field access instead!")]] bool& dyn_flipped();
  }; // UnityEngine.CharacterInfo
  #pragma pack(pop)
  static check_size<sizeof(CharacterInfo), 48 + sizeof(bool)> __UnityEngine_CharacterInfoSizeCheck;
  static_assert(sizeof(CharacterInfo) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
