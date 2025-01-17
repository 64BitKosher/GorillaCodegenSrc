// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Unity.IO.Archive
namespace Unity::IO::Archive {
  // Forward declaring type: ArchiveHandle
  struct ArchiveHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::Archive::ArchiveHandle, "Unity.IO.Archive", "ArchiveHandle");
// Type namespace: Unity.IO.Archive
namespace Unity::IO::Archive {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.IO.Archive.ArchiveHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct ArchiveHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // System.UInt64 Handle
    // Size: 0x8
    // Offset: 0x0
    uint64_t Handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: ArchiveHandle
    constexpr ArchiveHandle(uint64_t Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return Handle;
    }
    // Get instance field reference: System.UInt64 Handle
    [[deprecated("Use field access instead!")]] uint64_t& dyn_Handle();
  }; // Unity.IO.Archive.ArchiveHandle
  #pragma pack(pop)
  static check_size<sizeof(ArchiveHandle), 0 + sizeof(uint64_t)> __Unity_IO_Archive_ArchiveHandleSizeCheck;
  static_assert(sizeof(ArchiveHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
