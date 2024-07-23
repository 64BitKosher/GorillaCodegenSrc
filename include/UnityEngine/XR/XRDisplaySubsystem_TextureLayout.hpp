// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem
#include "UnityEngine/XR/XRDisplaySubsystem.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem::TextureLayout, "UnityEngine.XR", "XRDisplaySubsystem/TextureLayout");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem/TextureLayout
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct XRDisplaySubsystem::TextureLayout/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TextureLayout
    constexpr TextureLayout(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout Texture2DArray
    static constexpr const int Texture2DArray = 1;
    // Get static field: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout Texture2DArray
    static ::UnityEngine::XR::XRDisplaySubsystem::TextureLayout _get_Texture2DArray();
    // Set static field: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout Texture2DArray
    static void _set_Texture2DArray(::UnityEngine::XR::XRDisplaySubsystem::TextureLayout value);
    // static field const value: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout SingleTexture2D
    static constexpr const int SingleTexture2D = 2;
    // Get static field: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout SingleTexture2D
    static ::UnityEngine::XR::XRDisplaySubsystem::TextureLayout _get_SingleTexture2D();
    // Set static field: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout SingleTexture2D
    static void _set_SingleTexture2D(::UnityEngine::XR::XRDisplaySubsystem::TextureLayout value);
    // static field const value: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout SeparateTexture2Ds
    static constexpr const int SeparateTexture2Ds = 4;
    // Get static field: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout SeparateTexture2Ds
    static ::UnityEngine::XR::XRDisplaySubsystem::TextureLayout _get_SeparateTexture2Ds();
    // Set static field: static public UnityEngine.XR.XRDisplaySubsystem/TextureLayout SeparateTexture2Ds
    static void _set_SeparateTexture2Ds(::UnityEngine::XR::XRDisplaySubsystem::TextureLayout value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.XR.XRDisplaySubsystem/TextureLayout
  #pragma pack(pop)
  static check_size<sizeof(XRDisplaySubsystem::TextureLayout), 0 + sizeof(int)> __UnityEngine_XR_XRDisplaySubsystem_TextureLayoutSizeCheck;
  static_assert(sizeof(XRDisplaySubsystem::TextureLayout) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
