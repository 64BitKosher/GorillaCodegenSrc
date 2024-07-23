// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRDeserialize
#include "GlobalNamespace/OVRDeserialize.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: OVRPlugin/SpaceComponentType
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize::SpaceSetComponentStatusCompleteData, "", "OVRDeserialize/SpaceSetComponentStatusCompleteData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRDeserialize/SpaceSetComponentStatusCompleteData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRDeserialize::SpaceSetComponentStatusCompleteData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 RequestId
    // Size: 0x8
    // Offset: 0x0
    uint64_t RequestId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Int32 Result
    // Size: 0x4
    // Offset: 0x8
    int Result;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Result and: Space
    char __padding1[0x4] = {};
    // public System.UInt64 Space
    // Size: 0x8
    // Offset: 0x10
    uint64_t Space;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Guid Uuid
    // Size: 0x10
    // Offset: 0x18
    ::System::Guid Uuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // public OVRPlugin/SpaceComponentType ComponentType
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::OVRPlugin::SpaceComponentType ComponentType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::SpaceComponentType) == 0x4);
    // public System.Int32 Enabled
    // Size: 0x4
    // Offset: 0x2C
    int Enabled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpaceSetComponentStatusCompleteData
    constexpr SpaceSetComponentStatusCompleteData(uint64_t RequestId_ = {}, int Result_ = {}, uint64_t Space_ = {}, ::System::Guid Uuid_ = {}, ::GlobalNamespace::OVRPlugin::SpaceComponentType ComponentType_ = {}, int Enabled_ = {}) noexcept : RequestId{RequestId_}, Result{Result_}, Space{Space_}, Uuid{Uuid_}, ComponentType{ComponentType_}, Enabled{Enabled_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 RequestId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_RequestId();
    // Get instance field reference: public System.Int32 Result
    [[deprecated("Use field access instead!")]] int& dyn_Result();
    // Get instance field reference: public System.UInt64 Space
    [[deprecated("Use field access instead!")]] uint64_t& dyn_Space();
    // Get instance field reference: public System.Guid Uuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_Uuid();
    // Get instance field reference: public OVRPlugin/SpaceComponentType ComponentType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::SpaceComponentType& dyn_ComponentType();
    // Get instance field reference: public System.Int32 Enabled
    [[deprecated("Use field access instead!")]] int& dyn_Enabled();
  }; // OVRDeserialize/SpaceSetComponentStatusCompleteData
  #pragma pack(pop)
  static check_size<sizeof(OVRDeserialize::SpaceSetComponentStatusCompleteData), 44 + sizeof(int)> __GlobalNamespace_OVRDeserialize_SpaceSetComponentStatusCompleteDataSizeCheck;
  static_assert(sizeof(OVRDeserialize::SpaceSetComponentStatusCompleteData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
