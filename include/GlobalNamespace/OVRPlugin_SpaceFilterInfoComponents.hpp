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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::SpaceFilterInfoComponents, "", "OVRPlugin/SpaceFilterInfoComponents");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/SpaceFilterInfoComponents
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::SpaceFilterInfoComponents/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/SpaceComponentType[] Components
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::GlobalNamespace::OVRPlugin::SpaceComponentType> Components;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::SpaceComponentType>) == 0x8);
    // public System.Int32 NumComponents
    // Size: 0x4
    // Offset: 0x8
    int NumComponents;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpaceFilterInfoComponents
    constexpr SpaceFilterInfoComponents(::ArrayW<::GlobalNamespace::OVRPlugin::SpaceComponentType> Components_ = ::ArrayW<::GlobalNamespace::OVRPlugin::SpaceComponentType>(static_cast<void*>(nullptr)), int NumComponents_ = {}) noexcept : Components{Components_}, NumComponents{NumComponents_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/SpaceComponentType[] Components
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRPlugin::SpaceComponentType>& dyn_Components();
    // Get instance field reference: public System.Int32 NumComponents
    [[deprecated("Use field access instead!")]] int& dyn_NumComponents();
  }; // OVRPlugin/SpaceFilterInfoComponents
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SpaceFilterInfoComponents), 8 + sizeof(int)> __GlobalNamespace_OVRPlugin_SpaceFilterInfoComponentsSizeCheck;
  static_assert(sizeof(OVRPlugin::SpaceFilterInfoComponents) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
