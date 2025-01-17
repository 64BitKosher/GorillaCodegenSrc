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
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DefaultMaterialType
  struct DefaultMaterialType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DefaultMaterialType, "UnityEngine.Rendering.Universal", "DefaultMaterialType");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DefaultMaterialType
  // [TokenAttribute] Offset: FFFFFFFF
  struct DefaultMaterialType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DefaultMaterialType
    constexpr DefaultMaterialType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DefaultMaterialType Standard
    static constexpr const int Standard = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Standard
    static ::UnityEngine::Rendering::Universal::DefaultMaterialType _get_Standard();
    // Set static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Standard
    static void _set_Standard(::UnityEngine::Rendering::Universal::DefaultMaterialType value);
    // static field const value: static public UnityEngine.Rendering.Universal.DefaultMaterialType Particle
    static constexpr const int Particle = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Particle
    static ::UnityEngine::Rendering::Universal::DefaultMaterialType _get_Particle();
    // Set static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Particle
    static void _set_Particle(::UnityEngine::Rendering::Universal::DefaultMaterialType value);
    // static field const value: static public UnityEngine.Rendering.Universal.DefaultMaterialType Terrain
    static constexpr const int Terrain = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Terrain
    static ::UnityEngine::Rendering::Universal::DefaultMaterialType _get_Terrain();
    // Set static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Terrain
    static void _set_Terrain(::UnityEngine::Rendering::Universal::DefaultMaterialType value);
    // static field const value: static public UnityEngine.Rendering.Universal.DefaultMaterialType Sprite
    static constexpr const int Sprite = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Sprite
    static ::UnityEngine::Rendering::Universal::DefaultMaterialType _get_Sprite();
    // Set static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Sprite
    static void _set_Sprite(::UnityEngine::Rendering::Universal::DefaultMaterialType value);
    // static field const value: static public UnityEngine.Rendering.Universal.DefaultMaterialType UnityBuiltinDefault
    static constexpr const int UnityBuiltinDefault = 4;
    // Get static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType UnityBuiltinDefault
    static ::UnityEngine::Rendering::Universal::DefaultMaterialType _get_UnityBuiltinDefault();
    // Set static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType UnityBuiltinDefault
    static void _set_UnityBuiltinDefault(::UnityEngine::Rendering::Universal::DefaultMaterialType value);
    // static field const value: static public UnityEngine.Rendering.Universal.DefaultMaterialType SpriteMask
    static constexpr const int SpriteMask = 5;
    // Get static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType SpriteMask
    static ::UnityEngine::Rendering::Universal::DefaultMaterialType _get_SpriteMask();
    // Set static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType SpriteMask
    static void _set_SpriteMask(::UnityEngine::Rendering::Universal::DefaultMaterialType value);
    // static field const value: static public UnityEngine.Rendering.Universal.DefaultMaterialType Decal
    static constexpr const int Decal = 6;
    // Get static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Decal
    static ::UnityEngine::Rendering::Universal::DefaultMaterialType _get_Decal();
    // Set static field: static public UnityEngine.Rendering.Universal.DefaultMaterialType Decal
    static void _set_Decal(::UnityEngine::Rendering::Universal::DefaultMaterialType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DefaultMaterialType
  #pragma pack(pop)
  static check_size<sizeof(DefaultMaterialType), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DefaultMaterialTypeSizeCheck;
  static_assert(sizeof(DefaultMaterialType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
