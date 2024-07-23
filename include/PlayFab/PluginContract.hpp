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
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PluginContract
  struct PluginContract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PluginContract, "PlayFab", "PluginContract");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.PluginContract
  // [TokenAttribute] Offset: FFFFFFFF
  struct PluginContract/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PluginContract
    constexpr PluginContract(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.PluginContract PlayFab_Serializer
    static constexpr const int PlayFab_Serializer = 0;
    // Get static field: static public PlayFab.PluginContract PlayFab_Serializer
    static ::PlayFab::PluginContract _get_PlayFab_Serializer();
    // Set static field: static public PlayFab.PluginContract PlayFab_Serializer
    static void _set_PlayFab_Serializer(::PlayFab::PluginContract value);
    // static field const value: static public PlayFab.PluginContract PlayFab_Transport
    static constexpr const int PlayFab_Transport = 1;
    // Get static field: static public PlayFab.PluginContract PlayFab_Transport
    static ::PlayFab::PluginContract _get_PlayFab_Transport();
    // Set static field: static public PlayFab.PluginContract PlayFab_Transport
    static void _set_PlayFab_Transport(::PlayFab::PluginContract value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.PluginContract
  #pragma pack(pop)
  static check_size<sizeof(PluginContract), 0 + sizeof(int)> __PlayFab_PluginContractSizeCheck;
  static_assert(sizeof(PluginContract) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
