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
  // Forward declaring type: VRTextureUsage
  struct VRTextureUsage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VRTextureUsage, "UnityEngine", "VRTextureUsage");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.VRTextureUsage
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRTextureUsage/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VRTextureUsage
    constexpr VRTextureUsage(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.VRTextureUsage None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.VRTextureUsage None
    static ::UnityEngine::VRTextureUsage _get_None();
    // Set static field: static public UnityEngine.VRTextureUsage None
    static void _set_None(::UnityEngine::VRTextureUsage value);
    // static field const value: static public UnityEngine.VRTextureUsage OneEye
    static constexpr const int OneEye = 1;
    // Get static field: static public UnityEngine.VRTextureUsage OneEye
    static ::UnityEngine::VRTextureUsage _get_OneEye();
    // Set static field: static public UnityEngine.VRTextureUsage OneEye
    static void _set_OneEye(::UnityEngine::VRTextureUsage value);
    // static field const value: static public UnityEngine.VRTextureUsage TwoEyes
    static constexpr const int TwoEyes = 2;
    // Get static field: static public UnityEngine.VRTextureUsage TwoEyes
    static ::UnityEngine::VRTextureUsage _get_TwoEyes();
    // Set static field: static public UnityEngine.VRTextureUsage TwoEyes
    static void _set_TwoEyes(::UnityEngine::VRTextureUsage value);
    // static field const value: static public UnityEngine.VRTextureUsage DeviceSpecific
    static constexpr const int DeviceSpecific = 3;
    // Get static field: static public UnityEngine.VRTextureUsage DeviceSpecific
    static ::UnityEngine::VRTextureUsage _get_DeviceSpecific();
    // Set static field: static public UnityEngine.VRTextureUsage DeviceSpecific
    static void _set_DeviceSpecific(::UnityEngine::VRTextureUsage value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.VRTextureUsage
  #pragma pack(pop)
  static check_size<sizeof(VRTextureUsage), 0 + sizeof(int)> __UnityEngine_VRTextureUsageSizeCheck;
  static_assert(sizeof(VRTextureUsage) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
