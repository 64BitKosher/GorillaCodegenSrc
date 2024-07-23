// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.LightCookieManager
#include "UnityEngine/Rendering/Universal/LightCookieManager.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieShaderFormat");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightCookieManager::LightCookieShaderFormat/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LightCookieShaderFormat
    constexpr LightCookieShaderFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat None
    static constexpr const int None = -1;
    // Get static field: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat None
    static ::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat _get_None();
    // Set static field: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat None
    static void _set_None(::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat value);
    // static field const value: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat RGB
    static constexpr const int RGB = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat RGB
    static ::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat _get_RGB();
    // Set static field: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat RGB
    static void _set_RGB(::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat value);
    // static field const value: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat Alpha
    static constexpr const int Alpha = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat Alpha
    static ::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat _get_Alpha();
    // Set static field: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat Alpha
    static void _set_Alpha(::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat value);
    // static field const value: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat Red
    static constexpr const int Red = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat Red
    static ::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat _get_Red();
    // Set static field: static public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat Red
    static void _set_Red(::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieShaderFormat value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat
  #pragma pack(pop)
  static check_size<sizeof(LightCookieManager::LightCookieShaderFormat), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_LightCookieManager_LightCookieShaderFormatSizeCheck;
  static_assert(sizeof(LightCookieManager::LightCookieShaderFormat) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
