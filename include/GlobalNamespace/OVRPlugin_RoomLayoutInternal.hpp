// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::RoomLayoutInternal, "", "OVRPlugin/RoomLayoutInternal");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/RoomLayoutInternal
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::RoomLayoutInternal/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Guid floorUuid
    // Size: 0x10
    // Offset: 0x0
    ::System::Guid floorUuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // public System.Guid ceilingUuid
    // Size: 0x10
    // Offset: 0x10
    ::System::Guid ceilingUuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // public System.Int32 wallUuidCapacityInput
    // Size: 0x4
    // Offset: 0x20
    int wallUuidCapacityInput;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 wallUuidCountOutput
    // Size: 0x4
    // Offset: 0x24
    int wallUuidCountOutput;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.IntPtr wallUuids
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr wallUuids;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: RoomLayoutInternal
    constexpr RoomLayoutInternal(::System::Guid floorUuid_ = {}, ::System::Guid ceilingUuid_ = {}, int wallUuidCapacityInput_ = {}, int wallUuidCountOutput_ = {}, ::System::IntPtr wallUuids_ = {}) noexcept : floorUuid{floorUuid_}, ceilingUuid{ceilingUuid_}, wallUuidCapacityInput{wallUuidCapacityInput_}, wallUuidCountOutput{wallUuidCountOutput_}, wallUuids{wallUuids_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Guid floorUuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_floorUuid();
    // Get instance field reference: public System.Guid ceilingUuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_ceilingUuid();
    // Get instance field reference: public System.Int32 wallUuidCapacityInput
    [[deprecated("Use field access instead!")]] int& dyn_wallUuidCapacityInput();
    // Get instance field reference: public System.Int32 wallUuidCountOutput
    [[deprecated("Use field access instead!")]] int& dyn_wallUuidCountOutput();
    // Get instance field reference: public System.IntPtr wallUuids
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_wallUuids();
  }; // OVRPlugin/RoomLayoutInternal
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::RoomLayoutInternal), 40 + sizeof(::System::IntPtr)> __GlobalNamespace_OVRPlugin_RoomLayoutInternalSizeCheck;
  static_assert(sizeof(OVRPlugin::RoomLayoutInternal) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"