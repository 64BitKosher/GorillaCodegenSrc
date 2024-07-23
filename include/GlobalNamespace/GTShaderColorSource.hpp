// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GTShaderColorSource
  struct GTShaderColorSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GTShaderColorSource, "", "GTShaderColorSource");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GTShaderColorSource
  // [TokenAttribute] Offset: FFFFFFFF
  struct GTShaderColorSource/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GTShaderColorSource
    constexpr GTShaderColorSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GTShaderColorSource Color
    static constexpr const int Color = 0;
    // Get static field: static public GTShaderColorSource Color
    static ::GlobalNamespace::GTShaderColorSource _get_Color();
    // Set static field: static public GTShaderColorSource Color
    static void _set_Color(::GlobalNamespace::GTShaderColorSource value);
    // static field const value: static public GTShaderColorSource Texture
    static constexpr const int Texture = 1;
    // Get static field: static public GTShaderColorSource Texture
    static ::GlobalNamespace::GTShaderColorSource _get_Texture();
    // Set static field: static public GTShaderColorSource Texture
    static void _set_Texture(::GlobalNamespace::GTShaderColorSource value);
    // static field const value: static public GTShaderColorSource TextureAsMask
    static constexpr const int TextureAsMask = 2;
    // Get static field: static public GTShaderColorSource TextureAsMask
    static ::GlobalNamespace::GTShaderColorSource _get_TextureAsMask();
    // Set static field: static public GTShaderColorSource TextureAsMask
    static void _set_TextureAsMask(::GlobalNamespace::GTShaderColorSource value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GTShaderColorSource
  #pragma pack(pop)
  static check_size<sizeof(GTShaderColorSource), 0 + sizeof(int)> __GlobalNamespace_GTShaderColorSourceSizeCheck;
  static_assert(sizeof(GTShaderColorSource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
