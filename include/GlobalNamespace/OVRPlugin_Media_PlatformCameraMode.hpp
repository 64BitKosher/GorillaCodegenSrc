// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin/Media
#include "GlobalNamespace/OVRPlugin_Media.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode, "", "OVRPlugin/Media/PlatformCameraMode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/Media/PlatformCameraMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Media::PlatformCameraMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlatformCameraMode
    constexpr PlatformCameraMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode Disabled
    static constexpr const int Disabled = -1;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode Disabled
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_Disabled();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode Disabled
    static void _set_Disabled(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode Initialized
    static constexpr const int Initialized = 0;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode Initialized
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_Initialized();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode Initialized
    static void _set_Initialized(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode UserControlled
    static constexpr const int UserControlled = 1;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode UserControlled
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_UserControlled();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode UserControlled
    static void _set_UserControlled(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode SmartNavigated
    static constexpr const int SmartNavigated = 2;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode SmartNavigated
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_SmartNavigated();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode SmartNavigated
    static void _set_SmartNavigated(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode StabilizedPoV
    static constexpr const int StabilizedPoV = 3;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode StabilizedPoV
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_StabilizedPoV();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode StabilizedPoV
    static void _set_StabilizedPoV(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode RemoteDroneControlled
    static constexpr const int RemoteDroneControlled = 4;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode RemoteDroneControlled
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_RemoteDroneControlled();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode RemoteDroneControlled
    static void _set_RemoteDroneControlled(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode RemoteSpatialMapped
    static constexpr const int RemoteSpatialMapped = 5;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode RemoteSpatialMapped
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_RemoteSpatialMapped();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode RemoteSpatialMapped
    static void _set_RemoteSpatialMapped(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode SpectatorMode
    static constexpr const int SpectatorMode = 6;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode SpectatorMode
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_SpectatorMode();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode SpectatorMode
    static void _set_SpectatorMode(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode MobileMRC
    static constexpr const int MobileMRC = 7;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode MobileMRC
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_MobileMRC();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode MobileMRC
    static void _set_MobileMRC(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // static field const value: static public OVRPlugin/Media/PlatformCameraMode EnumSize
    static constexpr const int EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/Media/PlatformCameraMode EnumSize
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode _get_EnumSize();
    // Set static field: static public OVRPlugin/Media/PlatformCameraMode EnumSize
    static void _set_EnumSize(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/Media/PlatformCameraMode
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Media::PlatformCameraMode), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_Media_PlatformCameraModeSizeCheck;
  static_assert(sizeof(OVRPlugin::Media::PlatformCameraMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"