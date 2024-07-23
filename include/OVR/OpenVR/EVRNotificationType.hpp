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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRNotificationType
  struct EVRNotificationType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationType, "OVR.OpenVR", "EVRNotificationType");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRNotificationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRNotificationType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRNotificationType
    constexpr EVRNotificationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRNotificationType Transient
    static constexpr const int Transient = 0;
    // Get static field: static public OVR.OpenVR.EVRNotificationType Transient
    static ::OVR::OpenVR::EVRNotificationType _get_Transient();
    // Set static field: static public OVR.OpenVR.EVRNotificationType Transient
    static void _set_Transient(::OVR::OpenVR::EVRNotificationType value);
    // static field const value: static public OVR.OpenVR.EVRNotificationType Persistent
    static constexpr const int Persistent = 1;
    // Get static field: static public OVR.OpenVR.EVRNotificationType Persistent
    static ::OVR::OpenVR::EVRNotificationType _get_Persistent();
    // Set static field: static public OVR.OpenVR.EVRNotificationType Persistent
    static void _set_Persistent(::OVR::OpenVR::EVRNotificationType value);
    // static field const value: static public OVR.OpenVR.EVRNotificationType Transient_SystemWithUserValue
    static constexpr const int Transient_SystemWithUserValue = 2;
    // Get static field: static public OVR.OpenVR.EVRNotificationType Transient_SystemWithUserValue
    static ::OVR::OpenVR::EVRNotificationType _get_Transient_SystemWithUserValue();
    // Set static field: static public OVR.OpenVR.EVRNotificationType Transient_SystemWithUserValue
    static void _set_Transient_SystemWithUserValue(::OVR::OpenVR::EVRNotificationType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.OpenVR.EVRNotificationType
  #pragma pack(pop)
  static check_size<sizeof(EVRNotificationType), 0 + sizeof(int)> __OVR_OpenVR_EVRNotificationTypeSizeCheck;
  static_assert(sizeof(EVRNotificationType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
