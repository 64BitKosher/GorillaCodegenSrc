// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray
#include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame
#include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteFrame.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize
#include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteSize.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::Frame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Frame");
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
  // [TokenAttribute] Offset: FFFFFFFF
  struct TexturePacker_JsonArray::Frame/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String filename
    // Size: 0x8
    // Offset: 0x0
    ::StringW filename;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame frame
    // Size: 0x10
    // Offset: 0x8
    ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteFrame frame;
    // Field size check
    static_assert(sizeof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteFrame) == 0x10);
    // public System.Boolean rotated
    // Size: 0x1
    // Offset: 0x18
    bool rotated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean trimmed
    // Size: 0x1
    // Offset: 0x19
    bool trimmed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: trimmed and: spriteSourceSize
    char __padding3[0x2] = {};
    // public TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame spriteSourceSize
    // Size: 0x10
    // Offset: 0x1C
    ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteFrame spriteSourceSize;
    // Field size check
    static_assert(sizeof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteFrame) == 0x10);
    // public TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize sourceSize
    // Size: 0x8
    // Offset: 0x2C
    ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteSize sourceSize;
    // Field size check
    static_assert(sizeof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteSize) == 0x8);
    // public UnityEngine.Vector2 pivot
    // Size: 0x8
    // Offset: 0x34
    ::UnityEngine::Vector2 pivot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: Frame
    constexpr Frame(::StringW filename_ = {}, ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteFrame frame_ = {}, bool rotated_ = {}, bool trimmed_ = {}, ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteFrame spriteSourceSize_ = {}, ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteSize sourceSize_ = {}, ::UnityEngine::Vector2 pivot_ = {}) noexcept : filename{filename_}, frame{frame_}, rotated{rotated_}, trimmed{trimmed_}, spriteSourceSize{spriteSourceSize_}, sourceSize{sourceSize_}, pivot{pivot_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String filename
    [[deprecated("Use field access instead!")]] ::StringW& dyn_filename();
    // Get instance field reference: public TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame frame
    [[deprecated("Use field access instead!")]] ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteFrame& dyn_frame();
    // Get instance field reference: public System.Boolean rotated
    [[deprecated("Use field access instead!")]] bool& dyn_rotated();
    // Get instance field reference: public System.Boolean trimmed
    [[deprecated("Use field access instead!")]] bool& dyn_trimmed();
    // Get instance field reference: public TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame spriteSourceSize
    [[deprecated("Use field access instead!")]] ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteFrame& dyn_spriteSourceSize();
    // Get instance field reference: public TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize sourceSize
    [[deprecated("Use field access instead!")]] ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::SpriteSize& dyn_sourceSize();
    // Get instance field reference: public UnityEngine.Vector2 pivot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_pivot();
  }; // TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
  #pragma pack(pop)
  static check_size<sizeof(TexturePacker_JsonArray::Frame), 52 + sizeof(::UnityEngine::Vector2)> __TMPro_SpriteAssetUtilities_TexturePacker_JsonArray_FrameSizeCheck;
  static_assert(sizeof(TexturePacker_JsonArray::Frame) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"