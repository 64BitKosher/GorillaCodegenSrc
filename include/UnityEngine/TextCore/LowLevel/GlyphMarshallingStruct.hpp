// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.GlyphMetrics
#include "UnityEngine/TextCore/GlyphMetrics.hpp"
// Including type: UnityEngine.TextCore.GlyphRect
#include "UnityEngine/TextCore/GlyphRect.hpp"
// Including type: UnityEngine.TextCore.GlyphClassDefinitionType
#include "UnityEngine/TextCore/GlyphClassDefinitionType.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphMarshallingStruct
  struct GlyphMarshallingStruct;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, "UnityEngine.TextCore.LowLevel", "GlyphMarshallingStruct");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct GlyphMarshallingStruct/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 index
    // Size: 0x4
    // Offset: 0x0
    uint index;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public UnityEngine.TextCore.GlyphMetrics metrics
    // Size: 0x14
    // Offset: 0x4
    ::UnityEngine::TextCore::GlyphMetrics metrics;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::GlyphMetrics) == 0x14);
    // public UnityEngine.TextCore.GlyphRect glyphRect
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::TextCore::GlyphRect glyphRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::GlyphRect) == 0x10);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x28
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 atlasIndex
    // Size: 0x4
    // Offset: 0x2C
    int atlasIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.TextCore.GlyphClassDefinitionType classDefinitionType
    // Size: 0x4
    // Offset: 0x30
    ::UnityEngine::TextCore::GlyphClassDefinitionType classDefinitionType;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::GlyphClassDefinitionType) == 0x4);
    public:
    // Creating value type constructor for type: GlyphMarshallingStruct
    constexpr GlyphMarshallingStruct(uint index_ = {}, ::UnityEngine::TextCore::GlyphMetrics metrics_ = {}, ::UnityEngine::TextCore::GlyphRect glyphRect_ = {}, float scale_ = {}, int atlasIndex_ = {}, ::UnityEngine::TextCore::GlyphClassDefinitionType classDefinitionType_ = {}) noexcept : index{index_}, metrics{metrics_}, glyphRect{glyphRect_}, scale{scale_}, atlasIndex{atlasIndex_}, classDefinitionType{classDefinitionType_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 index
    [[deprecated("Use field access instead!")]] uint& dyn_index();
    // Get instance field reference: public UnityEngine.TextCore.GlyphMetrics metrics
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::GlyphMetrics& dyn_metrics();
    // Get instance field reference: public UnityEngine.TextCore.GlyphRect glyphRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::GlyphRect& dyn_glyphRect();
    // Get instance field reference: public System.Single scale
    [[deprecated("Use field access instead!")]] float& dyn_scale();
    // Get instance field reference: public System.Int32 atlasIndex
    [[deprecated("Use field access instead!")]] int& dyn_atlasIndex();
    // Get instance field reference: public UnityEngine.TextCore.GlyphClassDefinitionType classDefinitionType
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::GlyphClassDefinitionType& dyn_classDefinitionType();
  }; // UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
  #pragma pack(pop)
  static check_size<sizeof(GlyphMarshallingStruct), 48 + sizeof(::UnityEngine::TextCore::GlyphClassDefinitionType)> __UnityEngine_TextCore_LowLevel_GlyphMarshallingStructSizeCheck;
  static_assert(sizeof(GlyphMarshallingStruct) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
