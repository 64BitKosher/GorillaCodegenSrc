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
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::SpaceContainerInternal, "", "OVRPlugin/SpaceContainerInternal");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/SpaceContainerInternal
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::SpaceContainerInternal/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 uuidCapacityInput
    // Size: 0x4
    // Offset: 0x0
    int uuidCapacityInput;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 uuidCountOutput
    // Size: 0x4
    // Offset: 0x4
    int uuidCountOutput;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.IntPtr uuids
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr uuids;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: SpaceContainerInternal
    constexpr SpaceContainerInternal(int uuidCapacityInput_ = {}, int uuidCountOutput_ = {}, ::System::IntPtr uuids_ = {}) noexcept : uuidCapacityInput{uuidCapacityInput_}, uuidCountOutput{uuidCountOutput_}, uuids{uuids_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 uuidCapacityInput
    [[deprecated("Use field access instead!")]] int& dyn_uuidCapacityInput();
    // Get instance field reference: public System.Int32 uuidCountOutput
    [[deprecated("Use field access instead!")]] int& dyn_uuidCountOutput();
    // Get instance field reference: public System.IntPtr uuids
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_uuids();
  }; // OVRPlugin/SpaceContainerInternal
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SpaceContainerInternal), 8 + sizeof(::System::IntPtr)> __GlobalNamespace_OVRPlugin_SpaceContainerInternalSizeCheck;
  static_assert(sizeof(OVRPlugin::SpaceContainerInternal) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
