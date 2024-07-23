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
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: ContainerFlavor
  struct ContainerFlavor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::ContainerFlavor, "PlayFab.MultiplayerModels", "ContainerFlavor");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.ContainerFlavor
  // [TokenAttribute] Offset: FFFFFFFF
  struct ContainerFlavor/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ContainerFlavor
    constexpr ContainerFlavor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.MultiplayerModels.ContainerFlavor ManagedWindowsServerCore
    static constexpr const int ManagedWindowsServerCore = 0;
    // Get static field: static public PlayFab.MultiplayerModels.ContainerFlavor ManagedWindowsServerCore
    static ::PlayFab::MultiplayerModels::ContainerFlavor _get_ManagedWindowsServerCore();
    // Set static field: static public PlayFab.MultiplayerModels.ContainerFlavor ManagedWindowsServerCore
    static void _set_ManagedWindowsServerCore(::PlayFab::MultiplayerModels::ContainerFlavor value);
    // static field const value: static public PlayFab.MultiplayerModels.ContainerFlavor CustomLinux
    static constexpr const int CustomLinux = 1;
    // Get static field: static public PlayFab.MultiplayerModels.ContainerFlavor CustomLinux
    static ::PlayFab::MultiplayerModels::ContainerFlavor _get_CustomLinux();
    // Set static field: static public PlayFab.MultiplayerModels.ContainerFlavor CustomLinux
    static void _set_CustomLinux(::PlayFab::MultiplayerModels::ContainerFlavor value);
    // static field const value: static public PlayFab.MultiplayerModels.ContainerFlavor ManagedWindowsServerCorePreview
    static constexpr const int ManagedWindowsServerCorePreview = 2;
    // Get static field: static public PlayFab.MultiplayerModels.ContainerFlavor ManagedWindowsServerCorePreview
    static ::PlayFab::MultiplayerModels::ContainerFlavor _get_ManagedWindowsServerCorePreview();
    // Set static field: static public PlayFab.MultiplayerModels.ContainerFlavor ManagedWindowsServerCorePreview
    static void _set_ManagedWindowsServerCorePreview(::PlayFab::MultiplayerModels::ContainerFlavor value);
    // static field const value: static public PlayFab.MultiplayerModels.ContainerFlavor Invalid
    static constexpr const int Invalid = 3;
    // Get static field: static public PlayFab.MultiplayerModels.ContainerFlavor Invalid
    static ::PlayFab::MultiplayerModels::ContainerFlavor _get_Invalid();
    // Set static field: static public PlayFab.MultiplayerModels.ContainerFlavor Invalid
    static void _set_Invalid(::PlayFab::MultiplayerModels::ContainerFlavor value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.MultiplayerModels.ContainerFlavor
  #pragma pack(pop)
  static check_size<sizeof(ContainerFlavor), 0 + sizeof(int)> __PlayFab_MultiplayerModels_ContainerFlavorSizeCheck;
  static_assert(sizeof(ContainerFlavor) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
