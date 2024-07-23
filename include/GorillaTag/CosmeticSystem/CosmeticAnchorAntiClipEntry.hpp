// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: GorillaTag.XformOffset
#include "GorillaTag/XformOffset.hpp"
// Completed includes
// Type namespace: GorillaTag.CosmeticSystem
namespace GorillaTag::CosmeticSystem {
  // Forward declaring type: CosmeticAnchorAntiClipEntry
  struct CosmeticAnchorAntiClipEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry, "GorillaTag.CosmeticSystem", "CosmeticAnchorAntiClipEntry");
// Type namespace: GorillaTag.CosmeticSystem
namespace GorillaTag::CosmeticSystem {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GorillaTag.CosmeticSystem.CosmeticAnchorAntiClipEntry
  // [TokenAttribute] Offset: FFFFFFFF
  struct CosmeticAnchorAntiClipEntry/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean enabled
    // Size: 0x1
    // Offset: 0x0
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: offset
    char __padding0[0x3] = {};
    // public GorillaTag.XformOffset offset
    // Size: 0x28
    // Offset: 0x4
    ::GorillaTag::XformOffset offset;
    // Field size check
    static_assert(sizeof(::GorillaTag::XformOffset) == 0x28);
    public:
    // Creating value type constructor for type: CosmeticAnchorAntiClipEntry
    constexpr CosmeticAnchorAntiClipEntry(bool enabled_ = {}, ::GorillaTag::XformOffset offset_ = {}) noexcept : enabled{enabled_}, offset{offset_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean enabled
    [[deprecated("Use field access instead!")]] bool& dyn_enabled();
    // Get instance field reference: public GorillaTag.XformOffset offset
    [[deprecated("Use field access instead!")]] ::GorillaTag::XformOffset& dyn_offset();
  }; // GorillaTag.CosmeticSystem.CosmeticAnchorAntiClipEntry
  #pragma pack(pop)
  static check_size<sizeof(CosmeticAnchorAntiClipEntry), 4 + sizeof(::GorillaTag::XformOffset)> __GorillaTag_CosmeticSystem_CosmeticAnchorAntiClipEntrySizeCheck;
  static_assert(sizeof(CosmeticAnchorAntiClipEntry) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"