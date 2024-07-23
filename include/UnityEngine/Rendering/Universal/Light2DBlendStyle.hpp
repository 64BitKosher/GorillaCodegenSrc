// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: Light2DBlendStyle
  struct Light2DBlendStyle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DBlendStyle, "UnityEngine.Rendering.Universal", "Light2DBlendStyle");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.Light2DBlendStyle
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  struct Light2DBlendStyle/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel
    struct TextureChannel;
    // Nested type: ::UnityEngine::Rendering::Universal::Light2DBlendStyle::MaskChannelFilter
    struct MaskChannelFilter;
    // Nested type: ::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode
    struct BlendMode;
    // Nested type: ::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendFactors
    struct BlendFactors;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel
    // [TokenAttribute] Offset: FFFFFFFF
    struct TextureChannel/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TextureChannel
      constexpr TextureChannel(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel None
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_None();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel None
      static void _set_None(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel R
      static constexpr const int R = 1;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel R
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_R();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel R
      static void _set_R(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel G
      static constexpr const int G = 2;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel G
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_G();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel G
      static void _set_G(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel B
      static constexpr const int B = 3;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel B
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_B();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel B
      static void _set_B(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel A
      static constexpr const int A = 4;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel A
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_A();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel A
      static void _set_A(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusR
      static constexpr const int OneMinusR = 5;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusR
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_OneMinusR();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusR
      static void _set_OneMinusR(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusG
      static constexpr const int OneMinusG = 6;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusG
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_OneMinusG();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusG
      static void _set_OneMinusG(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusB
      static constexpr const int OneMinusB = 7;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusB
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_OneMinusB();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusB
      static void _set_OneMinusB(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusA
      static constexpr const int OneMinusA = 8;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusA
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel _get_OneMinusA();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel OneMinusA
      static void _set_OneMinusA(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel
    #pragma pack(pop)
    static check_size<sizeof(Light2DBlendStyle::TextureChannel), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_Light2DBlendStyle_TextureChannelSizeCheck;
    static_assert(sizeof(Light2DBlendStyle::TextureChannel) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct BlendMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: BlendMode
      constexpr BlendMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Additive
      static constexpr const int Additive = 0;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Additive
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode _get_Additive();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Additive
      static void _set_Additive(::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Multiply
      static constexpr const int Multiply = 1;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Multiply
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode _get_Multiply();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Multiply
      static void _set_Multiply(::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode value);
      // static field const value: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Subtractive
      static constexpr const int Subtractive = 2;
      // Get static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Subtractive
      static ::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode _get_Subtractive();
      // Set static field: static public UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode Subtractive
      static void _set_Subtractive(::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode
    #pragma pack(pop)
    static check_size<sizeof(Light2DBlendStyle::BlendMode), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_Light2DBlendStyle_BlendModeSizeCheck;
    static_assert(sizeof(Light2DBlendStyle::BlendMode) == 0x4);
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel maskTextureChannel
    // Size: 0x4
    // Offset: 0x8
    ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel maskTextureChannel;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel) == 0x4);
    // UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode blendMode
    // Size: 0x4
    // Offset: 0xC
    ::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode blendMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode) == 0x4);
    // private System.Boolean <isDirty>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool isDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <hasRenderTarget>k__BackingField
    // Size: 0x1
    // Offset: 0x11
    bool hasRenderTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasRenderTarget and: renderTargetHandleId
    char __padding4[0x2] = {};
    // System.Int32 renderTargetHandleId
    // Size: 0x4
    // Offset: 0x14
    int renderTargetHandleId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.Rendering.RTHandle renderTargetHandle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::RTHandle* renderTargetHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    public:
    // Creating value type constructor for type: Light2DBlendStyle
    constexpr Light2DBlendStyle(::StringW name_ = {}, ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel maskTextureChannel_ = {}, ::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode blendMode_ = {}, bool isDirty_ = {}, bool hasRenderTarget_ = {}, int renderTargetHandleId_ = {}, ::UnityEngine::Rendering::RTHandle* renderTargetHandle_ = {}) noexcept : name{name_}, maskTextureChannel{maskTextureChannel_}, blendMode{blendMode_}, isDirty{isDirty_}, hasRenderTarget{hasRenderTarget_}, renderTargetHandleId{renderTargetHandleId_}, renderTargetHandle{renderTargetHandle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: UnityEngine.Rendering.Universal.Light2DBlendStyle/TextureChannel maskTextureChannel
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel& dyn_maskTextureChannel();
    // Get instance field reference: UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendMode blendMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode& dyn_blendMode();
    // Get instance field reference: private System.Boolean <isDirty>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isDirty$k__BackingField();
    // Get instance field reference: private System.Boolean <hasRenderTarget>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$hasRenderTarget$k__BackingField();
    // Get instance field reference: System.Int32 renderTargetHandleId
    [[deprecated("Use field access instead!")]] int& dyn_renderTargetHandleId();
    // Get instance field reference: UnityEngine.Rendering.RTHandle renderTargetHandle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_renderTargetHandle();
    // UnityEngine.Vector2 get_blendFactors()
    // Offset: 0x527F2F4
    ::UnityEngine::Vector2 get_blendFactors();
    // UnityEngine.Rendering.Universal.Light2DBlendStyle/MaskChannelFilter get_maskTextureChannelFilter()
    // Offset: 0x527F328
    ::UnityEngine::Rendering::Universal::Light2DBlendStyle::MaskChannelFilter get_maskTextureChannelFilter();
    // System.Boolean get_isDirty()
    // Offset: 0x527F488
    bool get_isDirty();
    // System.Void set_isDirty(System.Boolean value)
    // Offset: 0x527F490
    void set_isDirty(bool value);
    // System.Boolean get_hasRenderTarget()
    // Offset: 0x527F49C
    bool get_hasRenderTarget();
    // System.Void set_hasRenderTarget(System.Boolean value)
    // Offset: 0x527F4A4
    void set_hasRenderTarget(bool value);
  }; // UnityEngine.Rendering.Universal.Light2DBlendStyle
  #pragma pack(pop)
  static check_size<sizeof(Light2DBlendStyle), 24 + sizeof(::UnityEngine::Rendering::RTHandle*)> __UnityEngine_Rendering_Universal_Light2DBlendStyleSizeCheck;
  static_assert(sizeof(Light2DBlendStyle) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendMode, "UnityEngine.Rendering.Universal", "Light2DBlendStyle/BlendMode");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DBlendStyle::TextureChannel, "UnityEngine.Rendering.Universal", "Light2DBlendStyle/TextureChannel");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DBlendStyle::get_blendFactors
// Il2CppName: get_blendFactors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rendering::Universal::Light2DBlendStyle::*)()>(&UnityEngine::Rendering::Universal::Light2DBlendStyle::get_blendFactors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Light2DBlendStyle), "get_blendFactors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DBlendStyle::get_maskTextureChannelFilter
// Il2CppName: get_maskTextureChannelFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Light2DBlendStyle::MaskChannelFilter (UnityEngine::Rendering::Universal::Light2DBlendStyle::*)()>(&UnityEngine::Rendering::Universal::Light2DBlendStyle::get_maskTextureChannelFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Light2DBlendStyle), "get_maskTextureChannelFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DBlendStyle::get_isDirty
// Il2CppName: get_isDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::Light2DBlendStyle::*)()>(&UnityEngine::Rendering::Universal::Light2DBlendStyle::get_isDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Light2DBlendStyle), "get_isDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DBlendStyle::set_isDirty
// Il2CppName: set_isDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Light2DBlendStyle::*)(bool)>(&UnityEngine::Rendering::Universal::Light2DBlendStyle::set_isDirty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Light2DBlendStyle), "set_isDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DBlendStyle::get_hasRenderTarget
// Il2CppName: get_hasRenderTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::Light2DBlendStyle::*)()>(&UnityEngine::Rendering::Universal::Light2DBlendStyle::get_hasRenderTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Light2DBlendStyle), "get_hasRenderTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DBlendStyle::set_hasRenderTarget
// Il2CppName: set_hasRenderTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Light2DBlendStyle::*)(bool)>(&UnityEngine::Rendering::Universal::Light2DBlendStyle::set_hasRenderTarget)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Light2DBlendStyle), "set_hasRenderTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
