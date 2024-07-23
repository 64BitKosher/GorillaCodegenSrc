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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::VirtualKeyboardTextureIds, "", "OVRPlugin/VirtualKeyboardTextureIds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/VirtualKeyboardTextureIds
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::VirtualKeyboardTextureIds/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64[] TextureIds
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint64_t> TextureIds;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    public:
    // Creating value type constructor for type: VirtualKeyboardTextureIds
    constexpr VirtualKeyboardTextureIds(::ArrayW<uint64_t> TextureIds_ = ::ArrayW<uint64_t>(static_cast<void*>(nullptr))) noexcept : TextureIds{TextureIds_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint64_t>
    constexpr operator ::ArrayW<uint64_t>() const noexcept {
      return TextureIds;
    }
    // Get instance field reference: public System.UInt64[] TextureIds
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_TextureIds();
  }; // OVRPlugin/VirtualKeyboardTextureIds
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::VirtualKeyboardTextureIds), 0 + sizeof(::ArrayW<uint64_t>)> __GlobalNamespace_OVRPlugin_VirtualKeyboardTextureIdsSizeCheck;
  static_assert(sizeof(OVRPlugin::VirtualKeyboardTextureIds) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
