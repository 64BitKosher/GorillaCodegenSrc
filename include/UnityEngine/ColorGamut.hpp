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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ColorGamut
  struct ColorGamut;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorGamut, "UnityEngine", "ColorGamut");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ColorGamut
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct ColorGamut/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ColorGamut
    constexpr ColorGamut(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ColorGamut sRGB
    static constexpr const int sRGB = 0;
    // Get static field: static public UnityEngine.ColorGamut sRGB
    static ::UnityEngine::ColorGamut _get_sRGB();
    // Set static field: static public UnityEngine.ColorGamut sRGB
    static void _set_sRGB(::UnityEngine::ColorGamut value);
    // static field const value: static public UnityEngine.ColorGamut Rec709
    static constexpr const int Rec709 = 1;
    // Get static field: static public UnityEngine.ColorGamut Rec709
    static ::UnityEngine::ColorGamut _get_Rec709();
    // Set static field: static public UnityEngine.ColorGamut Rec709
    static void _set_Rec709(::UnityEngine::ColorGamut value);
    // static field const value: static public UnityEngine.ColorGamut Rec2020
    static constexpr const int Rec2020 = 2;
    // Get static field: static public UnityEngine.ColorGamut Rec2020
    static ::UnityEngine::ColorGamut _get_Rec2020();
    // Set static field: static public UnityEngine.ColorGamut Rec2020
    static void _set_Rec2020(::UnityEngine::ColorGamut value);
    // static field const value: static public UnityEngine.ColorGamut DisplayP3
    static constexpr const int DisplayP3 = 3;
    // Get static field: static public UnityEngine.ColorGamut DisplayP3
    static ::UnityEngine::ColorGamut _get_DisplayP3();
    // Set static field: static public UnityEngine.ColorGamut DisplayP3
    static void _set_DisplayP3(::UnityEngine::ColorGamut value);
    // static field const value: static public UnityEngine.ColorGamut HDR10
    static constexpr const int HDR10 = 4;
    // Get static field: static public UnityEngine.ColorGamut HDR10
    static ::UnityEngine::ColorGamut _get_HDR10();
    // Set static field: static public UnityEngine.ColorGamut HDR10
    static void _set_HDR10(::UnityEngine::ColorGamut value);
    // static field const value: static public UnityEngine.ColorGamut DolbyHDR
    static constexpr const int DolbyHDR = 5;
    // Get static field: static public UnityEngine.ColorGamut DolbyHDR
    static ::UnityEngine::ColorGamut _get_DolbyHDR();
    // Set static field: static public UnityEngine.ColorGamut DolbyHDR
    static void _set_DolbyHDR(::UnityEngine::ColorGamut value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ColorGamut
  #pragma pack(pop)
  static check_size<sizeof(ColorGamut), 0 + sizeof(int)> __UnityEngine_ColorGamutSizeCheck;
  static_assert(sizeof(ColorGamut) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
