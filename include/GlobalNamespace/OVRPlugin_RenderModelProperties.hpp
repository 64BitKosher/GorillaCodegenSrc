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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::RenderModelProperties, "", "OVRPlugin/RenderModelProperties");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/RenderModelProperties
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::RenderModelProperties/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String ModelName
    // Size: 0x8
    // Offset: 0x0
    ::StringW ModelName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.UInt64 ModelKey
    // Size: 0x8
    // Offset: 0x8
    uint64_t ModelKey;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt32 VendorId
    // Size: 0x4
    // Offset: 0x10
    uint VendorId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 ModelVersion
    // Size: 0x4
    // Offset: 0x14
    uint ModelVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: RenderModelProperties
    constexpr RenderModelProperties(::StringW ModelName_ = {}, uint64_t ModelKey_ = {}, uint VendorId_ = {}, uint ModelVersion_ = {}) noexcept : ModelName{ModelName_}, ModelKey{ModelKey_}, VendorId{VendorId_}, ModelVersion{ModelVersion_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String ModelName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ModelName();
    // Get instance field reference: public System.UInt64 ModelKey
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ModelKey();
    // Get instance field reference: public System.UInt32 VendorId
    [[deprecated("Use field access instead!")]] uint& dyn_VendorId();
    // Get instance field reference: public System.UInt32 ModelVersion
    [[deprecated("Use field access instead!")]] uint& dyn_ModelVersion();
  }; // OVRPlugin/RenderModelProperties
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::RenderModelProperties), 20 + sizeof(uint)> __GlobalNamespace_OVRPlugin_RenderModelPropertiesSizeCheck;
  static_assert(sizeof(OVRPlugin::RenderModelProperties) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
