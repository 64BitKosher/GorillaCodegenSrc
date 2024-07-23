// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.XR.Oculus.OculusLoader
#include "Unity/XR/Oculus/OculusLoader.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusLoader::DeviceSupportedResult, "Unity.XR.Oculus", "OculusLoader/DeviceSupportedResult");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.OculusLoader/DeviceSupportedResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct OculusLoader::DeviceSupportedResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DeviceSupportedResult
    constexpr DeviceSupportedResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Supported
    static constexpr const int Supported = 0;
    // Get static field: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Supported
    static ::Unity::XR::Oculus::OculusLoader::DeviceSupportedResult _get_Supported();
    // Set static field: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Supported
    static void _set_Supported(::Unity::XR::Oculus::OculusLoader::DeviceSupportedResult value);
    // static field const value: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult NotSupported
    static constexpr const int NotSupported = 1;
    // Get static field: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult NotSupported
    static ::Unity::XR::Oculus::OculusLoader::DeviceSupportedResult _get_NotSupported();
    // Set static field: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult NotSupported
    static void _set_NotSupported(::Unity::XR::Oculus::OculusLoader::DeviceSupportedResult value);
    // static field const value: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult ExitApplication
    static constexpr const int ExitApplication = 2;
    // Get static field: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult ExitApplication
    static ::Unity::XR::Oculus::OculusLoader::DeviceSupportedResult _get_ExitApplication();
    // Set static field: static public Unity.XR.Oculus.OculusLoader/DeviceSupportedResult ExitApplication
    static void _set_ExitApplication(::Unity::XR::Oculus::OculusLoader::DeviceSupportedResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.XR.Oculus.OculusLoader/DeviceSupportedResult
  #pragma pack(pop)
  static check_size<sizeof(OculusLoader::DeviceSupportedResult), 0 + sizeof(int)> __Unity_XR_Oculus_OculusLoader_DeviceSupportedResultSizeCheck;
  static_assert(sizeof(OculusLoader::DeviceSupportedResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
